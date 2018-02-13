#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-23.h"


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
                                                                             const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                             const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionAST * object = (const cPtr_incDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_5360 ;
  GALGAS_string var_targetVariableCppName_5392 ;
  {
  GALGAS_string joker_5488 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mReceiverName, var_targetType_5360, var_targetVariableCppName_5392, joker_5488, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 163)) ;
  }
  cEnumerator_lstringlist enumerator_5523 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_5523.hasCurrentObject ()) {
    GALGAS_propertyMap var_attributeMap_5547 = var_targetType_5360.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 165)) ;
    var_attributeMap_5547.method_searchKey (enumerator_5523.current_mValue (HERE), var_targetType_5360, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 166)) ;
    enumerator_5523.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = var_targetType_5360.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 172)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 172)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 172)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_5360.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 174)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 174)), fixItArray1  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 173)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_targetVariableCppName_5392, var_targetType_5360, object->mProperty_mStructAttributeList, object->mProperty_mKind  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 177))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 177)) ;
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
                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecNoOVFInstructionAST * object = (const cPtr_incDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecNoOVFInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_6648 ;
  GALGAS_string var_targetVariableCppName_6680 ;
  {
  GALGAS_string joker_6776 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mReceiverName, var_targetType_6648, var_targetVariableCppName_6680, joker_6776, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 198)) ;
  }
  cEnumerator_lstringlist enumerator_6811 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_6811.hasCurrentObject ()) {
    GALGAS_propertyMap var_attributeMap_6835 = var_targetType_6648.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 200)) ;
    var_attributeMap_6835.method_searchKey (enumerator_6811.current_mValue (HERE), var_targetType_6648, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 201)) ;
    enumerator_6811.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = var_targetType_6648.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 207)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 207)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 207)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_6648.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 209)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 209)), fixItArray1  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 208)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_targetVariableCppName_6680, var_targetType_6648, object->mProperty_mStructAttributeList, object->mProperty_mKind  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 212))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 212)) ;
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
                                                                                      const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecNoOVFInstructionAST * object = (const cPtr_selfIncDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecNoOVFInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_7967 ;
  GALGAS_string var_selfObjectCppName_7995 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 233)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 234)) ;
    var_selfObjectCppName_7995.drop () ; // Release error dropped variable
    var_selfTypeProxy_7967.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_7995 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_7967 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  const enumGalgasBool test_2 = var_selfTypeProxy_7967.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 240)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 240)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 240)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_7967.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 242)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 242)), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 241)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_selfObjectCppName_7995, var_selfTypeProxy_7967, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 249)), object->mProperty_mKind  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 245))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 245)) ;
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
                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecInstructionAST * object = (const cPtr_selfIncDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_9326 ;
  GALGAS_string var_selfObjectCppName_9354 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 266)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 267)) ;
    var_selfObjectCppName_9354.drop () ; // Release error dropped variable
    var_selfTypeProxy_9326.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_9354 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_9326 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  const enumGalgasBool test_2 = var_selfTypeProxy_9326.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 273)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 273)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 273)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_9326.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 275)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 275)), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 274)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_selfObjectCppName_9354, var_selfTypeProxy_9326, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 282)), object->mProperty_mKind  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 278))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 278)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mReceiverCppName COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 319)) ;
  }
  GALGAS_string var_receiverCppName_11497 = object->mProperty_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_11549 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_11549.hasCurrentObject ()) {
    var_receiverCppName_11497.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_11549.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-inc-dec.galgas", 322)).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 322)) ;
    enumerator_11549.gotoNextObject () ;
  }
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_11497.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 329)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 329)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_11497.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 332)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 333)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 333)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mReceiverCppName COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 347)) ;
  }
  GALGAS_string var_receiverCppName_12695 = object->mProperty_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_12747 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_12747.hasCurrentObject ()) {
    var_receiverCppName_12695.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_12747.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-inc-dec.galgas", 350)).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 350)) ;
    enumerator_12747.gotoNextObject () ;
  }
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_12695.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 355)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_12695.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 357)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_m_5F_if_5F_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_m_5F_then_5F_instructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 73)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_m_5F_else_5F_instructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 74)) ;
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
                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_3774 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_m_5F_if_5F_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 92)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_3774, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 97)) ;
  }
  GALGAS_semanticExpressionForGeneration var_if_5F_expression_4005 ;
  {
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mProperty_mEndOf_5F_if_5F_instruction, var_analyzed_5F_if_5F_expression_3774, var_if_5F_expression_4005, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 99)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_4351 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 110)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 111)), object->mProperty_m_5F_then_5F_instructionList, object->mProperty_mEndOf_5F_then_5F_branch, ioArgument_ioVariableMap, var_then_5F_instructionList_4351, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 106)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_4700 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 122)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 123)), object->mProperty_m_5F_else_5F_instructionList, object->mProperty_mEndOf_5F_if_5F_instruction, ioArgument_ioVariableMap, var_else_5F_instructionList_4700, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 118)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 129)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (object->mProperty_mEndOf_5F_then_5F_branch, var_if_5F_expression_4005, var_then_5F_instructionList_4351, var_else_5F_instructionList_4700  COMMA_SOURCE_FILE ("instruction-if.galgas", 131))  COMMA_SOURCE_FILE ("instruction-if.galgas", 131)) ;
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
  GALGAS_string var_cppVarName_5977 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mIFexpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_5977, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 160)) ;
  GALGAS_string var_testVar_6170 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 167)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 167)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_6170, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 168)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 168)).add_operation (var_cppVarName_5977, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 168)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 168)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_6170, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 170)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 170)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_m_5F_then_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 171)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_m_5F_else_5F_instructionList.getter_length (SOURCE_FILE ("instruction-if.galgas", 179)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_6170, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 180)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 180)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_m_5F_else_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 181)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 190)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 93)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_3870 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mProperty_mOptionalTypeName, joker_3870 COMMA_SOURCE_FILE ("instruction-let.galgas", 102)) ;
    }
  }
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
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
                                                                                             const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_undefinedLocalConstantDeclarationAST * object = (const cPtr_undefinedLocalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_undefinedLocalConstantDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_4556 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mConstantTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 118)) ;
  GALGAS_string var_targetVariableCppName_4684 = GALGAS_string ("var_").add_operation (object->mProperty_mConstantName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (object->mProperty_mConstantName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).getter_string (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)) ;
  {
  ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (object->mProperty_mConstantName, var_targetType_4556, var_targetVariableCppName_4684, var_targetVariableCppName_4684, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 120)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (var_targetType_4556, var_targetVariableCppName_4684  COMMA_SOURCE_FILE ("instruction-let.galgas", 127))  COMMA_SOURCE_FILE ("instruction-let.galgas", 127)) ;
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
                                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localConstantDeclarationWithAssignmentAST * object = (const cPtr_localConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localConstantDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_5807 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 145)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_5807, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 142)) ;
  GALGAS_string var_targetVariableCppName_5866 = GALGAS_string ("var_").add_operation (object->mProperty_mVariableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).add_operation (object->mProperty_mVariableName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).getter_string (SOURCE_FILE ("instruction-let.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mProperty_mVariableName, var_expression_5807.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 152)), var_targetVariableCppName_5866, var_targetVariableCppName_5866, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 152)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_5807.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 155)), GALGAS_bool (true), var_targetVariableCppName_5866, var_expression_5807  COMMA_SOURCE_FILE ("instruction-let.galgas", 154))  COMMA_SOURCE_FILE ("instruction-let.galgas", 154)) ;
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
                                                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * object = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_6792 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 170)) ;
  GALGAS_semanticExpressionForGeneration var_expression_7140 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_6792, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7140, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 172)) ;
  GALGAS_string var_targetVariableCppName_7199 = GALGAS_string ("var_").add_operation (object->mProperty_mVariableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).add_operation (object->mProperty_mVariableName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).getter_string (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)) ;
  const enumGalgasBool test_0 = object->mProperty_mIsConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertLocalConstant (object->mProperty_mVariableName, var_targetType_6792, var_targetVariableCppName_7199, var_targetVariableCppName_7199, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 183)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mProperty_mVariableName, var_targetType_6792, var_targetVariableCppName_7199, var_targetVariableCppName_7199, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 185)) ;
    }
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_6792, var_expression_7140.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 188)), object->mProperty_mInstructionLocation, var_expression_7140, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 188)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType_6792, object->mProperty_mIsConstant, var_targetVariableCppName_7199, var_expression_7140  COMMA_SOURCE_FILE ("instruction-let.galgas", 190))  COMMA_SOURCE_FILE ("instruction-let.galgas", 190)) ;
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
  extensionMethod_addHeaderFileName (object->mProperty_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 225)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mProperty_mTargetType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)).add_operation (object->mProperty_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 226)) ;
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
  extensionMethod_addHeaderFileName (object->mProperty_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 238)) ;
  GALGAS_string var_sourceVar_9975 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_9975, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 239)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mProperty_mTargetType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (object->mProperty_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (var_sourceVar_9975, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 246)) ;
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
  cEnumerator_logListAST enumerator_2083 (object->mProperty_mLogList, kENUMERATION_UP) ;
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
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionAST * object = (const cPtr_logInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionAST) ;
  cEnumerator_logListAST enumerator_2741 (object->mProperty_mLogList, kENUMERATION_UP) ;
  while (enumerator_2741.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_2825 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_2741.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-log.galgas", 80)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2825, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 77)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_2741.current_mLogMessage (HERE), var_expression_2825  COMMA_SOURCE_FILE ("instruction-log.galgas", 86))  COMMA_SOURCE_FILE ("instruction-log.galgas", 86)) ;
    enumerator_2741.gotoNextObject () ;
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
  GALGAS_string var_logVar_4132 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLogExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_4132, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 109)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_4132.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 110)).add_operation (object->mProperty_mLogMessage.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("instruction-log.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 110)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 110)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mLogMessage.getter_location (SOURCE_FILE ("instruction-log.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 111)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 110)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mVariantExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 78)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLoopExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 79)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mFirstInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 80)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mSecondInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 81)) ;
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
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionAST * object = (const cPtr_loopInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_variantExpression_3789 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mVariantExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 99)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variantExpression_3789, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 96)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variantExpression_3789.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 105)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfVariantExpression, GALGAS_string ("the variant expression type should be '@").add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (var_variantExpression_3789.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 107)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), fixItArray1  COMMA_SOURCE_FILE ("instruction-loop.galgas", 106)) ;
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_4420 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLoopExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 114)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression_4420, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 111)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_loopExpression_4420.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 120)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfLoopExpression, GALGAS_string ("the loop expression type should be '@").add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (var_loopExpression_4420.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 122)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop.galgas", 121)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 125)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_5140 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 132)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 133)), object->mProperty_mFirstInstructions, object->mProperty_mEndOfFirstInstructions, ioArgument_ioVariableMap, var_first_5F_instructionList_5140, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 128)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_5525 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 145)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 146)), object->mProperty_mSecondInstructions, object->mProperty_mEndOfSecondInstructions, ioArgument_ioVariableMap, var_second_5F_instructionList_5525, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 141)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOfLoopInstruction, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 153)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_variantExpression_3789, var_first_5F_instructionList_5140, var_loopExpression_4420, var_second_5F_instructionList_5525  COMMA_SOURCE_FILE ("instruction-loop.galgas", 155))  COMMA_SOURCE_FILE ("instruction-loop.galgas", 155)) ;
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
  GALGAS_string var_variantCppVarName_7311 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_7311, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 185)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_7311, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 193)) ;
  }
  GALGAS_string var_variantVar_7449 = GALGAS_string ("variant_").add_operation (object->mProperty_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_7449, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (var_variantCppVarName_7311, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)) ;
  GALGAS_string var_loopVar_7628 = GALGAS_string ("loop_").add_operation (object->mProperty_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 199)) ;
  }
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mFirstInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 200)) ;
  }
  GALGAS_string var_loopExpressionVar_8069 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLoopExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_8069, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 209)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7628.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopExpressionVar_8069, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (var_loopExpressionVar_8069, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_variantVar_7449, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (")) {\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (GALGAS_string (" = false ;\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (extensionGetter_sourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string (") ;\n"
    "}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 218)).add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_7449, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mSecondInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 221)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 229)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 230)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 231)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 232)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 233)) ;
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
  cEnumerator_semanticExpressionListAST enumerator_4921 (object->mProperty_mMatchedExpressionList, kENUMERATION_UP) ;
  while (enumerator_4921.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_4921.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 135)) ;
    enumerator_4921.gotoNextObject () ;
  }
  cEnumerator_matchInstructionBranchListAST enumerator_5033 (object->mProperty_mMatchInstructionBranchList, kENUMERATION_UP) ;
  while (enumerator_5033.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_5033.current_mMatchBranchInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 138)) ;
    enumerator_5033.gotoNextObject () ;
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
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionAST * object = (const cPtr_matchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionAST) ;
  GALGAS_semanticExpressionListForGeneration var_expressionList_5710 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 152)) ;
  cEnumerator_semanticExpressionListAST enumerator_5786 (object->mProperty_mMatchedExpressionList, kENUMERATION_UP) ;
  while (enumerator_5786.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_matchedExpression_6063 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_5786.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-match.galgas", 158)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_matchedExpression_6063, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 155)) ;
    var_expressionList_5710.addAssign_operation (var_matchedExpression_6063  COMMA_SOURCE_FILE ("instruction-match.galgas", 163)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_type_6178 = var_matchedExpression_6063.getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 165)) ;
    const enumGalgasBool test_0 = var_type_6178.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).getter_isClassType (SOURCE_FILE ("instruction-match.galgas", 166)).operator_not (SOURCE_FILE ("instruction-match.galgas", 166)).operator_and (GALGAS_bool (kIsNotEqual, var_type_6178.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 166)))) COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_5786.current_mEndOfExpressionLocation (HERE), GALGAS_string ("this expression is an instance of '@").add_operation (var_type_6178.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)).add_operation (GALGAS_string ("' type, but this type is neither an enumeration, neither a class"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)), fixItArray1  COMMA_SOURCE_FILE ("instruction-match.galgas", 167)) ;
    }
    enumerator_5786.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 172)) ;
  }
  GALGAS_matchInstructionBranchListForGeneration var_matchInstructionBranchList_6598 = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 173)) ;
  cEnumerator_matchInstructionBranchListAST enumerator_6683 (object->mProperty_mMatchInstructionBranchList, kENUMERATION_UP) ;
  while (enumerator_6683.hasCurrentObject ()) {
    GALGAS_localConstantList var_localConstantList_6730 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 176)) ;
    GALGAS_matchListForGeneration var_matchListForGeneration_6784 = GALGAS_matchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 177)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_expressionList_5710.getter_length (SOURCE_FILE ("instruction-match.galgas", 178)).objectCompare (enumerator_6683.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 178)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      cEnumerator_semanticExpressionListForGeneration enumerator_6908 (var_expressionList_5710, kENUMERATION_UP) ;
      cEnumerator_matchEntryListAST enumerator_6931 (enumerator_6683.current_mMatchEntryList (HERE), kENUMERATION_UP) ;
      while (enumerator_6908.hasCurrentObject () && enumerator_6931.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type_6951 = enumerator_6908.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 180)) ;
        const enumGalgasBool test_3 = var_type_6951.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 181)).getter_isClassType (SOURCE_FILE ("instruction-match.galgas", 181)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = enumerator_6931.current_mIsType (HERE).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_unifiedTypeMap_2D_proxy var_namedType_7082 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_6931.current_mTypeNameOrEnumerationConstantName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 183)) ;
            GALGAS_unifiedTypeMap_2D_proxy var_t_7236 = var_type_6951 ;
            GALGAS_bool var_found_7267 = GALGAS_bool (kIsEqual, var_t_7236.objectCompare (var_namedType_7082)) ;
            if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-match.galgas", 186)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).isValid ()) {
              uint32_t variant_7301 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-match.galgas", 186)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).uintValue () ;
              bool loop_7301 = true ;
              while (loop_7301) {
                loop_7301 = var_found_7267.operator_not (SOURCE_FILE ("instruction-match.galgas", 187)).operator_and (var_t_7236.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 187)).operator_not (SOURCE_FILE ("instruction-match.galgas", 187)) COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).isValid () ;
                if (loop_7301) {
                  loop_7301 = var_found_7267.operator_not (SOURCE_FILE ("instruction-match.galgas", 187)).operator_and (var_t_7236.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 187)).operator_not (SOURCE_FILE ("instruction-match.galgas", 187)) COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).boolValue () ;
                }
                if (loop_7301 && (0 == variant_7301)) {
                  loop_7301 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-match.galgas", 186)) ;
                }
                if (loop_7301) {
                  variant_7301 -- ;
                  var_t_7236 = var_t_7236.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 188)) ;
                  var_found_7267 = GALGAS_bool (kIsEqual, var_t_7236.objectCompare (var_namedType_7082)) ;
                }
              }
            }
            const enumGalgasBool test_5 = var_found_7267.operator_not (SOURCE_FILE ("instruction-match.galgas", 191)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_6931.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 192)), GALGAS_string ("the '@").add_operation (enumerator_6931.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (var_type_6951.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)), fixItArray6  COMMA_SOURCE_FILE ("instruction-match.galgas", 192)) ;
            }else if (kBoolFalse == test_5) {
              const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, enumerator_6931.current_mLocalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 194)).getter_length (SOURCE_FILE ("instruction-match.galgas", 194)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_localConstantList_6730.addAssign_operation (var_t_7236, enumerator_6931.current_mLocalConstantName (HERE), GALGAS_bool (false), GALGAS_string ("match_instruction_constant_name")  COMMA_SOURCE_FILE ("instruction-match.galgas", 195)) ;
              }
            }
          }else if (kBoolFalse == test_4) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_6931.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 198)), GALGAS_string ("a type that inherits from '@").add_operation (enumerator_6908.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 199)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)).add_operation (GALGAS_string ("' class is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)), fixItArray8  COMMA_SOURCE_FILE ("instruction-match.galgas", 198)) ;
          }
          var_matchListForGeneration_6784.addAssign_operation (GALGAS_bool (true), enumerator_6931.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 201)), enumerator_6931.current_mLocalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 201))  COMMA_SOURCE_FILE ("instruction-match.galgas", 201)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_type_6951.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 202)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 202)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            const enumGalgasBool test_10 = enumerator_6931.current_mIsType (HERE).boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_6931.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 204)), GALGAS_string ("a constant of the '@").add_operation (enumerator_6908.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 205)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)).add_operation (GALGAS_string ("' enumeration type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)), fixItArray11  COMMA_SOURCE_FILE ("instruction-match.galgas", 204)) ;
            }else if (kBoolFalse == test_10) {
              const enumGalgasBool test_12 = var_type_6951.getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 206)).getter_hasKey (enumerator_6931.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 206)) COMMA_SOURCE_FILE ("instruction-match.galgas", 206)).operator_not (SOURCE_FILE ("instruction-match.galgas", 206)).boolEnum () ;
              if (kBoolTrue == test_12) {
                TC_Array <C_FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_6931.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 207)), GALGAS_string ("the '").add_operation (enumerator_6931.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (GALGAS_string ("' symbol is not a constant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (enumerator_6908.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 208)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)), fixItArray13  COMMA_SOURCE_FILE ("instruction-match.galgas", 207)) ;
              }
            }
            var_matchListForGeneration_6784.addAssign_operation (GALGAS_bool (false), enumerator_6931.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 212)), enumerator_6908.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 213)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 213))  COMMA_SOURCE_FILE ("instruction-match.galgas", 210)) ;
          }else if (kBoolFalse == test_9) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_6931.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 215)), GALGAS_string ("internal error"), fixItArray14  COMMA_SOURCE_FILE ("instruction-match.galgas", 215)) ;
          }
        }
        enumerator_6908.gotoNextObject () ;
        enumerator_6931.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (enumerator_6683.current_mEndOfMatchEntryList (HERE), GALGAS_string ("this match list should contain ").add_operation (var_expressionList_5710.getter_length (SOURCE_FILE ("instruction-match.galgas", 220)).getter_string (SOURCE_FILE ("instruction-match.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)).add_operation (GALGAS_string (" elements, but it acually contains "), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)).add_operation (enumerator_6683.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 221)).getter_string (SOURCE_FILE ("instruction-match.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)), fixItArray15  COMMA_SOURCE_FILE ("instruction-match.galgas", 219)) ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_9366 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_6730, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 230)), enumerator_6683.current_mMatchBranchInstructionList (HERE), enumerator_6683.current_mEndOf_5F_instructionList (HERE), ioArgument_ioVariableMap, var_instructionList_9366, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 225)) ;
    }
    var_matchInstructionBranchList_6598.addAssign_operation (var_matchListForGeneration_6784, var_instructionList_9366  COMMA_SOURCE_FILE ("instruction-match.galgas", 237)) ;
    enumerator_6683.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_elseInstructionList_9849 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 245)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 246)), object->mProperty_mElseInstructionList, object->mProperty_mEndOf_5F_match_5F_instruction, ioArgument_ioVariableMap, var_elseInstructionList_9849, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 241)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_match_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 253)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_matchInstructionForGeneration::constructor_new (var_expressionList_5710, var_matchInstructionBranchList_6598, var_elseInstructionList_9849  COMMA_SOURCE_FILE ("instruction-match.galgas", 255))  COMMA_SOURCE_FILE ("instruction-match.galgas", 255)) ;
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
  GALGAS_stringlist var_receiverList_12040 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 296)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_12091 (object->mProperty_mMatchedExpressionList, kENUMERATION_UP) ;
  while (enumerator_12091.hasCurrentObject ()) {
    GALGAS_string var_variable_12243 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_12091.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variable_12243, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 298)) ;
    var_receiverList_12040.addAssign_operation (var_variable_12243  COMMA_SOURCE_FILE ("instruction-match.galgas", 299)) ;
    enumerator_12091.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 301)) ;
  cEnumerator_stringlist enumerator_12333 (var_receiverList_12040, kENUMERATION_UP) ;
  while (enumerator_12333.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12333.current_mValue (HERE).add_operation (GALGAS_string (".isValid ()"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 303)) ;
    if (enumerator_12333.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 304)) ;
    }
    enumerator_12333.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 306)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 307)) ;
  }
  cEnumerator_matchInstructionBranchListForGeneration enumerator_12535 (object->mProperty_mMatchInstructionBranchList, kENUMERATION_UP) ;
  while (enumerator_12535.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 309)) ;
    cEnumerator_matchListForGeneration enumerator_12606 (enumerator_12535.current_mMatchListForGeneration (HERE), kENUMERATION_UP) ;
    cEnumerator_stringlist enumerator_12626 (var_receiverList_12040, kENUMERATION_UP) ;
    while (enumerator_12606.hasCurrentObject () && enumerator_12626.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_12606.current_mIsType (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(NULL != dynamic_cast <const cPtr_").add_operation (enumerator_12606.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)).add_operation (enumerator_12626.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 312)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(").add_operation (enumerator_12626.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (GALGAS_string (".enumValue () == GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (enumerator_12606.current_mLocalConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 316)).add_operation (enumerator_12606.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 317)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 315)) ;
      }
      if (enumerator_12606.hasNextObject () && enumerator_12626.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 319)) ;
      }
      enumerator_12606.gotoNextObject () ;
      enumerator_12626.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 321)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_12535.current_mMatchBranchInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 322)) ;
    }
    if (enumerator_12535.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 330)) ;
    }
    enumerator_12535.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 332)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 333)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 341)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 342)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 343)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 35)) ;
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
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2228 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-message.galgas", 53)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2228, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 50)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression_2228.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 59)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the expression has the '@").add_operation (var_expression_2228.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 61)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)), fixItArray1  COMMA_SOURCE_FILE ("instruction-message.galgas", 60)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression_2228, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("instruction-message.galgas", 64))  COMMA_SOURCE_FILE ("instruction-message.galgas", 64)) ;
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
  GALGAS_string var_messageCppVarName_3878 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_3878, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 88)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)).add_operation (var_messageCppVarName_3878, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 96)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 97)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 98)) COMMA_SOURCE_FILE ("instruction-message.galgas", 98)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 46)) ;
  cEnumerator_actualParameterListAST enumerator_1913 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
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
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_2837 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 66)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_2837, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 63)) ;
  GALGAS_formalParameterSignature var_routineSignature_2917 ;
  GALGAS_bool var_hasCompilerArgument_2945 ;
  GALGAS_methodKind var_kind_2964 ;
  GALGAS_string var_errorMessage_2987 ;
  GALGAS_location joker_3093 ; // Joker input parameter
  GALGAS_methodQualifier joker_3117 ; // Joker input parameter
  var_receiverExpression_2837.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 76)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 76)).method_searchKey (object->mProperty_mMethodName, var_kind_2964, var_routineSignature_2917, joker_3093, var_hasCompilerArgument_2945, joker_3117, var_errorMessage_2987, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 76)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_errorMessage_2987.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mMethodName.getter_location (SOURCE_FILE ("instruction-method-call.galgas", 78)), var_errorMessage_2987, fixItArray1  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 78)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3600 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mMethodName, GALGAS_string ("'").add_operation (object->mProperty_mMethodName.getter_string (SOURCE_FILE ("instruction-method-call.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)), var_routineSignature_2917, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3600, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 81)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType_3666 = var_receiverExpression_2837.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 94)) ;
  GALGAS_bool var_searching_3717 = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 96)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 97)).isValid ()) {
      uint32_t variant_3766 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 97)).uintValue () ;
      bool loop_3766 = true ;
      while (loop_3766) {
        loop_3766 = var_searching_3717.isValid () ;
        if (loop_3766) {
          loop_3766 = var_searching_3717.boolValue () ;
        }
        if (loop_3766 && (0 == variant_3766)) {
          loop_3766 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 97)) ;
        }
        if (loop_3766) {
          variant_3766 -- ;
          const enumGalgasBool test_3 = var_baseType_3666.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 98)).getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 98)).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_searching_3717 = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_3) {
            const enumGalgasBool test_4 = var_baseType_3666.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).getter_hasKey (object->mProperty_mMethodName.getter_string (HERE) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_baseType_3666 = var_baseType_3666.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 102)) ;
            }else if (kBoolFalse == test_4) {
              var_searching_3717 = GALGAS_bool (false) ;
            }
          }
        }
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_receiverExpression_2837.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 112)), var_receiverExpression_2837, object->mProperty_mMethodName.getter_string (SOURCE_FILE ("instruction-method-call.galgas", 114)), var_kind_2964, var_actualParameterListForGeneration_3600, var_hasCompilerArgument_2945, var_baseType_3666  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 110))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 110)) ;
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
  GALGAS_string var_receiverCppName_5617 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_5617, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 146)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_5617 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 147)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_5710 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 149)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5761 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 150)) ;
  GALGAS_stringlist var_inputVariableList_5801 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 151)) ;
  cEnumerator_actualParameterListForGeneration enumerator_5850 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_5850.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5882 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_5850.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5761, var_inputVariableList_5801, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5882, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 154)) ;
    var_parameterCppNameList_5710.addAssign_operation (var_parameterCppName_5882  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 155)) ;
    enumerator_5850.gotoNextObject () ;
  }
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mProperty_mMethodBaseType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).add_operation (object->mProperty_mMethodName.getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)) ;
      const enumGalgasBool test_0 = object->mProperty_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)).getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 161)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (object->mProperty_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (object->mProperty_mReceiverExpression.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 163)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (var_receiverCppName_5617, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (object->mProperty_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (var_receiverCppName_5617, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_5617.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (object->mProperty_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_6925 (var_parameterCppNameList_5710, kENUMERATION_UP) ;
  while (enumerator_6925.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6925.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)) ;
    if (enumerator_6925.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 172)) ;
    }
    enumerator_6925.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_parameterCppNameList_5710.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = object->mProperty_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 178)) ;
    }
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = object->mProperty_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 183)) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 185)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)) ;
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
  cEnumerator_actualParameterListAST enumerator_1673 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
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
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  GALGAS_lstring var_usefulnessName_2336 = function_procedureNameForUsefulEntitiesGraph (object->mProperty_mRoutineName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 54)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2336 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 55)) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_2631 ;
  GALGAS_bool var_isInternal_2658 ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mRoutineMap (HERE).method_searchKey (object->mProperty_mRoutineName, var_routineSignature_2631, var_isInternal_2658, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 57)) ;
  const enumGalgasBool test_0 = var_isInternal_2658.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation_2736 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mRoutineMap (HERE).getter_locationForKey (object->mProperty_mRoutineName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 64)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mRoutineName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 65)).objectCompare (var_procDeclarationLocation_2736.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 65)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mRoutineName.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 66)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_2736.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)), fixItArray2  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3401 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mRoutineName, GALGAS_string ("'").add_operation (object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 75)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 75)), var_routineSignature_2631, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3401, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 70)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (object->mProperty_mRoutineName, var_actualParameterListForGeneration_3401  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 83))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 83)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (object->mProperty_mRoutineName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 107)) ;
  GALGAS_stringlist var_parameterCppNameList_4524 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 109)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4572 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 110)) ;
  GALGAS_stringlist var_inputVariableList_4609 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 111)) ;
  cEnumerator_actualParameterListForGeneration enumerator_4647 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_4647.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4902 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4647.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4572, var_inputVariableList_4609, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4902, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 113)) ;
    var_parameterCppNameList_4524.addAssign_operation (var_parameterCppName_4902  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 122)) ;
    enumerator_4647.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 125)).getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)) ;
  cEnumerator_stringlist enumerator_5109 (var_parameterCppNameList_4524, kENUMERATION_UP) ;
  while (enumerator_5109.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_5109.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127)) ;
    enumerator_5109.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 129)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 129)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mRoutineName.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 40)) ;
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
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfAssignmentInstructionAST * object = (const cPtr_selfAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfAssignmentInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2502 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2502, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 55)) ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-self-assignment.galgas", 64)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 65)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 66)).getter_isClassType (SOURCE_FILE ("instruction-self-assignment.galgas", 66)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' assignment is not allowed for class instances"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 67)) ;
    }
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE), var_expression_2502.getter_mResultType (SOURCE_FILE ("instruction-self-assignment.galgas", 70)), object->mProperty_mInstructionLocation, var_expression_2502, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 70)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-assignment.galgas", 76)), var_expression_2502  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 72))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 72)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 113)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 119)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 125)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 131)) ;
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
  extensionMethod_enterInSemanticContext (object->mProperty_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 137)) ;
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
                                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_6261 ;
  GALGAS_string var_selfObjectCppName_6289 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 153)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
    var_selfObjectCppName_6289.drop () ; // Release error dropped variable
    var_selfTypeProxy_6261.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_6289 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_6261 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_6669 = var_selfTypeProxy_6261.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 160)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_6669.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 161)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_6261.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 162)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mProperty_mExpressions.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)).objectCompare (var_addAssignOperatorArguments_6669.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_selfTypeProxy_6261.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (var_addAssignOperatorArguments_6669.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 168)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 169)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 166)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_7375 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 171)) ;
      cEnumerator_actualOutputExpressionList enumerator_7443 (object->mProperty_mExpressions, kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_7477 (var_addAssignOperatorArguments_6669, kENUMERATION_UP) ;
      while (enumerator_7443.hasCurrentObject () && enumerator_7477.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_7728 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_7443.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_7477.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7728, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 173)) ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_7477.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_7443.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_7477.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_7477.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_7443.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-self-concat.galgas", 182)), GALGAS_string ("the selector should be '!").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)), fixItArray9  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 182)) ;
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_7477.current_mFormalArgumentType (HERE), var_expression_7728.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 185)), enumerator_7443.current_mEndOfExpressionLocation (HERE), var_expression_7728, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 185)) ;
        }
        var_effectiveParameterList_7375.addAssign_operation (var_expression_7728  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 186)) ;
        enumerator_7443.gotoNextObject () ;
        enumerator_7477.gotoNextObject () ;
      }
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_selfObjectCppName_6289, var_selfTypeProxy_6261, GALGAS_string::makeEmptyString (), object->mProperty_mInstructionLocation, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 194)), var_effectiveParameterList_7375  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 189))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 189)) ;
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
                                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_8939 ;
  GALGAS_string var_selfObjectCppName_8967 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 210)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 211)) ;
    var_selfObjectCppName_8967.drop () ; // Release error dropped variable
    var_selfTypeProxy_8939.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_8967 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_8939 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  const enumGalgasBool test_2 = var_selfTypeProxy_8939.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 217)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 217)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 217)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_8939.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 218)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_9805 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeProxy_8939, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9805, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 222)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_8939, var_expression_9805.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 231)), object->mProperty_mInstructionLocation, var_expression_9805, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 231)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_selfTypeProxy_8939, var_selfObjectCppName_8967, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 238)), var_expression_9805, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 233))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 233)) ;
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
                                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMinusEqualExpressionInstructionAST * object = (const cPtr_selfMinusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMinusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_10735 ;
  GALGAS_string var_selfObjectCppName_10763 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 255)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 256)) ;
    var_selfObjectCppName_10763.drop () ; // Release error dropped variable
    var_selfTypeProxy_10735.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_10763 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_10735 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  const enumGalgasBool test_2 = var_selfTypeProxy_10735.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 262)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 262)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 262)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_10735.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_11602 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeProxy_10735, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11602, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_10735, var_expression_11602.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 276)), object->mProperty_mInstructionLocation, var_expression_11602, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 276)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_selfTypeProxy_10735, var_selfObjectCppName_10763, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 283)), var_expression_11602, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278)) ;
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
                                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMulEqualExpressionInstructionAST * object = (const cPtr_selfMulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMulEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_12531 ;
  GALGAS_string var_selfObjectCppName_12559 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 300)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 301)) ;
    var_selfObjectCppName_12559.drop () ; // Release error dropped variable
    var_selfTypeProxy_12531.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_12559 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_12531 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  const enumGalgasBool test_2 = var_selfTypeProxy_12531.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 307)).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 307)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_12531.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 308)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_13392 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeProxy_12531, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13392, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_12531, var_expression_13392.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 321)), object->mProperty_mInstructionLocation, var_expression_13392, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 321)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_selfTypeProxy_12531, var_selfObjectCppName_12559, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 328)), var_expression_13392, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323)) ;
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
                                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfDivEqualExpressionInstructionAST * object = (const cPtr_selfDivEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfDivEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_14319 ;
  GALGAS_string var_selfObjectCppName_14347 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 345)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 346)) ;
    var_selfObjectCppName_14347.drop () ; // Release error dropped variable
    var_selfTypeProxy_14319.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_14347 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_14319 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  const enumGalgasBool test_2 = var_selfTypeProxy_14319.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 352)).getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 352)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_14319.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 353)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_15180 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeProxy_14319, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15180, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 357)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_14319, var_expression_15180.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 366)), object->mProperty_mInstructionLocation, var_expression_15180, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 366)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_selfTypeProxy_14319, var_selfObjectCppName_14347, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 373)), var_expression_15180, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)) ;
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
  cEnumerator_actualParameterListAST enumerator_3357 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
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
  cEnumerator_actualParameterListAST enumerator_3772 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
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
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionAST * object = (const cPtr_setterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_4548 ;
  GALGAS_string var_receiverVariableCppName_4590 ;
  GALGAS_string var_receiverVariableBaseName_4633 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mReceiverName, var_receiverType_4548, var_receiverVariableCppName_4590, var_receiverVariableBaseName_4633, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 125)) ;
  }
  cEnumerator_lstringlist enumerator_4675 (object->mProperty_mReceiverStructAttributes, kENUMERATION_UP) ;
  while (enumerator_4675.hasCurrentObject ()) {
    GALGAS_propertyMap var_attributeMap_4699 = var_receiverType_4548.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 132)) ;
    var_attributeMap_4699.method_searchKey (enumerator_4675.current_mValue (HERE), var_receiverType_4548, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 133)) ;
    enumerator_4675.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_castType_4854 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeNameForCasting.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_castType_4854 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeNameForCasting, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 141)) ;
    {
    routine_checkAssignmentTypes (var_receiverType_4548, var_castType_4854, object->mProperty_mTypeNameForCasting.getter_location (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 142)) ;
    }
  }else if (kBoolFalse == test_0) {
    var_castType_4854 = var_receiverType_4548 ;
  }
  GALGAS_methodKind var_kind_5206 ;
  GALGAS_formalParameterSignature var_routineSignature_5232 ;
  GALGAS_bool var_hasCompilerArgument_5261 ;
  GALGAS_string var_setterErrorMessage_5296 ;
  GALGAS_methodQualifier joker_5267 ; // Joker input parameter
  var_castType_4854.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)).method_searchKey (object->mProperty_mSetterName, var_kind_5206, var_routineSignature_5232, var_hasCompilerArgument_5261, joker_5267, var_setterErrorMessage_5296, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_5296.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 156)), var_setterErrorMessage_5296, fixItArray2  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_5770 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mSetterName, GALGAS_string ("'").add_operation (object->mProperty_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 164)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 164)), var_routineSignature_5232, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5770, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 159)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType_5836 = var_castType_4854 ;
  GALGAS_bool var_searching_5863 = GALGAS_bool (true) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 175)).isValid ()) {
      uint32_t variant_5911 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 175)).uintValue () ;
      bool loop_5911 = true ;
      while (loop_5911) {
        loop_5911 = var_searching_5863.isValid () ;
        if (loop_5911) {
          loop_5911 = var_searching_5863.boolValue () ;
        }
        if (loop_5911 && (0 == variant_5911)) {
          loop_5911 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 175)) ;
        }
        if (loop_5911) {
          variant_5911 -- ;
          const enumGalgasBool test_4 = var_baseType_5836.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 176)).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 176)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_searching_5863 = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_5 = var_baseType_5836.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).getter_hasKey (object->mProperty_mSetterName.getter_string (HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_baseType_5836 = var_baseType_5836.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 180)) ;
            }else if (kBoolFalse == test_5) {
              var_searching_5863 = GALGAS_bool (false) ;
            }
          }
        }
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (object->mProperty_mReceiverName.getter_location (HERE), var_receiverVariableCppName_4590, var_receiverVariableBaseName_4633, object->mProperty_mReceiverStructAttributes, var_castType_4854, var_receiverType_4548, object->mProperty_mSetterName, var_kind_5206, var_actualParameterListForGeneration_5770, var_hasCompilerArgument_5261, var_baseType_5836  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 188))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 188)) ;
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
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionAST * object = (const cPtr_selfSetterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_7109 ;
  GALGAS_string var_selfObjectCppName_7137 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 214)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 215)), GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 215)) ;
    var_selfObjectCppName_7137.drop () ; // Release error dropped variable
    var_selfTypeProxy_7109.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_7137 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_7109 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_7492 ;
  GALGAS_bool var_hasCompilerArgument_7520 ;
  GALGAS_methodKind var_kind_7539 ;
  GALGAS_methodQualifier joker_7639 ; // Joker input parameter
  GALGAS_string joker_7642 ; // Joker input parameter
  var_selfTypeProxy_7109.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 224)).method_searchKey (object->mProperty_mSetterName, var_kind_7539, var_routineSignature_7492, var_hasCompilerArgument_7520, joker_7639, joker_7642, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 224)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_8030 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mSetterName, GALGAS_string ("'").add_operation (object->mProperty_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 231)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 231)), var_routineSignature_7492, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_8030, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 226)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::constructor_new (var_selfObjectCppName_7137, var_selfTypeProxy_7109, object->mProperty_mSetterName, var_kind_7539, var_actualParameterListForGeneration_8030, var_hasCompilerArgument_7520  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 239))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 239)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 286)) ;
  GALGAS_string var_receiverCppName_9829 = object->mProperty_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_9886 (object->mProperty_mReceiverStructAttributes, kENUMERATION_UP) ;
  while (enumerator_9886.hasCurrentObject ()) {
    var_receiverCppName_9829.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_9886.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 289)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 289)) ;
    enumerator_9886.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mReceiverBaseName COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 291)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_10090 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 293)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_10138 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 294)) ;
  GALGAS_stringlist var_inputVariableList_10175 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 295)) ;
  cEnumerator_actualParameterListForGeneration enumerator_10213 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_10213.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_10468 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_10213.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_10138, var_inputVariableList_10175, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_10468, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 297)) ;
    var_parameterCppNameList_10090.addAssign_operation (var_parameterCppName_10468  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 306)) ;
    enumerator_10213.gotoNextObject () ;
  }
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mProperty_mMethodBaseType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311)).add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311)) ;
      const enumGalgasBool test_0 = object->mProperty_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 312)).getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 312)).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mProperty_mReceiverType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 313)).getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 313)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_9829.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 314)) ;
        }
        GALGAS_string var_pointerUniqueName_10990 = GALGAS_string ("ptr_").add_operation (object->mProperty_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 316)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 316)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (object->mProperty_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)).add_operation (var_pointerUniqueName_10990, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (object->mProperty_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)).add_operation (var_receiverCppName_9829, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 319)).objectCompare (object->mProperty_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 319)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (object->mProperty_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 320)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 320))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 320)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName_10990, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 321)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 321)).add_operation (object->mProperty_mCastType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 322)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 322)).add_operation (var_pointerUniqueName_10990, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 322)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 321)) ;
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 324)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 324)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)).add_operation (object->mProperty_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_10990, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 328)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)).add_operation (object->mProperty_mCastType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).add_operation (var_pointerUniqueName_10990, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)).add_operation (var_receiverCppName_9829, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      extensionMethod_addHeaderFileName (object->mProperty_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_9829.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)).add_operation (object->mProperty_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 337)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_12572 (var_parameterCppNameList_10090, kENUMERATION_UP) ;
  while (enumerator_12572.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12572.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)) ;
    if (enumerator_12572.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 341)) ;
    }
    enumerator_12572.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = object->mProperty_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_10090.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 344)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 347)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 347)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_10090.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 350)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mProperty_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 354)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mSelfCppName COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_13612 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 368)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_13663 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 369)) ;
  GALGAS_stringlist var_inputVariableList_13703 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 370)) ;
  cEnumerator_actualParameterListForGeneration enumerator_13752 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_13752.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_14015 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_13752.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_13663, var_inputVariableList_13703, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_14015, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)) ;
    var_parameterCppNameList_13612.addAssign_operation (var_parameterCppName_14015  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 380)) ;
    enumerator_13752.gotoNextObject () ;
  }
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mProperty_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385)).add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385)) ;
      const enumGalgasBool test_0 = object->mProperty_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 386)).getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 386)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)).add_operation (object->mProperty_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)).add_operation (object->mProperty_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const enumGalgasBool test_1 = object->mProperty_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 392)).getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 392)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(object->mProperty_mSelfCppName.add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 393)).add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 393)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 393)) ;
      }else if (kBoolFalse == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(object->mProperty_mSelfCppName.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)).add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_14902 (var_parameterCppNameList_13612, kENUMERATION_UP) ;
  while (enumerator_14902.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_14902.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 399)) ;
    if (enumerator_14902.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 400)) ;
    }
    enumerator_14902.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = object->mProperty_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_13612.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 403)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 404)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 406)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 406)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 408)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_13612.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 409)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 410)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mProperty_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 412)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 412)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mSwitchExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
  cEnumerator_switchBranchesAST enumerator_4398 (object->mProperty_mBranches, kENUMERATION_UP) ;
  while (enumerator_4398.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4398.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
    enumerator_4398.gotoNextObject () ;
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
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression_5124 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 154)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression_5124, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression_5124.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 160)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-switch.galgas", 160)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfSwitchExpression, GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (var_switchExpression_5124.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 163)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 161)) ;
  }
  GALGAS_constantIndexMap var_enumConstantMap_5729 = var_switchExpression_5124.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 166)).getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 166)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_5828 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 167)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 169)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_5961 = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 170)) ;
  cEnumerator_switchBranchesAST enumerator_5988 (object->mProperty_mBranches, kENUMERATION_UP) ;
  while (enumerator_5988.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_6074 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 172)) ;
    GALGAS_bool var_firstConstant_6103 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_6144 (enumerator_5988.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_6144.hasCurrentObject ()) {
      const enumGalgasBool test_2 = var_enumConstantMap_5729.getter_hasKey (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 175)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 175)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_constantsNamedInSwitchInstruction_5828.getter_hasKey (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 176)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 176)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_6144.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 177)), GALGAS_string ("the '").add_operation (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)), fixItArray4  COMMA_SOURCE_FILE ("instruction-switch.galgas", 177)) ;
        }
        var_constantsNamedInSwitchInstruction_5828.addAssign_operation (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 180))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 180)) ;
        GALGAS_unifiedTypeMapProxyList var_associatedTypeList_6558 ;
        GALGAS_uint joker_6508 ; // Joker input parameter
        var_enumConstantMap_5729.method_searchKey (enumerator_6144.current_mValue (HERE), joker_6508, var_associatedTypeList_6558, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 181)) ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6558.getter_length (SOURCE_FILE ("instruction-switch.galgas", 182)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_5988.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 182)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_6144.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 183)), GALGAS_string ("the associated values of '").add_operation (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)), fixItArray6  COMMA_SOURCE_FILE ("instruction-switch.galgas", 183)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_associatedTypeList_6558.getter_length (SOURCE_FILE ("instruction-switch.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_5988.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 185)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_6144.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 186)), GALGAS_string ("the '").add_operation (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 187)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 187)), fixItArray8  COMMA_SOURCE_FILE ("instruction-switch.galgas", 186)) ;
          }else if (kBoolFalse == test_7) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_6558.getter_length (SOURCE_FILE ("instruction-switch.galgas", 188)).objectCompare (enumerator_5988.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 188)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              GALGAS_string temp_10 ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6558.getter_length (SOURCE_FILE ("instruction-switch.galgas", 191)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_11) {
                temp_10 = GALGAS_string ("s") ;
              }else if (kBoolFalse == test_11) {
                temp_10 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_6144.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 189)), GALGAS_string ("the '").add_operation (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (var_associatedTypeList_6558.getter_length (SOURCE_FILE ("instruction-switch.galgas", 190)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)), fixItArray12  COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
            }else if (kBoolFalse == test_9) {
              GALGAS_uint var_associatedValueIndex_7292 = GALGAS_uint ((uint32_t) 0U) ;
              cEnumerator_unifiedTypeMapProxyList enumerator_7335 (var_associatedTypeList_6558, kENUMERATION_UP) ;
              cEnumerator_switchExtractedValuesListAST enumerator_7370 (enumerator_5988.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
              while (enumerator_7335.hasCurrentObject () && enumerator_7370.hasCurrentObject ()) {
                const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_7370.current_mExtractedValueTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_13) {
                  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_7335.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)).objectCompare (enumerator_7370.current_mExtractedValueTypeName (HERE).getter_string (HERE))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    TC_Array <C_FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (enumerator_7370.current_mExtractedValueTypeName (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 197)), GALGAS_string ("the required type is '@").add_operation (enumerator_7335.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
                  }
                }
                const enumGalgasBool test_16 = var_firstConstant_6103.operator_and (GALGAS_bool (kIsNotEqual, enumerator_7370.current_mExtractedValueName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)).boolEnum () ;
                if (kBoolTrue == test_16) {
                  GALGAS_string var_cppName_7741 = GALGAS_string ("extractedValue_").add_operation (enumerator_7370.current_mExtractedValueName (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
                  var_extractedAssociatedValuesForGeneration_6074.addAssign_operation (enumerator_7335.current_mType (HERE), var_cppName_7741, var_associatedValueIndex_7292  COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)) ;
                  const enumGalgasBool test_17 = enumerator_7370.current_mMarkedAsUnused (HERE).boolEnum () ;
                  if (kBoolTrue == test_17) {
                    {
                    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_7370.current_mExtractedValueName (HERE), enumerator_7335.current_mType (HERE), var_cppName_7741, var_cppName_7741, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
                    }
                  }else if (kBoolFalse == test_17) {
                    {
                    ioArgument_ioVariableMap.setter_insertLocalConstant (enumerator_7370.current_mExtractedValueName (HERE), enumerator_7335.current_mType (HERE), var_cppName_7741, var_cppName_7741, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
                    }
                  }
                }
                var_associatedValueIndex_7292.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
                enumerator_7335.gotoNextObject () ;
                enumerator_7370.gotoNextObject () ;
              }
            }
          }
        }
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_6144.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 213)), GALGAS_string ("'").add_operation (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (var_switchExpression_5124.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 214)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)), fixItArray18  COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
      }
      var_firstConstant_6103 = GALGAS_bool (false) ;
      enumerator_6144.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_8769 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 222)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 223)), enumerator_5988.current_mInstructions (HERE), enumerator_5988.current_mEndOfBranch (HERE), ioArgument_ioVariableMap, var_instructionList_8769, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 218)) ;
    }
    var_switchBranchesForGeneration_5961.addAssign_operation (enumerator_5988.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_6074, enumerator_5988.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 229)), var_instructionList_8769  COMMA_SOURCE_FILE ("instruction-switch.galgas", 229)) ;
    enumerator_5988.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 231)) ;
  }
  GALGAS_stringset var_forgottenConstants_9051 = var_enumConstantMap_5729.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 233)).substract_operation (var_constantsNamedInSwitchInstruction_5828, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 233)) ;
  const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_9051.getter_count (SOURCE_FILE ("instruction-switch.galgas", 234)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_19) {
    GALGAS_string var_s_9169 = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_9207 (var_forgottenConstants_9051, kENUMERATION_UP) ;
    while (enumerator_9207.hasCurrentObject ()) {
      var_s_9169.plusAssign_operation(GALGAS_string ("\n"
        "  - ").add_operation (enumerator_9207.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 237)) ;
      enumerator_9207.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray20 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_switch_5F_instruction, GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_9169, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 240)), fixItArray20  COMMA_SOURCE_FILE ("instruction-switch.galgas", 239)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression_5124.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 244)), var_switchExpression_5124, var_switchBranchesForGeneration_5961  COMMA_SOURCE_FILE ("instruction-switch.galgas", 243))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 243)) ;
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
  GALGAS_string var_switchVar_11224 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_11224, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 286)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_11224, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mProperty_mSwitchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 294)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)) ;
  cEnumerator_switchBranchesForGeneration enumerator_11468 (object->mProperty_mBranches, kENUMERATION_UP) ;
  while (enumerator_11468.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_11505 (enumerator_11468.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_11505.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mProperty_mSwitchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 298)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (enumerator_11505.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 298)).getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)) ;
      enumerator_11505.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 300)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_11468.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 302)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_type_11834 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (object->mProperty_mEnumType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)).add_operation (enumerator_11468.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)) ;
      GALGAS_string var_varPtr_11991 = GALGAS_string ("extractPtr_").add_operation (enumerator_11468.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 305)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_11834, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_varPtr_11991, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_type_11834, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_switchVar_11224, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)) ;
      cEnumerator_extractedAssociatedValuesForGeneration enumerator_12206 (enumerator_11468.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
      while (enumerator_12206.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (enumerator_12206.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (enumerator_12206.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (var_varPtr_11991, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (enumerator_12206.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)) ;
        enumerator_12206.gotoNextObject () ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_11468.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 312)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 320)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 321)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)) ;
    }
    enumerator_11468.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 324)) ;
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
  cEnumerator_actualParameterListAST enumerator_1826 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
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
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionAST * object = (const cPtr_typeMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_2529 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 58)) ;
  GALGAS_formalParameterSignature var_routineSignature_2698 ;
  GALGAS_bool var_hasCompilerArgument_2726 ;
  var_type_2529.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)).method_searchKey (object->mProperty_mMethodName, var_routineSignature_2698, var_hasCompilerArgument_2726, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3205 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mMethodName, GALGAS_string ("'").add_operation (object->mProperty_mMethodName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 69)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 69)), var_routineSignature_2698, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3205, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 64)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::constructor_new (object->mProperty_mTypeName, object->mProperty_mMethodName, var_actualParameterListForGeneration_3205, var_hasCompilerArgument_2726  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 77))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 77)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 103)) ;
  GALGAS_stringlist var_parameterCppNameList_4358 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4409 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 106)) ;
  GALGAS_stringlist var_inputVariableList_4449 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 107)) ;
  cEnumerator_actualParameterListForGeneration enumerator_4498 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_4498.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4761 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4498.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4409, var_inputVariableList_4449, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4761, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 109)) ;
    var_parameterCppNameList_4358.addAssign_operation (var_parameterCppName_4761  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 117)) ;
    enumerator_4498.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mProperty_mTypeName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 120)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)).add_operation (object->mProperty_mMethodName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 121)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 121)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)) ;
  cEnumerator_stringlist enumerator_5047 (var_parameterCppNameList_4358, kENUMERATION_UP) ;
  while (enumerator_5047.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_5047.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 123)) ;
    if (enumerator_5047.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 124)) ;
    }
    enumerator_5047.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mProperty_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 127)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 127)) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList_4358.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 128)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 129)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 131)) ;
  }
  const enumGalgasBool test_2 = object->mProperty_mHasCompilerArgument.operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList_4358.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 133)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 133)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 134)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mProperty_mMethodName.getter_location (SOURCE_FILE ("instruction-type-method-call.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 137)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mProperty_mTypeName, joker_2317 COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 43)) ;
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
                                                                                    const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                    GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationAST * object = (const cPtr_localVariableDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_3056 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 58)) ;
  GALGAS_string var_targetVariableCppName_3176 = GALGAS_string ("var_").add_operation (object->mProperty_mVariableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (object->mProperty_mVariableName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)) ;
  const enumGalgasBool test_0 = object->mProperty_mIsUndefinedConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (object->mProperty_mVariableName, var_targetType_3056, var_targetVariableCppName_3176, var_targetVariableCppName_3176, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 61)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertUndefinedLocalVariable (object->mProperty_mVariableName, var_targetType_3056, var_targetVariableCppName_3176, var_targetVariableCppName_3176, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (var_targetType_3056, var_targetVariableCppName_3176  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66)) ;
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
  extensionMethod_addHeaderFileName (object->mProperty_mVariableType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 90)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mProperty_mVariableType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (object->mProperty_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 41)) ;
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
                                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationWithAssignmentAST * object = (const cPtr_localVariableDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2586 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 59)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2586, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 56)) ;
  GALGAS_string var_targetVariableCppName_2645 = GALGAS_string ("var_").add_operation (object->mProperty_mVariableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).add_operation (object->mProperty_mVariableName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).getter_string (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mProperty_mVariableName, var_expression_2586.getter_mResultType (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 68)), var_targetVariableCppName_2645, var_targetVariableCppName_2645, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 66)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_2586.getter_mResultType (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 74)), GALGAS_bool (false), var_targetVariableCppName_2645, var_expression_2586  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 73))  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 73)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLocationExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 44)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mMessageExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 45)) ;
  extensionMethod_enterFixItListInSemanticContext (object->mProperty_mFixitListAST, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 46)) ;
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
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionAST * object = (const cPtr_warningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_locationExpression_2865 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_2892 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_2924 ;
  {
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mLocationExpression, object->mProperty_mMessageExpression, object->mProperty_mFixitListAST, object->mProperty_mInstructionLocation, GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_2865, var_messageExpression_2892, var_fixitListForGeneration_2924, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 60)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_locationExpression_2865, var_messageExpression_2892, var_fixitListForGeneration_2924  COMMA_SOURCE_FILE ("instruction-warning.galgas", 75))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 75)) ;
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
  GALGAS_string var_receiverCppVarName_4105 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_4105, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 105)) ;
  GALGAS_string var_messageCppVarName_4459 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mWarningExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_4459, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 107)) ;
  GALGAS_string var_fixItArrayCppName_4707 ;
  extensionMethod_generateFixIt (object->mProperty_mFixitListForGeneration, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_4707, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 115)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (var_receiverCppVarName_4105, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (var_messageCppVarName_4459, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)).add_operation (var_fixItArrayCppName_4707, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 128)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 128)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 184)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 185)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mDoBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 186)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mElseBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 187)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 195)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_m_5F_do_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 196)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_m_5F_else_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 197)) ;
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
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readAccessWithInstructionAST * object = (const cPtr_readAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readAccessWithInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_8065 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 214)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_8065, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 211)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_8088 = var_receiverExpression_8065.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 219)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bool var_found_8222 = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_8280 (var_receiverType_8088.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 223)), kENUMERATION_UP) ;
    bool bool_1 = var_found_8222.operator_not (SOURCE_FILE ("instruction-with.galgas", 223)).isValidAndTrue () ;
    if (enumerator_8280.hasCurrentObject () && bool_1) {
      while (enumerator_8280.hasCurrentObject () && bool_1) {
        var_found_8222 = GALGAS_bool (kIsEqual, enumerator_8280.current_mSearchMethodName (HERE).getter_string (HERE).objectCompare (object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE))) ;
        enumerator_8280.gotoNextObject () ;
        if (enumerator_8280.hasCurrentObject ()) {
          bool_1 = var_found_8222.operator_not (SOURCE_FILE ("instruction-with.galgas", 223)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_2 = var_found_8222.operator_not (SOURCE_FILE ("instruction-with.galgas", 226)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mSearchMethodNameForErrorSignaling.getter_location (SOURCE_FILE ("instruction-with.galgas", 227)), GALGAS_string ("there is no '").add_operation (object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (SOURCE_FILE ("instruction-with.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 227)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 227)).add_operation (var_receiverType_8088.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 227)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 227)), fixItArray3  COMMA_SOURCE_FILE ("instruction-with.galgas", 227)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression_8864 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mKeyExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 234)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_8864, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 231)) ;
  GALGAS_string var_objectArrayCppName_8920 = GALGAS_string ("objectArray_").add_operation (object->mProperty_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 240)).getter_string (SOURCE_FILE ("instruction-with.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 240)) ;
  const enumGalgasBool test_4 = var_receiverType_8088.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 242)).getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 242)).operator_not (SOURCE_FILE ("instruction-with.galgas", 242)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_receiverType_8088.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 243)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 243)), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 243)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 246)) ;
  }
  GALGAS_localConstantList var_localConstantList_9361 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 248)) ;
  cEnumerator_typedPropertyList enumerator_9438 (var_receiverType_8088.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 249)), kENUMERATION_UP) ;
  while (enumerator_9438.hasCurrentObject ()) {
    var_localConstantList_9361.addAssign_operation (enumerator_9438.current_mPropertyTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mProperty_mPrefix.getter_string (HERE).add_operation (enumerator_9438.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 252)), object->mProperty_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 252)), GALGAS_bool (true), var_objectArrayCppName_8920.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 254)).add_operation (enumerator_9438.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 254))  COMMA_SOURCE_FILE ("instruction-with.galgas", 250)) ;
    enumerator_9438.gotoNextObject () ;
  }
  var_localConstantList_9361.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 258)), GALGAS_lstring::constructor_new (object->mProperty_mPrefix.getter_string (HERE).add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 259)), object->mProperty_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 259)), GALGAS_bool (true), var_objectArrayCppName_8920.add_operation (GALGAS_string ("->mPropertylkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 261))  COMMA_SOURCE_FILE ("instruction-with.galgas", 257)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_10342 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_9361, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 267)), object->mProperty_mDoBranchInstructions, object->mProperty_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList_10342, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 262)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_10709 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 278)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 279)), object->mProperty_mElseBranchInstructions, object->mProperty_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList_10709, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 274)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 285)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_receiverExpression_8065, var_objectArrayCppName_8920, var_keyExpression_8864, object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE), var_do_5F_instructionList_10342, var_else_5F_instructionList_10709  COMMA_SOURCE_FILE ("instruction-with.galgas", 287))  COMMA_SOURCE_FILE ("instruction-with.galgas", 287)) ;
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
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_keyExpression_11782 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mKeyExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 309)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_11782, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 306)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_keyExpression_11782.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 316)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 316)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression_11782.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 317)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 317)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 317)), fixItArray2  COMMA_SOURCE_FILE ("instruction-with.galgas", 317)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_keyExpression_11782.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 319)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 319)).objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression_11782.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 320)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 320)).add_operation (GALGAS_string ("', it should be '@lstring'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 320)), fixItArray4  COMMA_SOURCE_FILE ("instruction-with.galgas", 320)) ;
    }
  }
  GALGAS_string var_objectArrayCppName_12317 = GALGAS_string ("objectArray_").add_operation (object->mProperty_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 323)).getter_string (SOURCE_FILE ("instruction-with.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 323)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_12522 ;
  GALGAS_string var_receiverVariableCppName_12563 ;
  {
  GALGAS_string joker_12569 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mReceiverName, var_targetType_12522, var_receiverVariableCppName_12563, joker_12569, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 325)) ;
  }
  cEnumerator_lstringlist enumerator_12597 (object->mProperty_mFieldList, kENUMERATION_UP) ;
  while (enumerator_12597.hasCurrentObject ()) {
    GALGAS_propertyMap var_attributeMap_12621 = var_targetType_12522.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 332)) ;
    var_attributeMap_12621.method_searchKey (enumerator_12597.current_mValue (HERE), var_targetType_12522, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 333)) ;
    enumerator_12597.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = var_targetType_12522.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 339)).getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 339)).operator_not (SOURCE_FILE ("instruction-with.galgas", 339)).boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_targetType_12522.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 340)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 340)), fixItArray6  COMMA_SOURCE_FILE ("instruction-with.galgas", 340)) ;
  }
  const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_bool var_found_13056 = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_13112 (var_targetType_12522.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 345)), kENUMERATION_UP) ;
    bool bool_8 = var_found_13056.operator_not (SOURCE_FILE ("instruction-with.galgas", 345)).isValidAndTrue () ;
    if (enumerator_13112.hasCurrentObject () && bool_8) {
      while (enumerator_13112.hasCurrentObject () && bool_8) {
        var_found_13056 = GALGAS_bool (kIsEqual, enumerator_13112.current_mSearchMethodName (HERE).getter_string (HERE).objectCompare (object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE))) ;
        enumerator_13112.gotoNextObject () ;
        if (enumerator_13112.hasCurrentObject ()) {
          bool_8 = var_found_13056.operator_not (SOURCE_FILE ("instruction-with.galgas", 345)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_9 = var_found_13056.operator_not (SOURCE_FILE ("instruction-with.galgas", 348)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (object->mProperty_mSearchMethodNameForErrorSignaling.getter_location (SOURCE_FILE ("instruction-with.galgas", 349)), GALGAS_string ("there is no '").add_operation (object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (SOURCE_FILE ("instruction-with.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 349)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 349)).add_operation (var_targetType_12522.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 349)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 349)), fixItArray10  COMMA_SOURCE_FILE ("instruction-with.galgas", 349)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 353)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList_13583 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 355)) ;
  cEnumerator_typedPropertyList enumerator_13640 (var_targetType_12522.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 356)), kENUMERATION_UP) ;
  while (enumerator_13640.hasCurrentObject ()) {
    var_localInitializedVariableList_13583.addAssign_operation (enumerator_13640.current_mPropertyTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mProperty_mPrefix.getter_string (HERE).add_operation (enumerator_13640.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 359)), object->mProperty_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 359)), var_objectArrayCppName_12317.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 360)).add_operation (enumerator_13640.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 360))  COMMA_SOURCE_FILE ("instruction-with.galgas", 357)) ;
    enumerator_13640.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_11 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 366)) ;
  temp_11.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 363)), GALGAS_lstring::constructor_new (object->mProperty_mPrefix.getter_string (HERE).add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 364)), object->mProperty_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 364)), GALGAS_bool (true), var_objectArrayCppName_12317.add_operation (GALGAS_string ("->mProperty_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 366))  COMMA_SOURCE_FILE ("instruction-with.galgas", 366)) ;
  GALGAS_localConstantList var_localConstantList_13901 = temp_11 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_14498 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_13901, var_localInitializedVariableList_13583, object->mProperty_m_5F_do_5F_Instructions, object->mProperty_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList_14498, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 368)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_14580 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 385)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 386)), object->mProperty_m_5F_else_5F_Instructions, object->mProperty_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList_14580, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 381)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 392)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_receiverVariableCppName_12563, var_targetType_12522, object->mProperty_mFieldList, var_objectArrayCppName_12317, var_keyExpression_11782, object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE), var_do_5F_instructionList_14498, var_else_5F_instructionList_14580  COMMA_SOURCE_FILE ("instruction-with.galgas", 394))  COMMA_SOURCE_FILE ("instruction-with.galgas", 394)) ;
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
  GALGAS_string var_receiverVarCppName_17289 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName_17289, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 445)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_17309 = object->mProperty_mReceiverExpression.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 446)) ;
  GALGAS_string var_keyVarCppName_17520 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_17520, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 448)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const cMapElement_").add_operation (var_receiverType_17309.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 450)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 450)).add_operation (object->mProperty_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 451)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 451)).add_operation (var_receiverType_17309.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 451)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 451)).add_operation (var_receiverVarCppName_17289, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 452)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 450)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName_17520, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 454)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 454)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 454)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("performSearch (").add_operation (var_keyVarCppName_17520, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 456)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 456)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 457)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 457)).add_operation (var_receiverType_17309.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 458)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 458)).add_operation (object->mProperty_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 458)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 458)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 459)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 459)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 456)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 460)) COMMA_SOURCE_FILE ("instruction-with.galgas", 460)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != ").add_operation (object->mProperty_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 462)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 462)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 462)).add_operation (object->mProperty_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 463)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 463)).add_operation (var_receiverType_17309.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 463)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 463)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 462)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 464)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mProperty_mElseBranchInstructions.getter_length (SOURCE_FILE ("instruction-with.galgas", 472)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 473)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 474)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 483)) ;
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
  GALGAS_string var_receiverCppName_19496 = object->mProperty_mReceiverVariableCppName ;
  cEnumerator_lstringlist enumerator_19556 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_19556.hasCurrentObject ()) {
    var_receiverCppName_19496.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_19556.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 496)).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 496)) ;
    enumerator_19556.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName_19822 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_19822, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 499)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 501)) COMMA_SOURCE_FILE ("instruction-with.galgas", 501)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mReceiverVariableCppName COMMA_SOURCE_FILE ("instruction-with.galgas", 502)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cMapElement_").add_operation (object->mProperty_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 503)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 503)).add_operation (object->mProperty_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 504)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 504)).add_operation (object->mProperty_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 504)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 504)).add_operation (var_receiverCppName_19496, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 505)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 503)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 507)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 507)).add_operation (var_keyVarCppName_19822, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 507)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 509)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 509)).add_operation (var_keyVarCppName_19822, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 509)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", kSearchErrorMessage_").add_operation (object->mProperty_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 510)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 510)).add_operation (object->mProperty_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 510)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 512)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 512)).add_operation (GALGAS_string ("if (NULL != "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 512)).add_operation (object->mProperty_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 513)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 513)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 513)).add_operation (object->mProperty_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 514)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 514)).add_operation (object->mProperty_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 514)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 512)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 515)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mProperty_mElseBranchInstructions.getter_length (SOURCE_FILE ("instruction-with.galgas", 523)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 524)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 525)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 534)) ;
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
  constinArgument_inNonTerminalSymbolMap.method_searchKey (object->mProperty_mNonterminalName, var_nonTerminalSymbolIndex_2885, joker_2965, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 64)) ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mNonterminalName, var_nonTerminalSymbolIndex_2885  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65)) ;
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
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
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
  GALGAS_nonterminalLabelMap var_labelMap_4045 ;
  constinArgument_inNonterminalMap.method_searchKey (object->mProperty_mNonterminalName, var_labelMap_4045, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 90)) ;
  GALGAS_formalParameterSignature var_signature_4084 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mLabelName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 92)).objectCompare (GALGAS_string ("parse"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_signature_4084 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 93)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_formalParameterListForGeneration joker_4189 ; // Joker input parameter
    GALGAS_location joker_4203 ; // Joker input parameter
    var_labelMap_4045.method_searchKey (object->mProperty_mLabelName, joker_4189, var_signature_4084, joker_4203, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 95)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4600 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mNonterminalName, GALGAS_string ("'<").add_operation (object->mProperty_mNonterminalName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 103)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 103)), var_signature_4084, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4600, inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 98)) ;
  }
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 111)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mNonterminalName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 119)), object->mProperty_mLabelName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 120)), var_actualParameterListForGeneration_4600, object->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 117))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 117)) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mNonterminalName, constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 149)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-non-terminal.galgas", 150))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 145))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 145)) ;
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
                                                                                                          const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_nonterminalInstructionForGeneration cast_6868_si ((cPtr_nonterminalInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mProperty_mNonterminalName.objectCompare (cast_6868_si.getter_mNonterminalName (SOURCE_FILE ("instruction-non-terminal.galgas", 163)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 164)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (cast_6868_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-non-terminal.galgas", 165)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mProperty_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 166)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 166)), fixItArray1  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 165)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_7166_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (cast_7166_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-non-terminal.galgas", 169)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mProperty_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 170)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 170)), fixItArray2  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 169)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 173)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_4 = result_outOk.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 176)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 177)) ;
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
  GALGAS_stringlist var_parameterCppNameList_8108 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 194)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_8159 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 195)) ;
  GALGAS_stringlist var_inputVariableList_8199 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 196)) ;
  cEnumerator_actualParameterListForGeneration enumerator_8248 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_8248.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_8511 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_8248.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_8159, var_inputVariableList_8199, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8511, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 198)) ;
    var_parameterCppNameList_8108.addAssign_operation (var_parameterCppName_8511  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 207)) ;
    enumerator_8248.gotoNextObject () ;
  }
  GALGAS_string var_sdtResultVarName_8618 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mProperty_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 210)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 210)) ;
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (var_sdtResultVarName_8618, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("nt_").add_operation (object->mProperty_mNonterminalName.getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)).add_operation (object->mProperty_mLabelName.getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)) ;
  cEnumerator_stringlist enumerator_8974 (var_parameterCppNameList_8108, kENUMERATION_UP) ;
  while (enumerator_8974.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_8974.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 216)) ;
    enumerator_8974.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(var_sdtResultVarName_8618.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 221)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 221)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 222)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 222)) ;
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_8618, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 223)) ;
  cEnumerator_stringlist enumerator_9508 (var_jokerParametersToReleaseList_8159, kENUMERATION_UP) ;
  while (enumerator_9508.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_9508.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 231)) ;
    enumerator_9508.gotoNextObject () ;
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
  GALGAS_uint var_addedNonTerminalIndex_2702 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 65)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList_2788 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 67)) ;
  {
  routine_transformInstructionList (object->mProperty_mRepeatedInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_2788, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 68)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList_3101 = GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (var_repeatedInstructionList_2788  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 75)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_3203 (object->mProperty_mRepeatBranchList, kENUMERATION_UP) ;
  while (enumerator_3203.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_3236 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 78)) ;
    {
    routine_transformInstructionList (enumerator_3203.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_3236, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
    }
    var_repeatBranchList_3101.addAssign_operation (var_syntaxInstructionList_3236  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 86)) ;
    enumerator_3203.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (object->mProperty_mInstructionLocation, var_repeatBranchList_3101, var_addedNonTerminalIndex_2702  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 89))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 89)) ;
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
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
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
  GALGAS_uint var_choiceIndex_4559 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 115)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 117)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_4762 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mProperty_mRepeatedInstructionList, object->mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_4762, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 120)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_5268 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 137)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_5303 (object->mProperty_mRepeatBranchList, kENUMERATION_UP) ;
  while (enumerator_5303.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_5706 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_5303.current_mSyntaxInstructionList (HERE), enumerator_5303.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_5706, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 139)) ;
    }
    var_listOfSemanticInstructionListForGeneration_5268.addAssign_operation (var_instructionList_5706, enumerator_5303.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 155)) ;
    enumerator_5303.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_repeat_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 158)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex_4559, var_repeated_5F_instructionList_4762, object->mProperty_mEndOf_5F_repeat_5F_instruction, var_listOfSemanticInstructionListForGeneration_5268  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160)) ;
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
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_7194 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mProperty_m_5F_repeated_5F_instructionList, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 190)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7318 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 191)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7422 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7422.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_7318.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_7422.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 194)), enumerator_7422.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 193)) ;
    enumerator_7422.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mSyntaxComponentName, object->mProperty_mChoiceIndex, var_repeated_5F_instructionList_7194, object->mProperty_mEndOfRepeatedInstructions, var_listOfSemanticInstructionListForGeneration_7318  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 198))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 198)) ;
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
                                                                                                     const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_repeatInstructionForGeneration cast_8351_si ((cPtr_repeatInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = function_compareSyntaxSignature (object->mProperty_m_5F_repeated_5F_instructionList, cast_8351_si.getter_m_5F_repeated_5F_instructionList (SOURCE_FILE ("instruction-repeat.galgas", 218)), cast_8351_si.getter_mEndOfRepeatedInstructions (SOURCE_FILE ("instruction-repeat.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 218)) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mProperty_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-repeat.galgas", 219)).objectCompare (cast_8351_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-repeat.galgas", 219)).getter_length (SOURCE_FILE ("instruction-repeat.galgas", 219)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas", 219)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (cast_8351_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-repeat.galgas", 220)), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (object->mProperty_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-repeat.galgas", 222)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 221)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 222)).add_operation (cast_8351_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-repeat.galgas", 224)).getter_length (SOURCE_FILE ("instruction-repeat.galgas", 224)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 223)), fixItArray1  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 220)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9032 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9094 (cast_8351_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-repeat.galgas", 227)), kENUMERATION_UP) ;
      bool bool_2 = result_outOk.isValidAndTrue () ;
      if (enumerator_9032.hasCurrentObject () && enumerator_9094.hasCurrentObject () && bool_2) {
        while (enumerator_9032.hasCurrentObject () && enumerator_9094.hasCurrentObject () && bool_2) {
          result_outOk = function_compareSyntaxSignature (enumerator_9032.current_mInstructionList (HERE), enumerator_9094.current_mInstructionList (HERE), enumerator_9094.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 228)) ;
          enumerator_9032.gotoNextObject () ;
          enumerator_9094.gotoNextObject () ;
          if (enumerator_9032.hasCurrentObject () && enumerator_9094.hasCurrentObject ()) {
            bool_2 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_9278_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (cast_9278_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-repeat.galgas", 231)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray3  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 231)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 235)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_5 = result_outOk.operator_not (SOURCE_FILE ("instruction-repeat.galgas", 238)).boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 239)) ;
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
  GALGAS_string var_repeatFlagCppName_10171 = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 255)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 256)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_repeatFlagCppName_10171, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 257)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 257)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_repeatFlagCppName_10171, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 258)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 258)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_m_5F_repeated_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 259)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 267)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (object->mProperty_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (object->mProperty_mChoiceIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_10851 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
  GALGAS_uint index_10801 ((uint32_t) 0) ;
  while (enumerator_10851.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_10801.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_10851.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 271)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 279)) ;
    enumerator_10851.gotoNextObject () ;
    index_10801.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 269)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 281)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_10171, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 282)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 282)) ;
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
  GALGAS_uint var_addedNonTerminalIndex_2501 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 61)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList_2580 = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 63)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_2644 (object->mProperty_mSelectBranchList, kENUMERATION_UP) ;
  while (enumerator_2644.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_2677 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 65)) ;
    {
    routine_transformInstructionList (enumerator_2644.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_2677, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 66)) ;
    }
    var_selectBranchList_2580.addAssign_operation (var_syntaxInstructionList_2677  COMMA_SOURCE_FILE ("instruction-select.galgas", 73)) ;
    enumerator_2644.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::constructor_new (object->mProperty_mInstructionLocation, var_selectBranchList_2580, var_addedNonTerminalIndex_2501  COMMA_SOURCE_FILE ("instruction-select.galgas", 76))  COMMA_SOURCE_FILE ("instruction-select.galgas", 76)) ;
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
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
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
  GALGAS_uint var_choiceIndex_4001 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 101)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 103)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_4178 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 105)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_4256 (object->mProperty_mSelectBranchList, kENUMERATION_UP) ;
  while (enumerator_4256.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_4317 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_4256.current_mSyntaxInstructionList (HERE), enumerator_4256.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_4317, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 108)) ;
    }
    var_listOfSemanticInstructionListForGeneration_4178.addAssign_operation (var_instructionList_4317, enumerator_4256.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 124)) ;
    enumerator_4256.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_select_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 127)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex_4001, var_listOfSemanticInstructionListForGeneration_4178  COMMA_SOURCE_FILE ("instruction-select.galgas", 128))  COMMA_SOURCE_FILE ("instruction-select.galgas", 128)) ;
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_6046 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 153)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_6150 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
  while (enumerator_6150.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_6046.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_6150.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 156)), enumerator_6150.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 155)) ;
    enumerator_6150.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mSyntaxComponentName, object->mProperty_mChoiceIndex, var_listOfSemanticInstructionListForGeneration_6046  COMMA_SOURCE_FILE ("instruction-select.galgas", 159))  COMMA_SOURCE_FILE ("instruction-select.galgas", 159)) ;
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
                                                                                                     const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_selectInstructionForGeneration cast_7012_si ((cPtr_selectInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (true) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mProperty_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-select.galgas", 178)).objectCompare (cast_7012_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-select.galgas", 178)).getter_length (SOURCE_FILE ("instruction-select.galgas", 178)))) COMMA_SOURCE_FILE ("instruction-select.galgas", 178)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (cast_7012_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-select.galgas", 179)), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (object->mProperty_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-select.galgas", 181)).getter_string (SOURCE_FILE ("instruction-select.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 180)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 181)).add_operation (cast_7012_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-select.galgas", 183)).getter_length (SOURCE_FILE ("instruction-select.galgas", 183)).getter_string (SOURCE_FILE ("instruction-select.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 182)), fixItArray1  COMMA_SOURCE_FILE ("instruction-select.galgas", 179)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7579 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7641 (cast_7012_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-select.galgas", 186)), kENUMERATION_UP) ;
      bool bool_2 = result_outOk.isValidAndTrue () ;
      if (enumerator_7579.hasCurrentObject () && enumerator_7641.hasCurrentObject () && bool_2) {
        while (enumerator_7579.hasCurrentObject () && enumerator_7641.hasCurrentObject () && bool_2) {
          result_outOk = function_compareSyntaxSignature (enumerator_7579.current_mInstructionList (HERE), enumerator_7641.current_mInstructionList (HERE), enumerator_7641.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 187)) ;
          enumerator_7579.gotoNextObject () ;
          enumerator_7641.gotoNextObject () ;
          if (enumerator_7579.hasCurrentObject () && enumerator_7641.hasCurrentObject ()) {
            bool_2 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_7825_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (cast_7825_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-select.galgas", 190)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray3  COMMA_SOURCE_FILE ("instruction-select.galgas", 190)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas", 194)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_5 = result_outOk.operator_not (SOURCE_FILE ("instruction-select.galgas", 197)).boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-select.galgas", 198)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (object->mProperty_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (object->mProperty_mChoiceIndex.getter_string (SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 215)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9034 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
  GALGAS_uint index_8984 ((uint32_t) 0) ;
  while (enumerator_9034.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_8984.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 217)).getter_string (SOURCE_FILE ("instruction-select.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 217)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 217)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_9034.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 218)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 226)) ;
    enumerator_9034.gotoNextObject () ;
    index_8984.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 216)) ;
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
  GALGAS_uint var_terminalSymbolIndex_3879 ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_3886 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (object->mProperty_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 82))) ;
  if (NULL != objectArray_3886) {
      macroValidSharedObject (objectArray_3886, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex_3879 = objectArray_3886->mProperty_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex_3879 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 85)) ;
    {
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (object->mProperty_mTerminalName, var_terminalSymbolIndex_3879, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 86)) ;
    }
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTerminalName, var_terminalSymbolIndex_3879  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 88))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 88)) ;
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
                                                                               const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
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
  GALGAS_lexicalSentValueList var_sentAttributeList_5225 ;
  constinArgument_inTerminalMap.method_searchKey (object->mProperty_mTerminalName, var_sentAttributeList_5225, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 112)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mActualInputParameterList.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 114)).objectCompare (var_sentAttributeList_5225.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 114)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_sentAttributeList_5225.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 117)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mProperty_mActualInputParameterList.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 120)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mTerminalName.getter_location (SOURCE_FILE ("instruction-terminal.galgas", 115)), GALGAS_string ("naming the '$").add_operation (object->mProperty_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)).add_operation (var_sentAttributeList_5225.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 116)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 117)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 117)).add_operation (object->mProperty_mActualInputParameterList.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 119)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 118)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 119)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 119)), fixItArray5  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList_5739 = GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 123)) ;
  cEnumerator_actualInputParameterListAST enumerator_5811 (object->mProperty_mActualInputParameterList, kENUMERATION_UP) ;
  cEnumerator_lexicalSentValueList enumerator_5836 (var_sentAttributeList_5225, kENUMERATION_UP) ;
  while (enumerator_5811.hasCurrentObject () && enumerator_5836.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((const cPtr_abstractInputParameter *) enumerator_5811.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, enumerator_5836.current_mLexicalType (HERE), enumerator_5836.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList_5739, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 125)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_5836.current_mLexicalFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_5811.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_5836.current_mLexicalFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_8) {
        temp_7 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (enumerator_5811.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-terminal.galgas", 133)), GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_5836.current_mLexicalFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 133)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 133)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 133)), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 133)) ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticWarning (enumerator_5836.current_mLexicalFormalSelector (HERE).getter_location (SOURCE_FILE ("instruction-terminal.galgas", 134)), GALGAS_string ("the formal selector is declared here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 134)) ;
    }
    enumerator_5811.gotoNextObject () ;
    enumerator_5836.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_6373 (object->mProperty_mIndexingKeyList, kENUMERATION_UP) ;
  while (enumerator_6373.hasCurrentObject ()) {
    const enumGalgasBool test_11 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_6373.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 139)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 139)).operator_not (SOURCE_FILE ("instruction-terminal.galgas", 139)).boolEnum () ;
    if (kBoolTrue == test_11) {
      TC_Array <C_FixItDescription> fixItArray12 ;
      appendFixItActions (fixItArray12, kFixItReplace, constinArgument_inIndexNameSet) ;
      inCompiler->emitSemanticError (enumerator_6373.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("instruction-terminal.galgas", 140)), GALGAS_string ("the '").add_operation (enumerator_6373.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 140)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 140)), fixItArray12  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 140)) ;
    }
    enumerator_6373.gotoNextObject () ;
  }
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 144)) ;
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 149)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTerminalName, constinArgument_inLexiqueName, var_terminalCheckAssignementList_5739, object->mProperty_mIndexingKeyList, object->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, object->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 155))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 155)) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTerminalName, object->mProperty_mLexiqueIdentifier, GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 191)), object->mProperty_mIndexingKeyList, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 193)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 194))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 187))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 187)) ;
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
                                                                                                            const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_terminalCheckInstructionForGeneration cast_9310_si ((cPtr_terminalCheckInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mProperty_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 208)).objectCompare (cast_9310_si.getter_mTerminalName (SOURCE_FILE ("instruction-terminal.galgas", 208)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 208)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 209)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (cast_9310_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-terminal.galgas", 210)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mProperty_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 211)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 211)), fixItArray1  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 210)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_9609_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (cast_9609_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-terminal.galgas", 214)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mProperty_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 215)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 215)), fixItArray2  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 214)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 218)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_4 = result_outOk.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 221)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 222)) ;
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
  cEnumerator_terminalCheckAssignementList enumerator_10587 (object->mProperty_mTerminalCheckAssignementList, kENUMERATION_UP) ;
  while (enumerator_10587.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_10587.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_10587.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 240)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 240)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_10587.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)).add_operation (enumerator_10587.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)).add_operation (GALGAS_string (" () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)) ;
    enumerator_10587.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_10971 (object->mProperty_mIndexingKeyList, kENUMERATION_UP) ;
  while (enumerator_10971.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 249)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("->enterIndexing (C_Lexique_").add_operation (object->mProperty_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 250)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 250)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_10971.current_mValue_30_ (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 251)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_10971.current_mValue_31_ (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("instruction-terminal.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 252)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 252)) ;
    enumerator_10971.gotoNextObject () ;
  }
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->preceedingSeparatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 255)) ;
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 261)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 268)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 268)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GALGAS_string ("->acceptTerminal (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (object->mProperty_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 270)).add_operation (object->mProperty_mTerminalName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 270)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 270)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)) ;
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
  routine_transformInstructionList (object->mProperty_mDoInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 66)) ;
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
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
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
  GALGAS_semanticExpressionForGeneration var_variant_5F_expression_3792 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mVariantExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 97)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variant_5F_expression_3792, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 94)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression_3792.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 102)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfVariantExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression_3792.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 104)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 104)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 104)).add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 105)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 105)), fixItArray1  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 103)) ;
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression_4387 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 112)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_while_5F_expression_4387, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 109)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_while_5F_expression_4387.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 117)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfWhileExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression_3792.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 119)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 119)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 119)).add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 120)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 120)), fixItArray3  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 118)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 124)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList_5060 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mProperty_mDoInstructionList, object->mProperty_mEndOfInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_5060, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 127)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 144)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_variant_5F_expression_3792, var_while_5F_expression_4387, var_instructionList_5060  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 146))  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 146)) ;
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
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mProperty_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 171)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 185)) COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 185)) ;
  }
  GALGAS_string var_variantVarCppName_7376 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName_7376, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 188)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantVarCppName_7376, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 190)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 190)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 191)) ;
  }
  GALGAS_string var_variantVar_7681 = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_7681, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)).add_operation (var_variantVarCppName_7376, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)) ;
  GALGAS_string var_loopVar_7886 = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 195)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 195)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_7886, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 196)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 196)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_7886, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 197)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 197)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 198)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7886.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 199)) ;
  GALGAS_string var_whileVarCppName_8178 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName_8178, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 201)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_whileVarCppName_8178, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 202)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 202)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 203)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7886.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 204)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_variantVar_7681.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 205)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 206)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 206)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 207)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 215)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 215)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 216)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 217)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 218)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 219)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 220)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 221)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("//--- 'parse'\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 223)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), object->mProperty_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 226)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 224)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 232)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 232)) ;
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
  GALGAS_syntaxInstructionList var_syntaxInstructionList_2524 ;
  GALGAS_location joker_2526 ; // Joker input parameter
  object->mProperty_mParseRewindBranchList.method_first (var_syntaxInstructionList_2524, joker_2526, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 61)) ;
  {
  routine_transformInstructionList (var_syntaxInstructionList_2524, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 63)) ;
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
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_3640 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 91)) ;
  GALGAS_uint var_referenceSelectMethodCount_3727 = ioArgument_ioSelectMethodCount ;
  cEnumerator_listOfSyntaxInstructionList enumerator_3784 (object->mProperty_mParseRewindBranchList, kENUMERATION_UP) ;
  while (enumerator_3784.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount_3727 ;
    GALGAS_semanticInstructionListForGeneration var_instructionList_3864 = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 95)) ;
    cEnumerator_syntaxInstructionList enumerator_3943 (enumerator_3784.current_mSyntaxInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_3943.hasCurrentObject ()) {
      callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_3943.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList_3864, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 97)) ;
      enumerator_3943.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration_3640.addAssign_operation (var_instructionList_3864, enumerator_3784.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 112)) ;
    enumerator_3784.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches_4535 = var_listOfSemanticInstructionListForGeneration_3640 ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_4636 ;
  {
  GALGAS_location joker_4688 ; // Joker input parameter
  var_tempListOfBranches_4535.setter_popFirst (var_instructionList_4636, joker_4688, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 117)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature_4753 = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList_4636, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 118)) ;
  GALGAS_bool var_ok_4827 = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4865 (var_tempListOfBranches_4535, kENUMERATION_UP) ;
  bool bool_0 = var_ok_4827.isValidAndTrue () ;
  if (enumerator_4865.hasCurrentObject () && bool_0) {
    while (enumerator_4865.hasCurrentObject () && bool_0) {
      var_ok_4827 = function_compareSyntaxSignature (var_referenceSignature_4753, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_4865.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 123)), enumerator_4865.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 121)) ;
      enumerator_4865.gotoNextObject () ;
      if (enumerator_4865.hasCurrentObject ()) {
        bool_0 = var_ok_4827.isValidAndTrue () ;
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_listOfSemanticInstructionListForGeneration_3640  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 128))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 128)) ;
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
  GALGAS_semanticInstructionListForGeneration var_instructionList_6180 ;
  GALGAS_location joker_6182 ; // Joker input parameter
  object->mProperty_mListOfSemanticInstructionListForGeneration.method_first (var_instructionList_6180, joker_6182, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 150)) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList_6180, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 151)) ;
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
  GALGAS_string var_parsingContextVar_6907 = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-rewind.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 166)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 166)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar_6907, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7171 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7171.hasCurrentObject ()) {
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_7171.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 170)) ;
    }
    if (enumerator_7171.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)).add_operation (var_parsingContextVar_6907, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)) ;
    }
    enumerator_7171.gotoNextObject () ;
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
  routine_transformInstructionList (object->mProperty_mElseInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 99)) ;
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
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
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
  GALGAS_semanticExpressionForGeneration var_when_5F_expression_4994 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mWhenExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-parse-when.galgas", 130)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_when_5F_expression_4994, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 127)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 136)) ;
  }
  GALGAS_uint var_localSelectMethodCount_5315 = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration_5411 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mProperty_mWhenInstructionList, object->mProperty_mEndOfWhenInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount_5315, var_when_5F_instructionListForGeneration_5411, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 140)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration_5899 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mProperty_mElseInstructionList, object->mProperty_mEndOfElseInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration_5899, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 158)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 175)) ;
  }
  GALGAS_bool var_ok_6410 = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration_5411, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 178)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration_5899, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 179)), object->mProperty_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 177)) ;
  const enumGalgasBool test_0 = var_ok_6410.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_when_5F_expression_4994, var_when_5F_instructionListForGeneration_5411, var_else_5F_instructionListForGeneration_5899  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 184))  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 184)) ;
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
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mProperty_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 209)) ;
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
  GALGAS_string var_sourceVar_8496 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mWhenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_8496, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 224)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_8496, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 225)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 225)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 226)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 234)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 235)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 243)) ;
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
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
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
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 60)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_3096 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-syntax-send.galgas", 66)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3096, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 63)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expression_3096.getter_mResultType (SOURCE_FILE ("instruction-syntax-send.galgas", 72)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'send' expresion should be an @string expression"), fixItArray3  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 73)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_expression_3096  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 76))  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 76)) ;
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
  GALGAS_string var_sourceVar_4507 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_4507, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 101)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 103)) COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 103)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_4507, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 104)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 104)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 104)).add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)).add_operation (var_sourceVar_4507, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 104)) ;
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
//                                     Function 'syntaxSignatureOfInstructionList'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration function_syntaxSignatureOfInstructionList (const GALGAS_string & constinArgument_inPosfix,
                                                                                       const GALGAS_semanticInstructionListForGeneration & constinArgument_inInstructionList,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration result_result ; // Returned variable
  result_result = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 33)) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_2893 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_2893.hasCurrentObject ()) {
    callExtensionMethod_appendSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_2893.current_mInstruction (HERE).ptr (), constinArgument_inPosfix, result_result, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 35)) ;
    enumerator_2893.gotoNextObject () ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_syntaxSignatureOfInstructionList [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_syntaxSignatureOfInstructionList (C_Compiler * inCompiler,
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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_syntaxSignatureOfInstructionList ("syntaxSignatureOfInstructionList",
                                                                                  functionWithGenericHeader_syntaxSignatureOfInstructionList,
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
                                                                                  2,
                                                                                  functionArgs_syntaxSignatureOfInstructionList) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'compareSyntaxSignature'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool function_compareSyntaxSignature (const GALGAS_semanticInstructionListForGeneration & constinArgument_inReferenceSignature,
                                             const GALGAS_semanticInstructionListForGeneration & constinArgument_inTestedSignature,
                                             const GALGAS_location & constinArgument_inErrorLocation,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  result_outOk = GALGAS_bool (true) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_4133 (constinArgument_inReferenceSignature, kENUMERATION_UP) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_4164 (constinArgument_inTestedSignature, kENUMERATION_UP) ;
  bool bool_0 = result_outOk.isValidAndTrue () ;
  if (enumerator_4133.hasCurrentObject () && enumerator_4164.hasCurrentObject () && bool_0) {
    while (enumerator_4133.hasCurrentObject () && enumerator_4164.hasCurrentObject () && bool_0) {
      result_outOk = callExtensionGetter_compareInstructionSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_4133.current_mInstruction (HERE).ptr (), enumerator_4164.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 62)) ;
      enumerator_4133.gotoNextObject () ;
      enumerator_4164.gotoNextObject () ;
      if (enumerator_4133.hasCurrentObject () && enumerator_4164.hasCurrentObject ()) {
        bool_0 = result_outOk.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_and (GALGAS_bool (kIsStrictInf, constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 64)).objectCompare (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 64)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 64)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_semanticInstructionForGeneration var_instruction_4399 = constinArgument_inTestedSignature.getter_mInstructionAtIndex (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 65)) ;
    if (var_instruction_4399.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_4399.ptr ())) {
        GALGAS_syntaxInstructionForGeneration cast_4540_si ((cPtr_syntaxInstructionForGeneration *) var_instruction_4399.ptr ()) ;
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (cast_4540_si.getter_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 68)), GALGAS_string ("syntax signature error, exceeding instruction; this branch has more syntax instructions than reference branch"), fixItArray2  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 68)) ;
      }else{
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 71)) ;
      }
    }
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_4 = result_outOk.operator_and (GALGAS_bool (kIsStrictSup, constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 73)).objectCompare (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 73)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 73)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("syntax signature error, missing instruction; this branch has less syntax instructions than reference branch"), fixItArray5  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 74)) ;
      GALGAS_semanticInstructionForGeneration var_instruction_5036 = constinArgument_inReferenceSignature.getter_mInstructionAtIndex (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 76)) ;
      if (var_instruction_5036.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_5036.ptr ())) {
          GALGAS_syntaxInstructionForGeneration cast_5177_si ((cPtr_syntaxInstructionForGeneration *) var_instruction_5036.ptr ()) ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (cast_5177_si.getter_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 79)), GALGAS_string ("this is the syntax instruction in reference branch that corresponds to the first missing instruction"), fixItArray6  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 79)) ;
        }else{
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 82)) ;
        }
      }
    }
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_compareSyntaxSignature [4] = {
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_compareSyntaxSignature (C_Compiler * inCompiler,
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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_compareSyntaxSignature ("compareSyntaxSignature",
                                                                        functionWithGenericHeader_compareSyntaxSignature,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        3,
                                                                        functionArgs_compareSyntaxSignature) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'groupSyntaxComponentsGalgas3'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_groupSyntaxComponentsGalgas_33_ (const GALGAS_galgas_33_SyntaxComponentListAST constinArgument_inAllSyntaxComponents,
                                              const GALGAS_syntaxExtensions constinArgument_inSyntaxExtensions,
                                              GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_componentNameSet_2069 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("syntaxCompilation.galgas", 23)) ;
  cEnumerator_galgas_33_SyntaxComponentListAST enumerator_2115 (constinArgument_inAllSyntaxComponents, kENUMERATION_UP) ;
  while (enumerator_2115.hasCurrentObject ()) {
    var_componentNameSet_2069.addAssign_operation (enumerator_2115.current (HERE).getter_mSyntaxComponentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 25)) ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_2216 = enumerator_2115.current (HERE).getter_mNonterminalDeclarationList (HERE) ;
    GALGAS_syntaxRuleListAST var_ruleList_2273 = enumerator_2115.current (HERE).getter_mRuleList (HERE) ;
    cEnumerator_galgas_33_SyntaxExtensionListAST enumerator_2385 (constinArgument_inSyntaxExtensions.getter_listForKey (enumerator_2115.current (HERE).getter_mSyntaxComponentName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 28)), kENUMERATION_UP) ;
    while (enumerator_2385.hasCurrentObject ()) {
      var_nonterminalDeclarationList_2216.plusAssign_operation(enumerator_2385.current_mNonterminalDeclarationList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 29)) ;
      var_ruleList_2273.plusAssign_operation(enumerator_2385.current_mRuleList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 30)) ;
      enumerator_2385.gotoNextObject () ;
    }
    ioArgument_ioDeclarationList.addAssign_operation (GALGAS_galgas_33_SyntaxComponentAST::constructor_new (GALGAS_bool (false), enumerator_2115.current (HERE).getter_mSyntaxComponentName (HERE), enumerator_2115.current (HERE).getter_mImportedLexiqueFilePath (HERE), var_nonterminalDeclarationList_2216, var_ruleList_2273, enumerator_2115.current (HERE).getter_mHasTranslateFeature (HERE)  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 32))  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 32)) ;
    enumerator_2115.gotoNextObject () ;
  }
  cEnumerator_syntaxExtensions enumerator_2844 (constinArgument_inSyntaxExtensions, kENUMERATION_UP) ;
  while (enumerator_2844.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_componentNameSet_2069.getter_hasKey (enumerator_2844.current_key (HERE) COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 42)).operator_not (SOURCE_FILE ("syntaxCompilation.galgas", 42)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_galgas_33_SyntaxExtensionListAST enumerator_2919 (enumerator_2844.current_mList (HERE), kENUMERATION_UP) ;
      while (enumerator_2919.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2919.current_mSyntaxComponentName (HERE).getter_location (SOURCE_FILE ("syntaxCompilation.galgas", 44)), GALGAS_string ("there is no '").add_operation (enumerator_2919.current_mSyntaxComponentName (HERE).getter_string (SOURCE_FILE ("syntaxCompilation.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 44)).add_operation (GALGAS_string ("' syntax component"), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 44)), fixItArray1  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 44)) ;
        enumerator_2919.gotoNextObject () ;
      }
    }
    enumerator_2844.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'transformLabelMap'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const GALGAS_nonTerminalLabelListAST & constinArgument_inLabels,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result_outNonterminalSymbolLabelMapForGrammarAnalysis ; // Returned variable
  result_outNonterminalSymbolLabelMapForGrammarAnalysis = GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("grammarCompilation.galgas", 21)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_2052 (constinArgument_inLabels, kENUMERATION_UP) ;
  while (enumerator_2052.hasCurrentObject ()) {
    GALGAS_signatureForGrammarAnalysis var_formalParametersList_2109 = GALGAS_signatureForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 23)) ;
    cEnumerator_formalParameterListAST enumerator_2148 (enumerator_2052.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_2148.hasCurrentObject ()) {
      var_formalParametersList_2109.addAssign_operation (enumerator_2148.current_mFormalArgumentPassingMode (HERE), enumerator_2148.current_mFormalArgumentTypeName (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 25)) ;
      enumerator_2148.gotoNextObject () ;
    }
    {
    result_outNonterminalSymbolLabelMapForGrammarAnalysis.setter_insertKey (enumerator_2052.current_mLabelName (HERE), var_formalParametersList_2109, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 27)) ;
    }
    enumerator_2052.gotoNextObject () ;
  }
