#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-32.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1695)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                         categoryMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1707)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category setters")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1708)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1714)).operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1714)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1714)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1716)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1716)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1716))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1715)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), var_selfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1719)) ;
  {
  routine_checkAssignmentTypes (var_selfTypeProxy, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1726)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1726)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_concatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy, var_selfObjectCppName, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1733)), var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1728))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1728)) ;
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
//                Overriding category method '@incDecInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                                                         categoryMethod_incDecInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_incDecInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@incDecInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                            const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionAST * object = (const cPtr_incDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_string var_targetVariableCppName ;
  {
  GALGAS_string joker_74522 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_targetVariableCppName, joker_74522, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1753)) ;
  }
  cEnumerator_lstringlist enumerator_74557 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_74557.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1755)) ;
    var_attributeMap.method_searchKey (enumerator_74557.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1756)) ;
    enumerator_74557.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1762)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1762)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1762)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1764)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1764)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1764))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1763)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetVariableCppName, var_targetType, object->mAttribute_mStructAttributeList, object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1767))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1767)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                                                  categoryMethod_incDecInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_incDecInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@incDecNoOVFInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST.mSlotID,
                                                         categoryMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@incDecNoOVFInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecNoOVFInstructionAST * object = (const cPtr_incDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecNoOVFInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_string var_targetVariableCppName ;
  {
  GALGAS_string joker_75952 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_targetVariableCppName, joker_75952, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1792)) ;
  }
  cEnumerator_lstringlist enumerator_75987 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_75987.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1794)) ;
    var_attributeMap.method_searchKey (enumerator_75987.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1795)) ;
    enumerator_75987.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1801)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1801)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1801)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1803)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1803)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1803))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1802)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetVariableCppName, var_targetType, object->mAttribute_mStructAttributeList, object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1806))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1806)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST.mSlotID,
                                                  categoryMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@selfIncDecNoOVFInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST.mSlotID,
                                                         categoryMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@selfIncDecNoOVFInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecNoOVFInstructionAST * object = (const cPtr_selfIncDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecNoOVFInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1831)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category setters")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1832)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1838)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1838)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1838)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1840)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1840)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1840))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1839)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfObjectCppName, var_selfTypeProxy, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1847)), object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1843))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1843)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST.mSlotID,
                                                  categoryMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@selfIncDecInstructionAST enterInstructionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfIncDecInstructionAST.mSlotID,
                                                         categoryMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@selfIncDecInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecInstructionAST * object = (const cPtr_selfIncDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1868)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category setters")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1869)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1875)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1875)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1875)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1877)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1877)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1877))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1876)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfObjectCppName, var_selfTypeProxy, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1884)), object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1880))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1880)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfIncDecInstructionAST.mSlotID,
                                                  categoryMethod_selfIncDecInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfIncDecInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@messageInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_messageInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1894)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_messageInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                         categoryMethod_messageInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_messageInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_messageInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1906)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1905)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1912)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the expression has the '@").add_operation (var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1914)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1914)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1914)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1914))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1913)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1917))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1917)) ;
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
//                  Overriding category method '@logInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_logInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionAST * object = (const cPtr_logInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionAST) ;
  cEnumerator_logListAST enumerator_81145 (object->mAttribute_mLogList, kEnumeration_up) ;
  while (enumerator_81145.hasCurrentObject ()) {
    callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_81145.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1928)) ;
    enumerator_81145.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_logInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_logInstructionAST.mSlotID,
                                                         categoryMethod_logInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_logInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  cEnumerator_logListAST enumerator_81575 (object->mAttribute_mLogList, kEnumeration_up) ;
  while (enumerator_81575.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression ;
    callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_81575.current_mLogExpression (HERE).ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1942)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1941)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_81575.current_mLogMessage (HERE), var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1948))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1948)) ;
    enumerator_81575.gotoNextObject () ;
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
//                 Overriding category method '@dropInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_dropInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_dropInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_dropInstructionAST.mSlotID,
                                                         categoryMethod_dropInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dropInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_dropInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  GALGAS_stringlist var_cppNameDropList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1968)) ;
  GALGAS_unifiedTypeMapProxyList var_dropTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1969)) ;
  cEnumerator_lstringlist enumerator_82727 (object->mAttribute_mDropList, kEnumeration_up) ;
  while (enumerator_82727.hasCurrentObject ()) {
    GALGAS_string var_variableCppName ;
    GALGAS_unifiedTypeMap_2D_proxy var_t ;
    {
    GALGAS_string joker_82855 ; // Joker input parameter
    ioArgument_ioVariableMap.modifier_searchForDropAccess (enumerator_82727.current_mValue (HERE), var_t, var_variableCppName, joker_82855, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1972)) ;
    }
    var_cppNameDropList.addAssign_operation (var_variableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1973)) ;
    var_dropTypeList.addAssign_operation (var_t  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1974)) ;
    enumerator_82727.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_dropInstructionForGeneration::constructor_new (var_cppNameDropList, GALGAS_string ("drop instruction"), var_dropTypeList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1977))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1977)) ;
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
//                  Overriding category method '@ifInstructionAST enterInstructionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_m_5F_if_5F_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2069)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_then_5F_instructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2070)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_else_5F_instructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2071)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                         categoryMethod_ifInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_ifInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_m_5F_if_5F_expression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2083)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2082)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2088)) ;
  }
  GALGAS_semanticExpressionForGeneration var_if_5F_expression ;
  {
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mAttribute_mEndOf_5F_if_5F_instruction, var_analyzed_5F_if_5F_expression, var_if_5F_expression, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2091)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2101)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2102)), object->mAttribute_m_5F_then_5F_instructionList, object->mAttribute_mEndOf_5F_then_5F_branch, ioArgument_ioVariableMap, var_then_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2099)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2112)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2113)), object->mAttribute_m_5F_else_5F_instructionList, object->mAttribute_mEndOf_5F_if_5F_instruction, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2110)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2119)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (object->mAttribute_mEndOf_5F_then_5F_branch, var_if_5F_expression, var_then_5F_instructionList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2121))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2121)) ;
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
//            Overriding category method '@enumeratedCollectionImplicitVarInExpAST enterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2139)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST.mSlotID,
                                              categoryMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (defineCategoryMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@enumeratedCollectionCstListInExpAST enterInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2145)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST.mSlotID,
                                              categoryMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (defineCategoryMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@enumeratedCollectionVarInExpAST enterInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2151)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST.mSlotID,
                                              categoryMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (defineCategoryMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext, NULL) ;

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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2172)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2171)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mEndOfEnumerationExpression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList = outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2179)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2179)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2180)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2181)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2181)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2181)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2181))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2181)) ;
  }
  cEnumerator_enumerationDescriptorList enumerator_91426 (var_enumerationDescriptorList, kEnumeration_up) ;
  while (enumerator_91426.hasCurrentObject ()) {
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_91426.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_91426.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2187)), object->mAttribute_mEndOfEnumerationExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2187)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2188)).add_operation (enumerator_91426.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2188)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2188)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2188))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2185)) ;
    enumerator_91426.gotoNextObject () ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2202)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2201)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mEndOfEnumerationExpression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2208)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2208)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2208)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList = outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2209)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2209)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2210)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2211)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2211)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2211)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2211))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2211)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2214)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (object->mAttribute_mEndsWithEllipsis.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2214)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2214)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_enumerationDescriptorList var_currentTypedAttributeList = outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2215)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2215)) ;
      cEnumerator_enumerationDescriptorList enumerator_92900 (var_currentTypedAttributeList, kEnumeration_up) ;
      while (enumerator_92900.hasCurrentObject ()) {
        {
        ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (GALGAS_lstring::constructor_new (enumerator_92900.current_mEnumerationName (HERE), object->mAttribute_mEndOfEnumerationExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2218)), enumerator_92900.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2220)).add_operation (enumerator_92900.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2220)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2220)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2220)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2221)).add_operation (enumerator_92900.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2221)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2221)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2221)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2217)) ;
        }
        enumerator_92900.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = object->mAttribute_mEndsWithEllipsis.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2224)).operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2224)).objectCompare (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2224)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2224)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2228)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_string::makeEmptyString () ;
        }
        inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2226)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2226)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2226)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2226)).add_operation (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2227)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2227)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2226)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2227)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2227)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2228)).add_operation (object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2230)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2230)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2229))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2225)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = object->mAttribute_mEndsWithEllipsis.operator_and (GALGAS_bool (kIsStrictSup, object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2231)).objectCompare (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2231)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2231)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2235)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = GALGAS_string::makeEmptyString () ;
          }
          inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2233)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2233)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2233)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2233)).add_operation (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2234)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2234)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2233)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2234)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2234)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2235)).add_operation (object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2237)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2237)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2236))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2232)) ;
        }else if (kBoolFalse == test_5) {
          cEnumerator_foreachInstructionEnumeratedObjectElementListAST enumerator_94220 (object->mAttribute_mElementList, kEnumeration_up) ;
          cEnumerator_enumerationDescriptorList enumerator_94253 (var_enumerationDescriptorList, kEnumeration_up) ;
          while (enumerator_94220.hasCurrentObject () && enumerator_94253.hasCurrentObject ()) {
            const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_94220.current_mOptionalConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2240)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_94220.current_mOptionalTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_9) {
                GALGAS_unifiedTypeMap_2D_proxy var_foundType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_94220.current_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2242)) ;
                const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_foundType.objectCompare (enumerator_94253.current_mEnumeratedType (HERE))).boolEnum () ;
                if (kBoolTrue == test_10) {
                  GALGAS_location location_11 (enumerator_94220.current_mOptionalTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                  inCompiler->emitSemanticError (location_11, GALGAS_string ("incorrect '@").add_operation (var_foundType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247)).add_operation (enumerator_94253.current_mEnumeratedType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247)) ;
                }
              }
              ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_94253.current_mEnumeratedType (HERE), enumerator_94220.current_mOptionalConstantName (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2250)).add_operation (enumerator_94253.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2250)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2250)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2250))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2250)) ;
            }
            enumerator_94220.gotoNextObject () ;
            enumerator_94253.gotoNextObject () ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2267)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2266)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mEndOfEnumerationExpression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2273)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2273)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2273)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedElementType = outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2274)).reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2274)) ;
  const enumGalgasBool test_0 = var_enumeratedElementType.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2275)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2276)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2276)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2276)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2276))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2276)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType, object->mAttribute_mEnumerationVariable, outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2278))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2278)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mEnumerationOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_unifiedTypeMap_2D_proxy var_explicitType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumerationOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2282)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_enumeratedElementType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2286)).objectCompare (var_explicitType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2286)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mEnumerationOptionalTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '@").add_operation (var_enumeratedElementType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2287)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2287)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2287))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2287)) ;
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
//                  Overriding category method '@forInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_forInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2298)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mBeforeInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2299)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mBetweenInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2300)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mDoInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2301)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mAfterInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2302)) ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_97141 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_97141.hasCurrentObject ()) {
    callCategoryMethod_enterInSemanticContext ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_97141.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2304)) ;
    enumerator_97141.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_forInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                         categoryMethod_forInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_forInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2315)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2316)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2318)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2322)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2323)), object->mAttribute_mBeforeInstructionList, object->mAttribute_mEndOf_5F_before_5F_branch, ioArgument_ioVariableMap, var_before_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2320)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_before_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2329)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2331)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2335)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2336)), object->mAttribute_mBetweenInstructionList, object->mAttribute_mEndOf_5F_between_5F_branch, ioArgument_ioVariableMap, var_between_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2333)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_between_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2342)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2344)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2347)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2348)), object->mAttribute_mAfterInstructionList, object->mAttribute_mEndOf_5F_after_5F_branch, ioArgument_ioVariableMap, var_after_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2345)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_after_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2354)) ;
  }
  GALGAS_localInitializedVariableList var_localConstantListForDoBranch = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2356)) ;
  GALGAS_foreachInstructionEnumeratedObjectListForGeneration var_enumerationList = GALGAS_foreachInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2357)) ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_99160 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_99160.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression ;
    callCategoryMethod_analyzeEnumeration ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_99160.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_localConstantListForDoBranch, var_enumeratorCppName, var_enumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2359)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = enumerator_99160.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = GALGAS_string ("up") ;
    }else if (kBoolFalse == test_1) {
      temp_0 = GALGAS_string ("down") ;
    }
    var_enumerationList.addAssign_operation (temp_0, var_enumerationExpression, var_enumeratorCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2367)) ;
    enumerator_99160.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2373)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2374)) ;
  }
  cEnumerator_localInitializedVariableList enumerator_99720 (var_localConstantListForDoBranch, kEnumeration_up) ;
  while (enumerator_99720.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (enumerator_99720.current (HERE).mAttribute_mName, enumerator_99720.current (HERE).mAttribute_mType, enumerator_99720.current (HERE).mAttribute_mCppName, enumerator_99720.current (HERE).mAttribute_mCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2377)) ;
    }
    enumerator_99720.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2386)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2385)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression ;
  {
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mAttribute_mEndOf_5F_while_5F_expression, var_uncheckedWhileExpression, var_whileExpression, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2391)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeBranch (object->mAttribute_mEndOf_5F_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2398)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2399)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2401)) ;
  }
  GALGAS_string var_indexCppName = GALGAS_string::makeEmptyString () ;
  GALGAS_localConstantList var_indexDeclaration = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2403)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2404)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_indexCppName = GALGAS_string ("index_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2405)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2405)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2405)) ;
    var_indexDeclaration.addAssign_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mIndexVariableName, GALGAS_bool (false), var_indexCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2406)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_indexDeclaration, var_localConstantListForDoBranch, object->mAttribute_mDoInstructionList, object->mAttribute_mEndOf_5F_do_5F_branch, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2414)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2424)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeBranch (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2426)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2427)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_foreachInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_enumerationList, var_indexCppName, var_whileExpression, var_before_5F_instructionList, var_between_5F_instructionList, var_do_5F_instructionList, var_after_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2429))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2429)) ;
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
//                Overriding category method '@foreachInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreachInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreachInstructionAST * object = (const cPtr_foreachInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_foreachInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2445)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mBeforeInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2446)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mBetweenInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2447)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mDoInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2448)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mAfterInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2449)) ;
  cEnumerator_foreachInstructionEnumeratedObjectListAST enumerator_102262 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_102262.hasCurrentObject ()) {
    callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_102262.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2451)) ;
    enumerator_102262.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreachInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_foreachInstructionAST.mSlotID,
                                                         categoryMethod_foreachInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreachInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_foreachInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2462)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2463)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2465)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2469)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2470)), object->mAttribute_mBeforeInstructionList, object->mAttribute_mEndOf_5F_before_5F_branch, ioArgument_ioVariableMap, var_before_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2467)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_before_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2476)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2478)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2482)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2483)), object->mAttribute_mBetweenInstructionList, object->mAttribute_mEndOf_5F_between_5F_branch, ioArgument_ioVariableMap, var_between_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2480)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_between_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2489)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2491)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2495)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2496)), object->mAttribute_mAfterInstructionList, object->mAttribute_mEndOf_5F_after_5F_branch, ioArgument_ioVariableMap, var_after_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2493)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_after_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2502)) ;
  }
  GALGAS_foreachInstructionEnumeratedObjectListForGeneration var_enumerationList = GALGAS_foreachInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2504)) ;
  cEnumerator_foreachInstructionEnumeratedObjectListAST enumerator_104261 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_104261.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_enumerationExpression ;
    callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_104261.current_mEnumeratedExpression (HERE).ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2509)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_enumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2508)) ;
    GALGAS_string var_enumerationOrder = enumerator_104261.current_mEnumerationOrder (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2515)) ;
    GALGAS_string var_enumeratorCppName = GALGAS_string ("enumerator_").add_operation (enumerator_104261.current_mEndOfEnumerationExpression (HERE).reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2516)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2516)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2516)) ;
    GALGAS_enumerationDescriptorList var_enumerationDescriptorList = var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2517)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2517)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2518)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_104261.current_mEndOfEnumerationExpression (HERE), GALGAS_string ("an '@").add_operation (var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2519)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2519)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2519)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2519))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2519)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_enumerationOrder.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_enumerationOrder = var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2523)).reader_mEnumeratorVariants (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2523)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2523)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_bool var_found = GALGAS_bool (false) ;
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringlist enumerator_105305 (var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2527)).reader_mEnumeratorVariants (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2527)), kEnumeration_up) ;
        bool bool_2 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2527)).isValidAndTrue () ;
        if (enumerator_105305.hasCurrentObject () && bool_2) {
          while (enumerator_105305.hasCurrentObject () && bool_2) {
            var_found = GALGAS_bool (kIsEqual, var_enumerationOrder.objectCompare (enumerator_105305.current_mValue (HERE))) ;
            var_s.dotAssign_operation (GALGAS_string ("\n"
              "  \\").add_operation (enumerator_105305.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2529))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2529)) ;
            enumerator_105305.gotoNextObject () ;
            if (enumerator_105305.hasCurrentObject ()) {
              bool_2 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2527)).isValidAndTrue () ;
            }
          }
        }
        const enumGalgasBool test_3 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2531)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (enumerator_104261.current_mEnumerationOrder (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown enumeration specifier; available ones are :").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2532))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2532)) ;
        }
      }
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_104261.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2536)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (enumerator_104261.current_mEndsWithEllipsis (HERE).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2536)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2536)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList = var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2537)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2537)) ;
        cEnumerator_enumerationDescriptorList enumerator_105784 (var_currentTypedAttributeList, kEnumeration_up) ;
        while (enumerator_105784.hasCurrentObject ()) {
          {
          ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (GALGAS_lstring::constructor_new (enumerator_104261.current_mPrefix (HERE).mAttribute_string.add_operation (enumerator_105784.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2540)), enumerator_104261.current_mEndOfEnumerationExpression (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2540)), enumerator_105784.current_mEnumeratedType (HERE), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2542)).add_operation (enumerator_105784.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2542)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2542)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2542)), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2543)).add_operation (enumerator_105784.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2543)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2543)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2543)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2539)) ;
          }
          enumerator_105784.gotoNextObject () ;
        }
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = enumerator_104261.current_mEndsWithEllipsis (HERE).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2546)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_104261.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2546)).objectCompare (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2546)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2546)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2550)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          inCompiler->emitSemanticError (enumerator_104261.current_mEndOfElementList (HERE), GALGAS_string ("the '@").add_operation (var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2548)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2548)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2548)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2548)).add_operation (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2549)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2549)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2548)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2549)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2549)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2550)).add_operation (enumerator_104261.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2552)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2552)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2551))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2547)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_9 = enumerator_104261.current_mEndsWithEllipsis (HERE).operator_and (GALGAS_bool (kIsStrictSup, enumerator_104261.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2553)).objectCompare (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2553)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2553)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_string temp_10 ;
            const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2557)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_11) {
              temp_10 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_11) {
              temp_10 = GALGAS_string::makeEmptyString () ;
            }
            inCompiler->emitSemanticError (enumerator_104261.current_mEndOfElementList (HERE), GALGAS_string ("the '@").add_operation (var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2555)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2555)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2555)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2555)).add_operation (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2556)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2556)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2555)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2556)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2556)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2557)).add_operation (enumerator_104261.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2559)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2559)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2558))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2554)) ;
          }else if (kBoolFalse == test_9) {
            cEnumerator_foreachInstructionEnumeratedObjectElementListAST enumerator_107135 (enumerator_104261.current_mElementList (HERE), kEnumeration_up) ;
            cEnumerator_enumerationDescriptorList enumerator_107168 (var_enumerationDescriptorList, kEnumeration_up) ;
            while (enumerator_107135.hasCurrentObject () && enumerator_107168.hasCurrentObject ()) {
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_107135.current_mOptionalConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2562)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_107135.current_mOptionalTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_13) {
                  GALGAS_unifiedTypeMap_2D_proxy var_foundType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_107135.current_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2564)) ;
                  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, var_foundType.objectCompare (enumerator_107168.current_mEnumeratedType (HERE))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    GALGAS_location location_15 (enumerator_107135.current_mOptionalTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                    inCompiler->emitSemanticError (location_15, GALGAS_string ("incorrect '@").add_operation (var_foundType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569)).add_operation (enumerator_107168.current_mEnumeratedType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569)) ;
                  }
                }
                {
                ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (enumerator_107135.current_mOptionalConstantName (HERE), enumerator_107168.current_mEnumeratedType (HERE), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2575)).add_operation (enumerator_107168.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2575)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2575)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2575)), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2576)).add_operation (enumerator_107168.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2576)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2576)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2576)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2572)) ;
                }
              }
              enumerator_107135.gotoNextObject () ;
              enumerator_107168.gotoNextObject () ;
            }
          }
        }
      }
    }
    var_enumerationList.addAssign_operation (var_enumerationOrder, var_enumerationExpression, var_enumeratorCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2583)) ;
    enumerator_104261.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2588)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2587)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression ;
  {
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mAttribute_mEndOf_5F_while_5F_expression, var_uncheckedWhileExpression, var_whileExpression, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2594)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2601)) ;
  }
  GALGAS_string var_indexCppName = GALGAS_string::makeEmptyString () ;
  GALGAS_localConstantList var_indexDeclaration = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2603)) ;
  const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2604)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_16) {
    var_indexCppName = GALGAS_string ("index_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2605)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2605)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2605)) ;
    var_indexDeclaration.addAssign_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mIndexVariableName, GALGAS_bool (false), var_indexCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2606)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_indexDeclaration, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2617)), object->mAttribute_mDoInstructionList, object->mAttribute_mEndOf_5F_do_5F_branch, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2614)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2624)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeBranch (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2626)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2627)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_foreachInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_enumerationList, var_indexCppName, var_whileExpression, var_before_5F_instructionList, var_between_5F_instructionList, var_do_5F_instructionList, var_after_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2629))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2629)) ;
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
//                 Overriding category method '@loopInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loopInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionAST * object = (const cPtr_loopInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2645)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLoopExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2646)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mFirstInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2647)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mSecondInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2648)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loopInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_loopInstructionAST.mSlotID,
                                                         categoryMethod_loopInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loopInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_loopInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2660)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variantExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2659)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variantExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2666)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfVariantExpression, GALGAS_string ("the variant expression type should be '@").add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668)).add_operation (var_variantExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2667)) ;
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLoopExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2673)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2672)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_loopExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2679)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfLoopExpression, GALGAS_string ("the loop expression type should be '@").add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681)).add_operation (var_loopExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2680)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2684)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2689)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2690)), object->mAttribute_mFirstInstructions, object->mAttribute_mEndOfFirstInstructions, ioArgument_ioVariableMap, var_first_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2687)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2700)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2701)), object->mAttribute_mSecondInstructions, object->mAttribute_mEndOfSecondInstructions, ioArgument_ioVariableMap, var_second_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2698)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfLoopInstruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2708)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_variantExpression, var_first_5F_instructionList, var_loopExpression, var_second_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2710))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2710)) ;
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
//            Overriding category method '@structuredCastInstructionAST enterInstructionInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionAST * object = (const cPtr_structuredCastInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mCastExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2723)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mElseInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2724)) ;
  cEnumerator_castInstructionBranchListAST enumerator_113303 (object->mAttribute_mCastInstructionBranchList, kEnumeration_up) ;
  while (enumerator_113303.hasCurrentObject ()) {
    categoryMethod_enterInstructionListInSemanticContext (enumerator_113303.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2726)) ;
    enumerator_113303.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_structuredCastInstructionAST.mSlotID,
                                                         categoryMethod_structuredCastInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_structuredCastInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mCastExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2739)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_castExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2738)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2745)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2747)) ;
  cEnumerator_castInstructionBranchListAST enumerator_114170 (object->mAttribute_mCastInstructionBranchList, kEnumeration_up) ;
  while (enumerator_114170.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_114170.current_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2750)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_t = var_type ;
    GALGAS_bool var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_castExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2753)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754)).isValid ()) {
      uint32_t variant_114454 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754)).uintValue () ;
      bool loop_114454 = true ;
      while (loop_114454) {
        loop_114454 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).isValid () ;
        if (loop_114454) {
          loop_114454 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).boolValue () ;
        }
        if (loop_114454 && (0 == variant_114454)) {
          loop_114454 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754)) ;
        }
        if (loop_114454) {
          variant_114454 -- ;
          var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2756)) ;
          var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_castExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2757)))) ;
        }
      }
    }
    const enumGalgasBool test_0 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2759)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_114170.current_mTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (enumerator_114170.current_mTypeName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)).add_operation (var_castExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2760)) ;
    }
    GALGAS_string var_localConstantName ;
    GALGAS_localConstantList var_localConstantList = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2765)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_114170.current_mConstantVarName (HERE).mAttribute_string.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2766)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_localConstantName = GALGAS_string ("cast_").add_operation (enumerator_114170.current_mConstantVarName (HERE).mAttribute_location.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2767)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2767)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2767)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2767)).add_operation (enumerator_114170.current_mConstantVarName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2767)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2767)) ;
      var_localConstantList.addAssign_operation (var_type, enumerator_114170.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2768)) ;
    }else if (kBoolFalse == test_2) {
      var_localConstantName = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2781)), enumerator_114170.current_mInstructionList (HERE), enumerator_114170.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2778)) ;
    }
    var_castBranchList.addAssign_operation (enumerator_114170.current_mTypeComparisonKind (HERE), var_type, var_localConstantName, var_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2787)) ;
    enumerator_114170.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2793)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2794)), object->mAttribute_mElseInstructionList, object->mAttribute_mEndOfCastInstruction, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2791)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfCastInstruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2801)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::constructor_new (var_castExpression, var_castBranchList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2803))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2803)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2836)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2837)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2849)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2850)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_string var_cppName ;
  {
  GALGAS_string joker_118473 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, var_cppName, joker_118473, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2852)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2856)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2856)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2856)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2856)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2856)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2856)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2857)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2857)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2857))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2855)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2859)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2859)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2859))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2859)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2870)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2871)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2873)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2873)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2874)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2875)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2879)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2879)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2879)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2879)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2879)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2879)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2880)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2880)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2880))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2878)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2882)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2882)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2882)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2882))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2882)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2893)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2894)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2896)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2896)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2897)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2898)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2902)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2902)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2902)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2902)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2902)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2902)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2903)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2903)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2903))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2901)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2905)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2905)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2905)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2905))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2905)) ;
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
//                Overriding category method '@grammarInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionAST * object = (const cPtr_grammarInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2913)) ;
  cEnumerator_actualParameterListAST enumerator_121874 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_121874.hasCurrentObject ()) {
    callCategoryMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_121874.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2915)) ;
    enumerator_121874.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_grammarInstructionAST.mSlotID,
                                                         categoryMethod_grammarInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_grammarInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  GALGAS_bool joker_122459 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mGrammarMap.method_searchKey (object->mAttribute_mGrammarComponentName, var_grammarLabelMap, joker_122459, var_hasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2926)) ;
  GALGAS_formalParameterSignature var_labelSignature ;
  var_grammarLabelMap.method_searchKey (object->mAttribute_mLabelName, var_labelSignature, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2933)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mLabelName, GALGAS_string ("label of the ").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2941)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2941)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2941)), var_labelSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2938)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2950)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2949)) ;
  const enumGalgasBool test_0 = object->mAttribute_mSourceExpressionIsFile.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_sourceExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2957)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfSourceExpression, GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (var_sourceExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2959)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2959)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2959)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2959))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2958)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_sourceExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2961)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfSourceExpression, GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (var_sourceExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2963)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2963)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2963)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2963))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2962)) ;
    }
  }
  GALGAS_string var_syntaxDirectedTranslationResultVarName = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mAttribute_mGrammarComponentName.mAttribute_location.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2966)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2966)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2966)) ;
  GALGAS_stringlist var_assignementList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2967)) ;
  callCategoryMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature, var_syntaxDirectedTranslationResultVarName, var_assignementList, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2968)) ;
  const enumGalgasBool test_3 = object->mAttribute_mSourceExpressionIsFile.boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2979)), object->mAttribute_mLabelName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2980)), var_sourceExpression, var_actualParameterListForGeneration, var_hasTranslateFeature, var_assignementList, var_syntaxDirectedTranslationResultVarName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2977))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2977)) ;
  }else if (kBoolFalse == test_3) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2989)), object->mAttribute_mLabelName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2990)), var_sourceExpression, var_actualParameterListForGeneration, var_hasTranslateFeature, var_assignementList, var_syntaxDirectedTranslationResultVarName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2987))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2987)) ;
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
//            Overriding category method '@readAccessWithInstructionAST enterInstructionInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readAccessWithInstructionAST * object = (const cPtr_readAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readAccessWithInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3008)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3009)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mDoBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3010)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mElseBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3011)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_readAccessWithInstructionAST.mSlotID,
                                                         categoryMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3022)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3021)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType = var_receiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3027)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bool var_found = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_126519 (var_receiverType.reader_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3031)), kEnumeration_up) ;
    bool bool_1 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3031)).isValidAndTrue () ;
    if (enumerator_126519.hasCurrentObject () && bool_1) {
      while (enumerator_126519.hasCurrentObject () && bool_1) {
        var_found = GALGAS_bool (kIsEqual, enumerator_126519.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_126519.gotoNextObject () ;
        if (enumerator_126519.hasCurrentObject ()) {
          bool_1 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3031)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3034)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3035)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3035)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3035)).add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3035)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3035)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3035))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3035)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3040)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3039)) ;
  GALGAS_string var_objectArrayCppName = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3046)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3046)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3046)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_receiverType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3048)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3048)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3048)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3049)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3049)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3049))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3049)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3052)) ;
  }
  GALGAS_localConstantList var_localConstantList = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3054)) ;
  cEnumerator_typedPropertyList enumerator_127631 (var_receiverType.reader_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3055)), kEnumeration_up) ;
  while (enumerator_127631.hasCurrentObject ()) {
    var_localConstantList.addAssign_operation (enumerator_127631.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_127631.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3058)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3058)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3058)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3060)).add_operation (enumerator_127631.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3060)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3060))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3056)) ;
    enumerator_127631.gotoNextObject () ;
  }
  var_localConstantList.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").reader_nowhere (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3064)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3064)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3065)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3065)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3067))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3063)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3071)), object->mAttribute_mDoBranchInstructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3068)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3080)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3081)), object->mAttribute_mElseBranchInstructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3078)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3087)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverExpression, var_objectArrayCppName, var_keyExpression, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3089))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3089)) ;
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
//          Overriding category method '@readWriteAccessWithInstructionAST enterInstructionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3104)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_do_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3105)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_else_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3106)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST.mSlotID,
                                                         categoryMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3117)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3116)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_keyExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3124)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3124)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3125)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3125)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3125)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3125))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3125)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_keyExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3127)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3127)).objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3128)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3128)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3128)).add_operation (GALGAS_string ("', it should be '@lstring'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3128))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3128)) ;
    }
  }
  GALGAS_string var_objectArrayCppName = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3131)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3131)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3131)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_string var_receiverVariableCppName ;
  {
  GALGAS_string joker_130946 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_receiverVariableCppName, joker_130946, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3133)) ;
  }
  cEnumerator_lstringlist enumerator_130974 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_130974.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3140)) ;
    var_attributeMap.method_searchKey (enumerator_130974.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3141)) ;
    enumerator_130974.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3151)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3151)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3151)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3152)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3152)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3152))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3152)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_found = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_131680 (var_targetType.reader_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3157)), kEnumeration_up) ;
    bool bool_5 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3157)).isValidAndTrue () ;
    if (enumerator_131680.hasCurrentObject () && bool_5) {
      while (enumerator_131680.hasCurrentObject () && bool_5) {
        var_found = GALGAS_bool (kIsEqual, enumerator_131680.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_131680.gotoNextObject () ;
        if (enumerator_131680.hasCurrentObject ()) {
          bool_5 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3157)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_6 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3160)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3161)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3161)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3161)).add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3161)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3161)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3161))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3161)) ;
    }
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3165)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3167)) ;
  cEnumerator_typedPropertyList enumerator_132208 (var_targetType.reader_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3168)), kEnumeration_up) ;
  while (enumerator_132208.hasCurrentObject ()) {
    var_localInitializedVariableList.addAssign_operation (enumerator_132208.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_132208.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3171)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3171)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3171)), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3172)).add_operation (enumerator_132208.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3172)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3172))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3169)) ;
    enumerator_132208.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_8 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3178)) ;
  temp_8.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").reader_nowhere (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3175)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3175)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3176)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3176)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3178))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3178)) ;
  GALGAS_localConstantList var_localConstantList = temp_8 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, var_localInitializedVariableList, object->mAttribute_m_5F_do_5F_Instructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3180)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3193)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3194)), object->mAttribute_m_5F_else_5F_Instructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3191)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3200)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverVariableCppName, var_targetType, object->mAttribute_mFieldList, var_objectArrayCppName, var_keyExpression, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3202))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3202)) ;
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
//                Overriding category method '@switchInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_switchInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3221)) ;
  cEnumerator_switchBranchesAST enumerator_134192 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_134192.hasCurrentObject ()) {
    categoryMethod_enterInstructionListInSemanticContext (enumerator_134192.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3223)) ;
    enumerator_134192.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_switchInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                         categoryMethod_switchInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_switchInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3236)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3235)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3242)).reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3242)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3242)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSwitchExpression, GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3245)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3245)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3244)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3245))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3243)) ;
  }
  GALGAS_constantIndexMap var_enumConstantMap = var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3248)).reader_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3248)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3249)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3251)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3252)) ;
  cEnumerator_switchBranchesAST enumerator_135518 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_135518.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3254)) ;
    GALGAS_bool var_firstConstant = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_135674 (enumerator_135518.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_135674.hasCurrentObject ()) {
      const enumGalgasBool test_1 = var_enumConstantMap.reader_hasKey (enumerator_135674.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3257)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3257)).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_constantsNamedInSwitchInstruction.reader_hasKey (enumerator_135674.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3258)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3258)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_135674.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_135674.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3260)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3260)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3260))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3259)) ;
        }
        var_constantsNamedInSwitchInstruction.addAssign_operation (enumerator_135674.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3262))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3262)) ;
        GALGAS_unifiedTypeMapProxyList var_associatedTypeList ;
        GALGAS_uint joker_136038 ; // Joker input parameter
        var_enumConstantMap.method_searchKey (enumerator_135674.current_mValue (HERE), joker_136038, var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3263)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3264)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_135518.current_mAssociatedValuesExtraction (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3264)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3264)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (enumerator_135674.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the associated values of '").add_operation (enumerator_135674.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3266)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3266)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3266))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3265)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3267)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_135518.current_mAssociatedValuesExtraction (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3267)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3267)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_location location_7 (enumerator_135674.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_7, GALGAS_string ("the '").add_operation (enumerator_135674.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3269)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3269)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3269))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3268)) ;
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3270)).objectCompare (enumerator_135518.current_mAssociatedValuesExtraction (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3270)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              GALGAS_string temp_9 ;
              const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3273)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_10) {
                temp_9 = GALGAS_string ("s") ;
              }else if (kBoolFalse == test_10) {
                temp_9 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_location location_11 (enumerator_135674.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_11, GALGAS_string ("the '").add_operation (enumerator_135674.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3272)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3272)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3272)).add_operation (var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3272)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3272)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3272)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3272)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3272))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3271)) ;
            }else if (kBoolFalse == test_8) {
              GALGAS_uint var_associatedValueIndex = GALGAS_uint ((uint32_t) 0U) ;
              cEnumerator_unifiedTypeMapProxyList enumerator_136865 (var_associatedTypeList, kEnumeration_up) ;
              cEnumerator_switchExtractedValuesListAST enumerator_136900 (enumerator_135518.current_mAssociatedValuesExtraction (HERE), kEnumeration_up) ;
              while (enumerator_136865.hasCurrentObject () && enumerator_136900.hasCurrentObject ()) {
                const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_136900.current_mExtractedValueTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_12) {
                  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_136865.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3278)).objectCompare (enumerator_136900.current_mExtractedValueTypeName (HERE).mAttribute_string)).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    GALGAS_location location_14 (enumerator_136900.current_mExtractedValueTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                    inCompiler->emitSemanticError (location_14, GALGAS_string ("the required type is '@").add_operation (enumerator_136865.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3279)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3279)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3279))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3279)) ;
                  }
                }
                const enumGalgasBool test_15 = var_firstConstant.operator_and (GALGAS_bool (kIsNotEqual, enumerator_136900.current_mExtractedValueName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3282)).boolEnum () ;
                if (kBoolTrue == test_15) {
                  GALGAS_string var_cppName = GALGAS_string ("extractedValue_").add_operation (enumerator_136900.current_mExtractedValueName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3283)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3283)) ;
                  var_extractedAssociatedValuesForGeneration.addAssign_operation (enumerator_136865.current_mType (HERE), var_cppName, var_associatedValueIndex  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3284)) ;
                  const enumGalgasBool test_16 = enumerator_136900.current_mMarkedAsUnused (HERE).boolEnum () ;
                  if (kBoolTrue == test_16) {
                    {
                    ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (enumerator_136900.current_mExtractedValueName (HERE), enumerator_136865.current_mType (HERE), var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3286)) ;
                    }
                  }else if (kBoolFalse == test_16) {
                    {
                    ioArgument_ioVariableMap.modifier_insertLocalConstant (enumerator_136900.current_mExtractedValueName (HERE), enumerator_136865.current_mType (HERE), var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3288)) ;
                    }
                  }
                }
                var_associatedValueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3291)) ;
                enumerator_136865.gotoNextObject () ;
                enumerator_136900.gotoNextObject () ;
              }
            }
          }
        }
      }else if (kBoolFalse == test_1) {
        GALGAS_location location_17 (enumerator_135674.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_17, GALGAS_string ("'").add_operation (enumerator_135674.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3296)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3296)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3296)).add_operation (var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3296)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3296)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3296)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3296))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3295)) ;
      }
      var_firstConstant = GALGAS_bool (false) ;
      enumerator_135674.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3302)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3303)), enumerator_135518.current_mInstructions (HERE), enumerator_135518.current_mEndOfBranch (HERE), ioArgument_ioVariableMap, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3300)) ;
    }
    var_switchBranchesForGeneration.addAssign_operation (enumerator_135518.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration, enumerator_135518.current_mEndOfBranch (HERE).reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3309)), var_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3309)) ;
    enumerator_135518.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3311)) ;
  }
  GALGAS_stringset var_forgottenConstants = var_enumConstantMap.reader_keySet (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3313)).substract_operation (var_constantsNamedInSwitchInstruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3313)) ;
  const enumGalgasBool test_18 = GALGAS_bool (kIsStrictSup, var_forgottenConstants.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3314)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_18) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_138673 (var_forgottenConstants, kEnumeration_up) ;
    while (enumerator_138673.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "  - ").add_operation (enumerator_138673.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3317))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3317)) ;
      enumerator_138673.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_switch_5F_instruction, GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3320))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3319)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3324)), var_switchExpression, var_switchBranchesForGeneration  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3323))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3323)) ;
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
//                 Overriding category method '@matchInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_matchInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionAST * object = (const cPtr_matchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionAST) ;
  cEnumerator_semanticExpressionListAST enumerator_139435 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_139435.hasCurrentObject ()) {
    callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_139435.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3337)) ;
    enumerator_139435.gotoNextObject () ;
  }
  cEnumerator_matchInstructionBranchListAST enumerator_139547 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_139547.hasCurrentObject ()) {
    categoryMethod_enterInstructionListInSemanticContext (enumerator_139547.current_mMatchBranchInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3340)) ;
    enumerator_139547.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_matchInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_matchInstructionAST.mSlotID,
                                                         categoryMethod_matchInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_matchInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_matchInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  GALGAS_semanticExpressionListForGeneration var_expressionList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3350)) ;
  cEnumerator_semanticExpressionListAST enumerator_140083 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_140083.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_matchedExpression ;
    callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_140083.current_mExpression (HERE).ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3354)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_matchedExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3353)) ;
    var_expressionList.addAssign_operation (var_matchedExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3359)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_type = var_matchedExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3361)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3362)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3362)))).operator_and (GALGAS_bool (kIsNotEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3362)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3362)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3362)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_140083.current_mEndOfExpressionLocation (HERE), GALGAS_string ("this expression is an instance of '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3364)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3364)).add_operation (GALGAS_string ("' type, but this type is neither an enumeration, neither a class"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3364))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3363)) ;
    }
    enumerator_140083.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3368)) ;
  }
  GALGAS_matchInstructionBranchListForGeneration var_matchInstructionBranchList = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3369)) ;
  cEnumerator_matchInstructionBranchListAST enumerator_140938 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_140938.hasCurrentObject ()) {
    GALGAS_localConstantList var_localConstantList = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3372)) ;
    GALGAS_matchListForGeneration var_matchListForGeneration = GALGAS_matchListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3373)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_expressionList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3374)).objectCompare (enumerator_140938.current_mMatchEntryList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3374)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_semanticExpressionListForGeneration enumerator_141181 (var_expressionList, kEnumeration_up) ;
      cEnumerator_matchEntryListAST enumerator_141204 (enumerator_140938.current_mMatchEntryList (HERE), kEnumeration_up) ;
      while (enumerator_141181.hasCurrentObject () && enumerator_141204.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type = enumerator_141181.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3376)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3377)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3377)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = enumerator_141204.current_mIsType (HERE).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_unifiedTypeMap_2D_proxy var_namedType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_141204.current_mTypeNameOrEnumerationConstantName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3379)) ;
            GALGAS_unifiedTypeMap_2D_proxy var_t = var_type ;
            GALGAS_bool var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_namedType)) ;
            if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3382)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3382)).isValid ()) {
              uint32_t variant_141588 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3382)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3382)).uintValue () ;
              bool loop_141588 = true ;
              while (loop_141588) {
                loop_141588 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3383)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3383)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3383)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3383)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3383)).isValid () ;
                if (loop_141588) {
                  loop_141588 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3383)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3383)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3383)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3383)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3383)).boolValue () ;
                }
                if (loop_141588 && (0 == variant_141588)) {
                  loop_141588 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3382)) ;
                }
                if (loop_141588) {
                  variant_141588 -- ;
                  var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3384)) ;
                  var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_namedType)) ;
                }
              }
            }
            const enumGalgasBool test_4 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3387)).boolEnum () ;
            if (kBoolTrue == test_4) {
              GALGAS_location location_5 (enumerator_141204.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_5, GALGAS_string ("the '@").add_operation (enumerator_141204.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3389)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3389)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3389)).add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3389)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3389)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3389))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3388)) ;
            }else if (kBoolFalse == test_4) {
              const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, enumerator_141204.current_mLocalConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3390)).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3390)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_6) {
                var_localConstantList.addAssign_operation (var_t, enumerator_141204.current_mLocalConstantName (HERE), GALGAS_bool (false), GALGAS_string ("match_instruction_constant_name")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3391)) ;
              }
            }
          }else if (kBoolFalse == test_3) {
            GALGAS_location location_7 (enumerator_141204.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_7, GALGAS_string ("a type that inherits from '@").add_operation (enumerator_141181.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3395)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3395)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3395)).add_operation (GALGAS_string ("' class is expected here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3395))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3394)) ;
          }
          var_matchListForGeneration.addAssign_operation (GALGAS_bool (true), enumerator_141204.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3397)), enumerator_141204.current_mLocalConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3397))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3397)) ;
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3398)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3398)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            const enumGalgasBool test_9 = enumerator_141204.current_mIsType (HERE).boolEnum () ;
            if (kBoolTrue == test_9) {
              GALGAS_location location_10 (enumerator_141204.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_10, GALGAS_string ("a constant of the '@").add_operation (enumerator_141181.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3401)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3401)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3401)).add_operation (GALGAS_string ("' enumeration type is expected here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3401))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3400)) ;
            }else if (kBoolFalse == test_9) {
              const enumGalgasBool test_11 = var_type.reader_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3402)).reader_hasKey (enumerator_141204.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3402)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3402)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3402)).boolEnum () ;
              if (kBoolTrue == test_11) {
                GALGAS_location location_12 (enumerator_141204.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_141204.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3404)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3404)).add_operation (GALGAS_string ("' symbol is not a constant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3404)).add_operation (enumerator_141181.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3404)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3404)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3404)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3404))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3403)) ;
              }
            }
            var_matchListForGeneration.addAssign_operation (GALGAS_bool (false), enumerator_141204.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3408)), enumerator_141181.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3409)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3409))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3406)) ;
          }else if (kBoolFalse == test_8) {
            GALGAS_location location_13 (enumerator_141204.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_13, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3411)) ;
          }
        }
        enumerator_141181.gotoNextObject () ;
        enumerator_141204.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_1) {
      inCompiler->emitSemanticError (enumerator_140938.current_mEndOfMatchEntryList (HERE), GALGAS_string ("this match list should contain ").add_operation (var_expressionList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3416)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3416)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3416)).add_operation (GALGAS_string (" elements, but it acually contains "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3416)).add_operation (enumerator_140938.current_mMatchEntryList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3417)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3417)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3416))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3415)) ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3424)), enumerator_140938.current_mMatchBranchInstructionList (HERE), enumerator_140938.current_mEndOf_5F_instructionList (HERE), ioArgument_ioVariableMap, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3421)) ;
    }
    var_matchInstructionBranchList.addAssign_operation (var_matchListForGeneration, var_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3431)) ;
    enumerator_140938.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_elseInstructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3437)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3438)), object->mAttribute_mElseInstructionList, object->mAttribute_mEndOf_5F_match_5F_instruction, ioArgument_ioVariableMap, var_elseInstructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3435)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_match_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3445)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_matchInstructionForGeneration::constructor_new (var_expressionList, var_matchInstructionBranchList, var_elseInstructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3447))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3447)) ;
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
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("Predefined type ").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 110)), GALGAS_primitiveTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 112))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 112)), object->mAttribute_mPredefinedTypeName, object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 111)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 109)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mGraphTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 134)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 135)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListElementTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mAssociatedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 138)), object->mAttribute_mAssociatedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 136)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_associatedListTypeProxy.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 139)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticAnalysis.galgas", 139)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 140)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 140))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 140)) ;
  }
  GALGAS_stringset var_reservedModifierNames = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 143)) ;
  var_reservedModifierNames.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 144)) ;
  var_reservedModifierNames.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 145)) ;
  cEnumerator_graphInsertModifierList enumerator_9518 (object->mAttribute_mInsertModifierList, kEnumeration_up) ;
  while (enumerator_9518.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_reservedModifierNames.reader_hasKey (enumerator_9518.current_mInsertModifierName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 147)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 147)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_9518.current_mInsertModifierName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_9518.current_mInsertModifierName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 148)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 148))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 148)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_9518.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 150)) ;
    }
    enumerator_9518.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (object->mAttribute_mGraphTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 154)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeProxy, var_associatedListTypeProxy, var_associatedListElementTypeProxy, object->mAttribute_mInsertModifierList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 155)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 153)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_externTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mExternTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 170)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (object->mAttribute_mExternTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 173)), GALGAS_externTypeDeclarationForGeneration::constructor_new (var_externTypeProxy, object->mAttribute_mExternTypeName.mAttribute_string, object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 174)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 172)) ;
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
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (object->mAttribute_mArrayTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 191)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 193)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 194)), object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticAnalysis.galgas", 195))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 192)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 190)) ;
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
  GALGAS_typedPropertyList var_listTypeAttributeList ;
  GALGAS_bool joker_12155_3 ; // Joker input parameter
  GALGAS_bool joker_12155_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_12155_1 ; // Joker input parameter
  GALGAS_bool joker_12199 ; // Joker input parameter
  GALGAS_attributeMap joker_12256_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_12256_19 ; // Joker input parameter
  GALGAS_constructorMap joker_12256_18 ; // Joker input parameter
  GALGAS_getterMap joker_12256_17 ; // Joker input parameter
  GALGAS_setterMap joker_12256_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_12256_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_12256_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_12256_13 ; // Joker input parameter
  GALGAS_stringlist joker_12256_12 ; // Joker input parameter
  GALGAS_uint joker_12256_11 ; // Joker input parameter
  GALGAS_functionSignature joker_12256_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_12256_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_12256_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_12256_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_12256_6 ; // Joker input parameter
  GALGAS_bool joker_12256_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_12256_4 ; // Joker input parameter
  GALGAS_string joker_12256_3 ; // Joker input parameter
  GALGAS_string joker_12256_2 ; // Joker input parameter
  GALGAS_headerKind joker_12256_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedListTypeName, joker_12155_3, joker_12155_2, joker_12155_1, var_typeKindEnum, joker_12199, var_listTypeAttributeList, joker_12256_20, joker_12256_19, joker_12256_18, joker_12256_17, joker_12256_16, joker_12256_15, joker_12256_14, joker_12256_13, joker_12256_12, joker_12256_11, joker_12256_10, joker_12256_9, joker_12256_8, joker_12256_7, joker_12256_6, joker_12256_5, joker_12256_4, joker_12256_3, joker_12256_2, joker_12256_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 209)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticAnalysis.galgas", 218)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("associated type should be a list type")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 219)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 223)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListmapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 225)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 226)), var_listTypeAttributeList, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 228)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 228))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 224)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 222)) ;
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
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 303)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 304)) ;
  cEnumerator_propertyInCollectionListAST enumerator_15951 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_15951.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_15951.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 306)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_15951.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 309)) ;
    const enumGalgasBool test_0 = function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 314)).reader_hasKey (enumerator_15951.current_mPropertyName (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 314)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_m = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_16343 (function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 316)), kEnumeration_up) ;
      while (enumerator_16343.hasCurrentObject ()) {
        var_m.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_16343.current (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 317))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 317)) ;
        enumerator_16343.gotoNextObject () ;
      }
      var_m.dotAssign_operation (GALGAS_string ("; theses names are reserved")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 319)) ;
      GALGAS_location location_1 (enumerator_15951.current_mPropertyName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, var_m  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 320)) ;
    }
    {
    var_attributeMap.modifier_insertKey (enumerator_15951.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 322)) ;
    }
    enumerator_15951.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 325)) ;
  cEnumerator_insertMethodListAST enumerator_16616 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_16616.hasCurrentObject ()) {
    {
    var_insertMethodMap.modifier_insertKey (enumerator_16616.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 327)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_16616.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 328)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_16616.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 329)) ;
    }
    enumerator_16616.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 332)) ;
  cEnumerator_mapSearchMethodListAST enumerator_16891 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_16891.hasCurrentObject ()) {
    {
    var_searchMethodMap.modifier_insertKey (enumerator_16891.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 334)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_16891.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 335)) ;
    }
    enumerator_16891.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_17057 (object->mAttribute_mRemoveMethodList, kEnumeration_up) ;
  while (enumerator_17057.hasCurrentObject ()) {
    {
    var_insertMethodMap.modifier_insertKey (enumerator_17057.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 339)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_17057.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 340)) ;
    }
    enumerator_17057.gotoNextObject () ;
  }
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_17274 (object->mAttribute_mInsertOrReplaceDeclarationListAST, kEnumeration_up) ;
  GALGAS_uint index_17233 ((uint32_t) 0) ;
  while (enumerator_17274.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, index_17233.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticWarning (enumerator_17274.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 345)) ;
    }
    enumerator_17274.gotoNextObject () ;
    index_17233.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 343)) ;
  }
  GALGAS_bool var_hasInsertOrReplaceModifier = GALGAS_bool (kIsStrictSup, object->mAttribute_mInsertOrReplaceDeclarationListAST.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 348)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_3 = var_hasInsertOrReplaceModifier.operator_and (var_insertMethodMap.reader_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 349)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 349)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location var_insertOrReplaceDeclarationLocation ;
    object->mAttribute_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceDeclarationLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 351)) ;
    inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert modifier or a remove modifier has been declared with this name")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 352)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 365)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 367)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 368)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 368)), object->mAttribute_mMapTypeName, var_typedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, var_hasInsertOrReplaceModifier  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 366)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 364)) ;
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
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 492)) ;
  cEnumerator_formalInputParameterListAST enumerator_24246 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_24246.hasCurrentObject ()) {
    var_formalArgumentList.addAssign_operation (enumerator_24246.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_24246.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 496)), enumerator_24246.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 497)), enumerator_24246.current_mFormalArgumentName (HERE), enumerator_24246.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 494)) ;
    enumerator_24246.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 502)), GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 505)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 506)), var_formalArgumentList, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 508))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 503)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 501)) ;
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
  GALGAS_formalParameterListForGeneration var_formalArgumentList = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 519)) ;
  cEnumerator_formalParameterListAST enumerator_25347 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_25347.hasCurrentObject ()) {
    var_formalArgumentList.addAssign_operation (enumerator_25347.current_mFormalSelector (HERE), enumerator_25347.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_25347.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 524)), enumerator_25347.current_mFormalArgumentName (HERE), enumerator_25347.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 526))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 521)) ;
    enumerator_25347.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern proc ").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 529)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 532)), object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 533)), var_formalArgumentList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 530)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 528)) ;
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
  GALGAS_formalParameterListForGeneration var_formalArgumentList = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 546)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 551)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 553))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 548)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mFormalArgumentList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 557)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 558)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 559)), GALGAS_string::makeEmptyString (), object->mAttribute_mRoutineInstructionList, object->mAttribute_mEndOfRoutineInstructionList, var_instructionList, var_formalArgumentList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 554)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 568)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 571)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 571)), object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 572)), var_formalArgumentList, GALGAS_bool (false), var_instructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 569)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 567)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 587)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superClassProxy ;
  GALGAS_typedPropertyList var_allAttributeList ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 593)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 594)) ;
    var_allAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 595)) ;
    GALGAS_bool var_generatedInSeparateFileFeature = GALGAS_bool (false) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 597)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_28237 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_28237.hasCurrentObject ()) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_28237.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 599)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = var_generatedInSeparateFileFeature.boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_location location_4 (enumerator_28237.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_4, GALGAS_string ("the 'generatedInSeparateFile' is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 601)) ;
          }
          var_generatedInSeparateFileFeature = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_2) {
          GALGAS_location location_5 (enumerator_28237.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("only the 'generatedInSeparateFile' feature is allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 605)) ;
        }
        enumerator_28237.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 610)) ;
    var_allAttributeList = var_superClassProxy.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 611)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 612)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_lstringlist enumerator_28862 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_28862.hasCurrentObject ()) {
        GALGAS_location location_7 (enumerator_28862.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a class that has a super class does not accept any feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 614)) ;
        enumerator_28862.gotoNextObject () ;
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 619)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 620)) ;
  cEnumerator_propertyInCollectionListAST enumerator_29130 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_29130.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_29130.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 622)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_29308 (enumerator_29130.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_29308.hasCurrentObject ()) {
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_29308.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 626)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        const enumGalgasBool test_9 = var_hasSetter.boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_location location_10 (enumerator_29308.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_10, GALGAS_string ("the 'setter' feature is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 628)) ;
        }
        var_hasSetter = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_8) {
        const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_29308.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 631)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = var_hasGetter.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 632)).boolEnum () ;
          if (kBoolTrue == test_12) {
            GALGAS_location location_13 (enumerator_29308.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_13, GALGAS_string ("the 'nogetter' feature is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 633)) ;
          }
          var_hasGetter = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_11) {
          GALGAS_location location_14 (enumerator_29308.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_14, GALGAS_string ("only the 'setter' or 'nogetter' are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 637)) ;
        }
      }
      enumerator_29308.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_t, enumerator_29130.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 640)) ;
    var_allAttributeList.addAssign_operation (var_t, enumerator_29130.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 645)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_29130.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 650)) ;
    }
    enumerator_29130.gotoNextObject () ;
  }
  GALGAS_string var_sortString = var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 653)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 654)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 655)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 655)).isValid ()) {
    uint32_t variant_30156 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 655)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 655)).uintValue () ;
    bool loop_30156 = true ;
    while (loop_30156) {
      loop_30156 = var_t.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 656)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 656)).isValid () ;
      if (loop_30156) {
        loop_30156 = var_t.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 656)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 656)).boolValue () ;
      }
      if (loop_30156 && (0 == variant_30156)) {
        loop_30156 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 655)) ;
      }
      if (loop_30156) {
        variant_30156 -- ;
        var_sortString = var_t.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 657)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 657)).add_operation (var_sortString, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 657)) ;
        var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 658)) ;
      }
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (object->mAttribute_mClassTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 662)), GALGAS_classTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 664)), object->mAttribute_mIsAbstract, object->mAttribute_mClassTypeName, var_superClassProxy, var_allAttributeList, var_typedAttributeList, var_selfType.reader_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 670))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 663)), var_sortString  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 661)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_returnType ;
  GALGAS_string var_resultVariableCppName ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 763)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 765))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 760)) ;
  {
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mFormalArgumentList, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 769)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, var_formalInputParameterList, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 766)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 782)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 782)), GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 785)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 785)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 786)), var_formalInputParameterList, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 783)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 781)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_returnType ;
  GALGAS_string var_resultVariableCppName ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 808)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 810))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 805)) ;
  {
  GALGAS_formalInputParameterListForGeneration joker_36396 ; // Joker input parameter
  routine_analyzeFunctionBody (var_analysisContext, GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 813)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 814)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, joker_36396, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 811)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 827)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 827)), GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 830)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 830)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 831)), var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 828)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 826)) ;
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
  GALGAS_lstring joker_37810 ; // Joker input parameter
  GALGAS_lstringlist joker_37817 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_37914_2 ; // Joker input parameter
  GALGAS_bool joker_37914_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_37810, joker_37817, var_wrapperFileMap, var_wrapperDirectoryMap, joker_37914_2, joker_37914_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 850)) ;
  GALGAS_string var_absoluteSourcePath ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.reader_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 860)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_absoluteSourcePath = object->mAttribute_mFilewrapperPath.mAttribute_string ;
  }else if (kBoolFalse == test_0) {
    var_absoluteSourcePath = object->mAttribute_mSourceFileAbsolutePath.reader_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 863)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 863)).add_operation (object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 863)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 863)) ;
  }
  const enumGalgasBool test_1 = var_absoluteSourcePath.reader_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 865)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 865)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("The '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 866)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 866))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 866)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 869)) ;
    cEnumerator_filewrapperTemplateListAST enumerator_38537 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
    while (enumerator_38537.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_38537.current_mFilewrapperTemplatePath (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 871)).reader_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 871)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_38537.current_mFilewrapperTemplatePath (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 872)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 872))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 872)) ;
      }
      GALGAS_string var_absoluteTemplatePath = var_absoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 874)).add_operation (enumerator_38537.current_mFilewrapperTemplatePath (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 874)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 874)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList ;
      var_resultingInstructionList.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteTemplatePath, enumerator_38537.current_mFilewrapperTemplatePath (HERE).reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 877))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 877)), var_resultingInstructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 877)) ;
      GALGAS_templateVariableMap var_templateVariableMap = GALGAS_templateVariableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 879)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 880)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_39331 (enumerator_38537.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
      while (enumerator_39331.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_39331.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 882)) ;
        GALGAS_string var_cppVarName = GALGAS_string ("in_").add_operation (enumerator_39331.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 883)).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 883)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 883)) ;
        {
        var_templateVariableMap.modifier_insertKey (enumerator_39331.current_mFormalArgumentName (HERE), var_type, var_cppVarName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 884)) ;
        }
        var_filewrapperTemplateFormalInputParameters.addAssign_operation (enumerator_39331.current_mFormalTemplateSelector (HERE), var_type, var_cppVarName, enumerator_39331.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 885)) ;
        enumerator_39331.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 888)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 889)) ;
      {
      routine_templateInstructionListAnalysis (var_templateAnalysisContext, var_resultingInstructionList, var_templateInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 893)) ;
      }
      var_filewrapperTemplateListForGeneration.addAssign_operation (enumerator_38537.current_mFilewrapperTemplateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 896)), var_filewrapperTemplateFormalInputParameters, var_templateInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 895)) ;
      enumerator_38537.gotoNextObject () ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 902)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 902)), GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 905)), object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 906)), object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 907)), var_wrapperFileMap, var_wrapperDirectoryMap, var_filewrapperTemplateListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 903)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 901)) ;
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
  GALGAS_commandLineOptionMap var_stringListOptionMap ;
  constinArgument_inSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_isPredefined, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 926)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 936)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 936)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 939)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 939)), var_isPredefined, object->mAttribute_mOptionComponentName.mAttribute_string, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 937)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 935)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 958)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 960)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 960)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 961)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 961)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 961))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 961)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 962)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 963)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 963)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 963))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 963)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 966)) ;
  cEnumerator_formalParameterListAST enumerator_43550 (object->mAttribute_mAbstractCategoryMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_43550.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_43550.current_mFormalSelector (HERE), enumerator_43550.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_43550.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 971)), enumerator_43550.current_mFormalArgumentName (HERE), enumerator_43550.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 973))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 968)) ;
    enumerator_43550.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 977)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 977)), GALGAS_abstractCategoryMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 980)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 980)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 980)).add_operation (object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 980)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 980)), var_selfType, object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 982)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 978)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 976)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 995)) ;
  GALGAS_string var_selfObjectName ;
  GALGAS_string var_selfObjectAccessor ;
  GALGAS_bool var_implementedAsFunction ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1000)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1000)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName = GALGAS_string ("object") ;
    var_selfObjectAccessor = GALGAS_string ("object->") ;
    var_implementedAsFunction = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName = GALGAS_string ("inObject") ;
    var_selfObjectAccessor = GALGAS_string ("inObject.") ;
    var_implementedAsFunction = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1010)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, var_selfObjectName, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1017))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1012)) ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1022)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1022)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1022)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1022)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1022)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1023)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1024)) ;
  }
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mCategoryMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1021)), temp_1, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1026)), var_selfObjectAccessor, object->mAttribute_mCategoryMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1018)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (object->mAttribute_mCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1035)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1035)), GALGAS_categoryMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1038)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1038)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1038)).add_operation (object->mAttribute_mCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1038)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1038)), var_selfType, object->mAttribute_mCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1040)), var_implementedAsFunction, var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1043)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1036)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1034)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1056)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1058)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1058)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1059)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1059)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1059))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1059)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1063)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1064)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1065)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1066)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1066)).isValid ()) {
    uint32_t variant_47441 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1066)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1066)).uintValue () ;
    bool loop_47441 = true ;
    while (loop_47441) {
      loop_47441 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1067)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1067)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1067)).isValid () ;
      if (loop_47441) {
        loop_47441 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1067)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1067)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1067)).boolValue () ;
      }
      if (loop_47441 && (0 == variant_47441)) {
        loop_47441 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1066)) ;
      }
      if (loop_47441) {
        variant_47441 -- ;
        const enumGalgasBool test_2 = var_superType.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1068)).reader_hasKey (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1068)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1068)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_47747 ; // Joker input parameter
          GALGAS_bool joker_47800 ; // Joker input parameter
          GALGAS_string joker_47814 ; // Joker input parameter
          var_superType.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1070)).method_searchKey (object->mAttribute_mOverridingCategoryMethodName, joker_47747, var_inheritedSignature, var_inheritedDeclarationLocation, joker_47800, var_qualifier, joker_47814, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1070)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1071)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1072)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1075)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this method is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1078)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1081)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1088))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1083)) ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1093)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1093)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1093)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1093)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1093)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1094)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1095)) ;
  }
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mOverridingCategoryMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1092)), temp_6, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1097)), GALGAS_string ("object->"), object->mAttribute_mOverridingCategoryMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1089)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryMethodName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1108)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1106)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1115)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1115)), GALGAS_overridingCategoryMethodForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("method-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1118)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1118)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1118)).add_operation (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1118)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1118)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1121)), var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1123)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1116)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1114)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1136)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1138)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1138)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1140)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1141)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1141)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1141))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1141)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1145)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1146)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1148)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)).isValid ()) {
    uint32_t variant_50929 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1148)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)).uintValue () ;
    bool loop_50929 = true ;
    while (loop_50929) {
      loop_50929 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1149)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1149)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149)).isValid () ;
      if (loop_50929) {
        loop_50929 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1149)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1149)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149)).boolValue () ;
      }
      if (loop_50929 && (0 == variant_50929)) {
        loop_50929 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1148)) ;
      }
      if (loop_50929) {
        variant_50929 -- ;
        const enumGalgasBool test_4 = var_superType.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150)).reader_hasKey (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1150)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_51235 ; // Joker input parameter
          GALGAS_bool joker_51288 ; // Joker input parameter
          GALGAS_string joker_51302 ; // Joker input parameter
          var_superType.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1152)).method_searchKey (object->mAttribute_mOverridingCategoryMethodName, joker_51235, var_inheritedSignature, var_inheritedDeclarationLocation, joker_51288, var_qualifier, joker_51302, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1152)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1153)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1154)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1157)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1160)) ;
  }
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1163)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingCategoryMethodFormalParameterList, var_variableMap, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryMethodName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1175)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1173)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1190)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1192)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1192)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category setter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1194)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category setter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1195)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1195)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1195))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1195)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1198)) ;
  cEnumerator_formalParameterListAST enumerator_53254 (object->mAttribute_mAbstractCategoryModifierFormalParameterList, kEnumeration_up) ;
  while (enumerator_53254.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_53254.current_mFormalSelector (HERE), enumerator_53254.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_53254.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1203)), enumerator_53254.current_mFormalArgumentName (HERE), enumerator_53254.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1205))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1200)) ;
    enumerator_53254.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (object->mAttribute_mAbstractCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1209)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1209)), GALGAS_abstractCategoryModifierForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1212)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1212)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1212)).add_operation (object->mAttribute_mAbstractCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1212)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1212)), var_selfType, object->mAttribute_mAbstractCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1214)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1210)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1208)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1227)) ;
  GALGAS_string var_selfObjectName ;
  GALGAS_string var_selfObjectAccessor ;
  GALGAS_bool var_implementedAsFunction ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1232)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1232)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName = GALGAS_string ("object") ;
    var_selfObjectAccessor = GALGAS_string ("object->") ;
    var_implementedAsFunction = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1242)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, var_selfObjectName, var_selfType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1244)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mCategoryModifierFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1253)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1254)), var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1255)), var_selfObjectAccessor, object->mAttribute_mCategoryModifierInstructionList, object->mAttribute_mEndOfModifierLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1250)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (object->mAttribute_mCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1264)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1264)), GALGAS_categoryModifierForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1267)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1267)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1267)).add_operation (object->mAttribute_mCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1267)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1267)), var_selfType, object->mAttribute_mCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1269)), var_implementedAsFunction, var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1272)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1263)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1285)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1287)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1287)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category setter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1288)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1288)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1288))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1288)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1293)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1294)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1295)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1295)).isValid ()) {
    uint32_t variant_56970 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1295)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1295)).uintValue () ;
    bool loop_56970 = true ;
    while (loop_56970) {
      loop_56970 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1296)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1296)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1296)).isValid () ;
      if (loop_56970) {
        loop_56970 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1296)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1296)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1296)).boolValue () ;
      }
      if (loop_56970 && (0 == variant_56970)) {
        loop_56970 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1295)) ;
      }
      if (loop_56970) {
        variant_56970 -- ;
        const enumGalgasBool test_2 = var_superType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1297)).reader_hasKey (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1297)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1297)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_57268 ; // Joker input parameter
          GALGAS_bool joker_57291 ; // Joker input parameter
          GALGAS_string joker_57305 ; // Joker input parameter
          var_superType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1299)).method_searchKey (object->mAttribute_mOverridingCategoryModifierName, joker_57268, var_inheritedSignature, joker_57291, var_qualifier, joker_57305, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1299)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1300)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1301)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1304)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this setter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1307)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1310)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), var_selfType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1312)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mOverridingCategoryModifierFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1321)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1322)), var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1323)), GALGAS_string ("object->"), object->mAttribute_mOverridingCategoryModifierInstructionList, object->mAttribute_mEndOfModifierLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1318)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryModifierName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1334)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1332)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1341)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1341)), GALGAS_overridingCategoryModifierForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1344)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1344)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1344)).add_operation (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1344)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1344)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1347)), var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1349)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1342)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1340)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1362)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1364)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1364)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category setter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1366)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category setter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1367)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1367)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1367))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1367)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1371)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1372)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1373)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1374)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1374)).isValid ()) {
    uint32_t variant_60244 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1374)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1374)).uintValue () ;
    bool loop_60244 = true ;
    while (loop_60244) {
      loop_60244 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1375)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1375)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1375)).isValid () ;
      if (loop_60244) {
        loop_60244 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1375)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1375)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1375)).boolValue () ;
      }
      if (loop_60244 && (0 == variant_60244)) {
        loop_60244 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1374)) ;
      }
      if (loop_60244) {
        variant_60244 -- ;
        const enumGalgasBool test_4 = var_superType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1376)).reader_hasKey (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1376)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1376)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_60542 ; // Joker input parameter
          GALGAS_bool joker_60565 ; // Joker input parameter
          GALGAS_string joker_60579 ; // Joker input parameter
          var_superType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1378)).method_searchKey (object->mAttribute_mOverridingCategoryModifierName, joker_60542, var_inheritedSignature, joker_60565, var_qualifier, joker_60579, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1378)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1379)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1380)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1383)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this setter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1386)) ;
  }
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1389)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingCategoryModifierFormalParameterList, var_variableMap, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1391)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryModifierName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1401)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1399)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1416)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1418)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category getter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1420)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category getter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1421)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1421)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1421))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1421)) ;
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1424)) ;
  cEnumerator_formalInputParameterListAST enumerator_62539 (object->mAttribute_mAbstractCategoryReaderFormalInputParameterList, kEnumeration_up) ;
  while (enumerator_62539.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_62539.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_62539.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1428)), enumerator_62539.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1429)), enumerator_62539.current_mFormalArgumentName (HERE), enumerator_62539.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1426)) ;
    enumerator_62539.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1435)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1435)), GALGAS_abstractCategoryReaderForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1438)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1438)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1438)).add_operation (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1438)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1438)), var_selfType, object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1440)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractCategoryReaderReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1441)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1436)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1434)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1457)) ;
  GALGAS_string var_selfObjectName ;
  GALGAS_string var_selfObjectAccessor ;
  GALGAS_bool var_implementedAsFunction ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1462)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1462)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName = GALGAS_string ("object") ;
    var_selfObjectAccessor = GALGAS_string ("object->") ;
    var_implementedAsFunction = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName = GALGAS_string ("inObject") ;
    var_selfObjectAccessor = GALGAS_string ("inObject.") ;
    var_implementedAsFunction = GALGAS_bool (true) ;
  }
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, var_selfObjectName, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1477))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1472)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType ;
  GALGAS_string var_returnVariableCppName ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1485)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1485)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1485)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1485)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1485)).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1485)).objectCompare (GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("semanticAnalysis.galgas", 1485)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1485)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1486)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1487)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mCategoryReaderFormalInputParameterList, temp_1, var_selfObjectAccessor, object->mAttribute_mCategoryReaderInstructionList, object->mAttribute_mCategoryReaderReturnedVariableName, object->mAttribute_mCategoryReaderReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration, var_returnType, var_returnVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1482)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (object->mAttribute_mCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1501)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1501)), GALGAS_categoryReaderForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1504)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1504)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1504)).add_operation (object->mAttribute_mCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1504)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1504)), var_selfType, object->mAttribute_mCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1506)), var_implementedAsFunction, var_returnType, var_returnVariableCppName, var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1511)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1502)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1500)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1524)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1526)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1526)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category getter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1527)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1527)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1527))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1527)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1531)) ;
  GALGAS_functionSignature var_inheritedSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1532)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1533)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1534)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1535)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1535)).isValid ()) {
    uint32_t variant_66783 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1535)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1535)).uintValue () ;
    bool loop_66783 = true ;
    while (loop_66783) {
      loop_66783 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1536)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1536)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536)).isValid () ;
      if (loop_66783) {
        loop_66783 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1536)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1536)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536)).boolValue () ;
      }
      if (loop_66783 && (0 == variant_66783)) {
        loop_66783 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1535)) ;
      }
      if (loop_66783) {
        variant_66783 -- ;
        const enumGalgasBool test_2 = var_superType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1537)).reader_hasKey (object->mAttribute_mOverridingCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1537)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1537)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_67056 ; // Joker input parameter
          GALGAS_bool joker_67133 ; // Joker input parameter
          GALGAS_string joker_67213 ; // Joker input parameter
          var_superType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1538)).method_searchKey (object->mAttribute_mOverridingCategoryReaderName, joker_67056, var_inheritedSignature, var_inheritedDeclarationLocation, joker_67133, var_inheritedReturnType, var_qualifier, joker_67213, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1538)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1548)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1549)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1552)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1555)) ;
  }
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1563))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1558)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType ;
  GALGAS_string var_returnVariableCppName ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1567)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1567)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1567)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1567)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1567)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1568)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1569)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mOverridingCategoryReaderFormalInputParameterList, temp_6, GALGAS_string ("object->"), object->mAttribute_mOverridingCategoryReaderInstructionList, object->mAttribute_mOverridingCategoryReaderReturnedVariableName, object->mAttribute_mOverridingCategoryReaderReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration, var_returnType, var_returnVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1564)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration, var_returnType, object->mAttribute_mOverridingCategoryReaderName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1586)), var_inheritedSignature, var_inheritedReturnType, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1583)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (object->mAttribute_mOverridingCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1594)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1594)), GALGAS_overrideCategoryReaderForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1597)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1597)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1597)).add_operation (object->mAttribute_mOverridingCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1597)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1597)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1600)), var_returnType, var_returnVariableCppName, var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1604)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1595)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1593)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1617)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractCategoryReaderReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1621)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1621)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category getter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1623)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category getter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1624)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1624)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1624))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1624)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1628)) ;
  GALGAS_functionSignature var_inheritedSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1629)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1630)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1631)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1632)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1632)).isValid ()) {
    uint32_t variant_70651 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1632)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1632)).uintValue () ;
    bool loop_70651 = true ;
    while (loop_70651) {
      loop_70651 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1633)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1633)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1633)).isValid () ;
      if (loop_70651) {
        loop_70651 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1633)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1633)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1633)).boolValue () ;
      }
      if (loop_70651 && (0 == variant_70651)) {
        loop_70651 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1632)) ;
      }
      if (loop_70651) {
        variant_70651 -- ;
        const enumGalgasBool test_4 = var_superType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1634)).reader_hasKey (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1634)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1634)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_70953 ; // Joker input parameter
          GALGAS_bool joker_71030 ; // Joker input parameter
          GALGAS_string joker_71089 ; // Joker input parameter
          var_superType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1636)).method_searchKey (object->mAttribute_mAbstractCategoryReaderName, joker_70953, var_inheritedSignature, var_inheritedDeclarationLocation, joker_71030, var_inheritedReturnType, var_qualifier, joker_71089, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1636)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1646)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1647)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1650)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1653)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1657)) ;
    cEnumerator_formalInputParameterListAST enumerator_71583 (object->mAttribute_mAbstractCategoryReaderFormalInputParameterList, kEnumeration_up) ;
    while (enumerator_71583.hasCurrentObject ()) {
      var_formalParameterListForGeneration.addAssign_operation (enumerator_71583.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_71583.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1661)), enumerator_71583.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1662)), enumerator_71583.current_mFormalArgumentName (HERE), enumerator_71583.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1659)) ;
      enumerator_71583.gotoNextObject () ;
    }
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration, var_returnType, object->mAttribute_mAbstractCategoryReaderName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1669)), var_inheritedSignature, var_inheritedReturnType, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1666)) ;
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
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mLexiqueName, var_terminalMap, var_indexingListAST, var_indexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1686)) ;
  GALGAS_stringset var_indexNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1693)) ;
  cEnumerator_indexingListAST enumerator_72924 (var_indexingListAST, kEnumeration_up) ;
  while (enumerator_72924.hasCurrentObject ()) {
    var_indexNameSet.addAssign_operation (enumerator_72924.current_mIndexName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1695)) ;
    enumerator_72924.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing = var_indexingDirectory.mAttribute_location.reader_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1697)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1697)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 1699)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_lexiqueName = object->mAttribute_mLexiqueName.mAttribute_string ;
    GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration ;
    {
    routine_semanticAnalysisOfSyntaxComponent (object->mAttribute_mNonterminalDeclarationList, object->mAttribute_mRuleList, var_componentName, var_lexiqueName, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_terminalMap, var_indexNameSet, var_hasIndexing, object->mAttribute_mHasTranslateFeature, var_syntaxDeclarationForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1701)) ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1714)) ;
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
    inCompiler->printMessage (GALGAS_string ("*** Analyzing '").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1731)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1731)).add_operation (GALGAS_string ("' grammar\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1731))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1731)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap = GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1734)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1735)) ;
  GALGAS_lstring var_lexiqueComponentName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1736)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1737)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList = GALGAS_nonTerminalToAddList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1738)) ;
  GALGAS_uint var_addedNonTerminalCount = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_lstringlist enumerator_74767 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_74767.hasCurrentObject ()) {
    GALGAS_uint var_addedNonTerminalCountRef = var_addedNonTerminalCount ;
    GALGAS_string var_syntaxComponentName = enumerator_74767.current_mValue (HERE).mAttribute_string ;
    GALGAS_lstring var_lexiqueName ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList ;
    GALGAS_syntaxRuleListAST var_ruleList ;
    GALGAS_bool var_hasTranslateFeature ;
    constinArgument_inSemanticContext.mAttribute_mSyntaxComponentMapForSemanticAnalysis.method_searchKey (enumerator_74767.current_mValue (HERE), var_lexiqueName, var_nonterminalDeclarationList, var_ruleList, var_hasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1743)) ;
    const enumGalgasBool test_1 = object->mAttribute_mHasTranslateFeature.operator_and (var_hasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1751)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1751)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (enumerator_74767.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("as '").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1752)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1752)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1752))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1752)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = var_hasTranslateFeature.operator_and (object->mAttribute_mHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1753)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1753)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (object->mAttribute_mGrammarComponentName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("as '").add_operation (enumerator_74767.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1754)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1754)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1754))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1754)) ;
      }
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_lexiqueComponentName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_lexiqueComponentName = var_lexiqueName ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_lexiqueName.mAttribute_string.objectCompare (var_lexiqueComponentName.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_74767.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1760)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1760)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1761)).add_operation (var_lexiqueComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1761)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1761)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1762))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1760)) ;
      }
    }
    {
    routine_handleNonTerminalDeclarations (var_nonTerminalMapForGrammarAnalysis, var_nonterminalDeclarationList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1765)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList (var_nonTerminalMapForGrammarAnalysis, var_ruleList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1770)) ;
    }
    {
    routine_buildRuleList (var_nonTerminalMapForGrammarAnalysis, enumerator_74767.current_mValue (HERE), var_ruleList, var_actuallyUsedTerminalSymbolMap, var_syntaxComponentListForGrammarAnalysis, var_addedNonTerminalCount, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1775)) ;
    }
    GALGAS_uint var_i = GALGAS_uint ((uint32_t) 0U) ;
    if (var_addedNonTerminalCount.isValid ()) {
      uint32_t variant_76564 = var_addedNonTerminalCount.uintValue () ;
      bool loop_76564 = true ;
      while (loop_76564) {
        loop_76564 = GALGAS_bool (kIsStrictInf, var_i.objectCompare (var_addedNonTerminalCount.substract_operation (var_addedNonTerminalCountRef, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1784)))).isValid () ;
        if (loop_76564) {
          loop_76564 = GALGAS_bool (kIsStrictInf, var_i.objectCompare (var_addedNonTerminalCount.substract_operation (var_addedNonTerminalCountRef, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1784)))).boolValue () ;
        }
        if (loop_76564 && (0 == variant_76564)) {
          loop_76564 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1784)) ;
        }
        if (loop_76564) {
          variant_76564 -- ;
          var_nonTerminalToAddList.addAssign_operation (var_syntaxComponentName, var_i  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1785)) ;
          var_i.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1786)) ;
        }
      }
    }
    enumerator_74767.gotoNextObject () ;
  }
  GALGAS_stringset var_lexiqueComponentSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1790)) ;
  GALGAS_lstring var_inIndexingDirectory ;
  GALGAS_terminalMap joker_76979 ; // Joker input parameter
  GALGAS_indexingListAST joker_77015 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (var_lexiqueComponentName, joker_76979, joker_77015, var_inIndexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1791)) ;
  GALGAS_bool var_hasIndexing = var_inIndexingDirectory.mAttribute_location.reader_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1797)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1797)) ;
  const enumGalgasBool test_8 = var_hasIndexing.operator_and (object->mAttribute_mHasIndexing.mAttribute_bool.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1798)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1798)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mGrammarComponentName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_9, GALGAS_string ("the grammar does not enable indexing, but the '").add_operation (var_lexiqueComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1799)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1799)).add_operation (GALGAS_string ("' does"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1799))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1799)) ;
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_10 = var_hasIndexing.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1800)).operator_and (object->mAttribute_mHasIndexing.mAttribute_bool COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1800)).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_location location_11 (object->mAttribute_mHasIndexing.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_11, GALGAS_string ("the grammar enables indexing, but the '").add_operation (var_lexiqueComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1801)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1801)).add_operation (GALGAS_string ("' does not"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1801))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1801)) ;
    }
  }
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap ;
  GALGAS_uint var_startSymbolIndex ;
  var_nonTerminalMapForGrammarAnalysis.method_searchKey (object->mAttribute_mStartSymbolName, var_startSymbolIndex, var_startSymbolAltMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1807)) ;
  {
  routine_checkLabelMap (object->mAttribute_mStartSymbolName.mAttribute_location, object->mAttribute_mStartSymbolLabelList, var_nonTerminalMapForGrammarAnalysis.reader_locationForKey (object->mAttribute_mStartSymbolName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1812)), var_startSymbolAltMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1809)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1816)) ;
  cEnumerator_lstringlist enumerator_78220 (object->mAttribute_mUnusedNonterminalList, kEnumeration_up) ;
  while (enumerator_78220.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_78326 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_78220.current_mValue (HERE), var_nonterminalIndex, joker_78326, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1819)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar.modifier_insertKey (enumerator_78220.current_mValue (HERE), var_nonterminalIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1820)) ;
    }
    enumerator_78220.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 1823)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_78674 (var_nonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_78674.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis.addAssign_operation (enumerator_78674.current_lkey (HERE), enumerator_78674.current_mNonTerminalIndex (HERE), enumerator_78674.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1825)) ;
    enumerator_78674.gotoNextObject () ;
  }
  GALGAS_stringset var_implementationFileHeader = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1830)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_79168 (var_nonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_79168.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_79217 (enumerator_79168.current_mNonterminalSymbolParametersMap (HERE), kEnumeration_up) ;
    while (enumerator_79217.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_79258 (enumerator_79217.current_mFormalParametersList (HERE), kEnumeration_up) ;
      while (enumerator_79258.hasCurrentObject ()) {
        switch (enumerator_79258.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_79258.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1836)) ;
            categoryMethod_addHeaderFileName (var_t, var_implementationFileHeader, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1837)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_79258.gotoNextObject () ;
      }
      enumerator_79217.gotoNextObject () ;
    }
    enumerator_79168.gotoNextObject () ;
  }
  const enumGalgasBool test_12 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_12) {
    var_implementationFileHeader = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1844)) ;
  }
  GALGAS_string var_HTMLFilePath = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1847)).add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1847)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1847)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1847)) ;
  GALGAS_string var_grammarCppFile ;
  GALGAS_string var_grammarHTMLHelperContents ;
  {
  GALGAS_string temp_13 ;
  const enumGalgasBool test_14 = object->mAttribute_mHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1860)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration (GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1849)), object->mAttribute_mGrammarComponentName, object->mAttribute_mGrammarClass, var_startSymbolIndex, var_lexiqueComponentName.mAttribute_string, var_actuallyUsedTerminalSymbolMap, var_syntaxComponentListForGrammarAnalysis, var_unusedNonTerminalSymbolsForGrammar, var_HTMLFilePath, var_nonTerminalSymbolSortedListForGrammarAnalysis, var_hasIndexing, temp_13, var_grammarCppFile, var_grammarHTMLHelperContents, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1848)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_15) {
    var_HTMLFilePath.reader_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 1866)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1866)) ;
    GALGAS_bool joker_80728 ; // Joker input parameter
    var_grammarHTMLHelperContents.method_writeToFileWhenDifferentContents (var_HTMLFilePath, joker_80728, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1867)) ;
  }else if (kBoolFalse == test_15) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1869)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1876)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1876)), object->mAttribute_mGrammarComponentName.mAttribute_string, var_lexiqueComponentName.mAttribute_string, var_nonTerminalMapForGrammarAnalysis, var_nonTerminalToAddList, var_hasIndexing, object->mAttribute_mSyntaxComponents, object->mAttribute_mStartSymbolName.mAttribute_string, object->mAttribute_mHasTranslateFeature, var_grammarCppFile  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1874)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1872)) ;
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
  GALGAS_lexicalTypeMap var_lexicalTypeMap = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1899)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1902)) ;
  }
  cEnumerator_externRoutineListAST enumerator_82054 (object->mAttribute_mExternRoutineList, kEnumeration_up) ;
  while (enumerator_82054.hasCurrentObject ()) {
    GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1905)) ;
    cEnumerator_lexicalExternRoutineFormalArgumentListAST enumerator_82193 (enumerator_82054.current_mLexicalRoutineFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_82193.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType ;
      var_lexicalTypeMap.method_searchKey (enumerator_82193.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1908)) ;
      var_lexicalRoutineFormalArgumentList.addAssign_operation (enumerator_82193.current_mPassingMode (HERE), var_lexicalFormalArgumentType, enumerator_82193.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1909))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1909)) ;
      enumerator_82193.gotoNextObject () ;
    }
    {
    var_lexicalRoutineMap.modifier_insertKey (enumerator_82054.current_mRoutineName (HERE), var_lexicalRoutineFormalArgumentList, enumerator_82054.current_mErrorMessageList (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1911)) ;
    }
    enumerator_82054.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1915)) ;
  }
  cEnumerator_externFunctionListAST enumerator_82812 (object->mAttribute_mExternFunctionList, kEnumeration_up) ;
  while (enumerator_82812.hasCurrentObject ()) {
    GALGAS_lexicalFunctionFormalArgumentList var_lexicalFunctionFormalArgumentList = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1918)) ;
    cEnumerator_lexicalExternFunctionFormalArgumentListAST enumerator_82954 (enumerator_82812.current_mLexicalFunctionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_82954.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType ;
      var_lexicalTypeMap.method_searchKey (enumerator_82954.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1921)) ;
      var_lexicalFunctionFormalArgumentList.addAssign_operation (var_lexicalFormalArgumentType, enumerator_82954.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1922))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1922)) ;
      enumerator_82954.gotoNextObject () ;
    }
    GALGAS_lexicalTypeEnum var_returnedArgumentType ;
    var_lexicalTypeMap.method_searchKey (enumerator_82812.current_mReturnedTypeName (HERE), var_returnedArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1925)) ;
    {
    var_lexicalFunctionMap.modifier_insertKey (enumerator_82812.current_mFunctionName (HERE), var_lexicalFunctionFormalArgumentList, var_returnedArgumentType, GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1926)) ;
    }
    enumerator_82812.gotoNextObject () ;
  }
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1941)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToLower")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1930)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1931)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1932)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1933)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1934)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1935)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1936)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1937)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1938)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1939)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1940)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1941)) ;
  GALGAS_stringset var_externUnicodeTestFunctions = temp_0 ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext = GALGAS_lexiqueAnalysisContext::constructor_new (object->mAttribute_mLexiqueComponentName.mAttribute_string, var_lexicalRoutineMap, var_lexicalFunctionMap, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1948)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1949)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1950)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1951)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1952)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1953)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1954)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1955)), var_externUnicodeTestFunctions  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1944)) ;
  GALGAS_uint var_styleIndex = GALGAS_uint ((uint32_t) 1U) ;
  cEnumerator_lexicalStyleListAST enumerator_84432 (object->mAttribute_mLexicalStyleList, kEnumeration_up) ;
  while (enumerator_84432.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext.mAttribute_mStyleMap.modifier_insertKey (enumerator_84432.current_mName (HERE), enumerator_84432.current_mComment (HERE), var_styleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1961)) ;
    }
    var_styleIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1962)) ;
    enumerator_84432.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap, object->mAttribute_mLexicalAttributeList, var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1965)) ;
  }
  cEnumerator_terminalDeclarationListAST enumerator_84832 (object->mAttribute_mTerminalDeclarationList, kEnumeration_up) ;
  while (enumerator_84832.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_84832.current_mStyle (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1973)).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 1973)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_84971 ; // Joker input parameter
      var_lexiqueAnalysisContext.reader_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 1974)).method_searchKey (enumerator_84832.current_mStyle (HERE), joker_84971, var_terminalStyleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1974)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1976)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_85094 (enumerator_84832.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_85094.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_85094.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1979)) ;
      var_argumentTypeList.addAssign_operation (enumerator_85094.current_mFormalSelector (HERE), enumerator_85094.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1980)) ;
      enumerator_85094.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext.mAttribute_mTerminalMap.modifier_insertKey (enumerator_84832.current_mName (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1982)) ;
    }
    GALGAS_bool var_isEndOfTemplateMark = GALGAS_bool (false) ;
    GALGAS_bool var_atomicSelection = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_85513 (enumerator_84832.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_85513.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_85513.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1986)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_atomicSelection.boolEnum () ;
        if (kBoolTrue == test_3) {
          var_atomicSelection = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_3) {
          GALGAS_location location_4 (enumerator_85513.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("the 'nonAtomicSelection' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1990)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_85513.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1992)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (enumerator_85513.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_6, GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1993)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = var_isEndOfTemplateMark.boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_location location_8 (enumerator_85513.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_8, GALGAS_string ("the 'templateEndMark' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1995)) ;
          }else if (kBoolFalse == test_7) {
            var_isEndOfTemplateMark = GALGAS_bool (true) ;
          }
        }
      }
      enumerator_85513.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext.mAttribute_mTerminalList.addAssign_operation (enumerator_84832.current_mName (HERE), var_argumentTypeList, enumerator_84832.current_mSyntaxErrorMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2003)), var_isEndOfTemplateMark, var_atomicSelection, var_terminalStyleIndex  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2000)) ;
    enumerator_84832.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_86298 (object->mAttribute_mLexicalListDeclarationList, kEnumeration_up) ;
  while (enumerator_86298.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, enumerator_86298.current_mStyle (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2010)).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2010)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_lstring joker_86437 ; // Joker input parameter
      var_lexiqueAnalysisContext.reader_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 2011)).method_searchKey (enumerator_86298.current_mStyle (HERE), joker_86437, var_terminalStyleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2011)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2013)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_86560 (enumerator_86298.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_86560.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_86560.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2016)) ;
      var_argumentTypeList.addAssign_operation (enumerator_86560.current_mFormalSelector (HERE), enumerator_86560.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2017)) ;
      enumerator_86560.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2019)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 2020)) ;
    cEnumerator_lexicalListEntryListAST enumerator_86957 (enumerator_86298.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_86957.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage = enumerator_86298.current_mSyntaxErrorMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2022)).reader_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_86957.current_mTerminalSpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2022)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2022)) ;
      GALGAS_bool var_isEndOfTemplateMark = GALGAS_bool (false) ;
      GALGAS_bool var_atomicSelection = GALGAS_bool (true) ;
      cEnumerator_lstringlist enumerator_87196 (enumerator_86957.current_mFeatureList (HERE), kEnumeration_up) ;
      while (enumerator_87196.hasCurrentObject ()) {
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_87196.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2026)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const enumGalgasBool test_11 = var_atomicSelection.boolEnum () ;
          if (kBoolTrue == test_11) {
            var_atomicSelection = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_11) {
            GALGAS_location location_12 (enumerator_87196.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_12, GALGAS_string ("the 'nonAtomicSelection' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2030)) ;
          }
        }else if (kBoolFalse == test_10) {
          const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_87196.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2032)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
          if (kBoolTrue == test_13) {
            GALGAS_location location_14 (enumerator_87196.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_14, GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2033)) ;
          }else if (kBoolFalse == test_13) {
            const enumGalgasBool test_15 = var_isEndOfTemplateMark.boolEnum () ;
            if (kBoolTrue == test_15) {
              GALGAS_location location_16 (enumerator_87196.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_16, GALGAS_string ("the 'templateEndMark' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2035)) ;
            }else if (kBoolFalse == test_15) {
              var_isEndOfTemplateMark = GALGAS_bool (true) ;
            }
          }
        }
        enumerator_87196.gotoNextObject () ;
      }
      var_lexiqueAnalysisContext.mAttribute_mTerminalList.addAssign_operation (enumerator_86957.current_mTerminalSpelling (HERE), var_argumentTypeList, var_syntaxErrorMessage, var_isEndOfTemplateMark, var_atomicSelection, var_terminalStyleIndex  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2040)) ;
      {
      var_lexiqueAnalysisContext.mAttribute_mTerminalMap.modifier_insertKey (enumerator_86957.current_mTerminalSpelling (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2047)) ;
      }
      {
      var_lexicalTokenListMap.modifier_insertKey (enumerator_86957.current_mEntrySpelling (HERE), enumerator_86957.current_mTerminalSpelling (HERE), enumerator_86957.current_mFeatureList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2048)) ;
      }
      var_tokenSortedlist.addAssign_operation (enumerator_86957.current_mEntrySpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2049)).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2049)), enumerator_86957.current_mEntrySpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2049)), enumerator_86957.current_mTerminalSpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2049))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2049)) ;
      var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_86957.current_mEntrySpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2050))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2050)) ;
      enumerator_86957.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext.mAttribute_mLexicalTokenListMap.modifier_insertKey (enumerator_86298.current_mName (HERE), var_lexicalTokenListMap, var_tokenSortedlist, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2052)) ;
    }
    enumerator_86298.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageDeclarationListAST enumerator_88585 (object->mAttribute_mLexicalMessageDeclarationList, kEnumeration_up) ;
  while (enumerator_88585.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext.mAttribute_mLexicalMessageMap.modifier_insertKey (enumerator_88585.current_mMessageName (HERE), enumerator_88585.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2056)) ;
    }
    enumerator_88585.gotoNextObject () ;
  }
  cEnumerator_lexicalRuleListAST enumerator_88772 (object->mAttribute_mLexicalRuleList, kEnumeration_up) ;
  while (enumerator_88772.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalRule ((const cPtr_abstractLexicalRuleAST *) enumerator_88772.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2060)) ;
    enumerator_88772.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_88964 (var_lexiqueAnalysisContext.reader_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2063)), kEnumeration_up) ;
  while (enumerator_88964.hasCurrentObject ()) {
    const enumGalgasBool test_17 = enumerator_88964.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2064)).boolEnum () ;
    if (kBoolTrue == test_17) {
      GALGAS_location location_18 (enumerator_88964.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_18, GALGAS_string ("unused message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2065)) ;
    }
    enumerator_88964.gotoNextObject () ;
  }
  cEnumerator_metamodelTemplateDelimitorListAST enumerator_89144 (object->mAttribute_mTemplateDelimitorList, kEnumeration_up) ;
  while (enumerator_89144.hasCurrentObject ()) {
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_89144.current_mStartString (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2070))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2070)) ;
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_89144.current_mEndString (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2071))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2071)) ;
    GALGAS_bool var_preservesStartDelimiter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_89365 (enumerator_89144.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_89365.hasCurrentObject ()) {
      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_89365.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2074)).objectCompare (GALGAS_string ("preserved"))).boolEnum () ;
      if (kBoolTrue == test_19) {
        GALGAS_location location_20 (enumerator_89365.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_20, GALGAS_string ("only the 'preserved' feature is allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2075)) ;
      }else if (kBoolFalse == test_19) {
        const enumGalgasBool test_21 = var_preservesStartDelimiter.boolEnum () ;
        if (kBoolTrue == test_21) {
          GALGAS_location location_22 (enumerator_89365.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_22, GALGAS_string ("the 'preserved' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2077)) ;
        }else if (kBoolFalse == test_21) {
          var_preservesStartDelimiter = GALGAS_bool (true) ;
        }
      }
      enumerator_89365.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext.mAttribute_mTemplateDelimitorList.addAssign_operation (enumerator_89144.current_mStartString (HERE), enumerator_89144.current_mEndString (HERE), var_preservesStartDelimiter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2082)) ;
    enumerator_89144.gotoNextObject () ;
  }
  const enumGalgasBool test_23 = object->mAttribute_mIndexingDirectory.mAttribute_location.reader_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 2085)).boolEnum () ;
  if (kBoolTrue == test_23) {
    cEnumerator_indexingListAST enumerator_89896 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
    while (enumerator_89896.hasCurrentObject ()) {
      GALGAS_location location_24 (enumerator_89896.current_mIndexName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_24, GALGAS_string ("indexing declaration requires one 'indexing in \"path\";' declaration")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2087)) ;
      enumerator_89896.gotoNextObject () ;
    }
  }
  GALGAS_stringset var_indexNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 2090)) ;
  cEnumerator_indexingListAST enumerator_90081 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
  while (enumerator_90081.hasCurrentObject ()) {
    const enumGalgasBool test_25 = var_indexNameSet.reader_hasKey (enumerator_90081.current_mIndexName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2092)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2092)).boolEnum () ;
    if (kBoolTrue == test_25) {
      GALGAS_location location_26 (enumerator_90081.current_mIndexName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_26, GALGAS_string ("the '").add_operation (enumerator_90081.current_mIndexName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2093)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2093)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2093))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2093)) ;
    }
    var_indexNameSet.addAssign_operation (enumerator_90081.current_mIndexName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2095))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2095)) ;
    enumerator_90081.gotoNextObject () ;
  }
  cEnumerator_templateReplacementListAST enumerator_90372 (object->mAttribute_mTemplateReplacementList, kEnumeration_up) ;
  while (enumerator_90372.hasCurrentObject ()) {
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_90372.current_mMatchString (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2099))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2099)) ;
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_90372.current_mReplacementString (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2100))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2100)) ;
    enumerator_90372.gotoNextObject () ;
  }
  const enumGalgasBool test_27 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 2104)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_27) {
    GALGAS_string var_lexiqueClassName = object->mAttribute_mLexiqueComponentName.mAttribute_string ;
    GALGAS_string var_headerContents = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (inCompiler, var_lexiqueClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2108)), var_lexiqueAnalysisContext, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2107))) ;
    var_headerContents.dotAssign_operation (GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (inCompiler, var_lexiqueClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2113)), object->mAttribute_mLexicalListDeclarationList, var_lexiqueAnalysisContext, object->mAttribute_mIndexingListAST COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2112)))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2112)) ;
    GALGAS_string var_cppContents = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (inCompiler, var_lexiqueClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2120)), var_lexiqueAnalysisContext.reader_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 2121)), var_lexiqueAnalysisContext.reader_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2122)), var_lexiqueAnalysisContext.reader_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 2123)), var_lexiqueAnalysisContext.reader_mLexicalTokenListMap (SOURCE_FILE ("semanticAnalysis.galgas", 2124)), var_lexiqueAnalysisContext.reader_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 2125)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mTemplateDelimitorList, var_lexiqueClassName, object->mAttribute_mTemplateReplacementList, object->mAttribute_mLexicalStyleList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2119))) ;
    GALGAS_string var_cocoaHeader = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, var_lexiqueClassName, var_lexiqueAnalysisContext COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2135))) ;
    var_cocoaHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (inCompiler, var_lexiqueClassName, var_lexiqueAnalysisContext COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2139)))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2139)) ;
    GALGAS_string var_cocoaImplementation = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (var_lexiqueClassName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2145)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2145)), var_lexiqueClassName, var_lexiqueAnalysisContext.reader_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 2147)), var_lexiqueAnalysisContext.reader_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2148)), var_lexiqueAnalysisContext.reader_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 2149)), var_lexiqueAnalysisContext.reader_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 2150)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext, object->mAttribute_mTemplateReplacementList, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mIndexingListAST, object->mAttribute_mLexicalStyleList, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2144))) ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (var_lexiqueClassName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2164)), var_lexiqueClassName, var_headerContents, var_cppContents, var_cocoaHeader, var_cocoaImplementation  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2162)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2160)) ;
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
  callCategoryMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inAnalysisContext, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2440)) ;
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
  constinArgument_inNonterminalMap.method_searchKey (object->mAttribute_mNonterminalName, var_labelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2461)) ;
  GALGAS_formalParameterSignature var_signature ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mLabelName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2463)).objectCompare (GALGAS_string ("parse"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_signature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2464)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_formalParameterListForGeneration joker_107869 ; // Joker input parameter
    GALGAS_location joker_107883 ; // Joker input parameter
    var_labelMap.method_searchKey (object->mAttribute_mLabelName, joker_107869, var_signature, joker_107883, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2466)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mNonterminalName, GALGAS_string ("'<").add_operation (object->mAttribute_mNonterminalName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2472)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2472)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2472)), var_signature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2469)) ;
  }
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2480)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2488)), object->mAttribute_mLabelName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2489)), var_actualParameterListForGeneration, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2486))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2486)) ;
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
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2503)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2504)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2505)) ;
  cEnumerator_actualParameterListForGeneration enumerator_109305 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_109305.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_109305.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2507)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2516)) ;
    enumerator_109305.gotoNextObject () ;
  }
  GALGAS_string var_sdtResultVarName = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2519)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2519)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2519)) ;
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("C_String ").add_operation (var_sdtResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2521)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2521))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2521)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("nt_").add_operation (object->mAttribute_mNonterminalName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2523)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2523)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2523)).add_operation (object->mAttribute_mLabelName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2523)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2523)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2523))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2523)) ;
  cEnumerator_stringlist enumerator_110031 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_110031.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_110031.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2525))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2525)) ;
    enumerator_110031.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (var_sdtResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2528))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2528)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2530)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2530)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2531)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2531))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2531)) ;
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2532)) ;
  cEnumerator_stringlist enumerator_110565 (var_jokerParametersToReleaseList, kEnumeration_up) ;
  while (enumerator_110565.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_110565.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2540))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2540)) ;
    enumerator_110565.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_string var_cppName ;
  {
  GALGAS_string joker_112213 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, var_cppName, joker_112213, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2575)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2589)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2589)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2589)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2589)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2589)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2589)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2590)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2590)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2590))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2588)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2592)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualParameterTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2620)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2623)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2623)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2623)).add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2623)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2623)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2623)).add_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2624)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2624)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2624))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2622)) ;
    }
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2628)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2628)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_expectedType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2629)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2631)), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2630)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualParameterTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2658)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2661)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2661)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2661)).add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2661)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2661)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2661)).add_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2662)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2662)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2662))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2660)) ;
    }
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2666)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2666)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_expectedType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2667)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2670)), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2669)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2696)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2697)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2707)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2708)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  {
  GALGAS_string joker_119062 ; // Joker input parameter
  GALGAS_string joker_119065 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, joker_119062, joker_119065, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2710)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2714)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2714)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2714)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2714)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2714)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2714)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2715)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2715)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2715))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2713)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2725)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2726)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2728)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2728)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2729)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2730)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2734)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2734)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2734)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2734)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2734)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2734)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2735)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2735)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2735))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2733)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2745)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2746)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2748)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2748)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2749)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2750)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2754)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2754)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2754)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2754)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2754)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2754)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2755)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2755)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2755))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2753)) ;
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
    ioArgument_ioGeneratedCode.dotAssign_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2775)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2775)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2775)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2775))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2775)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2776)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2776)) ;
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
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2796)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2796)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_cppName.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2797)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2797)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2797))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2797)) ;
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
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2807)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2807)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2808)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2808)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2808)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2808))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2808)) ;
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
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2818)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2818)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2819)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2819)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2819)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2819))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2819)) ;
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
  constinArgument_inTerminalMap.method_searchKey (object->mAttribute_mTerminalName, var_sentAttributeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2835)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualInputParameterList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2837)).objectCompare (var_sentAttributeList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2837)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_sentAttributeList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2840)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mAttribute_mActualInputParameterList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2843)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_location location_5 (object->mAttribute_mTerminalName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("naming the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2839)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2839)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2839)).add_operation (var_sentAttributeList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2839)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2839)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2839)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2839)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2840)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2840)).add_operation (object->mAttribute_mActualInputParameterList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2842)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2842)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2841)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2842)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2842))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2838)) ;
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList = GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2846)) ;
  cEnumerator_actualInputParameterListAST enumerator_125916 (object->mAttribute_mActualInputParameterList, kEnumeration_up) ;
  cEnumerator_lexicalSentValueList enumerator_125941 (var_sentAttributeList, kEnumeration_up) ;
  while (enumerator_125916.hasCurrentObject () && enumerator_125941.hasCurrentObject ()) {
    callCategoryMethod_analyzeInputParameter ((const cPtr_abstractInputParameter *) enumerator_125916.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, enumerator_125941.current_mLexicalType (HERE), enumerator_125941.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2848)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_125941.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_125916.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_125941.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_8) {
        temp_7 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_9 (enumerator_125916.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_9, GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_125941.current_mLexicalFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2856)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2856)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2856)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2856))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2856)) ;
      GALGAS_location location_10 (enumerator_125941.current_mLexicalFormalSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_10, GALGAS_string ("the formal selector is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2857)) ;
    }
    enumerator_125916.gotoNextObject () ;
    enumerator_125941.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_126478 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_126478.hasCurrentObject ()) {
    const enumGalgasBool test_11 = constinArgument_inIndexNameSet.reader_hasKey (enumerator_126478.current_mValue_30_ (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2862)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2862)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2862)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_126587 (constinArgument_inIndexNameSet, kEnumeration_up) ;
      while (enumerator_126587.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "  - ").add_operation (enumerator_126587.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2865))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2865)) ;
        enumerator_126587.gotoNextObject () ;
      }
      GALGAS_location location_12 (enumerator_126478.current_mValue_30_ (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_126478.current_mValue_30_ (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2867)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2867)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique; available names are:"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2867)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2867))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2867)) ;
    }
    enumerator_126478.gotoNextObject () ;
  }
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2871)) ;
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2876)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, constinArgument_inLexiqueName, var_terminalCheckAssignementList, object->mAttribute_mIndexingKeyList, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2882))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2882)) ;
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
  cEnumerator_terminalCheckAssignementList enumerator_127921 (object->mAttribute_mTerminalCheckAssignementList, kEnumeration_up) ;
  while (enumerator_127921.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_127921.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_127921.current_mTypeName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2903)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2903)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2903))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2903)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_127921.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2906)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2906)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2906)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2906)).add_operation (enumerator_127921.current_mSourceLexicalAttributeName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2907)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2906)).add_operation (GALGAS_string (" () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2907))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2906)) ;
    enumerator_127921.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_128305 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_128305.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2912)).add_operation (GALGAS_string ("->enterIndexing (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2912)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2913)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2913)).add_operation (enumerator_128305.current_mValue_30_ (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2913)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2913)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2913)).add_operation (enumerator_128305.current_mValue_31_ (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("semanticAnalysis.galgas", 2914)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2914)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2914))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2912)) ;
    enumerator_128305.gotoNextObject () ;
  }
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->preceedingSeparatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2917)) ;
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2923)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2930)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2930)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2931)).add_operation (GALGAS_string ("->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2931)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2931)).add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2932)).add_operation (object->mAttribute_mTerminalName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2932)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2932)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2932)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2933)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2933)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2933))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2931)) ;
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
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2987)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2989)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mRepeatedInstructionList, object->mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2992)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3007)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_131873 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_131873.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_131873.current_mSyntaxInstructionList (HERE), enumerator_131873.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3010)) ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_131873.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3024)) ;
    enumerator_131873.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_repeat_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3027)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex, var_repeated_5F_instructionList, object->mAttribute_mEndOf_5F_repeat_5F_instruction, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3029))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3029)) ;
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
  GALGAS_string var_repeatFlagCppName = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3047)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3047)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3047)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3049)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3049))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3049)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_repeated_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3050)) ;
  }
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3058)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3059)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3059)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3059)).add_operation (object->mAttribute_mChoiceIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3059)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3059)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3059)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3059)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3059)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3059))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3059)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_133860 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_133810 ((uint32_t) 0) ;
  while (enumerator_133860.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case ").add_operation (index_133810.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3061)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3061)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3061)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3061))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3061)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_133860.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3062)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("} break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3070)) ;
    enumerator_133860.gotoNextObject () ;
    index_133810.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3060)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("default:\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3072)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3073)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3073))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3073)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3074)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3075)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3076)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3077)) ;
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
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3094)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3096)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3098)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_135275 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_135275.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_135275.current_mSyntaxInstructionList (HERE), enumerator_135275.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3101)) ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_135275.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3115)) ;
    enumerator_135275.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_select_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3118)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3119))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3119)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3135)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3135)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3136)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3136)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3136)).add_operation (object->mAttribute_mChoiceIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3136)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3136)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3136)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3136)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3136)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3136))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3136)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_136763 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_136713 ((uint32_t) 0) ;
  while (enumerator_136763.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case ").add_operation (index_136713.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3138)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3138)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3138)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3138))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3138)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_136763.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3139)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("} break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3147)) ;
    enumerator_136763.gotoNextObject () ;
    index_136713.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3137)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("default:\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3149)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3150)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3151)) ;
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3168)) ;
  GALGAS_uint var_referenceSelectMethodCount = ioArgument_ioSelectMethodCount ;
  cEnumerator_listOfSyntaxInstructionList enumerator_137988 (object->mAttribute_mParseRewindBranchList, kEnumeration_up) ;
  while (enumerator_137988.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount ;
    GALGAS_semanticInstructionListForGeneration var_instructionList = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3172)) ;
    cEnumerator_syntaxInstructionList enumerator_138156 (enumerator_137988.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_138156.hasCurrentObject ()) {
      callCategoryMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_138156.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3174)) ;
      enumerator_138156.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_137988.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3187)) ;
    enumerator_137988.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches = var_listOfSemanticInstructionListForGeneration ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  {
  GALGAS_location joker_138831 ; // Joker input parameter
  var_tempListOfBranches.modifier_popFirst (var_instructionList, joker_138831, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3192)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3193)) ;
  GALGAS_bool var_ok = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_139008 (var_tempListOfBranches, kEnumeration_up) ;
  bool bool_0 = var_ok.isValidAndTrue () ;
  if (enumerator_139008.hasCurrentObject () && bool_0) {
    while (enumerator_139008.hasCurrentObject () && bool_0) {
      var_ok = function_compareSyntaxSignature (var_referenceSignature, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_139008.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3198)), enumerator_139008.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3196)) ;
      enumerator_139008.gotoNextObject () ;
      if (enumerator_139008.hasCurrentObject ()) {
        bool_0 = var_ok.isValidAndTrue () ;
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3203))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3203)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3217)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3217)) ;
  }
  GALGAS_string var_parsingContextVar = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3218)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3218)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3218)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3219)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3219)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3219)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3219)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3219))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3219)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_140196 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_140196.hasCurrentObject ()) {
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_140196.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3222)) ;
    }
    if (enumerator_140196.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3231)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3231)).add_operation (var_parsingContextVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3231)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3231))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3231)) ;
    }
    enumerator_140196.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("//-------- END OF @parseRewindInstructionForGeneration\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3233)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3252)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variant_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3251)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3257)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfVariantExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3259)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3259)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3259)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3259)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3260)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3260)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3260))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3258)) ;
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3265)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3264)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_while_5F_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3270)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfWhileExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3272)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3272)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3272)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3272)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3273)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3273)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3273))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3271)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3277)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mDoInstructionList, object->mAttribute_mEndOfInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3280)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3295)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_variant_5F_expression, var_while_5F_expression, var_instructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3297))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3297)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3312)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3312)) ;
  }
  GALGAS_string var_variantVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3316)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3318)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3318))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3318)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3319)) ;
  }
  GALGAS_string var_variantVar = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3320)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3320)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3320)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("uint32_t ").add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321)).add_operation (var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321)) ;
  GALGAS_string var_loopVar = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3323)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3323)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3323)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3324)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3324))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3324)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3325)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3325))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3325)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3326)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (var_loopVar.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3327))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3327)) ;
  GALGAS_string var_whileVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3329)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_whileVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3330)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3330))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3330)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3331)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (var_loopVar.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3332))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3332)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_variantVar.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3333))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3333)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3334)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3334)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3334))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3334)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3335)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3343)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3343))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3343)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3344)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3345)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3346)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3347)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3348)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3349)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("//--- 'parse'\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3351)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3354)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3352)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3360)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3360))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3360)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("//-------- END OF @parseLoopInstructionForGeneration\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3361)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhenExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3380)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_when_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3379)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3386)) ;
  }
  GALGAS_uint var_localSelectMethodCount = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mWhenInstructionList, object->mAttribute_mEndOfWhenInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount, var_when_5F_instructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3390)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mElseInstructionList, object->mAttribute_mEndOfElseInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3406)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3421)) ;
  }
  GALGAS_bool var_ok = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3424)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3425)), object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3423)) ;
  const enumGalgasBool test_0 = var_ok.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_when_5F_expression, var_when_5F_instructionListForGeneration, var_else_5F_instructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3430))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3430)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3448)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3449)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3449))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3449)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3450)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3458)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3459)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3467)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 3483)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3484)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3488)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3487)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3494)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' expresion should be an @string expression")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3495)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_expression  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3498))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3498)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3511)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3513)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3513)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3514)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3514)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3514)).add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3515)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3515)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3515)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3515)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3515)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3515))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3514)) ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@selfCopyInExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfCopyInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfCopyInExpressionForGeneration * object = (const cPtr_selfCopyInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selfCopyInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 46)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 46)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mSelfCppName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 48)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfCopyInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_selfCopyInExpressionForGeneration.mSlotID,
                                          categoryMethod_selfCopyInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfCopyInExpressionForGeneration_generateExpression (defineCategoryMethod_selfCopyInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@hereExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_hereExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                           GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 59)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 59)) ;
  }
  outArgument_outCppExpression = function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 60)).add_operation (GALGAS_string ("->here ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 60)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_hereExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_hereExpressionForGeneration.mSlotID,
                                          categoryMethod_hereExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_hereExpressionForGeneration_generateExpression (defineCategoryMethod_hereExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@trueExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_trueExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
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

static void defineCategoryMethod_trueExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                          categoryMethod_trueExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_trueExpressionForGeneration_generateExpression (defineCategoryMethod_trueExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@falseExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_falseExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
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

static void defineCategoryMethod_falseExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_falseExpressionForGeneration.mSlotID,
                                          categoryMethod_falseExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_falseExpressionForGeneration_generateExpression (defineCategoryMethod_falseExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalCharExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalCharExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalCharExpressionForGeneration * object = (const cPtr_literalCharExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalCharExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (TO_UNICODE (").add_operation (object->mAttribute_mCharacter.reader_uint (SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)).reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalCharExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalCharExpressionForGeneration.mSlotID,
                                          categoryMethod_literalCharExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalCharExpressionForGeneration_generateExpression (defineCategoryMethod_literalCharExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalStringExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string (").add_operation (object->mAttribute_mString.reader_utf_38_Representation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 107)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 107)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalStringExpressionForGeneration.mSlotID,
                                          categoryMethod_literalStringExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringExpressionForGeneration_generateExpression (defineCategoryMethod_literalStringExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalDoubleExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalDoubleExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalDoubleExpressionForGeneration * object = (const cPtr_literalDoubleExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalDoubleExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_double (").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 119)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 119)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalDoubleExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration.mSlotID,
                                          categoryMethod_literalDoubleExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalDoubleExpressionForGeneration_generateExpression (defineCategoryMethod_literalDoubleExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalUIntExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUIntExpressionForGeneration * object = (const cPtr_literalUIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalUIntExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint ((uint32_t) ").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 130)).add_operation (GALGAS_string ("U)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 130)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUIntExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration.mSlotID,
                                          categoryMethod_literalUIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUIntExpressionForGeneration_generateExpression (defineCategoryMethod_literalUIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalUInt64ExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUInt_36__34_ExpressionForGeneration * object = (const cPtr_literalUInt_36__34_ExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint_36__34_ ((uint64_t) ").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 141)).add_operation (GALGAS_string ("ULL)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 141)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration.mSlotID,
                                          categoryMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (defineCategoryMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalSIntExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSIntExpressionForGeneration * object = (const cPtr_literalSIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalSIntExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint ((int32_t) ").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 152)).add_operation (GALGAS_string ("L)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 152)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSIntExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration.mSlotID,
                                          categoryMethod_literalSIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSIntExpressionForGeneration_generateExpression (defineCategoryMethod_literalSIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalBigIntExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBigIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBigIntExpressionForGeneration * object = (const cPtr_literalBigIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalBigIntExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bigint (\"").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 165)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 165)) ;
  }
  outArgument_outCppExpression.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 166))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 166)) ;
  outArgument_outCppExpression.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 167)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 167))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 167)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBigIntExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration.mSlotID,
                                          categoryMethod_literalBigIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBigIntExpressionForGeneration_generateExpression (defineCategoryMethod_literalBigIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalSInt64ExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSInt_36__34_ExpressionForGeneration * object = (const cPtr_literalSInt_36__34_ExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint_36__34_ ((int64_t) ").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 178)).add_operation (GALGAS_string ("LL)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 178)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration.mSlotID,
                                          categoryMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (defineCategoryMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@defaultConstructorExpressionForGeneration generateExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_defaultConstructorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                         GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionForGeneration * object = (const cPtr_defaultConstructorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 190)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 192)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 192)).add_operation (object->mAttribute_mResultType.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 194)).reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 193)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 194)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 195)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 195)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_defaultConstructorExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration.mSlotID,
                                          categoryMethod_defaultConstructorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_defaultConstructorExpressionForGeneration_generateExpression (defineCategoryMethod_defaultConstructorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@constructorExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionForGeneration * object = (const cPtr_constructorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 206)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 207)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_10338 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_10338.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_10338.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 210)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 211)) ;
    enumerator_10338.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mConstructorType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 213)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 213)).add_operation (object->mAttribute_mConstructorName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 214)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 214)) ;
  cEnumerator_stringlist enumerator_10756 (var_parameterList, kEnumeration_up) ;
  while (enumerator_10756.hasCurrentObject ()) {
    outArgument_outCppExpression.dotAssign_operation (enumerator_10756.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 217)) ;
    if (enumerator_10756.hasNextObject ()) {
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 218)) ;
    }
    enumerator_10756.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma = GALGAS_bool (kIsStrictSup, var_parameterList.reader_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 220)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = var_needsComma.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 223)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 225)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 225)) ;
    }
    outArgument_outCppExpression.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 226))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 226)) ;
    var_needsComma = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_2 = var_needsComma.boolEnum () ;
  if (kBoolTrue == test_2) {
    outArgument_outCppExpression.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230)) ;
  }else if (kBoolFalse == test_2) {
    outArgument_outCppExpression.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 232)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 232))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 232)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_constructorExpressionForGeneration.mSlotID,
                                          categoryMethod_constructorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionForGeneration_generateExpression (defineCategoryMethod_constructorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionValueExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionValueExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionValueExpressionForGeneration * object = (const cPtr_optionValueExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionValueExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 248)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 249))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 249)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 251)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 251)).add_operation (object->mAttribute_mOptionComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 251)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 251)).add_operation (object->mAttribute_mOptionEntryName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 252)).add_operation (GALGAS_string (".reader_value ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 252)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionValueExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_optionValueExpressionForGeneration.mSlotID,
                                          categoryMethod_optionValueExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionValueExpressionForGeneration_generateExpression (defineCategoryMethod_optionValueExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionCharExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionCharExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionCharExpressionForGeneration * object = (const cPtr_optionCharExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionCharExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 263)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 264))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 264)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (object->mAttribute_mOptionComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 266)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 266)).add_operation (object->mAttribute_mOptionEntryName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 267)).add_operation (GALGAS_string (".reader_char ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 267)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionCharExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_optionCharExpressionForGeneration.mSlotID,
                                          categoryMethod_optionCharExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionCharExpressionForGeneration_generateExpression (defineCategoryMethod_optionCharExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@optionStringExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionStringExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionStringExpressionForGeneration * object = (const cPtr_optionStringExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionStringExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 278)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 279))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 279)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (object->mAttribute_mOptionComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 281)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 281)).add_operation (object->mAttribute_mOptionEntryName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 282)).add_operation (GALGAS_string (".reader_string ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 282)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionStringExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_optionStringExpressionForGeneration.mSlotID,
                                          categoryMethod_optionStringExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionStringExpressionForGeneration_generateExpression (defineCategoryMethod_optionStringExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@optionCommentExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionCommentExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionCommentExpressionForGeneration * object = (const cPtr_optionCommentExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionCommentExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 293)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 294))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 294)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (object->mAttribute_mOptionComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 296)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 296)).add_operation (object->mAttribute_mOptionEntryName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 297)).add_operation (GALGAS_string (".reader_comment ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 297)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionCommentExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration.mSlotID,
                                          categoryMethod_optionCommentExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionCommentExpressionForGeneration_generateExpression (defineCategoryMethod_optionCommentExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@concatExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_concatExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_concatExpressionForGeneration * object = (const cPtr_concatExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_concatExpressionForGeneration) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 310)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 313)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_concat ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 315)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 315)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 316)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 316)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 316)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_concatExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_concatExpressionForGeneration.mSlotID,
                                          categoryMethod_concatExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_concatExpressionForGeneration_generateExpression (defineCategoryMethod_concatExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@orExpressionForGeneration generateExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionForGeneration * object = (const cPtr_orExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 327)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 327)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 330)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 333)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_or ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 335)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 335)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 336)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 336)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_orExpressionForGeneration.mSlotID,
                                          categoryMethod_orExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orExpressionForGeneration_generateExpression (defineCategoryMethod_orExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@orShortExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orShortExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GALGAS_string & outArgument_outCppExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionForGeneration * object = (const cPtr_orShortExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 347)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 347)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 349)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 357)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 357)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_bool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 358)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 358)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 358)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 358))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 358)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 359)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 359))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 359)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 361)) ;
  }
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 362)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_testVar.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 369)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 369)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 369))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 369)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 370)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 371)) ;
  outArgument_outCppExpression = var_testVar ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orShortExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_orShortExpressionForGeneration.mSlotID,
                                          categoryMethod_orShortExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orShortExpressionForGeneration_generateExpression (defineCategoryMethod_orShortExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@xorExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_xorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionForGeneration * object = (const cPtr_xorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 384)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 384)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 386)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 394)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_xor ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 402)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 402)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 403)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 403)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_xorExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_xorExpressionForGeneration.mSlotID,
                                          categoryMethod_xorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorExpressionForGeneration_generateExpression (defineCategoryMethod_xorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@closedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_closedSliceExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionForGeneration * object = (const cPtr_closedSliceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 414)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 414)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 416)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 424)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 433)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 433)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 433)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_closedSliceExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration.mSlotID,
                                          categoryMethod_closedSliceExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_closedSliceExpressionForGeneration_generateExpression (defineCategoryMethod_closedSliceExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@openedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_openedSliceExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionForGeneration * object = (const cPtr_openedSliceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 445)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 445)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 447)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 455)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 464)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 464)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 464)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_openedSliceExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration.mSlotID,
                                          categoryMethod_openedSliceExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_openedSliceExpressionForGeneration_generateExpression (defineCategoryMethod_openedSliceExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@andExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionForGeneration * object = (const cPtr_andExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 476)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 476)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 478)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 486)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_and ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 494)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 494)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 495)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 495)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_andExpressionForGeneration.mSlotID,
                                          categoryMethod_andExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andExpressionForGeneration_generateExpression (defineCategoryMethod_andExpressionForGeneration_generateExpression, NULL) ;