//---
  return result_outNonterminalSymbolLabelMapForGrammarAnalysis ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_transformLabelMap [2] = {
  & kTypeDescriptor_GALGAS_nonTerminalLabelListAST,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_transformLabelMap (C_Compiler * inCompiler,
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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_transformLabelMap ("transformLabelMap",
                                                                   functionWithGenericHeader_transformLabelMap,
                                                                   & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis,
                                                                   1,
                                                                   functionArgs_transformLabelMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'checkLabelMap'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkLabelMap (const GALGAS_location constinArgument_inNonTerminalLocation,
                            const GALGAS_nonTerminalLabelListAST constinArgument_inLabels,
                            const GALGAS_location constinArgument_inOriginalNonTerminalLocation,
                            const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_labelStringSet_2763 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("grammarCompilation.galgas", 42)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_2789 (constinArgument_inLabels, kENUMERATION_UP) ;
  while (enumerator_2789.hasCurrentObject ()) {
    var_labelStringSet_2763.addAssign_operation (enumerator_2789.current_mLabelName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 44))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 44)) ;
    GALGAS_signatureForGrammarAnalysis var_formalParametersList_2889 ;
    constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.method_searchKey (enumerator_2789.current_mLabelName (HERE), var_formalParametersList_2889, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 46)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_2789.current_mFormalArgumentList (HERE).getter_length (SOURCE_FILE ("grammarCompilation.galgas", 47)).objectCompare (var_formalParametersList_2889.getter_length (SOURCE_FILE ("grammarCompilation.galgas", 47)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_2789.current_mFormalArgumentList (HERE).getter_length (SOURCE_FILE ("grammarCompilation.galgas", 50)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_formalParametersList_2889.getter_length (SOURCE_FILE ("grammarCompilation.galgas", 54)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_2789.current_mLabelName (HERE).getter_location (SOURCE_FILE ("grammarCompilation.galgas", 48)), enumerator_2789.current_mFormalArgumentList (HERE).getter_length (SOURCE_FILE ("grammarCompilation.galgas", 48)).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 48)).add_operation (GALGAS_string (" formal parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 48)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 49)).add_operation (GALGAS_string (" declared here, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 50)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2789.current_mLabelName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 52)).getter_locationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 51)).add_operation (GALGAS_string (" names "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 52)).add_operation (var_formalParametersList_2889.getter_length (SOURCE_FILE ("grammarCompilation.galgas", 53)).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 53)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 53)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 53)), fixItArray5  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 48)) ;
    }else if (kBoolFalse == test_0) {
      cEnumerator_formalParameterListAST enumerator_3566 (enumerator_2789.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
      cEnumerator_signatureForGrammarAnalysis enumerator_3594 (var_formalParametersList_2889, kENUMERATION_UP) ;
      while (enumerator_3566.hasCurrentObject () && enumerator_3594.hasCurrentObject ()) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_3594.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (enumerator_3566.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_3594.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_location (SOURCE_FILE ("grammarCompilation.galgas", 58)), GALGAS_string (" this formal parameter is declared with ").add_operation (extensionGetter_formalArgumentString (enumerator_3594.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 59)).add_operation (GALGAS_string (" passing mode, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2789.current_mLabelName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 62)).getter_locationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 61)).add_operation (GALGAS_string (" is declared with "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 62)).add_operation (extensionGetter_formalArgumentString (enumerator_3566.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 63)).add_operation (GALGAS_string (" passing mode"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 63)), fixItArray7  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 58)) ;
        }
        const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_3594.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 65)).objectCompare (enumerator_3566.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 65)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_3594.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_location (SOURCE_FILE ("grammarCompilation.galgas", 66)), GALGAS_string (" this formal parameter is declared of '@").add_operation (enumerator_3594.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 67)).add_operation (GALGAS_string ("' type, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 68)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2789.current_mLabelName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)).getter_locationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)).add_operation (GALGAS_string (" is declared with '@"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)).add_operation (enumerator_3566.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 71)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 71)), fixItArray9  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 66)) ;
        }
        enumerator_3566.gotoNextObject () ;
        enumerator_3594.gotoNextObject () ;
      }
    }
    enumerator_2789.gotoNextObject () ;
  }
  cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_4726 (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis, kENUMERATION_UP) ;
  while (enumerator_4726.hasCurrentObject ()) {
    const enumGalgasBool test_10 = var_labelStringSet_2763.getter_hasKey (enumerator_4726.current_lkey (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 78)) COMMA_SOURCE_FILE ("grammarCompilation.galgas", 78)).operator_not (SOURCE_FILE ("grammarCompilation.galgas", 78)).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inNonTerminalLocation, GALGAS_string ("this non terminal does not declare the '").add_operation (enumerator_4726.current_lkey (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 80)).add_operation (GALGAS_string ("' label, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 80)).add_operation (constinArgument_inOriginalNonTerminalLocation.getter_locationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 80)).add_operation (GALGAS_string (" does"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 81)), fixItArray11  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 79)) ;
    }
    enumerator_4726.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleNonTerminalDeclarations'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleNonTerminalDeclarations (GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                            const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_nonterminalDeclarationListAST enumerator_5353 (constinArgument_inNonterminalDeclarationList, kENUMERATION_UP) ;
  while (enumerator_5353.hasCurrentObject ()) {
    const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * objectArray_5365 = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) ioArgument_ioNonTerminalMapForGrammarAnalysis.readAccessForWithInstruction (enumerator_5353.current_mNonterminalName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 93))) ;
    if (NULL != objectArray_5365) {
        macroValidSharedObject (objectArray_5365, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
      {
      routine_checkLabelMap (enumerator_5353.current_mNonterminalName (HERE).getter_location (SOURCE_FILE ("grammarCompilation.galgas", 95)), enumerator_5353.current_mLabels (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5353.current_mNonterminalName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 97)), objectArray_5365->mProperty_mNonterminalSymbolParametersMap, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 94)) ;
      }
    }else{
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5353.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 103)), function_transformLabelMap (enumerator_5353.current_mLabels (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 101)) ;
      }
    }
    enumerator_5353.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'handleNonTerminalDeclarationsFromRuleList'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleNonTerminalDeclarationsFromRuleList (GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                        const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_syntaxRuleListAST enumerator_6162 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_6162.hasCurrentObject ()) {
    GALGAS_nonTerminalLabelListAST var_nonTerminalLabelListAST_6197 = GALGAS_nonTerminalLabelListAST::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 116)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_6251 (enumerator_6162.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_6251.hasCurrentObject ()) {
      var_nonTerminalLabelListAST_6197.addAssign_operation (enumerator_6251.current_mLabelName (HERE), enumerator_6251.current_mFormalArguments (HERE), enumerator_6251.current_mEndOfArgumentLocation (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 118)) ;
      enumerator_6251.gotoNextObject () ;
    }
    const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * objectArray_6383 = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) ioArgument_ioNonTerminalMapForGrammarAnalysis.readAccessForWithInstruction (enumerator_6162.current_mNonterminalName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 123))) ;
    if (NULL != objectArray_6383) {
        macroValidSharedObject (objectArray_6383, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
      {
      routine_checkLabelMap (enumerator_6162.current_mNonterminalName (HERE).getter_location (SOURCE_FILE ("grammarCompilation.galgas", 125)), var_nonTerminalLabelListAST_6197, ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_6162.current_mNonterminalName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 127)), objectArray_6383->mProperty_mNonterminalSymbolParametersMap, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 124)) ;
      }
    }else{
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_6162.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 133)), function_transformLabelMap (var_nonTerminalLabelListAST_6197, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 131)) ;
      }
    }
    enumerator_6162.gotoNextObject () ;
  }
}


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
//                                         Routine 'transformInstructionList'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_transformInstructionList (const GALGAS_syntaxInstructionList constinArgument_inInstructionList,
                                       GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                       const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                       GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                       GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_syntaxInstructionList enumerator_8683 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_8683.hasCurrentObject ()) {
    callExtensionMethod_transformInstruction ((const cPtr_syntaxInstructionAST *) enumerator_8683.current_mInstruction (HERE).ptr (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 168)) ;
    enumerator_8683.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'buildRuleList'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildRuleList (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                            const GALGAS_lstring constinArgument_inSyntaxComponentName,
                            const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                            GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                            GALGAS_syntaxComponentListForGrammarAnalysis & ioArgument_ioSyntaxComponentListForGrammarAnalysis,
                            GALGAS_uint & ioArgument_ioAddedNonTerminalCount,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis var_productionRulesList_9446 = GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 186)) ;
  cEnumerator_syntaxRuleListAST enumerator_9511 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_9511.hasCurrentObject ()) {
    GALGAS_uint var_nonTerminalIndex_9541 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_nonterminalSymbolParametersMap_9621 ;
    constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_9511.current_mNonterminalName (HERE), var_nonTerminalIndex_9541, var_nonterminalSymbolParametersMap_9621, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 190)) ;
    GALGAS_syntaxInstructionList var_parsedSyntaxInstructionList_9845 ;
    GALGAS_lstring joker_9865 ; // Joker input parameter
    GALGAS_formalParameterListAST joker_9868 ; // Joker input parameter
    GALGAS_location joker_9871 ; // Joker input parameter
    GALGAS_location joker_9903 ; // Joker input parameter
    enumerator_9511.current_mLabelList (HERE).method_first (joker_9865, joker_9868, joker_9871, var_parsedSyntaxInstructionList_9845, joker_9903, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 192)) ;
    GALGAS_syntaxInstructionListForGrammarAnalysis var_instructionList_9963 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 194)) ;
    {
    routine_transformInstructionList (var_parsedSyntaxInstructionList_9845, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalMapForGrammarAnalysis, ioArgument_ioAddedNonTerminalCount, var_instructionList_9963, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 195)) ;
    }
    var_productionRulesList_9446.addAssign_operation (enumerator_9511.current_mNonterminalName (HERE), var_nonTerminalIndex_9541, var_instructionList_9963, var_productionRulesList_9446.getter_length (SOURCE_FILE ("grammarCompilation.galgas", 207))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 203)) ;
    enumerator_9511.gotoNextObject () ;
  }
  ioArgument_ioSyntaxComponentListForGrammarAnalysis.addAssign_operation (var_productionRulesList_9446, constinArgument_inSyntaxComponentName  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 209)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'grammarGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_grammarGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_grammarGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_grammarGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_grammarGenerationTemplate_0,
  0,
  gWrapperAllDirectories_grammarGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'grammarGenerationTemplate grammarZone3HeaderGalgas3'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                             const GALGAS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                             const GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                             const GALGAS_string & in_START_5F_SYMBOL_5F_NAME,
                                                                                             const GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE,
                                                                                             const GALGAS_string & in_GRAMMAR_5F_NAME,
                                                                                             const GALGAS_lstringlist & in_SYNTAX_5F_COMPONENTS
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  GRAMMAR " ;
  result << in_GRAMMAR_5F_NAME.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cGrammar_" ;
  result << in_GRAMMAR_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 5)).stringValue () ;
  result << " : " ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_366_ (0) ;
  if (in_SYNTAX_5F_COMPONENTS.isValid ()) {
    cEnumerator_lstringlist enumerator_366 (in_SYNTAX_5F_COMPONENTS, kENUMERATION_UP) ;
    while (enumerator_366.hasCurrentObject ()) {
      result << "public cParser_" ;
      result << enumerator_366.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 7)).stringValue () ;
      if (enumerator_366.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_366_.increment () ;
      enumerator_366.gotoNextObject () ;
    }
  }
  result << " {\n" ;
  GALGAS_uint index_484_ (0) ;
  if (in_NON_5F_TERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_484 (in_NON_5F_TERMINAL_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_484.hasCurrentObject ()) {
      result << "//------------------------------------- '" ;
      result << enumerator_484.current_lkey (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 13)).stringValue () ;
      result << "' non terminal\n"
        "//--- 'parse' label\n"
        "  public : virtual void nt_" ;
      result << enumerator_484.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 16)).stringValue () ;
      result << "_parse (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_0 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "C_String & " ;
        result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 18)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_0) {
      }
      result << "C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * inCompiler) ;\n"
        "\n" ;
      const enumGalgasBool test_1 = in_HAS_5F_INDEXING.boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "//--- indexing\n"
          "  public : virtual void nt_" ;
        result << enumerator_484.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 24)).stringValue () ;
        result << "_indexing (C_Lexique_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << " * inCompiler) ;\n"
          "\n" ;
      }else if (kBoolFalse == test_1) {
      }
      GALGAS_uint index_1115_ (0) ;
      if (enumerator_484.current_mNonterminalSymbolParametersMap (HERE).isValid ()) {
        cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_1115 (enumerator_484.current_mNonterminalSymbolParametersMap (HERE), kENUMERATION_UP) ;
        while (enumerator_1115.hasCurrentObject ()) {
          result << "//----------- '" ;
          result << enumerator_1115.current_lkey (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue () ;
          result << "' label\n"
            "  public : virtual void nt_" ;
          result << enumerator_484.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 29)).stringValue () ;
          result << "_" ;
          result << enumerator_1115.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 29)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_1366_IDX (0) ;
          if (enumerator_1115.current_mFormalParametersList (HERE).isValid ()) {
            cEnumerator_signatureForGrammarAnalysis enumerator_1366 (enumerator_1115.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
            while (enumerator_1366.hasCurrentObject ()) {
              const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1366.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 31)))).boolEnum () ;
              if (kBoolTrue == test_2) {
                result << "const GALGAS_" ;
                result << enumerator_1366.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue () ;
                result << " inArgument" ;
                result << index_1366_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue () ;
              }else if (kBoolFalse == test_2) {
                const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1366.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 33)))).boolEnum () ;
                if (kBoolTrue == test_3) {
                  result << "GALGAS_" ;
                  result << enumerator_1366.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_1366_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue () ;
                }else if (kBoolFalse == test_3) {
                  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_1366.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 35)))).boolEnum () ;
                  if (kBoolTrue == test_4) {
                    result << "GALGAS_" ;
                    result << enumerator_1366.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_1366_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue () ;
                  }else if (kBoolFalse == test_4) {
                    result << "GALGAS_" ;
                    result << enumerator_1366.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 38)).stringValue () ;
                    result << " inArgument" ;
                    result << index_1366_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 38)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_1366_IDX.increment () ;
              enumerator_1366.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_5 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "C_String & " ;
            result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 43)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }else if (kBoolFalse == test_5) {
          }
          result << "C_Lexique_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << " * inCompiler) ;\n"
            "\n" ;
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_484.current_lkey (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 47)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "//--- Start symbol\n"
              "  public : static void _performSourceFileParsing_" ;
            result << enumerator_1115.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 49)).stringValue () ;
            result << " (" ;
            columnMarker = result.currentColumn () ;
            result << "C_Compiler * inCompiler,\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const enumGalgasBool test_7 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            if (kBoolTrue == test_7) {
              result << "C_String & " ;
              result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 52)).stringValue () ;
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }else if (kBoolFalse == test_7) {
            }
            result << "GALGAS_lstring inFileName" ;
            GALGAS_uint index_2814_IDX (0) ;
            if (enumerator_1115.current_mFormalParametersList (HERE).isValid ()) {
              cEnumerator_signatureForGrammarAnalysis enumerator_2814 (enumerator_1115.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
              while (enumerator_2814.hasCurrentObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_2814.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 57)))).boolEnum () ;
                if (kBoolTrue == test_8) {
                  result << "const GALGAS_" ;
                  result << enumerator_2814.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue () ;
                  result << " inArgument" ;
                  result << index_2814_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue () ;
                }else if (kBoolFalse == test_8) {
                  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_2814.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 59)))).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    result << "GALGAS_" ;
                    result << enumerator_2814.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue () ;
                    result << " & ioArgument" ;
                    result << index_2814_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue () ;
                  }else if (kBoolFalse == test_9) {
                    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_2814.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 61)))).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      result << "GALGAS_" ;
                      result << enumerator_2814.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue () ;
                      result << " & outArgument" ;
                      result << index_2814_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue () ;
                    }else if (kBoolFalse == test_10) {
                      result << "GALGAS_" ;
                      result << enumerator_2814.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 64)).stringValue () ;
                      result << " inArgument" ;
                      result << index_2814_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 64)).stringValue () ;
                    }
                  }
                }
                index_2814_IDX.increment () ;
                enumerator_2814.gotoNextObject () ;
              }
            }
            result << "\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "COMMA_LOCATION_ARGS) ;\n"
              "\n"
              "  public : static void _performSourceStringParsing_" ;
            result << enumerator_1115.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 68)).stringValue () ;
            result << " (" ;
            columnMarker = result.currentColumn () ;
            result << "C_Compiler * inCompiler,\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const enumGalgasBool test_11 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            if (kBoolTrue == test_11) {
              result << "C_String & " ;
              result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 71)).stringValue () ;
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }else if (kBoolFalse == test_11) {
            }
            result << "GALGAS_string inSourceString,\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "GALGAS_string inNameString" ;
            GALGAS_uint index_4102_IDX (0) ;
            if (enumerator_1115.current_mFormalParametersList (HERE).isValid ()) {
              cEnumerator_signatureForGrammarAnalysis enumerator_4102 (enumerator_1115.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
              while (enumerator_4102.hasCurrentObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_4102.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 77)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  result << "const GALGAS_" ;
                  result << enumerator_4102.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue () ;
                  result << " inArgument" ;
                  result << index_4102_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue () ;
                }else if (kBoolFalse == test_12) {
                  const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, enumerator_4102.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 79)))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    result << "GALGAS_" ;
                    result << enumerator_4102.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue () ;
                    result << " & ioArgument" ;
                    result << index_4102_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue () ;
                  }else if (kBoolFalse == test_13) {
                    const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, enumerator_4102.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 81)))).boolEnum () ;
                    if (kBoolTrue == test_14) {
                      result << "GALGAS_" ;
                      result << enumerator_4102.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue () ;
                      result << " & outArgument" ;
                      result << index_4102_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue () ;
                    }else if (kBoolFalse == test_14) {
                      result << "GALGAS_" ;
                      result << enumerator_4102.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 84)).stringValue () ;
                      result << " inArgument" ;
                      result << index_4102_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 84)).stringValue () ;
                    }
                  }
                }
                index_4102_IDX.increment () ;
                enumerator_4102.gotoNextObject () ;
              }
            }
            result << "\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "COMMA_LOCATION_ARGS) ;\n"
              "\n" ;
          }else if (kBoolFalse == test_6) {
          }
          index_1115_.increment () ;
          enumerator_1115.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_484.current_lkey (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 91)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        result << "//--- Indexing\n"
          "  public : static void performIndexing (" ;
        columnMarker = result.currentColumn () ;
        result << "C_Compiler * inCompiler,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const C_String & inSourceFilePath) ;\n"
          "\n"
          "//--- Only lexical analysis\n"
          "  public : static void performOnlyLexicalAnalysis (" ;
        columnMarker = result.currentColumn () ;
        result << "C_Compiler * inCompiler,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const C_String & inSourceFilePath) ;\n"
          "\n"
          "//--- Only syntax analysis\n"
          "  public : static void performOnlySyntaxAnalysis (" ;
        columnMarker = result.currentColumn () ;
        result << "C_Compiler * inCompiler,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const C_String & inSourceFilePath) ;\n"
          "\n" ;
      }else if (kBoolFalse == test_15) {
      }
      index_484_.increment () ;
      enumerator_484.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5621_ (0) ;
  if (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_nonTerminalToAddList enumerator_5621 (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5621.hasCurrentObject ()) {
      result << "  public : virtual int32_t select_" ;
      result << enumerator_5621.current_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 105)).stringValue () ;
      result << "_" ;
      result << enumerator_5621.current_mNonTerminalToAddCount (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 105)).stringValue () ;
      result << " (C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) ;\n" ;
      if (enumerator_5621.hasNextObject ()) {
        result << "\n" ;
      }
      index_5621_.increment () ;
      enumerator_5621.gotoNextObject () ;
    }
  }
  result << "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Filewrapper 'grammarRulesInTexDocumentTemplate'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_grammarRulesInTexDocumentTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_grammarRulesInTexDocumentTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_grammarRulesInTexDocumentTemplate (
  "",
  0,
  gWrapperAllFiles_grammarRulesInTexDocumentTemplate_0,
  0,
  gWrapperAllDirectories_grammarRulesInTexDocumentTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'grammarRulesInTexDocumentTemplate document'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (C_Compiler * /* inCompiler */,
                                                                              const GALGAS_string & in_DOCUMENT_5F_NAME,
                                                                              const GALGAS_string & in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "%!TEX encoding = UTF-8 Unicode\n"
    "\n"
    "\\documentclass[landscape]{book}\n"
    "\\usepackage[a3paper]{geometry}\n"
    "\n"
    "\\usepackage{verbatim}\n"
    "\n"
    "\\usepackage{hyperref}\n"
    "\n"
    "\\usepackage{tikz}\n"
    "\n"
    "\\usetikzlibrary{\n"
    "  arrows,\n"
    "  shapes.misc,% wg. rounded rectangle\n"
    "  shapes.arrows,%\n"
    "  matrix,%\n"
    "  scopes,%\n"
    "  shadows%\n"
    "}\n"
    "\n"
    "\\tikzset{\n"
    "  nonterminal/.style={\n"
    "    % The shape:\n"
    "    rectangle,\n"
    "    % The size:\n"
    "    minimum size=6mm,\n"
    "    % The border:\n"
    "    very thick,\n"
    "    draw=red!50!black!50,         % 50% red and 50% black,\n"
    "                                  % and that mixed with 50% white\n"
    "    % The filling:\n"
    "    top color=white,              % a shading that is white at the top...\n"
    "    bottom color=red!50!black!20, % and something else at the bottom\n"
    "    % Font\n"
    "    font=\\itshape\\small\n"
    "  },\n"
    "  terminal/.style={\n"
    "    % The shape:\n"
    "    rounded rectangle,\n"
    "    minimum size=6mm,\n"
    "    % The rest\n"
    "    very thick,draw=black!50,\n"
    "    top color=white,bottom color=black!20,\n"
    "    font=\\ttfamily\\small\n"
    "  },\n"
    "  firstPoint/.style={circle,>=stealth',thick,draw=black!50},\n"
    "  point/.style={coordinate,>=stealth',thick,draw=black!50},\n"
    "  tip/.style={->,shorten >=0.007pt},\n"
    "  lastPoint/.style={rectangle,>=stealth',thick,draw=black!50},\n"
    "  every join/.style={rounded corners}\n"
    "}\n"
    "\n"
    "\\newcommand\\nonTerminalSection[2]{\\section{Nonterminal \\texttt{#1}}\\label{nt:#2}}\n"
    "\\newcommand\\ruleSubsection[3]{\\subsection{Component \\texttt{#1}, in file \\texttt{#2}, line #3}}\n"
    "\\newcommand\\ruleMatrixColumnSeparation{3mm}\n"
    "\\newcommand\\ruleMatrixRowSeparation{3mm}\n"
    "\\newcommand\\nonTerminalSymbol[2]{\\hyperref[nt:#2]{#1}}\n"
    "\\newcommand\\startSymbol[2]{The start symbol is \\hyperref[nt:#2]{#1}.}\n"
    "\n"
    "\\newcommand\\nonTerminalSummaryStart{This is the alphabetical list of non terminal : }\n"
    "\\newcommand\\nonTerminalSummary[2]{\\hyperref[nt:#2]{#1}}\n"
    "\\newcommand\\nonTerminalSummarySeparator{, }\n"
    "\\newcommand\\nonTerminalSummaryEnd{.\\\\}\n"
    "\n"
    "\\begin{document}\n"
    "\n"
    "\\title{\\Huge{Grammar \\texttt{" ;
  result << in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME.stringValue () ;
  result << "}}}\n"
    "\\date \\today \n"
    "\n"
    "\\maketitle\n"
    "\n"
    "\\input{" ;
  result << in_DOCUMENT_5F_NAME.stringValue () ;
  result << ".tex}\n"
    "\n"
    "\\end{document}\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'escapeForTex'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_escapeForTex (const GALGAS_string & constinArgument_inString,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_2654 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inString.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 32)).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 32))), kENUMERATION_UP) ;
  while (enumerator_2654.hasCurrentObject ()) {
    GALGAS_char var_c_2667 = constinArgument_inString.getter_characterAtIndex (enumerator_2654.current (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 33)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (95)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("\\_"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 35)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (123)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result.plusAssign_operation(GALGAS_string ("\\{"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 37)) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (125)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          result_result.plusAssign_operation(GALGAS_string ("\\}"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 39)) ;
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (38)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            result_result.plusAssign_operation(GALGAS_string ("\\&"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 41)) ;
          }else if (kBoolFalse == test_3) {
            const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (36)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              result_result.plusAssign_operation(GALGAS_string ("\\$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 43)) ;
            }else if (kBoolFalse == test_4) {
              const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (94)))).boolEnum () ;
              if (kBoolTrue == test_5) {
                result_result.plusAssign_operation(GALGAS_string ("\\verb=^="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 45)) ;
              }else if (kBoolFalse == test_5) {
                const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (37)))).boolEnum () ;
                if (kBoolTrue == test_6) {
                  result_result.plusAssign_operation(GALGAS_string ("\\verb=%="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 47)) ;
                }else if (kBoolFalse == test_6) {
                  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (126)))).boolEnum () ;
                  if (kBoolTrue == test_7) {
                    result_result.plusAssign_operation(GALGAS_string ("$\\sim$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 49)) ;
                  }else if (kBoolFalse == test_7) {
                    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (94)))).boolEnum () ;
                    if (kBoolTrue == test_8) {
                      result_result.plusAssign_operation(GALGAS_string ("$\\wedge$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 51)) ;
                    }else if (kBoolFalse == test_8) {
                      result_result.plusAssign_operation(var_c_2667.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 53)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_2654.gotoNextObject () ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_escapeForTex [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_escapeForTex (C_Compiler * inCompiler,
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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_escapeForTex ("escapeForTex",
                                                              functionWithGenericHeader_escapeForTex,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              1,
                                                              functionArgs_escapeForTex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'emitProductionRulesInTexFile'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_emitProductionRulesInTexFile (const GALGAS_string constinArgument_inProductDirectory,
                                           const GALGAS_string constinArgument_inGrammarComponentName,
                                           const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                           const GALGAS_syntaxComponentListForGrammarAnalysis constinArgument_inSyntaxComponentListForGrammarAnalysis,
                                           const GALGAS_lstring constinArgument_inStartSymbol,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_texDocumentFilePath_3734 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 68)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 68)).add_operation (GALGAS_string (".document.tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 68)) ;
  var_texDocumentFilePath_3734.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 69)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 69)) ;
  GALGAS_string var_document_3900 = GALGAS_string (filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (inCompiler, constinArgument_inGrammarComponentName, function_escapeForTex (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 72)) COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 70))) ;
  GALGAS_bool joker_4102 ; // Joker input parameter
  var_document_3900.method_writeToFileWhenDifferentContents (var_texDocumentFilePath_3734, joker_4102, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 74)) ;
  GALGAS_string var_texFilePath_4122 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 75)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 75)).add_operation (GALGAS_string (".tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 75)) ;
  GALGAS_string var_s_4198 = GALGAS_string::makeEmptyString () ;
  GALGAS_uint var_startSymbolIndex_4288 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_4290 ; // Joker input parameter
  constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (constinArgument_inStartSymbol, var_startSymbolIndex_4288, joker_4290, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 77)) ;
  var_s_4198.plusAssign_operation(GALGAS_string ("\\startSymbol{").add_operation (function_escapeForTex (constinArgument_inStartSymbol.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 78)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 78)).add_operation (var_startSymbolIndex_4288.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 78)).add_operation (GALGAS_string ("}\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 78)) ;
  var_s_4198.plusAssign_operation(GALGAS_string ("\\nonTerminalSummaryStart "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 79)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_4478 (constinArgument_inNonTerminalMapForGrammarAnalysis, kENUMERATION_UP) ;
  while (enumerator_4478.hasCurrentObject ()) {
    var_s_4198.plusAssign_operation(GALGAS_string ("\\nonTerminalSummary{").add_operation (function_escapeForTex (enumerator_4478.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 81)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 81)).add_operation (enumerator_4478.current (HERE).getter_mNonTerminalIndex (HERE).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 81)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 81)) ;
    if (enumerator_4478.hasNextObject ()) {
      var_s_4198.plusAssign_operation(GALGAS_string ("\\nonTerminalSummarySeparator "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 82)) ;
    }
    enumerator_4478.gotoNextObject () ;
  }
  var_s_4198.plusAssign_operation(GALGAS_string ("\\nonTerminalSummaryEnd "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 84)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_4740 (constinArgument_inNonTerminalMapForGrammarAnalysis, kENUMERATION_UP) ;
  while (enumerator_4740.hasCurrentObject ()) {
    var_s_4198.plusAssign_operation(GALGAS_string ("\\nonTerminalSection{").add_operation (function_escapeForTex (enumerator_4740.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 86)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 86)).add_operation (enumerator_4740.current (HERE).getter_mNonTerminalIndex (HERE).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 86)).add_operation (GALGAS_string ("}\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 86)) ;
    cEnumerator_syntaxComponentListForGrammarAnalysis enumerator_4927 (constinArgument_inSyntaxComponentListForGrammarAnalysis, kENUMERATION_UP) ;
    while (enumerator_4927.hasCurrentObject ()) {
      cEnumerator_productionRuleListForGrammarAnalysis enumerator_4995 (enumerator_4927.current (HERE).getter_mProductionRulesList (HERE), kENUMERATION_UP) ;
      while (enumerator_4995.hasCurrentObject ()) {
        const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4995.current (HERE).getter_mLeftNonterminalSymbol (HERE).getter_string (HERE).objectCompare (enumerator_4740.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 89)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = extensionGetter_displayVertically (enumerator_4995.current (HERE).getter_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 90)).boolEnum () ;
          if (kBoolTrue == test_1) {
            extensionMethod_displayRuleVertically (enumerator_4995.current (HERE), enumerator_4927.current (HERE).getter_mSyntaxComponentName (HERE).getter_string (HERE), var_s_4198, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 91)) ;
          }else if (kBoolFalse == test_1) {
            extensionMethod_displayRule (enumerator_4995.current (HERE), enumerator_4927.current (HERE).getter_mSyntaxComponentName (HERE).getter_string (HERE), var_s_4198, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 93)) ;
          }
        }
        enumerator_4995.gotoNextObject () ;
      }
      enumerator_4927.gotoNextObject () ;
    }
    enumerator_4740.gotoNextObject () ;
  }
  GALGAS_bool joker_5457 ; // Joker input parameter
  var_s_4198.method_writeToFileWhenDifferentContents (var_texFilePath_4122, joker_5457, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 99)) ;
}


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
  GALGAS_string var_nodeName_12520 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[terminal] {").add_operation (function_escapeForTex (object->mProperty_mTerminalSymbolName.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 318)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 318)), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_12520, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 317)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 323)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 323)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 323)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 323)).add_operation (var_nodeName_12520, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 323)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 323)) ;
  ioArgument_ioCurrentNode = var_nodeName_12520 ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 326)) ;
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
  GALGAS_string var_nodeDefinition_13161 = GALGAS_string ("[nonterminal] {\\nonTerminalSymbol{").add_operation (function_escapeForTex (object->mProperty_mNonterminalSymbolName.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 341)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 341)).add_operation (object->mProperty_mNonterminalSymbolIndex.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 342)).add_operation (GALGAS_string ("}}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 342)) ;
  GALGAS_string var_nodeName_13406 ;
  {
  extensionSetter_append (ioArgument_ioRowList, var_nodeDefinition_13161, constinArgument_inRow, ioArgument_ioColumn, var_nodeName_13406, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 343)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 349)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 349)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 349)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 349)).add_operation (var_nodeName_13406, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 349)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 349)) ;
  ioArgument_ioCurrentNode = var_nodeName_13406 ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 352)) ;
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
    GALGAS_string var_markerStartNodeName_14219 ;
    {
    extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {SS").add_operation (object->mProperty_mSelectBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 370)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 370)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 370)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_14219, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)) ;
    }
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 375)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 375)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 375)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 375)).add_operation (var_markerStartNodeName_14219, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 375)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 375)) ;
    ioArgument_ioCurrentNode = var_markerStartNodeName_14219 ;
    ioArgument_ioArrowShape = GALGAS_string ("--") ;
    ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 378)) ;
  }
  GALGAS_string var_startNodeName_14551 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_14551, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 381)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 382)) ;
  GALGAS_branchListForGrammarAnalysis var_branches_14604 = object->mProperty_mSelectBranchList ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_brancheZero_14705 ;
  {
  var_branches_14604.setter_popFirst (var_brancheZero_14705, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 385)) ;
  }
  GALGAS_uint var_branchZeroColumn_14729 = ioArgument_ioColumn ;
  GALGAS_uint var_maxUsedRowIndex_14762 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_14705, ioArgument_ioRowList, constinArgument_inRow, var_branchZeroColumn_14729, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_14762, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 388)) ;
  GALGAS_uint var_endColumn_15017 = var_branchZeroColumn_14729 ;
  GALGAS_stringlist var_endingNodes_15092 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 400)) ;
  cEnumerator_branchListForGrammarAnalysis enumerator_15122 (var_branches_14604, kENUMERATION_UP) ;
  while (enumerator_15122.hasCurrentObject ()) {
    var_maxUsedRowIndex_14762.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 402)) ;
    GALGAS_uint var_branchColumn_15169 = ioArgument_ioColumn ;
    GALGAS_string var_currentNode_15200 = var_startNodeName_14551 ;
    GALGAS_string var_arrowStyle_15235 = GALGAS_string ("|-") ;
    extensionMethod_tikzNodeForSyntaxInstruction (enumerator_15122.current (HERE).getter_mSyntaxInstructionList (HERE), ioArgument_ioRowList, var_maxUsedRowIndex_14762, var_branchColumn_15169, var_currentNode_15200, var_arrowStyle_15235, ioArgument_ioArrows, var_maxUsedRowIndex_14762, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 406)) ;
    var_endingNodes_15092.addAssign_operation (var_currentNode_15200  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 416)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_endColumn_15017.objectCompare (var_branchColumn_15169)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_endColumn_15017 = var_branchColumn_15169 ;
    }
    enumerator_15122.gotoNextObject () ;
  }
  ioArgument_ioColumn = var_endColumn_15017 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_14762)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_14762 ;
  }
  GALGAS_string var_endNodeName_15868 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_endNodeName_15868, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 426)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 427)) ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (var_endNodeName_15868, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)) ;
  ioArgument_ioCurrentNode = var_endNodeName_15868 ;
  cEnumerator_stringlist enumerator_16081 (var_endingNodes_15092, kENUMERATION_UP) ;
  while (enumerator_16081.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (enumerator_16081.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 433)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 433)).add_operation (var_endNodeName_15868, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 433)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 433)) ;
    enumerator_16081.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = constinArgument_inDebug.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_string var_markerEndNodeName_16375 ;
    {
    extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {SE").add_operation (object->mProperty_mSelectBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 438)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 438)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 438)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_16375, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 437)) ;
    }
    ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 443)) ;
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 444)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 444)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 444)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 444)).add_operation (var_markerEndNodeName_16375, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 444)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 444)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 444)) ;
    ioArgument_ioCurrentNode = var_markerEndNodeName_16375 ;
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
    GALGAS_string var_markerStartNodeName_17198 ;
    {
    extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {RS").add_operation (object->mProperty_mRepeatBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 464)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 464)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 464)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_17198, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 463)) ;
    }
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 469)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 469)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 469)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 469)).add_operation (var_markerStartNodeName_17198, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 469)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 469)) ;
    ioArgument_ioCurrentNode = var_markerStartNodeName_17198 ;
    ioArgument_ioArrowShape = GALGAS_string ("--") ;
    ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 472)) ;
  }
  GALGAS_string var_returnNodeName_17532 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_returnNodeName_17532, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 475)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 476)) ;
  GALGAS_branchListForGrammarAnalysis var_branches_17585 = object->mProperty_mRepeatBranchList ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_brancheZero_17686 ;
  {
  var_branches_17585.setter_popFirst (var_brancheZero_17686, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 479)) ;
  }
  GALGAS_uint var_maxUsedRowIndex_17709 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_17686, ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_17709, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 481)) ;
  GALGAS_uint var_endColumn_17956 = ioArgument_ioColumn ;
  GALGAS_string var_startNodeName_18097 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_18097, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 493)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 494)) ;
  GALGAS_bool var_oneEmptyBranch_18198 = GALGAS_bool (kIsEqual, var_branches_17585.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 496)).objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
  const enumGalgasBool test_1 = var_oneEmptyBranch_18198.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_firstBranch_18285 ;
    var_branches_17585.method_first (var_firstBranch_18285, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 498)) ;
    var_oneEmptyBranch_18198 = GALGAS_bool (kIsEqual, var_firstBranch_18285.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 499)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_stringlist var_endingNodes_18385 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 502)) ;
  const enumGalgasBool test_2 = var_oneEmptyBranch_18198.boolEnum () ;
  if (kBoolTrue == test_2) {
    var_endingNodes_18385.addAssign_operation (var_startNodeName_18097  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 504)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_nextBranchUsedRowIndex_18487 = constinArgument_inRow ;
    cEnumerator_branchListForGrammarAnalysis enumerator_18522 (var_branches_17585, kENUMERATION_UP) ;
    while (enumerator_18522.hasCurrentObject ()) {
      var_nextBranchUsedRowIndex_18487.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 508)) ;
      GALGAS_uint var_branchColumn_18580 = ioArgument_ioColumn ;
      GALGAS_string var_currentNode_18613 = var_startNodeName_18097 ;
      GALGAS_string var_arrowStyle_18650 = GALGAS_string ("|-") ;
      extensionMethod_tikzNodeForSyntaxInstruction (enumerator_18522.current (HERE).getter_mSyntaxInstructionList (HERE), ioArgument_ioRowList, var_nextBranchUsedRowIndex_18487, var_branchColumn_18580, var_currentNode_18613, var_arrowStyle_18650, ioArgument_ioArrows, var_nextBranchUsedRowIndex_18487, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 512)) ;
      var_endingNodes_18385.addAssign_operation (var_currentNode_18613  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 522)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_endColumn_17956.objectCompare (var_branchColumn_18580)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_endColumn_17956 = var_branchColumn_18580 ;
      }
      enumerator_18522.gotoNextObject () ;
    }
    ioArgument_ioColumn = var_endColumn_17956 ;
    ioArgument_ioMaxUsedRowIndex = var_nextBranchUsedRowIndex_18487 ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_17709)).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_17709 ;
  }
  ioArgument_ioMaxUsedRowIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 534)) ;
  GALGAS_string var_returnUpperNodeName_19488 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), ioArgument_ioMaxUsedRowIndex, ioArgument_ioColumn, var_returnUpperNodeName_19488, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 536)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)) ;
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_returnUpperNodeName_19488, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 538)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 538)).add_operation (var_returnNodeName_17532, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 538)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 538)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 538)) ;
  cEnumerator_stringlist enumerator_19645 (var_endingNodes_18385, kENUMERATION_UP) ;
  while (enumerator_19645.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (enumerator_19645.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 541)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 541)).add_operation (var_returnUpperNodeName_19488, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 541)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 541)) ;
    enumerator_19645.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = constinArgument_inDebug.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_markerEndNodeName_19947 ;
    {
    extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {RE").add_operation (object->mProperty_mRepeatBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 546)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 546)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 546)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_19947, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 545)) ;
    }
    ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 551)) ;
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 552)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 552)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 552)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 552)).add_operation (var_markerEndNodeName_19947, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 552)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 552)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 552)) ;
    ioArgument_ioCurrentNode = var_markerEndNodeName_19947 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (void) {
  enterExtensionMethod_tikzNodeForSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis.mSlotID,
                                                     extensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (defineExtensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@terminalInstructionForGrammarAnalysis isLinear'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_terminalInstructionForGrammarAnalysis_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_terminalInstructionForGrammarAnalysis_isLinear (void) {
  enterExtensionGetter_isLinear (kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis.mSlotID,
                                 extensionGetter_terminalInstructionForGrammarAnalysis_isLinear) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_terminalInstructionForGrammarAnalysis_isLinear (defineExtensionGetter_terminalInstructionForGrammarAnalysis_isLinear, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@nonTerminalInstructionForGrammarAnalysis isLinear'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_nonTerminalInstructionForGrammarAnalysis_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * /* inObject */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_nonTerminalInstructionForGrammarAnalysis_isLinear (void) {
  enterExtensionGetter_isLinear (kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis.mSlotID,
                                 extensionGetter_nonTerminalInstructionForGrammarAnalysis_isLinear) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_nonTerminalInstructionForGrammarAnalysis_isLinear (defineExtensionGetter_nonTerminalInstructionForGrammarAnalysis_isLinear, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@selectInstructionForGrammarAnalysis isLinear'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_selectInstructionForGrammarAnalysis_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_selectInstructionForGrammarAnalysis_isLinear (void) {
  enterExtensionGetter_isLinear (kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis.mSlotID,
                                 extensionGetter_selectInstructionForGrammarAnalysis_isLinear) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_selectInstructionForGrammarAnalysis_isLinear (defineExtensionGetter_selectInstructionForGrammarAnalysis_isLinear, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@repeatInstructionForGrammarAnalysis isLinear'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_repeatInstructionForGrammarAnalysis_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_repeatInstructionForGrammarAnalysis_isLinear (void) {
  enterExtensionGetter_isLinear (kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis.mSlotID,
                                 extensionGetter_repeatInstructionForGrammarAnalysis_isLinear) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_repeatInstructionForGrammarAnalysis_isLinear (defineExtensionGetter_repeatInstructionForGrammarAnalysis_isLinear, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Filewrapper 'programFileGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_programFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_programFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_programFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_programFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_programFileGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'programFileGenerationTemplate programFileImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & /* in_COMPONENT_5F_NAME */,
                                                                                           const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST,
                                                                                           const GALGAS_string & in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING,
                                                                                           const GALGAS_programRuleList & in_PROGRAM_5F_RULE_5F_LIST,
                                                                                           const GALGAS_string & in_PROJECT_5F_VERSION_5F_STRING
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#include \"project_header.h\"\n"
    "#include \"command_line_interface/F_mainForLIBPM.h\"\n"
    "#include \"command_line_interface/F_Analyze_CLI_Options.h\"\n"
    "#include \"utilities/F_DisplayException.h\"\n"
    "#include \"galgas2/C_galgas_CLI_Options.h\"\n"
    "#include \"galgas2/F_verbose_output.h\"\n"
    "#include \"galgas2/cLexiqueIntrospection.h\"\n"
    "#include \"command_line_interface/C_builtin_CLI_Options.h\"\n" ;
  GALGAS_uint index_397_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_397 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_397.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_397.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_397_.increment () ;
      enumerator_397.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                      print_tool_help_message                                                                        *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void print_tool_help_message (void) {\n"
    "  co << \"Compiled with GALGAS revision NUMERO_REVISION_GALGAS\\n\" ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static const char * kSourceFileExtensions [] = {\n" ;
  GALGAS_uint index_1361_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_programRuleList enumerator_1361 (in_PROGRAM_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1361.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1361.current_mSourceFileExtension (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 27)).stringValue () ;
      result << ",\n" ;
      index_1361_.increment () ;
      enumerator_1361.gotoNextObject () ;
    }
  }
  result << "  NULL\n"
    "} ;    \n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static const char * kSourceFileHelpMessages [] = {\n" ;
  GALGAS_uint index_1642_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_programRuleList enumerator_1642 (in_PROGRAM_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1642.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1642.current_mSourceFileHelp (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 37)).stringValue () ;
      result << ",\n" ;
      index_1642_.increment () ;
      enumerator_1642.gotoNextObject () ;
    }
  }
  result << "  NULL\n"
    "} ;    \n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "const char * projectVersionString (void) {\n"
    "  return " ;
  result << in_PROJECT_5F_VERSION_5F_STRING.getter_utf_38_Representation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 45)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n" ;
  result << in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING.stringValue () ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                      M A I N    F O R    L I B P M                                                                  *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "int mainForLIBPM (int inArgc, const char * inArgv []) {\n"
    "//--- Analyze Command Line Options\n"
    "  TC_UniqueArray <C_String> sourceFilesArray ;\n"
    "  F_Analyze_CLI_Options (inArgc, inArgv,\n"
    "                         sourceFilesArray,\n"
    "                         kSourceFileExtensions,\n"
    "                         kSourceFileHelpMessages,\n"
    "                         print_tool_help_message) ;\n"
    "//---\n"
    "  int returnCode = 0 ; // No error\n"
    "//--- Set Execution mode\n"
    "  C_String executionModeOptionErrorMessage ;\n"
    "  setExecutionMode (executionModeOptionErrorMessage) ;\n"
    "  if (executionModeOptionErrorMessage.length () > 0) {\n"
    "    co << executionModeOptionErrorMessage ;\n"
    "    returnCode = 1 ;\n"
    "  }else{\n"
    "  //--- Common lexique object\n"
    "    C_Compiler * commonCompiler = NULL ;\n"
    "    macroMyNew (commonCompiler, C_Compiler (NULL COMMA_HERE)) ;\n"
    "    try{\n"
    "      routine_before (commonCompiler COMMA_HERE) ;\n"
    "      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;\n"
    "      const bool verboseOptionOn = verboseOutput () ;\n"
    "      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {\n"
    "        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;\n"
    "        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;\n"
    "        const GALGAS_location location = commonCompiler->here () ;\n"
    "        const GALGAS_lstring sourceFilePath (sfp, location) ;\n"
    "        int r = 0 ;\n"
    "        " ;
  GALGAS_uint index_4035_IDX (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_programRuleList enumerator_4035 (in_PROGRAM_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4035.hasCurrentObject ()) {
      result << "if (fileExtension == " ;
      result << enumerator_4035.current_mSourceFileExtension (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 88)).stringValue () ;
      result << ") {\n" ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4035.current_mReferenceGrammar (HERE).getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 89)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "          switch (executionMode ()) {\n"
          "          case kExecutionModeNormal :\n"
          "            routine_" ;
        result << GALGAS_string ("programRule_").add_operation (index_4035_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 92)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 92)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 92)).stringValue () ;
        result << " (sourceFilePath, commonCompiler COMMA_HERE) ;\n"
          "            break ;\n"
          "          case kExecutionModeLexicalAnalysisOnly :\n"
          "            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=lexical-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n"
          "            break ;\n"
          "          case kExecutionModeSyntaxAnalysisOnly :\n"
          "            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=syntax-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n"
          "            break ;\n"
          "          case kExecutionModeIndexing :\n"
          "            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=indexing\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n"
          "            break ;\n"
          "          case kExecutionModeLatex :\n"
          "            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=latex\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n"
          "            break ;\n"
          "          }\n" ;
      }else if (kBoolFalse == test_0) {
        result << "          switch (executionMode ()) {\n"
          "          case kExecutionModeNormal :\n"
          "            routine_" ;
        result << GALGAS_string ("programRule_").add_operation (index_4035_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 110)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 110)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 110)).stringValue () ;
        result << " (sourceFilePath, commonCompiler COMMA_HERE) ;\n"
          "            break ;\n"
          "          case kExecutionModeLexicalAnalysisOnly :\n"
          "            cGrammar_" ;
        result << enumerator_4035.current_mReferenceGrammar (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 113)).stringValue () ;
        result << "::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n"
          "            break ;\n"
          "          case kExecutionModeSyntaxAnalysisOnly :\n"
          "            cGrammar_" ;
        result << enumerator_4035.current_mReferenceGrammar (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 116)).stringValue () ;
        result << "::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n"
          "            break ;\n"
          "          case kExecutionModeIndexing :\n"
          "            cGrammar_" ;
        result << enumerator_4035.current_mReferenceGrammar (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 119)).stringValue () ;
        result << "::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n"
          "            break ;\n"
          "          case kExecutionModeLatex :\n"
          "            cGrammar_" ;
        result << enumerator_4035.current_mReferenceGrammar (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 122)).stringValue () ;
        result << "::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n"
          "            break ;\n"
          "          }\n" ;
      }
      if (enumerator_4035.hasNextObject ()) {
        result << "        }else " ;
      }
      index_4035_IDX.increment () ;
      enumerator_4035.gotoNextObject () ;
    }
  }
  result << "        }else{\n"
    "          printf (\"*** Error: unhandled extension for file '%s' ***\\n\", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;\n"
    "          r = 1 ;\n"
    "        }\n"
    "        if (r != 0) {\n"
    "          returnCode = r ;\n"
    "        }\n"
    "      }\n"
    "    //--- Error or warnings \?\n"
    "      if (totalErrorCount () > 0) {\n"
    "        returnCode = 1 ; // Error code\n"
    "      }else if (totalWarningCount () > 0) {\n"
    "        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {\n"
    "          returnCode = 1 ; // Error code\n"
    "          if (verboseOptionOn) {\n"
    "            printf (\"** Note: warnings are treated as errors. **\\n\") ;\n"
    "          }\n"
    "        }\n"
    "      }\n"
    "    //--- Epilogue\n"
    "      routine_after (commonCompiler COMMA_HERE) ;\n"
    "    //--- Emit JSON issue file \?\n"
    "      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != \"\") {\n"
    "        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;\n"
    "      }\n"
    "    //--- Display error and warnings count\n"
    "      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {\n"
    "        C_String message ;\n"
    "        if (totalWarningCount () == 0) {\n"
    "          message << \"No warning\" ;\n"
    "        }else if (totalWarningCount () == 1) {\n"
    "          message << \"1 warning\" ;\n"
    "        }else{\n"
    "          message << cStringWithSigned (totalWarningCount ()) << \" warnings\" ;\n"
    "        }\n"
    "        message << \", \" ;\n"
    "        if (totalErrorCount () == 0) {\n"
    "          message << \"no error\" ;\n"
    "        }else if (totalErrorCount () == 1) {\n"
    "          message << \"1 error\" ;\n"
    "        }else{\n"
    "          message << cStringWithSigned (totalErrorCount ()) << \" errors\" ;\n"
    "        }\n"
    "        message << \".\\n\" ;\n"
    "        ggs_printMessage (message COMMA_HERE) ;\n"
    "      }\n"
    "    }catch (const ::std:: exception & e) {\n"
    "      F_default_display_exception (e) ;\n"
    "      returnCode = 1 ; // Error code\n"
    "    }catch (...) {\n"
    "      printf (\"**** Unknow exception ****\\n\") ;\n"
    "      throw ;\n"
    "    }\n"
    "    macroDetachSharedObject (commonCompiler) ;\n"
    "  }\n"
    "  return returnCode ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'compileBeforeClauseGalgas3'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileBeforeClauseGalgas_33_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                            const GALGAS_prologueEpilogueList constinArgument_inPrologueList,
                                            GALGAS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_usefulnessName_3789 = function_beforeNameForUsefulEntitiesGraph (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 51)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_3789, var_usefulnessName_3789, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 52)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_usefulnessName_3789  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 53)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_4021 = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 55)) ;
  cEnumerator_prologueEpilogueList enumerator_4098 (constinArgument_inPrologueList, kENUMERATION_UP) ;
  while (enumerator_4098.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_4620 ;
    {
    GALGAS_formalParameterListForGeneration joker_4628 ; // Joker input parameter
    routine_analyzeRoutineBody (var_usefulnessName_3789, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 61)), GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 62)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 63)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 64)), GALGAS_string::makeEmptyString (), enumerator_4098.current_mInstructionList (HERE), enumerator_4098.current_mEndOfInstructionList (HERE), var_blockSemanticInstructionListForGeneration_4620, joker_4628, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 57)) ;
    }
    var_semanticInstructionListForGeneration_4021.addAssign_operation (GALGAS_semanticBlockInstructionForGeneration::constructor_new (var_blockSemanticInstructionListForGeneration_4620  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 71))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 71)) ;
    enumerator_4098.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.addAssign_operation (GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("proc-before"), GALGAS_string ("before"), GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 80)), GALGAS_bool (true), var_semanticInstructionListForGeneration_4021  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 76))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 75)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'compileProgramRulesGalgas3'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileProgramRulesGalgas_33_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                            const GALGAS_programRuleList constinArgument_inProgramRules,
                                            GALGAS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_ruleIndex_5984 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_programRuleList enumerator_6015 (constinArgument_inProgramRules, kENUMERATION_UP) ;
  while (enumerator_6015.hasCurrentObject ()) {
    GALGAS_lstring var_usefulnessName_6041 = function_rootRuleNameForUsefulEntitiesGraph (enumerator_6015.current_mSourceFileExtension (HERE), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 101)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_6041, var_usefulnessName_6041, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 102)) ;
    }
    ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_usefulnessName_6041  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 103)) ;
    GALGAS_formalParameterListAST temp_0 = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 109)) ;
    temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("programComponentCompilation.galgas", 105)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("programComponentCompilation.galgas", 106)), GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 107))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 107)), enumerator_6015.current_mSourceFileVariableName (HERE), enumerator_6015.current_mSourceFileVariableNameIsUnused (HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 109)) ;
    GALGAS_formalParameterListAST var_argumentList_6265 = temp_0 ;
    GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6550 ;
    GALGAS_formalParameterListForGeneration var_routineSignature_6605 ;
    {
    routine_analyzeRoutineBody (var_usefulnessName_6041, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_argumentList_6265, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 118)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 119)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 120)), GALGAS_string::makeEmptyString (), enumerator_6015.current_mInstructionList (HERE), enumerator_6015.current_mEndOfInstructionList (HERE), var_semanticInstructionListForGeneration_6550, var_routineSignature_6605, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 113)) ;
    }
    ioArgument_ioDecoratedDeclarationListForGeneration.addAssign_operation (GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("proc-programrule"), GALGAS_string ("programRule_").add_operation (var_ruleIndex_5984.getter_string (SOURCE_FILE ("programComponentCompilation.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 131)), var_routineSignature_6605, GALGAS_bool (true), var_semanticInstructionListForGeneration_6550  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 128))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 127)) ;
    var_ruleIndex_5984.increment_operation (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 135)) ;
    enumerator_6015.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'compileAfterClauseGalgas3'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileAfterClauseGalgas_33_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           const GALGAS_prologueEpilogueList constinArgument_inEpilogueList,
                                           GALGAS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_usefulnessName_8288 = function_afterNameForUsefulEntitiesGraph (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 152)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_8288, var_usefulnessName_8288, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 153)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_usefulnessName_8288  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 154)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8552 = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 156)) ;
  cEnumerator_prologueEpilogueList enumerator_8584 (constinArgument_inEpilogueList, kENUMERATION_UP) ;
  while (enumerator_8584.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_9106 ;
    {
    GALGAS_formalParameterListForGeneration joker_9114 ; // Joker input parameter
    routine_analyzeRoutineBody (var_usefulnessName_8288, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 162)), GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 163)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 164)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 165)), GALGAS_string::makeEmptyString (), enumerator_8584.current_mInstructionList (HERE), enumerator_8584.current_mEndOfInstructionList (HERE), var_blockSemanticInstructionListForGeneration_9106, joker_9114, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 158)) ;
    }
    var_semanticInstructionListForGeneration_8552.addAssign_operation (GALGAS_semanticBlockInstructionForGeneration::constructor_new (var_blockSemanticInstructionListForGeneration_9106  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 172))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 172)) ;
    enumerator_8584.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.addAssign_operation (GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("proc-after"), GALGAS_string ("after"), GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 179)), GALGAS_bool (true), var_semanticInstructionListForGeneration_8552  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 175))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 175)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'compileProgramComponentGalgas3'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileProgramComponentGalgas_33_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                const GALGAS_prologueEpilogueList constinArgument_inPrologueList,
                                                const GALGAS_programRuleList constinArgument_inProgramRules,
                                                const GALGAS_prologueEpilogueList constinArgument_inEpilogueList,
                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_string constinArgument_inProjectVersionString,
                                                GALGAS_programComponentForGeneration & outArgument_outProgramComponentForGeneration,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProgramComponentForGeneration.drop () ; // Release 'out' argument
  GALGAS_analysisContext var_analysisContext_10588 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, function_buildPredefinedTypes (constinArgument_inSemanticContext, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 204)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("programComponentCompilation.galgas", 205)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("programComponentCompilation.galgas", 207))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 202)) ;
  GALGAS_programListForGeneration var_decoratedDeclarationListForGeneration_10860 = GALGAS_programListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 210)) ;
  {
  routine_compileBeforeClauseGalgas_33_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10588, constinArgument_inPrologueList, var_decoratedDeclarationListForGeneration_10860, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 211)) ;
  }
  {
  routine_compileAfterClauseGalgas_33_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10588, constinArgument_inEpilogueList, var_decoratedDeclarationListForGeneration_10860, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 219)) ;
  }
  {
  routine_compileProgramRulesGalgas_33_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10588, constinArgument_inProgramRules, var_decoratedDeclarationListForGeneration_10860, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 227)) ;
  }
  GALGAS_stringset var_inclusionSet_11528 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("programComponentCompilation.galgas", 235)) ;
  GALGAS_string var_beforeAfterRulesString_11562 = GALGAS_string::makeEmptyString () ;
  cEnumerator_programListForGeneration enumerator_11617 (var_decoratedDeclarationListForGeneration_10860, kENUMERATION_UP) ;
  while (enumerator_11617.hasCurrentObject ()) {
    var_beforeAfterRulesString_11562.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_11617.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 238)) ;
    GALGAS_string var_code_11805 ;
    callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_11617.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext.getter_mTypeMap (HERE), var_inclusionSet_11528, var_code_11805, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 239)) ;
    var_beforeAfterRulesString_11562.plusAssign_operation(var_code_11805, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 240)) ;
    enumerator_11617.gotoNextObject () ;
  }
  cEnumerator_programRuleList enumerator_11874 (constinArgument_inProgramRules, kENUMERATION_UP) ;
  while (enumerator_11874.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_11874.current_mReferenceGrammar (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_inclusionSet_11528.addAssign_operation (GALGAS_string ("grammar-").add_operation (enumerator_11874.current_mReferenceGrammar (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("programComponentCompilation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 244))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 244)) ;
    }
    enumerator_11874.gotoNextObject () ;
  }
  GALGAS_string var_cppContents_12031 = GALGAS_string (filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (inCompiler, GALGAS_string ("program"), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 249)), var_beforeAfterRulesString_11562, constinArgument_inProgramRules, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 247))) ;
  outArgument_outProgramComponentForGeneration = GALGAS_programComponentForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("program"), var_inclusionSet_11528, var_cppContents_12031  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 255)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'parseAndAnalyzeProject'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_parseAndAnalyzeProject (const GALGAS_lstring constinArgument_inProjectSourceFile,
                                     const GALGAS_string constinArgument_inSourceToAnalyze,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgas_prgm.galgas", 122)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("*** Parsing project files\n")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 123)) ;
  }
  GALGAS_galgas_33_ProjectComponentAST var_projectComponentAST_7270 ;
  var_projectComponentAST_7270.drop () ;
  cGrammar_galgas_33_ProjectGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inProjectSourceFile, var_projectComponentAST_7270  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 125)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_galgas_5F_builtin_5F_options_mode.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    routine_compileProject (constinArgument_inProjectSourceFile, constinArgument_inSourceToAnalyze, var_projectComponentAST_7270, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 127)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint ((uint32_t) 0U).objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 129)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_cppCompilationTarget_7476 = GALGAS_string (gOption_galgas_5F_cli_5F_options_cppCompile.getter_value ()) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_cppCompilationTarget_7476.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        const enumGalgasBool test_4 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgas_prgm.galgas", 132)).boolEnum () ;
        if (kBoolTrue == test_4) {
          inCompiler->printMessage (GALGAS_string ("*** Perform C++ compilation\n")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 133)) ;
        }
        GALGAS_string var_buildFile_7691 = constinArgument_inProjectSourceFile.getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 135)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 135)).add_operation (var_cppCompilationTarget_7476, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 135)).add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 135)) ;
        const enumGalgasBool test_5 = var_buildFile_7691.getter_fileExists (SOURCE_FILE ("galgas_prgm.galgas", 136)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_sint var_resultCode_7856 = GALGAS_string ("python ").add_operation (var_buildFile_7691, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 137)).getter_system (SOURCE_FILE ("galgas_prgm.galgas", 137)) ;
          const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_resultCode_7856.objectCompare (GALGAS_sint ((int32_t) 0L))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas_prgm.galgas", 139)).getter_location (SOURCE_FILE ("galgas_prgm.galgas", 139)), GALGAS_string ("Running '").add_operation (var_buildFile_7691, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 139)).add_operation (GALGAS_string ("' returns "), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 139)).add_operation (var_resultCode_7856.getter_string (SOURCE_FILE ("galgas_prgm.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 139)), fixItArray7  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 139)) ;
          }
        }else if (kBoolFalse == test_5) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas_prgm.galgas", 142)).getter_location (SOURCE_FILE ("galgas_prgm.galgas", 142)), GALGAS_string ("Cannot perform C++ compilation of '").add_operation (var_cppCompilationTarget_7476, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 142)).add_operation (GALGAS_string ("' : the '"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 142)).add_operation (var_buildFile_7691, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 143)).add_operation (GALGAS_string ("' file does not exist"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 143)), fixItArray8  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 142)) ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'compileProject'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileProject (const GALGAS_lstring constinArgument_inProjectSourceFile,
                             const GALGAS_string constinArgument_inSourceToAnalyze,
                             const GALGAS_galgas_33_ProjectComponentAST constinArgument_inProjectComponentAST,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_DeclarationAST var_declarationAST_8549 = GALGAS_galgas_33_DeclarationAST::constructor_default (SOURCE_FILE ("galgas_prgm.galgas", 157)) ;
  cEnumerator_lstringlist enumerator_8613 (constinArgument_inProjectComponentAST.getter_mProjectSourceList (HERE), kENUMERATION_UP) ;
  while (enumerator_8613.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_8613.current_mValue (HERE).getter_string (HERE).getter_pathExtension (SOURCE_FILE ("galgas_prgm.galgas", 159)).objectCompare (GALGAS_string ("galgas"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_absoluteSourcePath_8692 = enumerator_8613.current_mValue (HERE).getter_string (HERE).getter_absolutePathFromPath (constinArgument_inProjectSourceFile.getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 160)) COMMA_SOURCE_FILE ("galgas_prgm.galgas", 160)) ;
      cGrammar_galgas_33_Grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteSourcePath_8692, enumerator_8613.current_mValue (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 161)), var_declarationAST_8549  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 161)) ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_8613.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas_prgm.galgas", 163)), GALGAS_string ("only \".galgas\" extension is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 163)) ;
    }
    enumerator_8613.gotoNextObject () ;
  }
  GALGAS_stringlist var_handCodedLinkAppFileList_9069 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 167)) ;
  GALGAS_stringlist var_handCodedSourceAppFileList_9115 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 168)) ;
  GALGAS_stringlist var_handCodedSourceToolFileList_9162 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 169)) ;
  GALGAS_stringlist var_frameworkToolFileList_9203 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 170)) ;
  GALGAS_stringset var_handCodedSourceDirectorySet_9249 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas_prgm.galgas", 171)) ;
  cEnumerator_galgas_33_QualifiedFeatureList enumerator_9310 (constinArgument_inProjectComponentAST.getter_mQualifiedFeatureList (HERE), kENUMERATION_UP) ;
  while (enumerator_9310.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("tool-source").objectCompare (enumerator_9310.current_mFeatureName (HERE).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 173)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_handCodedSourceToolFileList_9162.addAssign_operation (enumerator_9310.current_mFeatureValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 174)) ;
      GALGAS_string var_directory_9434 = enumerator_9310.current_mFeatureValue (HERE).getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 175)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_directory_9434.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_handCodedSourceDirectorySet_9249.addAssign_operation (GALGAS_string ("../")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 177)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_directory_9434.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 178)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_handCodedSourceDirectorySet_9249.addAssign_operation (GALGAS_string ("../").add_operation (var_directory_9434, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 179))  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 179)) ;
        }else if (kBoolFalse == test_4) {
          var_handCodedSourceDirectorySet_9249.addAssign_operation (var_directory_9434  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 181)) ;
        }
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_9310.current_mFeatureName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("tool-framework"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_frameworkToolFileList_9203.addAssign_operation (enumerator_9310.current_mFeatureValue (HERE).getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 184))  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 184)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_9310.current_mFeatureName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("app-source"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          var_handCodedSourceAppFileList_9115.addAssign_operation (enumerator_9310.current_mFeatureValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 186)) ;
          GALGAS_string var_directory_9997 = enumerator_9310.current_mFeatureValue (HERE).getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 187)) ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_directory_9997.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            var_handCodedSourceDirectorySet_9249.addAssign_operation (GALGAS_string ("../")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 189)) ;
          }else if (kBoolFalse == test_7) {
            const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_directory_9997.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 190)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              var_handCodedSourceDirectorySet_9249.addAssign_operation (GALGAS_string ("../").add_operation (var_directory_9997, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 191))  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 191)) ;
            }else if (kBoolFalse == test_8) {
              var_handCodedSourceDirectorySet_9249.addAssign_operation (var_directory_9997  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 193)) ;
            }
          }
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_9310.current_mFeatureName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("app-link"))).boolEnum () ;
          if (kBoolTrue == test_9) {
            var_handCodedLinkAppFileList_9069.addAssign_operation (enumerator_9310.current_mFeatureValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 196)) ;
          }else if (kBoolFalse == test_9) {
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_9310.current_mFeatureName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("libpmAtPath"))).boolEnum () ;
            if (kBoolTrue == test_10) {
            }else if (kBoolFalse == test_10) {
              const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_9310.current_mFeatureName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("applicationBundleBase"))).boolEnum () ;
              if (kBoolTrue == test_11) {
              }else if (kBoolFalse == test_11) {
                const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_9310.current_mFeatureName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("macCodeSign"))).boolEnum () ;
                if (kBoolTrue == test_12) {
                }else if (kBoolFalse == test_12) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_9310.current_mFeatureName (HERE).getter_location (SOURCE_FILE ("galgas_prgm.galgas", 201)), GALGAS_string ("unknown feature"), fixItArray13  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 201)) ;
                }
              }
            }
          }
        }
      }
    }
    enumerator_9310.gotoNextObject () ;
  }
  {
  routine_groupSyntaxComponentsGalgas_33_ (var_declarationAST_8549.getter_mSyntaxComponentList (HERE), var_declarationAST_8549.getter_mSyntaxExtensions (HERE), var_declarationAST_8549.mProperty_mDeclarationList, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 217)) ;
  }
  GALGAS_usefulEntitiesGraph var_usefulEntitiesGraph_11927 = GALGAS_usefulEntitiesGraph::constructor_emptyGraph (SOURCE_FILE ("galgas_prgm.galgas", 223)) ;
  GALGAS_lstringlist var_usefulnessRootEntities_11979 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 224)) ;
  GALGAS_string var_buildDirectory_12005 = constinArgument_inProjectSourceFile.getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 225)).add_operation (GALGAS_string ("/build"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 225)) ;
  GALGAS_string var_productDirectory_12097 = var_buildDirectory_12005.add_operation (GALGAS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 226)) ;
  GALGAS_stringlist var_appProductFileList_12159 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 227)) ;
  GALGAS_semanticContext var_semanticContext_12199 = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("galgas_prgm.galgas", 228)) ;
  GALGAS_semanticDeclarationListForGeneration var_semanticDeclarationSortedListForGeneration_12293 ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 230)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_14) {
    {
    routine_compileSemanticDeclarationsGalgas_33_ (var_usefulnessRootEntities_11979, var_usefulEntitiesGraph_11927, var_productDirectory_12097, constinArgument_inProjectComponentAST.getter_mEndOfSourceFile (HERE), var_declarationAST_8549.getter_mDeclarationList (HERE), var_semanticContext_12199, var_semanticDeclarationSortedListForGeneration_12293, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 231)) ;
    }
  }else if (kBoolFalse == test_14) {
    var_semanticDeclarationSortedListForGeneration_12293 = GALGAS_semanticDeclarationListForGeneration::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 241)) ;
  }
  GALGAS_optionComponentMapForGeneration var_optionComponentMapForGeneration_12804 ;
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 245)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    {
    routine_compileAllGuiComponentFromASTGalgas_33_ (var_declarationAST_8549.getter_mGUIComponentList (HERE), var_semanticContext_12199, var_optionComponentMapForGeneration_12804, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 246)) ;
    }
  }else if (kBoolFalse == test_15) {
    var_optionComponentMapForGeneration_12804 = GALGAS_optionComponentMapForGeneration::constructor_emptyMap (SOURCE_FILE ("galgas_prgm.galgas", 252)) ;
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 255)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    GALGAS_string var_projectVersionString_13167 = constinArgument_inProjectComponentAST.getter_mMajorVersion (HERE).getter_uint (SOURCE_FILE ("galgas_prgm.galgas", 256)).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 256)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 256)).add_operation (constinArgument_inProjectComponentAST.getter_mMinorVersion (HERE).getter_uint (SOURCE_FILE ("galgas_prgm.galgas", 257)).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 257)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 257)).add_operation (constinArgument_inProjectComponentAST.getter_mRevisionVersion (HERE).getter_uint (SOURCE_FILE ("galgas_prgm.galgas", 258)).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 258)) ;
    GALGAS_programComponentForGeneration var_programComponentForGeneration_13689 ;
    {
    routine_compileProgramComponentGalgas_33_ (var_usefulnessRootEntities_11979, var_usefulEntitiesGraph_11927, var_declarationAST_8549.getter_mPrologueDeclarationList (HERE), var_declarationAST_8549.getter_mSourceRuleList (HERE), var_declarationAST_8549.getter_mEpilogueDeclarationList (HERE), var_semanticContext_12199, var_projectVersionString_13167, var_programComponentForGeneration_13689, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 259)) ;
    }
    var_semanticDeclarationSortedListForGeneration_12293.addAssign_operation (GALGAS_string ("zprogram"), var_programComponentForGeneration_13689  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 269)) ;
  }
  {
  routine_checkUsefulEntities (var_usefulEntitiesGraph_11927, var_usefulnessRootEntities_11979, var_productDirectory_12097, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 275)) ;
  }
  GALGAS_string var_typeDumpFilePath_14056 = constinArgument_inProjectSourceFile.getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 277)).add_operation (GALGAS_string ("/build/helpers/"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 277)).add_operation (constinArgument_inProjectSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 278)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 278)) ;
  const enumGalgasBool test_17 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_stringset var_firstLetterSet_14293 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas_prgm.galgas", 280)) ;
    cEnumerator_unifiedTypeMap enumerator_14337 (var_semanticContext_12199.getter_mTypeMap (HERE), kENUMERATION_UP) ;
    while (enumerator_14337.hasCurrentObject ()) {
      var_firstLetterSet_14293.addAssign_operation (enumerator_14337.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 282)).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 282))  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 282)) ;
      enumerator_14337.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_14445 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_14479 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_unifiedTypeMap enumerator_14530 (var_semanticContext_12199.getter_mTypeMap (HERE), kENUMERATION_UP) ;
    while (enumerator_14530.hasCurrentObject ()) {
      const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_14479.objectCompare (enumerator_14530.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 287)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        var_currentFirstLetter_14479 = enumerator_14530.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 288)) ;
        var_tableOfTypeString_14445.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_14479.getter_uint (SOURCE_FILE ("galgas_prgm.galgas", 289)).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 289)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 289)).add_operation (var_currentFirstLetter_14479.getter_string (SOURCE_FILE ("galgas_prgm.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 289)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 289)) ;
      }
      var_tableOfTypeString_14445.plusAssign_operation(function_linkForType (enumerator_14530.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 291)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 291)) ;
      enumerator_14530.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_14908 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_typeDump (inCompiler, constinArgument_inProjectSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 294)), var_semanticContext_12199.getter_mTypeMap (HERE), var_firstLetterSet_14293, var_tableOfTypeString_14445 COMMA_SOURCE_FILE ("galgas_prgm.galgas", 293))) ;
    GALGAS_bool joker_15164 ; // Joker input parameter
    var_typeDumpString_14908.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_14056, joker_15164, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 299)) ;
  }else if (kBoolFalse == test_17) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_14056, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 301)) ;
    }
  }
  const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, GALGAS_uint ((uint32_t) 0U).objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 304)))).operator_and (GALGAS_bool (kIsEqual, constinArgument_inSourceToAnalyze.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("galgas_prgm.galgas", 304)).boolEnum () ;
  if (kBoolTrue == test_19) {
    {
    routine_performGalgas_33_ProjectGlobalCheckings (var_semanticContext_12199, var_declarationAST_8549.getter_mDeclarationList (HERE), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 305)) ;
    }
  }
  const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, GALGAS_uint ((uint32_t) 0U).objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 311)))).operator_and (GALGAS_bool (kIsEqual, constinArgument_inSourceToAnalyze.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("galgas_prgm.galgas", 311)).boolEnum () ;
  if (kBoolTrue == test_20) {
    {
    routine_projectGeneration (var_semanticContext_12199.getter_mTypeMap (HERE), var_buildDirectory_12005, var_optionComponentMapForGeneration_12804, var_appProductFileList_12159, var_semanticDeclarationSortedListForGeneration_12293, var_declarationAST_8549.getter_mSourceRuleList (HERE), constinArgument_inProjectComponentAST, constinArgument_inProjectSourceFile.getter_string (HERE), var_handCodedSourceDirectorySet_9249, var_handCodedSourceToolFileList_9162, var_frameworkToolFileList_9203, var_handCodedSourceAppFileList_9115, var_handCodedLinkAppFileList_9069, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 312)) ;
    }
  }
}


