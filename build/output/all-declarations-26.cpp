#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-26.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@setterCallInstructionAST enterInstructionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_setterCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionAST * object = (const cPtr_setterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_3382 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_3382.hasCurrentObject ()) {
    callCategoryMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3382.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 98)) ;
    enumerator_3382.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_setterCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_setterCallInstructionAST.mSlotID,
                                                         categoryMethod_setterCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_setterCallInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_setterCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionAST * object = (const cPtr_selfSetterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_3797 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_3797.hasCurrentObject ()) {
    callCategoryMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3797.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 109)) ;
    enumerator_3797.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfSetterCallInstructionAST.mSlotID,
                                                         categoryMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@setterCallInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_setterCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionAST * object = (const cPtr_setterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType ;
  GALGAS_string var_receiverVariableCppName ;
  GALGAS_string var_receiverVariableBaseName ;
  {
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_receiverType, var_receiverVariableCppName, var_receiverVariableBaseName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 123)) ;
  }
  cEnumerator_lstringlist enumerator_4608 (object->mAttribute_mReceiverStructAttributes, kEnumeration_up) ;
  while (enumerator_4608.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_receiverType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 130)) ;
    var_attributeMap.method_searchKey (enumerator_4608.current_mValue (HERE), var_receiverType, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 131)) ;
    enumerator_4608.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_castType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeNameForCasting.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_castType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeNameForCasting, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 143)) ;
    {
    routine_checkAssignmentTypes (var_receiverType, var_castType, object->mAttribute_mTypeNameForCasting.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)) ;
    }
  }else if (kBoolFalse == test_0) {
    var_castType = var_receiverType ;
  }
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_string var_modifierErrorMessage ;
  GALGAS_methodKind var_kind ;
  GALGAS_methodQualifier joker_5522 ; // Joker input parameter
  var_castType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)).method_searchKey (object->mAttribute_mModifierName, var_kind, var_routineSignature, var_hasCompilerArgument, joker_5522, var_modifierErrorMessage, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_modifierErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, var_modifierErrorMessage  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 158)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mModifierName, GALGAS_string ("'").add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("instruction-setter-call.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 164)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 164)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 161)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType = var_castType ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 175)).isValid ()) {
      uint32_t variant_6105 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 175)).uintValue () ;
      bool loop_6105 = true ;
      while (loop_6105) {
        loop_6105 = var_searching.isValid () ;
        if (loop_6105) {
          loop_6105 = var_searching.boolValue () ;
        }
        if (loop_6105 && (0 == variant_6105)) {
          loop_6105 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 175)) ;
        }
        if (loop_6105) {
          variant_6105 -- ;
          const enumGalgasBool test_4 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 176)).reader_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 176)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_searching = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_5 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).reader_hasKey (object->mAttribute_mModifierName.mAttribute_string COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 180)) ;
            }else if (kBoolFalse == test_5) {
              var_searching = GALGAS_bool (false) ;
            }
          }
        }
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (object->mAttribute_mReceiverName.mAttribute_location, var_receiverVariableCppName, var_receiverVariableBaseName, object->mAttribute_mReceiverStructAttributes, var_castType, var_receiverType, object->mAttribute_mModifierName, var_kind, var_actualParameterListForGeneration, var_hasCompilerArgument, var_baseType  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 188))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 188)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_setterCallInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_setterCallInstructionAST.mSlotID,
                                                  categoryMethod_setterCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_setterCallInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_setterCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@selfSetterCallInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionAST * object = (const cPtr_selfSetterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 212)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("'self' can be used only in category setters")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 213)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_methodKind var_kind ;
  GALGAS_methodQualifier joker_7754 ; // Joker input parameter
  GALGAS_string joker_7757 ; // Joker input parameter
  var_selfTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 222)).method_searchKey (object->mAttribute_mModifierName, var_kind, var_routineSignature, var_hasCompilerArgument, joker_7754, joker_7757, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 222)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mModifierName, GALGAS_string ("'").add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("instruction-setter-call.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 227)).add_operation (GALGAS_string ("' modifier header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 227)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 224)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::constructor_new (var_selfObjectCppName, var_selfTypeProxy, object->mAttribute_mModifierName, var_kind, var_actualParameterListForGeneration, var_hasCompilerArgument  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 235))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 235)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfSetterCallInstructionAST.mSlotID,
                                                  categoryMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@setterCallInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_setterCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionForGeneration * object = (const cPtr_setterCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 304)) ;
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_10712 (object->mAttribute_mReceiverStructAttributes, kEnumeration_up) ;
  while (enumerator_10712.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_10712.current_mValue (HERE).reader_string (SOURCE_FILE ("instruction-setter-call.galgas", 307)).reader_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 307))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 307)) ;
    enumerator_10712.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverBaseName COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 309)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 311)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 312)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 313)) ;
  cEnumerator_actualParameterListForGeneration enumerator_11040 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_11040.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_11040.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 315)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 324)) ;
    enumerator_11040.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsCategory:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mMethodBaseType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)).add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("instruction-setter-call.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-setter-call.galgas", 330)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mReceiverType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).reader_length (SOURCE_FILE ("instruction-setter-call.galgas", 331)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (object->mAttribute_mReceiverType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 332))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 332)) ;
        }
        GALGAS_string var_pointerUniqueName = GALGAS_string ("ptr_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 334)).reader_string (SOURCE_FILE ("instruction-setter-call.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 334)) ;
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cPtr_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)).add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)) ;
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" = (cPtr_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mCastType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)).objectCompare (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (object->mAttribute_mCastType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338)) ;
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 339)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 339)).add_operation (object->mAttribute_mCastType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)).add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 341))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 339)) ;
          {
          ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 342)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 342)) ;
          }
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)).add_operation (object->mAttribute_mCastType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)) ;
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)) ;
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 346)) ;
        }
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("callCategoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)).add_operation (object->mAttribute_mCastType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)).add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("categoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 354)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".modifier_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)).add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("instruction-setter-call.galgas", 355)).reader_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_13360 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_13360.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_13360.current_mValue (HERE)  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 358)) ;
    if (enumerator_13360.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 359)) ;
    }
    enumerator_13360.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("instruction-setter-call.galgas", 362)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 363)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 367)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("instruction-setter-call.galgas", 368)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mModifierName.reader_location (SOURCE_FILE ("instruction-setter-call.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 371)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 371))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 371)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_setterCallInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_setterCallInstructionForGeneration.mSlotID,
                                           categoryMethod_setterCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_setterCallInstructionForGeneration_generateInstruction (defineCategoryMethod_setterCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@selfSetterCallInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfSetterCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionForGeneration * object = (const cPtr_selfSetterCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 383)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mSelfCppName COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 384)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 386)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 387)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 388)) ;
  cEnumerator_actualParameterListForGeneration enumerator_14569 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_14569.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_14569.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 390)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 398)) ;
    enumerator_14569.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsCategory:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)).add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("instruction-setter-call.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 404)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-setter-call.galgas", 404)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("callCategoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("categoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 410)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-setter-call.galgas", 410)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mSelfCppName.add_operation (GALGAS_string ("->modifier_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 411)).add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 411)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 411))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 411)) ;
      }else if (kBoolFalse == test_1) {
        ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mSelfCppName.add_operation (GALGAS_string (".modifier_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)).add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_15714 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_15714.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_15714.current_mValue (HERE)  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 417)) ;
    if (enumerator_15714.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 418)) ;
    }
    enumerator_15714.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("instruction-setter-call.galgas", 421)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 424)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 424)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 426)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("instruction-setter-call.galgas", 427)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mModifierName.reader_location (SOURCE_FILE ("instruction-setter-call.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfSetterCallInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration.mSlotID,
                                           categoryMethod_selfSetterCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfSetterCallInstructionForGeneration_generateInstruction (defineCategoryMethod_selfSetterCallInstructionForGeneration_generateInstruction, NULL) ;

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
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 115)) ;
  cEnumerator_switchBranchesAST enumerator_3977 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_3977.hasCurrentObject ()) {
    categoryMethod_enterInstructionListInSemanticContext (enumerator_3977.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
    enumerator_3977.gotoNextObject () ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 132)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 131)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression.reader_mResultType (SOURCE_FILE ("instruction-switch.galgas", 138)).reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 138)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-switch.galgas", 138)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSwitchExpression, GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (var_switchExpression.reader_mResultType (SOURCE_FILE ("instruction-switch.galgas", 141)).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 140)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 141))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 139)) ;
  }
  GALGAS_constantIndexMap var_enumConstantMap = var_switchExpression.reader_mResultType (SOURCE_FILE ("instruction-switch.galgas", 144)).reader_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 144)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 145)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 147)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 148)) ;
  cEnumerator_switchBranchesAST enumerator_5437 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_5437.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 150)) ;
    GALGAS_bool var_firstConstant = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_5593 (enumerator_5437.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_5593.hasCurrentObject ()) {
      const enumGalgasBool test_1 = var_enumConstantMap.reader_hasKey (enumerator_5593.current_mValue (HERE).reader_string (SOURCE_FILE ("instruction-switch.galgas", 153)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 153)).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_constantsNamedInSwitchInstruction.reader_hasKey (enumerator_5593.current_mValue (HERE).reader_string (SOURCE_FILE ("instruction-switch.galgas", 154)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 154)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_5593.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_5593.current_mValue (HERE).reader_string (SOURCE_FILE ("instruction-switch.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 156))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 155)) ;
        }
        var_constantsNamedInSwitchInstruction.addAssign_operation (enumerator_5593.current_mValue (HERE).reader_string (SOURCE_FILE ("instruction-switch.galgas", 158))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 158)) ;
        GALGAS_unifiedTypeMapProxyList var_associatedTypeList ;
        GALGAS_uint joker_5957 ; // Joker input parameter
        var_enumConstantMap.method_searchKey (enumerator_5593.current_mValue (HERE), joker_5957, var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_associatedTypeList.reader_length (SOURCE_FILE ("instruction-switch.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_5437.current_mAssociatedValuesExtraction (HERE).reader_length (SOURCE_FILE ("instruction-switch.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (enumerator_5593.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the associated values of '").add_operation (enumerator_5593.current_mValue (HERE).reader_string (SOURCE_FILE ("instruction-switch.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 162))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 161)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_associatedTypeList.reader_length (SOURCE_FILE ("instruction-switch.galgas", 163)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_5437.current_mAssociatedValuesExtraction (HERE).reader_length (SOURCE_FILE ("instruction-switch.galgas", 163)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_location location_7 (enumerator_5593.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_7, GALGAS_string ("the '").add_operation (enumerator_5593.current_mValue (HERE).reader_string (SOURCE_FILE ("instruction-switch.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 165)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 165))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 164)) ;
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_associatedTypeList.reader_length (SOURCE_FILE ("instruction-switch.galgas", 166)).objectCompare (enumerator_5437.current_mAssociatedValuesExtraction (HERE).reader_length (SOURCE_FILE ("instruction-switch.galgas", 166)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              GALGAS_string temp_9 ;
              const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_associatedTypeList.reader_length (SOURCE_FILE ("instruction-switch.galgas", 169)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_10) {
                temp_9 = GALGAS_string ("s") ;
              }else if (kBoolFalse == test_10) {
                temp_9 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_location location_11 (enumerator_5593.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_11, GALGAS_string ("the '").add_operation (enumerator_5593.current_mValue (HERE).reader_string (SOURCE_FILE ("instruction-switch.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 168)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 168)).add_operation (var_associatedTypeList.reader_length (SOURCE_FILE ("instruction-switch.galgas", 168)).reader_string (SOURCE_FILE ("instruction-switch.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 168)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 168)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 168))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 167)) ;
            }else if (kBoolFalse == test_8) {
              GALGAS_uint var_associatedValueIndex = GALGAS_uint ((uint32_t) 0U) ;
              cEnumerator_unifiedTypeMapProxyList enumerator_6784 (var_associatedTypeList, kEnumeration_up) ;
              cEnumerator_switchExtractedValuesListAST enumerator_6819 (enumerator_5437.current_mAssociatedValuesExtraction (HERE), kEnumeration_up) ;
              while (enumerator_6784.hasCurrentObject () && enumerator_6819.hasCurrentObject ()) {
                const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_6819.current_mExtractedValueTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_12) {
                  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_6784.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 174)).objectCompare (enumerator_6819.current_mExtractedValueTypeName (HERE).mAttribute_string)).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    GALGAS_location location_14 (enumerator_6819.current_mExtractedValueTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                    inCompiler->emitSemanticError (location_14, GALGAS_string ("the required type is '@").add_operation (enumerator_6784.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 175)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 175))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 175)) ;
                  }
                }
                const enumGalgasBool test_15 = var_firstConstant.operator_and (GALGAS_bool (kIsNotEqual, enumerator_6819.current_mExtractedValueName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)).boolEnum () ;
                if (kBoolTrue == test_15) {
                  GALGAS_string var_cppName = GALGAS_string ("extractedValue_").add_operation (enumerator_6819.current_mExtractedValueName (HERE).reader_string (SOURCE_FILE ("instruction-switch.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)) ;
                  var_extractedAssociatedValuesForGeneration.addAssign_operation (enumerator_6784.current_mType (HERE), var_cppName, var_associatedValueIndex  COMMA_SOURCE_FILE ("instruction-switch.galgas", 180)) ;
                  const enumGalgasBool test_16 = enumerator_6819.current_mMarkedAsUnused (HERE).boolEnum () ;
                  if (kBoolTrue == test_16) {
                    {
                    ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (enumerator_6819.current_mExtractedValueName (HERE), enumerator_6784.current_mType (HERE), var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)) ;
                    }
                  }else if (kBoolFalse == test_16) {
                    {
                    ioArgument_ioVariableMap.modifier_insertLocalConstant (enumerator_6819.current_mExtractedValueName (HERE), enumerator_6784.current_mType (HERE), var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)) ;
                    }
                  }
                }
                var_associatedValueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 187)) ;
                enumerator_6784.gotoNextObject () ;
                enumerator_6819.gotoNextObject () ;
              }
            }
          }
        }
      }else if (kBoolFalse == test_1) {
        GALGAS_location location_17 (enumerator_5593.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_17, GALGAS_string ("'").add_operation (enumerator_5593.current_mValue (HERE).reader_string (SOURCE_FILE ("instruction-switch.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)).add_operation (var_switchExpression.reader_mResultType (SOURCE_FILE ("instruction-switch.galgas", 192)).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 191)) ;
      }
      var_firstConstant = GALGAS_bool (false) ;
      enumerator_5593.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 198)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 199)), enumerator_5437.current_mInstructions (HERE), enumerator_5437.current_mEndOfBranch (HERE), ioArgument_ioVariableMap, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)) ;
    }
    var_switchBranchesForGeneration.addAssign_operation (enumerator_5437.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration, enumerator_5437.current_mEndOfBranch (HERE).reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)), var_instructionList  COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
    enumerator_5437.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 207)) ;
  }
  GALGAS_stringset var_forgottenConstants = var_enumConstantMap.reader_keySet (SOURCE_FILE ("instruction-switch.galgas", 209)).substract_operation (var_constantsNamedInSwitchInstruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
  const enumGalgasBool test_18 = GALGAS_bool (kIsStrictSup, var_forgottenConstants.reader_count (SOURCE_FILE ("instruction-switch.galgas", 210)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_18) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_8592 (var_forgottenConstants, kEnumeration_up) ;
    while (enumerator_8592.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "  - ").add_operation (enumerator_8592.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 213))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
      enumerator_8592.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_switch_5F_instruction, GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 216))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression.reader_mResultType (SOURCE_FILE ("instruction-switch.galgas", 220)), var_switchExpression, var_switchBranchesForGeneration  COMMA_SOURCE_FILE ("instruction-switch.galgas", 219))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 219)) ;
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
//                  Overriding category method '@switchInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_switchInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionForGeneration * object = (const cPtr_switchInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionForGeneration) ;
  GALGAS_string var_switchVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 261)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("switch (").add_operation (var_switchVar, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 268))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.reader_mResultType (SOURCE_FILE ("instruction-switch.galgas", 269)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 269))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  break ;\n")  COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)) ;
  cEnumerator_switchBranchesForGeneration enumerator_10839 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_10839.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_10876 (enumerator_10839.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_10876.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.reader_mResultType (SOURCE_FILE ("instruction-switch.galgas", 273)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).add_operation (enumerator_10876.current_mValue (HERE).reader_string (SOURCE_FILE ("instruction-switch.galgas", 273)).reader_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)) ;
      enumerator_10876.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("instruction-switch.galgas", 276)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_10839.current_mExtractedAssociatedValuesForGeneration (HERE).reader_length (SOURCE_FILE ("instruction-switch.galgas", 277)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_type = GALGAS_string ("const cEnumAssociatedValues_").add_operation (object->mAttribute_mEnumType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (enumerator_10839.current_mSwitchConstantList (HERE).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)) ;
      GALGAS_string var_varPtr = GALGAS_string ("extractPtr_").add_operation (enumerator_10839.current_mLocationIndex (HERE).reader_string (SOURCE_FILE ("instruction-switch.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_type, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (var_varPtr, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (var_type, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (var_switchVar, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)) ;
      cEnumerator_extractedAssociatedValuesForGeneration enumerator_11566 (enumerator_10839.current_mExtractedAssociatedValuesForGeneration (HERE), kEnumeration_up) ;
      while (enumerator_11566.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  const GALGAS_").add_operation (enumerator_11566.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).add_operation (enumerator_11566.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).add_operation (var_varPtr, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (enumerator_11566.current_mIndex (HERE).reader_string (SOURCE_FILE ("instruction-switch.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)) ;
        enumerator_11566.gotoNextObject () ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_10839.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("break ;\n")  COMMA_SOURCE_FILE ("instruction-switch.galgas", 296)) ;
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 297)) ;
    }
    enumerator_10839.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_switchInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_switchInstructionForGeneration.mSlotID,
                                           categoryMethod_switchInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionForGeneration_generateInstruction (defineCategoryMethod_switchInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionAST * object = (const cPtr_typeMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_1830 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_1830.hasCurrentObject ()) {
    callCategoryMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1830.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 43)) ;
    enumerator_1830.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_typeMethodCallInstructionAST.mSlotID,
                                                         categoryMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 56)) ;
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  var_type.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 60)).method_searchKey (object->mAttribute_mMethodName, var_routineSignature, var_hasCompilerArgument, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 60)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mMethodName, GALGAS_string ("'").add_operation (object->mAttribute_mMethodName.reader_string (SOURCE_FILE ("instruction-type-method-call.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 65)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 65)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::constructor_new (object->mAttribute_mTypeName, object->mAttribute_mMethodName, var_actualParameterListForGeneration, var_hasCompilerArgument  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 73))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 73)) ;
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
//              Overriding category method '@typeMethodCallInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typeMethodCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionForGeneration * object = (const cPtr_typeMethodCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 99)) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 101)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 102)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 103)) ;
  cEnumerator_actualParameterListForGeneration enumerator_4375 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_4375.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4375.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 113)) ;
    enumerator_4375.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("instruction-type-method-call.galgas", 116)).reader_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 116)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 116)).add_operation (object->mAttribute_mMethodName.reader_string (SOURCE_FILE ("instruction-type-method-call.galgas", 117)).reader_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 117)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 117))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 116)) ;
  cEnumerator_stringlist enumerator_4924 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_4924.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_4924.current_mValue (HERE)  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 119)) ;
    if (enumerator_4924.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)) ;
    }
    enumerator_4924.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 123)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 123)) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList.reader_length (SOURCE_FILE ("instruction-type-method-call.galgas", 124)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 125)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 127))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 127)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList.reader_length (SOURCE_FILE ("instruction-type-method-call.galgas", 129)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 129)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 130)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mMethodName.reader_location (SOURCE_FILE ("instruction-type-method-call.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 132)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 132))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 132)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 133)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typeMethodCallInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration.mSlotID,
                                           categoryMethod_typeMethodCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeMethodCallInstructionForGeneration_generateInstruction (defineCategoryMethod_typeMethodCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@warningInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_warningInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionAST * object = (const cPtr_warningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLocationExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 43)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mMessageExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 44)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_warningInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_warningInstructionAST.mSlotID,
                                                         categoryMethod_warningInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_warningInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_warningInstructionAST_enterInstructionInSemanticContext, NULL) ;

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
  routine_analyzeErrorOrWarningInstruction (constinArgument_inAnalysisContext, object->mAttribute_mLocationExpression, object->mAttribute_mMessageExpression, object->mAttribute_mInstructionLocation, GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression, var_messageExpression, var_useLocationReader, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 56)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_locationExpression, var_useLocationReader, var_messageExpression  COMMA_SOURCE_FILE ("instruction-warning.galgas", 68))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 68)) ;
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
//                  Overriding category method '@warningInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_warningInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionForGeneration * object = (const cPtr_warningInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionForGeneration) ;
  GALGAS_string var_receiverCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 97)) ;
  GALGAS_string var_messageCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWarningExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 100)) ;
  const enumGalgasBool test_0 = object->mAttribute_mUseLocationReader.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_locationVar = GALGAS_string ("location_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("instruction-warning.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 103)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 103)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_location ").add_operation (var_locationVar, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)).add_operation (GALGAS_string (".reader_location (HERE)) ; // Implicit use of 'location' reader\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 104))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)) ;
    var_receiverCppVarName = var_locationVar ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 108)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 108)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)).add_operation (var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 110)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 110))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_warningInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_warningInstructionForGeneration.mSlotID,
                                           categoryMethod_warningInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_warningInstructionForGeneration_generateInstruction (defineCategoryMethod_warningInstructionForGeneration_generateInstruction, NULL) ;

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
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 163)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 164)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mDoBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 165)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mElseBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 166)) ;
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
//          Overriding category method '@readWriteAccessWithInstructionAST enterInstructionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 174)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_do_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 175)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_else_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 176)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 189)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 188)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType = var_receiverExpression.reader_mResultType (SOURCE_FILE ("instruction-with.galgas", 194)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bool var_found = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_7438 (var_receiverType.reader_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 198)), kEnumeration_up) ;
    bool bool_1 = var_found.operator_not (SOURCE_FILE ("instruction-with.galgas", 198)).isValidAndTrue () ;
    if (enumerator_7438.hasCurrentObject () && bool_1) {
      while (enumerator_7438.hasCurrentObject () && bool_1) {
        var_found = GALGAS_bool (kIsEqual, enumerator_7438.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_7438.gotoNextObject () ;
        if (enumerator_7438.hasCurrentObject ()) {
          bool_1 = var_found.operator_not (SOURCE_FILE ("instruction-with.galgas", 198)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("instruction-with.galgas", 201)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_string (SOURCE_FILE ("instruction-with.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 202)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 202)).add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 202)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 202))  COMMA_SOURCE_FILE ("instruction-with.galgas", 202)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 207)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 206)) ;
  GALGAS_string var_objectArrayCppName = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 213)).reader_string (SOURCE_FILE ("instruction-with.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 213)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_receiverType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 215)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 215)) COMMA_SOURCE_FILE ("instruction-with.galgas", 215)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 216)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 216))  COMMA_SOURCE_FILE ("instruction-with.galgas", 216)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 219)) ;
  }
  GALGAS_localConstantList var_localConstantList = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 221)) ;
  cEnumerator_typedPropertyList enumerator_8550 (var_receiverType.reader_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 222)), kEnumeration_up) ;
  while (enumerator_8550.hasCurrentObject ()) {
    var_localConstantList.addAssign_operation (enumerator_8550.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_8550.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("instruction-with.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 225)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 225)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 227)).add_operation (enumerator_8550.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 227))  COMMA_SOURCE_FILE ("instruction-with.galgas", 223)) ;
    enumerator_8550.gotoNextObject () ;
  }
  var_localConstantList.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").reader_nowhere (SOURCE_FILE ("instruction-with.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 231)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 232)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 232)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 234))  COMMA_SOURCE_FILE ("instruction-with.galgas", 230)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 238)), object->mAttribute_mDoBranchInstructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 235)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 247)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 248)), object->mAttribute_mElseBranchInstructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 245)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 254)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverExpression, var_objectArrayCppName, var_keyExpression, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("instruction-with.galgas", 256))  COMMA_SOURCE_FILE ("instruction-with.galgas", 256)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 274)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 273)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_keyExpression.reader_mResultType (SOURCE_FILE ("instruction-with.galgas", 281)).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 281)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression.reader_mResultType (SOURCE_FILE ("instruction-with.galgas", 282)).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 282)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 282))  COMMA_SOURCE_FILE ("instruction-with.galgas", 282)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_keyExpression.reader_mResultType (SOURCE_FILE ("instruction-with.galgas", 284)).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 284)).objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression.reader_mResultType (SOURCE_FILE ("instruction-with.galgas", 285)).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 285)).add_operation (GALGAS_string ("', it should be '@lstring'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 285))  COMMA_SOURCE_FILE ("instruction-with.galgas", 285)) ;
    }
  }
  GALGAS_string var_objectArrayCppName = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 288)).reader_string (SOURCE_FILE ("instruction-with.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 288)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_string var_receiverVariableCppName ;
  {
  GALGAS_string joker_11413 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_receiverVariableCppName, joker_11413, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 290)) ;
  }
  cEnumerator_lstringlist enumerator_11441 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_11441.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 297)) ;
    var_attributeMap.method_searchKey (enumerator_11441.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 298)) ;
    enumerator_11441.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 308)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 308)) COMMA_SOURCE_FILE ("instruction-with.galgas", 308)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 309)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 309))  COMMA_SOURCE_FILE ("instruction-with.galgas", 309)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_found = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_12147 (var_targetType.reader_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 314)), kEnumeration_up) ;
    bool bool_5 = var_found.operator_not (SOURCE_FILE ("instruction-with.galgas", 314)).isValidAndTrue () ;
    if (enumerator_12147.hasCurrentObject () && bool_5) {
      while (enumerator_12147.hasCurrentObject () && bool_5) {
        var_found = GALGAS_bool (kIsEqual, enumerator_12147.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_12147.gotoNextObject () ;
        if (enumerator_12147.hasCurrentObject ()) {
          bool_5 = var_found.operator_not (SOURCE_FILE ("instruction-with.galgas", 314)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_6 = var_found.operator_not (SOURCE_FILE ("instruction-with.galgas", 317)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_string (SOURCE_FILE ("instruction-with.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 318)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 318)).add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 318)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 318))  COMMA_SOURCE_FILE ("instruction-with.galgas", 318)) ;
    }
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 322)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 324)) ;
  cEnumerator_typedPropertyList enumerator_12675 (var_targetType.reader_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 325)), kEnumeration_up) ;
  while (enumerator_12675.hasCurrentObject ()) {
    var_localInitializedVariableList.addAssign_operation (enumerator_12675.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_12675.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("instruction-with.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 328)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 328)), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 329)).add_operation (enumerator_12675.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 329))  COMMA_SOURCE_FILE ("instruction-with.galgas", 326)) ;
    enumerator_12675.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_8 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 335)) ;
  temp_8.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").reader_nowhere (SOURCE_FILE ("instruction-with.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 332)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 333)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 333)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 335))  COMMA_SOURCE_FILE ("instruction-with.galgas", 335)) ;
  GALGAS_localConstantList var_localConstantList = temp_8 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, var_localInitializedVariableList, object->mAttribute_m_5F_do_5F_Instructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 337)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 350)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 351)), object->mAttribute_m_5F_else_5F_Instructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 348)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 357)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverVariableCppName, var_targetType, object->mAttribute_mFieldList, var_objectArrayCppName, var_keyExpression, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("instruction-with.galgas", 359))  COMMA_SOURCE_FILE ("instruction-with.galgas", 359)) ;
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
//               Overriding category method '@readOnlyWithInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readOnlyWithInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readOnlyWithInstructionForGeneration * object = (const cPtr_readOnlyWithInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_readOnlyWithInstructionForGeneration) ;
  GALGAS_string var_receiverVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 410)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType = object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("instruction-with.galgas", 411)) ;
  GALGAS_string var_keyVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 413)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const cMapElement_").add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 415)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 415)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 416)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 416)).add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 416)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 416)).add_operation (var_receiverVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 417)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 417))  COMMA_SOURCE_FILE ("instruction-with.galgas", 415)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 419)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 419))  COMMA_SOURCE_FILE ("instruction-with.galgas", 419)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("performSearch (").add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 421)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 421)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 422)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 422)).add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 423)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 423)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 423)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 423)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 424)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 424))  COMMA_SOURCE_FILE ("instruction-with.galgas", 421)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 425)) COMMA_SOURCE_FILE ("instruction-with.galgas", 425)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (NULL != ").add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 427)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 427)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 427)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)).add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428))  COMMA_SOURCE_FILE ("instruction-with.galgas", 427)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 429)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.reader_length (SOURCE_FILE ("instruction-with.galgas", 437)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("instruction-with.galgas", 438)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 439)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-with.galgas", 448)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readOnlyWithInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration.mSlotID,
                                           categoryMethod_readOnlyWithInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readOnlyWithInstructionForGeneration_generateInstruction (defineCategoryMethod_readOnlyWithInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@readWriteWithInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readWriteWithInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteWithInstructionForGeneration * object = (const cPtr_readWriteWithInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteWithInstructionForGeneration) ;
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverVariableCppName ;
  cEnumerator_lstringlist enumerator_18474 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_18474.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_18474.current_mValue (HERE).reader_string (SOURCE_FILE ("instruction-with.galgas", 461)).reader_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 461))  COMMA_SOURCE_FILE ("instruction-with.galgas", 461)) ;
    enumerator_18474.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 464)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 466)) COMMA_SOURCE_FILE ("instruction-with.galgas", 466)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverVariableCppName COMMA_SOURCE_FILE ("instruction-with.galgas", 467)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cMapElement_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 468)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 468)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 469)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 469)).add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 469)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 469)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 470)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 470))  COMMA_SOURCE_FILE ("instruction-with.galgas", 468)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 472)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 472)).add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 472))  COMMA_SOURCE_FILE ("instruction-with.galgas", 472)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 474)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 474)).add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 474))  COMMA_SOURCE_FILE ("instruction-with.galgas", 474)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", kSearchErrorMessage_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 475)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 475)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 475))  COMMA_SOURCE_FILE ("instruction-with.galgas", 475)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 477)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 477)).add_operation (GALGAS_string ("if (NULL != "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 477)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 478)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 478)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 478)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 479)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 479)).add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 479)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 479))  COMMA_SOURCE_FILE ("instruction-with.galgas", 477)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 480)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.reader_length (SOURCE_FILE ("instruction-with.galgas", 488)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("instruction-with.galgas", 489)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 490)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-with.galgas", 499)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readWriteWithInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration.mSlotID,
                                           categoryMethod_readWriteWithInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readWriteWithInstructionForGeneration_generateInstruction (defineCategoryMethod_readWriteWithInstructionForGeneration_generateInstruction, NULL) ;

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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mEnumTypeName.reader_string (SOURCE_FILE ("enum.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 77)), object->mAttribute_mEnumTypeName.reader_location (SOURCE_FILE ("enum.galgas", 77))  COMMA_SOURCE_FILE ("enum.galgas", 77)) ;
  {
  const GALGAS_enumDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 78)) ;
  }
  cEnumerator_enumConstantList enumerator_3547 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_3547.hasCurrentObject ()) {
    cEnumerator__32_lstringlist enumerator_3595 (enumerator_3547.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_3595.hasCurrentObject ()) {
      {
      ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3595.current_mValue_30_ (HERE).reader_string (SOURCE_FILE ("enum.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 81)), enumerator_3595.current_mValue_30_ (HERE).reader_location (SOURCE_FILE ("enum.galgas", 81))  COMMA_SOURCE_FILE ("enum.galgas", 81)) COMMA_SOURCE_FILE ("enum.galgas", 81)) ;
      }
      enumerator_3595.gotoNextObject () ;
    }
    enumerator_3547.gotoNextObject () ;
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
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 96)) ;
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 97)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 98)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 99)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, var_enumTypeProxy COMMA_SOURCE_FILE ("enum.galgas", 101)) ;
  }
  GALGAS_constantIndexMap var_constantMap = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 103)) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantList enumerator_4854 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_4854.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 106)) ;
    GALGAS_functionSignature var_argumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("enum.galgas", 107)) ;
    cEnumerator__32_lstringlist enumerator_5021 (enumerator_4854.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_5021.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_5021.current_mValue_30_ (HERE), var_associatedTypeProxy COMMA_SOURCE_FILE ("enum.galgas", 109)) ;
      }
      var_argumentTypeList.addAssign_operation (enumerator_5021.current_mValue_31_ (HERE), var_associatedTypeProxy, enumerator_5021.current_mValue_30_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("enum.galgas", 110)) ;
      var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("enum.galgas", 111)) ;
      var_hasAssociatedValues = GALGAS_bool (true) ;
      enumerator_5021.gotoNextObject () ;
    }
    {
    var_constantMap.modifier_insertKey (enumerator_4854.current_mConstantName (HERE), var_constantMap.reader_count (SOURCE_FILE ("enum.galgas", 114)), var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 114)) ;
    }
    {
    var_constructorMap.modifier_insertOrReplace (enumerator_4854.current_mConstantName (HERE), var_argumentTypeList, GALGAS_bool (false), var_enumTypeProxy COMMA_SOURCE_FILE ("enum.galgas", 115)) ;
    }
    enumerator_4854.gotoNextObject () ;
  }
  cEnumerator_enumConstantList enumerator_5572 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_5572.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_5572.current_mAssociatedValueDefinitionList (HERE).reader_length (SOURCE_FILE ("enum.galgas", 124)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 125)) ;
      GALGAS_formalParameterSignature var_argumentTypeList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("enum.galgas", 126)) ;
      cEnumerator__32_lstringlist enumerator_5808 (enumerator_5572.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
      while (enumerator_5808.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_5808.current_mValue_30_ (HERE), var_associatedTypeProxy COMMA_SOURCE_FILE ("enum.galgas", 128)) ;
        }
        var_argumentTypeList.addAssign_operation (enumerator_5808.current_mValue_31_ (HERE), var_associatedTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("enum.galgas", 129)), enumerator_5808.current_mValue_30_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("enum.galgas", 129)) ;
        var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("enum.galgas", 130)) ;
        var_hasAssociatedValues = GALGAS_bool (true) ;
        enumerator_5808.gotoNextObject () ;
      }
      {
      var_instanceMethodMap.modifier_insertKey (enumerator_5572.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("enum.galgas", 135)), var_argumentTypeList, enumerator_5572.current_mConstantName (HERE).mAttribute_location, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("enum.galgas", 139)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 133)) ;
      }
    }
    enumerator_5572.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 145)) ;
  }
  cEnumerator_enumConstantList enumerator_6469 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_6469.hasCurrentObject ()) {
    {
    routine_enterBaseReaderWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("is").add_operation (enumerator_6469.current_mConstantName (HERE).mAttribute_string.reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("enum.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 150)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 147)) ;
    }
    enumerator_6469.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mEnumTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 156)) ;
  }
  {
  GALGAS_headerKind temp_1 ;
  const enumGalgasBool test_2 = var_hasAssociatedValues.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("enum.galgas", 194)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("enum.galgas", 194)) ;
  }
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mEnumTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("enum.galgas", 171)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("enum.galgas", 172)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 174)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 175)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 176)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 181)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 182)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("enum.galgas", 183)), function_generateDescriptionReaderUtilityMethod (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 184)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 184)) COMMA_SOURCE_FILE ("enum.galgas", 184)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("enum.galgas", 185)), var_constantMap, object->mAttribute_mConstantList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("enum.galgas", 188)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("enum.galgas", 189)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("enum.galgas", 191)), GALGAS_string::makeEmptyString (), GALGAS_string ("enum-").add_operation (object->mAttribute_mEnumTypeName.reader_string (SOURCE_FILE ("enum.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 193)), temp_1, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 167)) ;
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
  GALGAS_stringlist var_constantList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("enum.galgas", 208)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("enum.galgas", 209)) ;
  GALGAS_constantIndexMap var_constantMap = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 210)) ;
  cEnumerator_enumConstantList enumerator_8901 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_8901.hasCurrentObject ()) {
    var_constantList.addAssign_operation (enumerator_8901.current_mConstantName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("enum.galgas", 212)) ;
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 213)) ;
    GALGAS_stringset var_associatedValueNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("enum.galgas", 214)) ;
    cEnumerator__32_lstringlist enumerator_9087 (enumerator_8901.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_9087.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_9087.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 216)) ;
      var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("enum.galgas", 217)) ;
      const enumGalgasBool test_0 = var_associatedValueNameSet.reader_hasKey (enumerator_9087.current_mValue_31_ (HERE).mAttribute_string COMMA_SOURCE_FILE ("enum.galgas", 218)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_location location_1 (enumerator_9087.current_mValue_31_ (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("duplicated name")  COMMA_SOURCE_FILE ("enum.galgas", 219)) ;
      }
      var_associatedValueNameSet.addAssign_operation (enumerator_9087.current_mValue_31_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("enum.galgas", 221)) ;
      enumerator_9087.gotoNextObject () ;
    }
    {
    var_constantMap.modifier_insertKey (enumerator_8901.current_mConstantName (HERE), var_constantMap.reader_count (SOURCE_FILE ("enum.galgas", 223)), var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 223)) ;
    }
    var_enumConstantListForGeneration.addAssign_operation (enumerator_8901.current_mConstantName (HERE).mAttribute_string, var_associatedTypeList  COMMA_SOURCE_FILE ("enum.galgas", 224)) ;
    enumerator_8901.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (object->mAttribute_mEnumTypeName.reader_string (SOURCE_FILE ("enum.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 228)), GALGAS_enumTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 230)), var_enumConstantListForGeneration  COMMA_SOURCE_FILE ("enum.galgas", 229)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("enum.galgas", 227)) ;
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
  cEnumerator_enumConstantListForGeneration enumerator_11641 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 282)).isValidAndTrue () ;
  if (enumerator_11641.hasCurrentObject () && bool_0) {
    while (enumerator_11641.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_11641.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("enum.galgas", 283)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_11641.gotoNextObject () ;
      if (enumerator_11641.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 282)).isValidAndTrue () ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 286)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 287)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("enum.galgas", 285))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 292)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 293)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 294)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 295)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 296)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 297)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 298)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 299)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 300)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 301)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 302)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 303)) COMMA_SOURCE_FILE ("enum.galgas", 291)))  COMMA_SOURCE_FILE ("enum.galgas", 291)) ;
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
//                       Overriding category method '@enumTypeForGeneration appendDeclaration2'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        const GALGAS_bool /* constinArgument_inGenerateForGalgas_33_ */,
                                                                        const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_12813 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 315)).isValidAndTrue () ;
  if (enumerator_12813.hasCurrentObject () && bool_0) {
    while (enumerator_12813.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_12813.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("enum.galgas", 316)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_12813.gotoNextObject () ;
      if (enumerator_12813.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 315)).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_enumConstantListForGeneration enumerator_12942 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_12942.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapProxyList enumerator_12984 (enumerator_12942.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
    while (enumerator_12984.hasCurrentObject ()) {
      categoryMethod_addHeaderFileName (enumerator_12984.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 320)) ;
      enumerator_12984.gotoNextObject () ;
    }
    enumerator_12942.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 324)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 325)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("enum.galgas", 323))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                             categoryMethod_enumTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_enumTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@enumTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_13586 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 338)).isValidAndTrue () ;
  if (enumerator_13586.hasCurrentObject () && bool_0) {
    while (enumerator_13586.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_13586.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("enum.galgas", 339)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_13586.gotoNextObject () ;
      if (enumerator_13586.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 338)).isValidAndTrue () ;
      }
    }
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 341)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 343)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 344)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("enum.galgas", 342))) ;
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
//                    Overriding category method '@sharedMapDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                            GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                            GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                            GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                            GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 266)), object->mAttribute_mMapTypeName.reader_location (SOURCE_FILE ("shared-map.galgas", 266))  COMMA_SOURCE_FILE ("shared-map.galgas", 266)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 267)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_10928 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_10928.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_10928.current_mPropertyTypeName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 269)), enumerator_10928.current_mPropertyTypeName (HERE).reader_location (SOURCE_FILE ("shared-map.galgas", 269))  COMMA_SOURCE_FILE ("shared-map.galgas", 269)) COMMA_SOURCE_FILE ("shared-map.galgas", 269)) ;
    }
    enumerator_10928.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                               categoryMethod_sharedMapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_sharedMapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@sharedMapDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_sharedMapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  result_outString = GALGAS_string ("shared map @").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 278)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_sharedMapDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                         categoryReader_sharedMapDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_sharedMapDeclarationAST_keyRepresentation (defineCategoryReader_sharedMapDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@sharedMapDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                           const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                           const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 292)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 294)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringlistTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 296)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 298)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("shared-map.galgas", 298)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = temp_0 ;
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 299)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("shared-map.galgas", 300)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("shared-map.galgas", 301)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_12738 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_12738.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_12738.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (enumerator_12738.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("shared-map.galgas", 307)) ;
      }
      var_usesSelectorsInInsertAndSearch = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_location location_4 (enumerator_12738.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("shared-map.galgas", 311)) ;
    }
    enumerator_12738.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 315)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 316)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 317)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 318)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 320)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 320)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 322)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 329)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 336)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 345)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 354)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 361)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 368)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 375)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 383)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 384)) ;
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList.addAssign_operation (temp_5.reader_nowhere (SOURCE_FILE ("shared-map.galgas", 386)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 388)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("shared-map.galgas", 385)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 390)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList.addAssign_operation (temp_7.reader_nowhere (SOURCE_FILE ("shared-map.galgas", 392)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 394)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("shared-map.galgas", 391)) ;
  cEnumerator_propertyInCollectionListAST enumerator_15350 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_15350.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_15350.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 398)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_15350.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("shared-map.galgas", 401)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_15350.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 402))  COMMA_SOURCE_FILE ("shared-map.galgas", 402)) ;
    GALGAS_lstring temp_9 ;
    const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_15350.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 404)) ;
    }
    var_insertMethodFormalArgumentList.addAssign_operation (temp_9, var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 406)), enumerator_15350.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 403)) ;
    GALGAS_lstring temp_11 ;
    const enumGalgasBool test_12 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = enumerator_15350.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 409)) ;
    }
    var_removeMethodFormalArgumentList.addAssign_operation (temp_11, var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("shared-map.galgas", 411)), enumerator_15350.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 408)) ;
    enumerator_15350.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_16191 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_16191.hasCurrentObject ()) {
    const enumGalgasBool test_13 = var_modifierMap.reader_hasKey (enumerator_16191.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 416)) COMMA_SOURCE_FILE ("shared-map.galgas", 416)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_location location_14 (enumerator_16191.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_14, GALGAS_string ("the '").add_operation (enumerator_16191.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 417)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 417))  COMMA_SOURCE_FILE ("shared-map.galgas", 417)) ;
    }else if (kBoolFalse == test_13) {
      {
      var_modifierMap.modifier_insertOrReplace (enumerator_16191.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 421)), var_insertMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 424)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 419)) ;
      }
    }
    enumerator_16191.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 430)) ;
  var_enterEdgeFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 431)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 431)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("shared-map.galgas", 431)) ;
  var_enterEdgeFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 432)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 432)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("shared-map.galgas", 432)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_string ("enterEdge").reader_nowhere (SOURCE_FILE ("shared-map.galgas", 434)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 435)), var_enterEdgeFormalArgumentList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 438)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 433)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 442)) ;
  var_topologicalSortFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 443)), var_lstringlistTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("shared-map.galgas", 443)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("shared-map.galgas", 443)) ;
  var_topologicalSortFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 444)), var_lstringlistTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("shared-map.galgas", 444)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("shared-map.galgas", 444)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_string ("topologicalSort").reader_nowhere (SOURCE_FILE ("shared-map.galgas", 446)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 447)), var_topologicalSortFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 449)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 451)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 445)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 455)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_17843 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_17843.hasCurrentObject ()) {
      {
      var_instanceMethodMap.modifier_insertKey (enumerator_17843.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 459)), var_removeMethodFormalArgumentList, enumerator_17843.current_mSearchMethodName (HERE).reader_location (SOURCE_FILE ("shared-map.galgas", 461)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 463)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 457)) ;
      }
      enumerator_17843.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_18159 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_18159.hasCurrentObject ()) {
      {
      var_modifierMap.modifier_insertKey (enumerator_18159.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 471)), var_removeMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 474)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 469)) ;
      }
      enumerator_18159.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 480)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    GALGAS_unifiedTypeMap_2D_proxy var_locationTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 482)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 484))  COMMA_SOURCE_FILE ("shared-map.galgas", 484)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 485)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 486)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 488)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 483)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 492))  COMMA_SOURCE_FILE ("shared-map.galgas", 492)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 493)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 494)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("shared-map.galgas", 494)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("shared-map.galgas", 494)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 496)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 491)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 500))  COMMA_SOURCE_FILE ("shared-map.galgas", 500)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 501)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 502)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("shared-map.galgas", 502)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("shared-map.galgas", 502)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 504)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 499)) ;
    }
    {
    var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 508))  COMMA_SOURCE_FILE ("shared-map.galgas", 508)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 509)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 510)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("shared-map.galgas", 510)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("shared-map.galgas", 510)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 511)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 513)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 507)) ;
    }
    cEnumerator_mapOverrideBlockListAST enumerator_19926 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
    while (enumerator_19926.hasCurrentObject ()) {
      {
      var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_19926.current_mOverrideBlockName (HERE).mAttribute_string.reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("shared-map.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 518)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 518))  COMMA_SOURCE_FILE ("shared-map.galgas", 518)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 519)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 520)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 522)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 517)) ;
      }
      enumerator_19926.gotoNextObject () ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_20324 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_20324.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (enumerator_20324.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 529)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 529)), enumerator_20324.current_mPropertyName (HERE).reader_location (SOURCE_FILE ("shared-map.galgas", 529))  COMMA_SOURCE_FILE ("shared-map.galgas", 529)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_20324.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 531)) ;
    }
    {
    GALGAS_functionSignature temp_17 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 535)) ;
    temp_17.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 535)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("shared-map.galgas", 535)) ;
    var_getterMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 534)), temp_17, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 536)), GALGAS_bool (true), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 539)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 532)) ;
    }
    enumerator_20324.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_20978 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_20978.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_20978.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 545)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("shared-map.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 545)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 545)), enumerator_20978.current_mPropertyName (HERE).reader_location (SOURCE_FILE ("shared-map.galgas", 545))  COMMA_SOURCE_FILE ("shared-map.galgas", 545)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_20978.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 546)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 547)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 548)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 548)), enumerator_20978.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 548)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 549)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 549)), enumerator_20978.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 549)) ;
    {
    var_modifierMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 552)), var_accessorFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 555)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 550)) ;
    }
    enumerator_20978.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 560)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("shared-map.galgas", 575)), GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("shared-map.galgas", 576)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 578)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 579)), var_typedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 585)), var_enumerationDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 588)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 588)) COMMA_SOURCE_FILE ("shared-map.galgas", 588)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 589)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 590)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 591)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 593)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("shared-map.galgas", 595)), GALGAS_string ("emptyMap"), GALGAS_string ("uniquemap-").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 597)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("shared-map.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 571)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                              categoryMethod_sharedMapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterInSemanticContext (defineCategoryMethod_sharedMapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@sharedMapDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     const GALGAS_string constinArgument_inProductDirectory,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_stringset var_initialStateSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 678)) ;
  cEnumerator_insertMethodListAST enumerator_25816 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_25816.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 680)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_25816.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 681)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_25816.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (enumerator_25816.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 682)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 682))  COMMA_SOURCE_FILE ("shared-map.galgas", 682)) ;
      }else if (kBoolFalse == test_1) {
        var_initialStateSet.addAssign_operation (enumerator_25816.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 684))  COMMA_SOURCE_FILE ("shared-map.galgas", 684)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_25816.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 686)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_25816.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (enumerator_25816.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 687)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 687))  COMMA_SOURCE_FILE ("shared-map.galgas", 687)) ;
      }
    }
    enumerator_25816.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 691)) ;
  cEnumerator_mapSearchMethodListAST enumerator_26387 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_26387.hasCurrentObject ()) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 693)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_26387.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 694)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_26387.current_mSearchMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the '").add_operation (enumerator_26387.current_mSearchMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 695)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 695))  COMMA_SOURCE_FILE ("shared-map.galgas", 695)) ;
      }else if (kBoolFalse == test_6) {
        const enumGalgasBool test_8 = var_mapAutomatonActionMap.reader_hasKey (enumerator_26387.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 696)) COMMA_SOURCE_FILE ("shared-map.galgas", 696)).operator_not (SOURCE_FILE ("shared-map.galgas", 696)).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          var_mapAutomatonActionMap.modifier_insertKey (enumerator_26387.current_mActionName (HERE), var_mapAutomatonActionMap.reader_count (SOURCE_FILE ("shared-map.galgas", 698)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 698)) ;
          }
        }
      }
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_26387.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 702)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_location location_10 (enumerator_26387.current_mSearchMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_10, GALGAS_string ("the '").add_operation (enumerator_26387.current_mSearchMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 703)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 703))  COMMA_SOURCE_FILE ("shared-map.galgas", 703)) ;
      }
    }
    enumerator_26387.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 707)) ;
  cEnumerator_mapStateList enumerator_27168 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_27168.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap.modifier_insertKey (enumerator_27168.current_mStateName (HERE), var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("shared-map.galgas", 709)), enumerator_27168.current_mStateMessageKind (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 709)) ;
    }
    enumerator_27168.gotoNextObject () ;
  }
  cEnumerator_mapStateList enumerator_27303 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_27303.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_27336 (enumerator_27303.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_27336.hasCurrentObject ()) {
      GALGAS_uint joker_27397_2 ; // Joker input parameter
      GALGAS_mapAutomatonMessageKind joker_27397_1 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_27336.current_mTargetStateName (HERE), joker_27397_2, joker_27397_1, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 713)) ;
      enumerator_27336.gotoNextObject () ;
    }
    enumerator_27303.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions = var_mapAutomatonActionMap.reader_keySet (SOURCE_FILE ("shared-map.galgas", 717)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 718)) ;
  cEnumerator_mapStateList enumerator_27592 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_27592.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 720)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 721)) ;
    cEnumerator_mapStateTransitionList enumerator_27736 (enumerator_27592.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_27736.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex ;
      var_mapAutomatonActionMap.method_searchKey (enumerator_27736.current_mActionName (HERE), var_actionIndex, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 723)) ;
      const enumGalgasBool test_11 = var_actionsForCurrentState.reader_hasKey (enumerator_27736.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 724)) COMMA_SOURCE_FILE ("shared-map.galgas", 724)).boolEnum () ;
      if (kBoolTrue == test_11) {
        GALGAS_location location_12 (enumerator_27736.current_mActionName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_27736.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 725)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 725)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 725))  COMMA_SOURCE_FILE ("shared-map.galgas", 725)) ;
      }
      var_actionsForCurrentState.addAssign_operation (enumerator_27736.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 727))  COMMA_SOURCE_FILE ("shared-map.galgas", 727)) ;
      GALGAS_uint var_targetStateIndex ;
      GALGAS_mapAutomatonMessageKind joker_28127 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_27736.current_mTargetStateName (HERE), var_targetStateIndex, joker_28127, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 728)) ;
      var_mapStateTransitionSortedList.addAssign_operation (var_actionIndex, enumerator_27736.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 731)), var_targetStateIndex, enumerator_27736.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 733)), enumerator_27736.current_mTransitionMessageKind (HERE), enumerator_27736.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 735))  COMMA_SOURCE_FILE ("shared-map.galgas", 729)) ;
      enumerator_27736.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex ;
    GALGAS_mapAutomatonMessageKind joker_28428 ; // Joker input parameter
    var_mapAutomatonStateMap.method_searchKey (enumerator_27592.current_mStateName (HERE), var_stateIndex, joker_28428, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 737)) ;
    var_mapStateSortedList.addAssign_operation (var_stateIndex, enumerator_27592.current_mStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 740)), enumerator_27592.current_mStateMessageKind (HERE), enumerator_27592.current_mStateMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 742)), var_mapStateTransitionSortedList  COMMA_SOURCE_FILE ("shared-map.galgas", 738)) ;
    GALGAS_stringset var_missingActions = var_allActions.substract_operation (var_actionsForCurrentState, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 744)) ;
    const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_missingActions.reader_count (SOURCE_FILE ("shared-map.galgas", 745)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_28755 (var_missingActions, kEnumeration_up) ;
      while (enumerator_28755.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_28755.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 748)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 748))  COMMA_SOURCE_FILE ("shared-map.galgas", 748)) ;
        if (enumerator_28755.hasNextObject ()) {
          var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("shared-map.galgas", 749)) ;
        }
        enumerator_28755.gotoNextObject () ;
      }
      GALGAS_location location_14 (enumerator_27592.current_mStateName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_14, GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 751))  COMMA_SOURCE_FILE ("shared-map.galgas", 751)) ;
    }
    enumerator_27592.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates = var_initialStateSet ;
  GALGAS_bool var_progress = GALGAS_bool (true) ;
  if (object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 757)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 757)).isValid ()) {
    uint32_t variant_29049 = object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 757)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 757)).uintValue () ;
    bool loop_29049 = true ;
    while (loop_29049) {
      loop_29049 = var_progress.isValid () ;
      if (loop_29049) {
        loop_29049 = var_progress.boolValue () ;
      }
      if (loop_29049 && (0 == variant_29049)) {
        loop_29049 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("shared-map.galgas", 757)) ;
      }
      if (loop_29049) {
        variant_29049 -- ;
        var_progress = GALGAS_bool (false) ;
        cEnumerator_mapStateList enumerator_29145 (object->mAttribute_mMapStateList, kEnumeration_up) ;
        while (enumerator_29145.hasCurrentObject ()) {
          const enumGalgasBool test_15 = var_accessibleStates.reader_hasKey (enumerator_29145.current_mStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 760)) COMMA_SOURCE_FILE ("shared-map.galgas", 760)).boolEnum () ;
          if (kBoolTrue == test_15) {
            cEnumerator_mapStateTransitionList enumerator_29243 (enumerator_29145.current_mTransitionList (HERE), kEnumeration_up) ;
            while (enumerator_29243.hasCurrentObject ()) {
              const enumGalgasBool test_16 = var_accessibleStates.reader_hasKey (enumerator_29243.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 762)) COMMA_SOURCE_FILE ("shared-map.galgas", 762)).operator_not (SOURCE_FILE ("shared-map.galgas", 762)).boolEnum () ;
              if (kBoolTrue == test_16) {
                var_accessibleStates.addAssign_operation (enumerator_29243.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 763))  COMMA_SOURCE_FILE ("shared-map.galgas", 763)) ;
                var_progress = GALGAS_bool (true) ;
              }
              enumerator_29243.gotoNextObject () ;
            }
          }
          enumerator_29145.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates = var_mapAutomatonStateMap.reader_keySet (SOURCE_FILE ("shared-map.galgas", 770)).substract_operation (var_accessibleStates, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 770)) ;
  const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_uselessStates.reader_count (SOURCE_FILE ("shared-map.galgas", 771)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_29619 (var_uselessStates, kEnumeration_up) ;
    while (enumerator_29619.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_29619.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 774)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 774))  COMMA_SOURCE_FILE ("shared-map.galgas", 774)) ;
      if (enumerator_29619.hasNextObject ()) {
        var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("shared-map.galgas", 775)) ;
      }
      enumerator_29619.gotoNextObject () ;
    }
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 777)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 777))  COMMA_SOURCE_FILE ("shared-map.galgas", 777)) ;
  }
  GALGAS_stringset var_neededAssociations = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 781)) ;
  GALGAS_stringset var_accessibilityGraph = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 782)) ;
  cEnumerator_mapAutomatonStateMap enumerator_29964 (var_mapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_29964.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 784)) ;
    var_reachableStates.addAssign_operation (enumerator_29964.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 785))  COMMA_SOURCE_FILE ("shared-map.galgas", 785)) ;
    GALGAS_bool var_progress = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("shared-map.galgas", 787)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 787)).isValid ()) {
      uint32_t variant_30076 = var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("shared-map.galgas", 787)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 787)).uintValue () ;
      bool loop_30076 = true ;
      while (loop_30076) {
        loop_30076 = var_progress.isValid () ;
        if (loop_30076) {
          loop_30076 = var_progress.boolValue () ;
        }
        if (loop_30076 && (0 == variant_30076)) {
          loop_30076 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("shared-map.galgas", 787)) ;
        }
        if (loop_30076) {
          variant_30076 -- ;
          var_progress = GALGAS_bool (false) ;
          cEnumerator_mapStateList enumerator_30182 (object->mAttribute_mMapStateList, kEnumeration_up) ;
          while (enumerator_30182.hasCurrentObject ()) {
            const enumGalgasBool test_18 = var_reachableStates.reader_hasKey (enumerator_30182.current_mStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 790)) COMMA_SOURCE_FILE ("shared-map.galgas", 790)).boolEnum () ;
            if (kBoolTrue == test_18) {
              cEnumerator_mapStateTransitionList enumerator_30283 (enumerator_30182.current_mTransitionList (HERE), kEnumeration_up) ;
              while (enumerator_30283.hasCurrentObject ()) {
                const enumGalgasBool test_19 = var_reachableStates.reader_hasKey (enumerator_30283.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 792)) COMMA_SOURCE_FILE ("shared-map.galgas", 792)).operator_not (SOURCE_FILE ("shared-map.galgas", 792)).boolEnum () ;
                if (kBoolTrue == test_19) {
                  var_reachableStates.addAssign_operation (enumerator_30283.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 793))  COMMA_SOURCE_FILE ("shared-map.galgas", 793)) ;
                  var_accessibilityGraph.addAssign_operation (enumerator_29964.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 794)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 794)).add_operation (enumerator_30283.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 794)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 794))  COMMA_SOURCE_FILE ("shared-map.galgas", 794)) ;
                  var_progress = GALGAS_bool (true) ;
                }
                enumerator_30283.gotoNextObject () ;
              }
            }
            enumerator_30182.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_30627 (var_reachableStates, kEnumeration_up) ;
    while (enumerator_30627.hasCurrentObject ()) {
      const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, enumerator_29964.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 802)).objectCompare (enumerator_30627.current_key (HERE))).boolEnum () ;
      if (kBoolTrue == test_20) {
        var_neededAssociations.addAssign_operation (enumerator_29964.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 803)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 803)).add_operation (enumerator_30627.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 803))  COMMA_SOURCE_FILE ("shared-map.galgas", 803)) ;
      }
      enumerator_30627.gotoNextObject () ;
    }
    enumerator_29964.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 808)) ;
  cEnumerator_mapOverrideBlockListAST enumerator_30828 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
  while (enumerator_30828.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 810)) ;
    GALGAS_stringset var_neededCombinaisons = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 811)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31_ = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 812)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_31087 (enumerator_30828.current_mMapOverrideBlockDescriptor_31_AST (HERE), kEnumeration_up) ;
    while (enumerator_31087.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_31167 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_31087.current_mLeftState (HERE), var_startStateNameIndex, joker_31167, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 814)) ;
      GALGAS_uint var_currentStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_31249 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_31087.current_mRightState (HERE), var_currentStateNameIndex, joker_31249, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 815)) ;
      GALGAS_string var_association = enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 816)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 816)).add_operation (enumerator_31087.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 816)) ;
      const enumGalgasBool test_21 = var_neededAssociations.reader_hasKey (var_association COMMA_SOURCE_FILE ("shared-map.galgas", 817)).operator_not (SOURCE_FILE ("shared-map.galgas", 817)).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_location location_22 (enumerator_31087.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_22, GALGAS_string ("the '").add_operation (var_association, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 818)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 818))  COMMA_SOURCE_FILE ("shared-map.galgas", 818)) ;
      }
      const enumGalgasBool test_23 = var_handledAssociations.reader_hasKey (var_association COMMA_SOURCE_FILE ("shared-map.galgas", 820)).boolEnum () ;
      if (kBoolTrue == test_23) {
        GALGAS_location location_24 (enumerator_31087.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_24, GALGAS_string ("the '").add_operation (var_association, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 822)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 822))  COMMA_SOURCE_FILE ("shared-map.galgas", 821)) ;
      }
      var_handledAssociations.addAssign_operation (var_association  COMMA_SOURCE_FILE ("shared-map.galgas", 824)) ;
      GALGAS_uint var_finalStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_31765 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_31087.current_mResultingState (HERE), var_finalStateNameIndex, joker_31765, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 825)) ;
      const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 826)).objectCompare (enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 826)))).boolEnum () ;
      if (kBoolTrue == test_25) {
        var_neededCombinaisons.addAssign_operation (enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 827)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 827)).add_operation (enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 827)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 827))  COMMA_SOURCE_FILE ("shared-map.galgas", 827)) ;
        var_neededCombinaisons.addAssign_operation (enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 828)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 828)).add_operation (enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 828)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 828))  COMMA_SOURCE_FILE ("shared-map.galgas", 828)) ;
        const enumGalgasBool test_26 = var_accessibilityGraph.reader_hasKey (enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 829)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 829)).add_operation (enumerator_31087.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 829)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 829)) COMMA_SOURCE_FILE ("shared-map.galgas", 829)).operator_not (SOURCE_FILE ("shared-map.galgas", 829)).boolEnum () ;
        if (kBoolTrue == test_26) {
          GALGAS_location location_27 (enumerator_31087.current_mResultingState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_27, GALGAS_string ("the '").add_operation (enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 831)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 831)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 831)).add_operation (enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 831)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 831)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 831))  COMMA_SOURCE_FILE ("shared-map.galgas", 830)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_31087.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 834)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31_.addAssign_operation (var_startStateNameIndex, enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 837)), var_currentStateNameIndex, enumerator_31087.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 839)), var_finalStateNameIndex, enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 841)), enumerator_31087.current_mMessageKind (HERE), enumerator_31087.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 843))  COMMA_SOURCE_FILE ("shared-map.galgas", 835)) ;
      enumerator_31087.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations = var_neededAssociations.substract_operation (var_handledAssociations, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 845)) ;
    const enumGalgasBool test_28 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations.reader_count (SOURCE_FILE ("shared-map.galgas", 846)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_28) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_32787 (var_forgottenAssociations, kEnumeration_up) ;
      while (enumerator_32787.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "  - ").add_operation (enumerator_32787.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 849))  COMMA_SOURCE_FILE ("shared-map.galgas", 849)) ;
        enumerator_32787.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 851)), var_forgottenAssociations.reader_count (SOURCE_FILE ("shared-map.galgas", 851)).reader_string (SOURCE_FILE ("shared-map.galgas", 851)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 851)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 851))  COMMA_SOURCE_FILE ("shared-map.galgas", 851)) ;
    }
    GALGAS_stringset var_definedCombinaisons = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 853)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32_ = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 854)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_33150 (enumerator_30828.current_mMapOverrideBlockDescriptor_32_AST (HERE), kEnumeration_up) ;
    while (enumerator_33150.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex ;
      GALGAS_mapAutomatonMessageKind joker_33225 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_33150.current_mLeftState (HERE), var_leftStateIndex, joker_33225, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 856)) ;
      GALGAS_uint var_rightStateIndex ;
      GALGAS_mapAutomatonMessageKind joker_33301 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_33150.current_mRightState (HERE), var_rightStateIndex, joker_33301, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 857)) ;
      GALGAS_string var_combinaison = enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 858)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 858)).add_operation (enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 858)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 858)) ;
      const enumGalgasBool test_29 = var_neededCombinaisons.reader_hasKey (var_combinaison COMMA_SOURCE_FILE ("shared-map.galgas", 859)).operator_not (SOURCE_FILE ("shared-map.galgas", 859)).boolEnum () ;
      if (kBoolTrue == test_29) {
        GALGAS_location location_30 (enumerator_33150.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_30, GALGAS_string ("the '").add_operation (enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 861)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 861)).add_operation (enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 861)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 861))  COMMA_SOURCE_FILE ("shared-map.galgas", 860)) ;
      }
      const enumGalgasBool test_31 = var_definedCombinaisons.reader_hasKey (var_combinaison COMMA_SOURCE_FILE ("shared-map.galgas", 863)).boolEnum () ;
      if (kBoolTrue == test_31) {
        GALGAS_location location_32 (enumerator_33150.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_32, GALGAS_string ("the '").add_operation (enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865)).add_operation (enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865))  COMMA_SOURCE_FILE ("shared-map.galgas", 864)) ;
      }
      var_definedCombinaisons.addAssign_operation (var_combinaison  COMMA_SOURCE_FILE ("shared-map.galgas", 867)) ;
      GALGAS_uint var_resultingStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_33865 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_33150.current_mResultingState (HERE), var_resultingStateNameIndex, joker_33865, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 868)) ;
      const enumGalgasBool test_33 = GALGAS_bool (kIsNotEqual, enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 869)).objectCompare (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 869)))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 870)).objectCompare (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 870)))) COMMA_SOURCE_FILE ("shared-map.galgas", 869)).operator_and (var_accessibilityGraph.reader_hasKey (enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 871)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 871)).add_operation (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 871)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 871)) COMMA_SOURCE_FILE ("shared-map.galgas", 871)).operator_not (SOURCE_FILE ("shared-map.galgas", 871)) COMMA_SOURCE_FILE ("shared-map.galgas", 870)).boolEnum () ;
      if (kBoolTrue == test_33) {
        GALGAS_location location_34 (enumerator_33150.current_mResultingState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_34, GALGAS_string ("the '").add_operation (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 873)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 873)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 873)).add_operation (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 873)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 873)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 873))  COMMA_SOURCE_FILE ("shared-map.galgas", 872)) ;
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_33150.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 875)) ;
      }
      const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, enumerator_33150.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 876)))).boolEnum () ;
      if (kBoolTrue == test_35) {
        var_definedCombinaisons.addAssign_operation (enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 877)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 877)).add_operation (enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 877)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 877))  COMMA_SOURCE_FILE ("shared-map.galgas", 877)) ;
        var_branchBehaviourSortedListForMapOverride_32_.addAssign_operation (var_rightStateIndex, enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 880)), var_leftStateIndex, enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 882)), var_resultingStateNameIndex, enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 884)), enumerator_33150.current_mMessageKind (HERE), enumerator_33150.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 886))  COMMA_SOURCE_FILE ("shared-map.galgas", 878)) ;
      }
      var_branchBehaviourSortedListForMapOverride_32_.addAssign_operation (var_leftStateIndex, enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 890)), var_rightStateIndex, enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 892)), var_resultingStateNameIndex, enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 894)), enumerator_33150.current_mMessageKind (HERE), enumerator_33150.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 896))  COMMA_SOURCE_FILE ("shared-map.galgas", 888)) ;
      enumerator_33150.gotoNextObject () ;
    }
    const enumGalgasBool test_36 = GALGAS_bool (kIsEqual, var_forgottenAssociations.reader_count (SOURCE_FILE ("shared-map.galgas", 898)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_36) {
      GALGAS_stringset var_forgottenCombinaisons = var_neededCombinaisons.substract_operation (var_definedCombinaisons, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 899)) ;
      const enumGalgasBool test_37 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons.reader_count (SOURCE_FILE ("shared-map.galgas", 900)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_37) {
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_35323 (var_forgottenCombinaisons, kEnumeration_up) ;
        while (enumerator_35323.hasCurrentObject ()) {
          var_s.dotAssign_operation (GALGAS_string ("\n"
            "  - ").add_operation (enumerator_35323.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 903))  COMMA_SOURCE_FILE ("shared-map.galgas", 903)) ;
          enumerator_35323.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 905)), var_forgottenCombinaisons.reader_count (SOURCE_FILE ("shared-map.galgas", 905)).reader_string (SOURCE_FILE ("shared-map.galgas", 905)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 905)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 905))  COMMA_SOURCE_FILE ("shared-map.galgas", 905)) ;
      }
    }
    var_mapOverrideList.addAssign_operation (enumerator_30828.current_mOverrideBlockName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 909)), var_branchBehaviourSortedListForMapOverride_31_, var_branchBehaviourSortedListForMapOverride_32_  COMMA_SOURCE_FILE ("shared-map.galgas", 908)) ;
    enumerator_30828.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 914)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 915)) ;
  cEnumerator_propertyInCollectionListAST enumerator_35787 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_35787.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_35787.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 917)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_35787.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("shared-map.galgas", 920)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_35787.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 925)) ;
    }
    enumerator_35787.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 928)) ;
  cEnumerator_insertMethodListAST enumerator_36176 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_36176.hasCurrentObject ()) {
    {
    var_insertMethodMap.modifier_insertKey (enumerator_36176.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 930)) ;
    }
    cEnumerator_stringlist enumerator_36369 (enumerator_36176.current_mErrorMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 932)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("shared-map.galgas", 932)), kEnumeration_up) ;
    while (enumerator_36369.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_36369.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("shared-map.galgas", 933)) ;
      {
      GALGAS_string joker_36482 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_36482, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 934)) ;
      }
      cEnumerator_stringlist enumerator_36514 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_36514.hasCurrentObject ()) {
        const enumGalgasBool test_38 = GALGAS_bool (kIsStrictSup, enumerator_36514.current_mValue (HERE).reader_length (SOURCE_FILE ("shared-map.galgas", 936)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_38) {
          GALGAS_char var_c = enumerator_36514.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 937)) ;
          const enumGalgasBool test_39 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("shared-map.galgas", 938)).boolEnum () ;
          if (kBoolTrue == test_39) {
            GALGAS_location location_40 (enumerator_36176.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_40, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message")  COMMA_SOURCE_FILE ("shared-map.galgas", 939)) ;
          }
        }
        enumerator_36514.gotoNextObject () ;
      }
      enumerator_36369.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_36958 (enumerator_36176.current_mShadowErrorMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 945)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("shared-map.galgas", 945)), kEnumeration_up) ;
    while (enumerator_36958.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_36958.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("shared-map.galgas", 946)) ;
      {
      GALGAS_string joker_37071 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_37071, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 947)) ;
      }
      cEnumerator_stringlist enumerator_37103 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_37103.hasCurrentObject ()) {
        const enumGalgasBool test_41 = GALGAS_bool (kIsStrictSup, enumerator_37103.current_mValue (HERE).reader_length (SOURCE_FILE ("shared-map.galgas", 949)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_41) {
          GALGAS_char var_c = enumerator_37103.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 950)) ;
          const enumGalgasBool test_42 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("shared-map.galgas", 951)).boolEnum () ;
          if (kBoolTrue == test_42) {
            GALGAS_location location_43 (enumerator_36176.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_43, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message")  COMMA_SOURCE_FILE ("shared-map.galgas", 952)) ;
          }
        }
        enumerator_37103.gotoNextObject () ;
      }
      enumerator_36958.gotoNextObject () ;
    }
    enumerator_36176.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 959)) ;
  cEnumerator_mapSearchMethodListAST enumerator_37498 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_37498.hasCurrentObject ()) {
    const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 961)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_44) {
      {
      var_searchMethodMap.modifier_insertKey (enumerator_37498.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 962)) ;
      }
    }else if (kBoolFalse == test_44) {
      {
      var_searchMethodMap.modifier_insertKey (enumerator_37498.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 964)) ;
      }
    }
    cEnumerator_stringlist enumerator_37805 (enumerator_37498.current_mErrorMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 967)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("shared-map.galgas", 967)), kEnumeration_up) ;
    while (enumerator_37805.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_37805.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("shared-map.galgas", 968)) ;
      {
      GALGAS_string joker_37918 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_37918, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 969)) ;
      }
      cEnumerator_stringlist enumerator_37950 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_37950.hasCurrentObject ()) {
        const enumGalgasBool test_45 = GALGAS_bool (kIsStrictSup, enumerator_37950.current_mValue (HERE).reader_length (SOURCE_FILE ("shared-map.galgas", 971)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_45) {
          GALGAS_char var_c = enumerator_37950.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 972)) ;
          const enumGalgasBool test_46 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
          if (kBoolTrue == test_46) {
            GALGAS_location location_47 (enumerator_37498.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_47, GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message")  COMMA_SOURCE_FILE ("shared-map.galgas", 974)) ;
          }
        }
        enumerator_37950.gotoNextObject () ;
      }
      enumerator_37805.gotoNextObject () ;
    }
    enumerator_37498.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 982)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 982)), GALGAS_sharedMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 984)), object->mAttribute_mMapTypeName, var_typedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, var_mapAutomatonStateMap, var_mapAutomatonActionMap, var_mapStateSortedList, var_mapOverrideList  COMMA_SOURCE_FILE ("shared-map.galgas", 983)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("shared-map.galgas", 981)) ;
  GALGAS_string var_graphFile = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/shared-map-"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 996)).add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 996)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 996)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 996)) ;
  const enumGalgasBool test_48 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_48) {
    GALGAS_string var_theGraph = GALGAS_string ("digraph G {\n") ;
    cEnumerator_mapAutomatonStateMap enumerator_38940 (var_mapAutomatonStateMap, kEnumeration_up) ;
    while (enumerator_38940.hasCurrentObject ()) {
      var_theGraph.dotAssign_operation (GALGAS_string ("\"").add_operation (enumerator_38940.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1000)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1000)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1000)).add_operation (enumerator_38940.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1000)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1000)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1000))  COMMA_SOURCE_FILE ("shared-map.galgas", 1000)) ;
      const enumGalgasBool test_49 = var_initialStateSet.reader_hasKey (enumerator_38940.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("shared-map.galgas", 1001)).boolEnum () ;
      if (kBoolTrue == test_49) {
        var_theGraph.dotAssign_operation (GALGAS_string (" shape=box color=blue")  COMMA_SOURCE_FILE ("shared-map.galgas", 1002)) ;
      }else if (kBoolFalse == test_49) {
        var_theGraph.dotAssign_operation (GALGAS_string (" shape=box")  COMMA_SOURCE_FILE ("shared-map.galgas", 1004)) ;
      }
      switch (enumerator_38940.current_mStateMessageKind (HERE).enumValue ()) {
      case GALGAS_mapAutomatonMessageKind::kNotBuilt:
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
        {
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
        {
          var_theGraph.dotAssign_operation (GALGAS_string (" fontcolor=\"orange\"")  COMMA_SOURCE_FILE ("shared-map.galgas", 1009)) ;
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
        {
          var_theGraph.dotAssign_operation (GALGAS_string (" fontcolor=\"red\"")  COMMA_SOURCE_FILE ("shared-map.galgas", 1011)) ;
        }
        break ;
      }
      var_theGraph.dotAssign_operation (GALGAS_string ("];\n")  COMMA_SOURCE_FILE ("shared-map.galgas", 1013)) ;
      enumerator_38940.gotoNextObject () ;
    }
    cEnumerator_mapStateList enumerator_39418 (object->mAttribute_mMapStateList, kEnumeration_up) ;
    while (enumerator_39418.hasCurrentObject ()) {
      cEnumerator_mapStateTransitionList enumerator_39453 (enumerator_39418.current_mTransitionList (HERE), kEnumeration_up) ;
      while (enumerator_39453.hasCurrentObject ()) {
        var_theGraph.dotAssign_operation (GALGAS_string ("\"").add_operation (enumerator_39418.current_mStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1017)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (enumerator_39453.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1017)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (enumerator_39453.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1017)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017))  COMMA_SOURCE_FILE ("shared-map.galgas", 1017)) ;
        switch (enumerator_39453.current_mTransitionMessageKind (HERE).enumValue ()) {
        case GALGAS_mapAutomatonMessageKind::kNotBuilt:
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
          {
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
          {
            var_theGraph.dotAssign_operation (GALGAS_string (" fontcolor=\"orange\" color=\"orange\"")  COMMA_SOURCE_FILE ("shared-map.galgas", 1021)) ;
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
          {
            var_theGraph.dotAssign_operation (GALGAS_string (" fontcolor=\"red\" color=\"red\"")  COMMA_SOURCE_FILE ("shared-map.galgas", 1023)) ;
          }
          break ;
        }
        var_theGraph.dotAssign_operation (GALGAS_string ("];\n")  COMMA_SOURCE_FILE ("shared-map.galgas", 1025)) ;
        enumerator_39453.gotoNextObject () ;
      }
      enumerator_39418.gotoNextObject () ;
    }
    var_theGraph.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("shared-map.galgas", 1028)) ;
    GALGAS_bool joker_39948 ; // Joker input parameter
    var_theGraph.method_writeToFileWhenDifferentContents (var_graphFile, joker_39948, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1029)) ;
  }else if (kBoolFalse == test_48) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_graphFile, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1031)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                        categoryMethod_sharedMapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_semanticAnalysis (defineCategoryMethod_sharedMapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@sharedMapTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_42161 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_42161.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_42161.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1086)) ;
    enumerator_42161.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1090)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1091)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("shared-map.galgas", 1089))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1096)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1097)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1098)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1099)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1100)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1101)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1102)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1103)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1104)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1105)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1106)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1107)) COMMA_SOURCE_FILE ("shared-map.galgas", 1095)))  COMMA_SOURCE_FILE ("shared-map.galgas", 1095)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                             categoryMethod_sharedMapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_sharedMapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@sharedMapTypeForGeneration appendDeclaration2'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             const GALGAS_bool /* constinArgument_inGenerateForGalgas_33_ */,
                                                                             const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1119)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1120)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("shared-map.galgas", 1118))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                             categoryMethod_sharedMapTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_sharedMapTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@sharedMapTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1131)) ;
  GALGAS_keySortedList var_keySortedList = GALGAS_keySortedList::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 1132)) ;
  cEnumerator_mapAutomatonStateMap enumerator_43856 (object->mAttribute_mMapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_43856.hasCurrentObject ()) {
    var_keySortedList.addAssign_operation (enumerator_43856.current_lkey (HERE).mAttribute_string, enumerator_43856.current_mStateIndex (HERE)  COMMA_SOURCE_FILE ("shared-map.galgas", 1134)) ;
    enumerator_43856.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1137)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mMapAutomatonStateMap, object->mAttribute_mMapAutomatonActionMap, object->mAttribute_mMapStateSortedList, object->mAttribute_mMapOverrideList, var_keySortedList COMMA_SOURCE_FILE ("shared-map.galgas", 1136))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                                    categoryMethod_sharedMapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_sharedMapTypeForGeneration_appendSpecificImplementation, NULL) ;

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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 20)), object->mAttribute_mMapProxyTypeName.reader_location (SOURCE_FILE ("map-proxy.galgas", 20))  COMMA_SOURCE_FILE ("map-proxy.galgas", 20)) ;
  {
  const GALGAS_mapProxyDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 21)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedMapTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 22)), object->mAttribute_mAssociatedMapTypeName.reader_location (SOURCE_FILE ("map-proxy.galgas", 22))  COMMA_SOURCE_FILE ("map-proxy.galgas", 22)) COMMA_SOURCE_FILE ("map-proxy.galgas", 22)) ;
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
  GALGAS_typedPropertyList var_mapTypedAttributeList ;
  GALGAS_mapSearchMethodListAST var_searchMethodList ;
  GALGAS_bool joker_2417_3 ; // Joker input parameter
  GALGAS_bool joker_2417_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2417_1 ; // Joker input parameter
  GALGAS_bool joker_2461_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2461_2 ; // Joker input parameter
  GALGAS_attributeMap joker_2461_1 ; // Joker input parameter
  GALGAS_constructorMap joker_2519_11 ; // Joker input parameter
  GALGAS_getterMap joker_2519_10 ; // Joker input parameter
  GALGAS_setterMap joker_2519_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_2519_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_2519_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_2519_6 ; // Joker input parameter
  GALGAS_stringlist joker_2519_5 ; // Joker input parameter
  GALGAS_uint joker_2519_4 ; // Joker input parameter
  GALGAS_functionSignature joker_2519_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_2519_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_2519_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2578_6 ; // Joker input parameter
  GALGAS_bool joker_2578_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2578_4 ; // Joker input parameter
  GALGAS_string joker_2578_3 ; // Joker input parameter
  GALGAS_string joker_2578_2 ; // Joker input parameter
  GALGAS_headerKind joker_2578_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_2417_3, joker_2417_2, joker_2417_1, var_typeKindEnum, joker_2461_3, joker_2461_2, joker_2461_1, var_mapTypedAttributeList, joker_2519_11, joker_2519_10, joker_2519_9, joker_2519_8, joker_2519_7, joker_2519_6, joker_2519_5, joker_2519_4, joker_2519_3, joker_2519_2, joker_2519_1, var_searchMethodList, joker_2578_6, joker_2578_5, joker_2578_4, joker_2578_3, joker_2578_2, joker_2578_1, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 35)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("map-proxy.galgas", 45)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedMapTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the @").add_operation (object->mAttribute_mAssociatedMapTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 46)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 46))  COMMA_SOURCE_FILE ("map-proxy.galgas", 46)) ;
    var_mapTypedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 47)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 50)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 51)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 52)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 53)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 54)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedMapTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, var_associatedMapTypeIndex COMMA_SOURCE_FILE ("map-proxy.galgas", 56)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("map-proxy.galgas", 59)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("map-proxy.galgas", 62)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_mapProxyTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, var_mapProxyTypeProxy COMMA_SOURCE_FILE ("map-proxy.galgas", 65)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 67)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 68)), var_associatedMapTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("map-proxy.galgas", 68)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("map-proxy.galgas", 68)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 69)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("map-proxy.galgas", 69)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("map-proxy.galgas", 69)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 70)), var_mapProxyTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("map-proxy.galgas", 70)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("map-proxy.galgas", 70)) ;
  {
  var_classMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 72))  COMMA_SOURCE_FILE ("map-proxy.galgas", 72)), var_argList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 71)) ;
  }
  var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 77)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 78)), var_associatedMapTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("map-proxy.galgas", 78)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("map-proxy.galgas", 78)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 79)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("map-proxy.galgas", 79)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("map-proxy.galgas", 79)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 80)), var_mapProxyTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("map-proxy.galgas", 80)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("map-proxy.galgas", 80)) ;
  {
  var_classMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxyFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 82))  COMMA_SOURCE_FILE ("map-proxy.galgas", 82)), var_argList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 81)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("null"), object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 87)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 87)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 89)) ;
  var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 90)), var_associatedMapTypeIndex, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("map-proxy.galgas", 90)) ;
  var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 91)), var_lstringTypeIndex, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("map-proxy.galgas", 91)) ;
  cEnumerator_mapSearchMethodListAST enumerator_5240 (var_searchMethodList, kEnumeration_up) ;
  while (enumerator_5240.hasCurrentObject ()) {
    {
    var_constructorMap.modifier_insertKey (enumerator_5240.current_mSearchMethodName (HERE), var_constructorAttributeTypeList, GALGAS_bool (true), var_mapProxyTypeProxy, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 93)) ;
    }
    enumerator_5240.gotoNextObject () ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 101)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 108)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 115)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 122)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 129)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 136)) ;
  }
  GALGAS_getterMap var_inheritedReaderMap = var_getterMap ;
  cEnumerator_typedPropertyList enumerator_6502 (var_mapTypedAttributeList, kEnumeration_up) ;
  while (enumerator_6502.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_inheritedReaderMap.reader_hasKey (enumerator_6502.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("map-proxy.galgas", 146)) COMMA_SOURCE_FILE ("map-proxy.galgas", 146)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_6635 (var_inheritedReaderMap.reader_keySet (SOURCE_FILE ("map-proxy.galgas", 148)), kEnumeration_up) ;
      while (enumerator_6635.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_6635.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 149)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 149))  COMMA_SOURCE_FILE ("map-proxy.galgas", 149)) ;
        if (enumerator_6635.hasNextObject ()) {
          var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("map-proxy.galgas", 150)) ;
        }
        enumerator_6635.gotoNextObject () ;
      }
      GALGAS_location location_3 (enumerator_6502.current_mAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the map has a associated map proxy, which has predefined readers: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 152)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 152))  COMMA_SOURCE_FILE ("map-proxy.galgas", 152)) ;
    }else if (kBoolFalse == test_2) {
      {
      var_getterMap.modifier_insertKey (enumerator_6502.current_mAttributeName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("map-proxy.galgas", 157)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 158)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 159)), GALGAS_bool (true), enumerator_6502.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("map-proxy.galgas", 162)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 155)) ;
      }
    }
    enumerator_6502.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapProxyTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 168)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mMapProxyTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("map-proxy.galgas", 183)), GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("map-proxy.galgas", 184)), GALGAS_bool (false), var_mapTypedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 187)), var_mapTypedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, var_classMethodMap, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 194)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 195)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 196)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 197)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 198)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 199)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 200)), var_searchMethodList, GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("map-proxy.galgas", 203)), GALGAS_string ("null"), GALGAS_string ("mapproxy-").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 205)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("map-proxy.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 179)) ;
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
  GALGAS_typedPropertyList var_listTypeAttributeList ;
  GALGAS_mapSearchMethodListAST var_searchMethodList ;
  GALGAS_bool joker_9128_7 ; // Joker input parameter
  GALGAS_bool joker_9128_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9128_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9128_4 ; // Joker input parameter
  GALGAS_bool joker_9128_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9128_2 ; // Joker input parameter
  GALGAS_attributeMap joker_9128_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9186_11 ; // Joker input parameter
  GALGAS_getterMap joker_9186_10 ; // Joker input parameter
  GALGAS_setterMap joker_9186_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9186_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_9186_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9186_6 ; // Joker input parameter
  GALGAS_stringlist joker_9186_5 ; // Joker input parameter
  GALGAS_uint joker_9186_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9186_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9186_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9186_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9245_6 ; // Joker input parameter
  GALGAS_bool joker_9245_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9245_4 ; // Joker input parameter
  GALGAS_string joker_9245_3 ; // Joker input parameter
  GALGAS_string joker_9245_2 ; // Joker input parameter
  GALGAS_headerKind joker_9245_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_9128_7, joker_9128_6, joker_9128_5, joker_9128_4, joker_9128_3, joker_9128_2, joker_9128_1, var_listTypeAttributeList, joker_9186_11, joker_9186_10, joker_9186_9, joker_9186_8, joker_9186_7, joker_9186_6, joker_9186_5, joker_9186_4, joker_9186_3, joker_9186_2, joker_9186_1, var_searchMethodList, joker_9245_6, joker_9245_5, joker_9245_4, joker_9245_3, joker_9245_2, joker_9245_1, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 220)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map proxy ").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 230)), GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 232)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 233)), var_listTypeAttributeList, var_searchMethodList  COMMA_SOURCE_FILE ("map-proxy.galgas", 231)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("map-proxy.galgas", 229)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 274)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 275)) COMMA_SOURCE_FILE ("map-proxy.galgas", 273))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 278)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 279)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 280)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 281)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 282)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 283)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 284)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 285)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 286)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 287)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 288)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 289)) COMMA_SOURCE_FILE ("map-proxy.galgas", 277)))  COMMA_SOURCE_FILE ("map-proxy.galgas", 277)) ;
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
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 299)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedMapTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 300)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 302)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 303)), object->mAttribute_mAssociatedMapTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 304)), object->mAttribute_mAssociatedMapTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("map-proxy.galgas", 301))) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("list.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 48)), object->mAttribute_mListTypeName.reader_location (SOURCE_FILE ("list.galgas", 48))  COMMA_SOURCE_FILE ("list.galgas", 48)) ;
  {
  const GALGAS_listDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("list.galgas", 49)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2405 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2405.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2405.current_mPropertyTypeName (HERE).reader_string (SOURCE_FILE ("list.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 51)), enumerator_2405.current_mPropertyTypeName (HERE).reader_location (SOURCE_FILE ("list.galgas", 51))  COMMA_SOURCE_FILE ("list.galgas", 51)) COMMA_SOURCE_FILE ("list.galgas", 51)) ;
    }
    enumerator_2405.gotoNextObject () ;
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
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("list.galgas", 65)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3356 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3356.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_3356.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("list.galgas", 67)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3573 (enumerator_3356.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_3573.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3573.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_hasGetter = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_3573.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_hasSetter = GALGAS_bool (true) ;
        }
      }
      enumerator_3573.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_3356.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("list.galgas", 77)) ;
    enumerator_3356.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("list.galgas", 80)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, var_listTypeIndex COMMA_SOURCE_FILE ("list.galgas", 82)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("list.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 86)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("list.galgas", 86)), var_listElementTypeIndex COMMA_SOURCE_FILE ("list.galgas", 84)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("list.galgas", 90)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 91)) ;
  GALGAS_formalParameterSignature var_modifierOutputFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 92)) ;
  GALGAS_formalParameterSignature var_modifierInputFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 93)) ;
  cEnumerator_typedPropertyList enumerator_4689 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_4689.hasCurrentObject ()) {
    var_enumerationDescriptor.addAssign_operation (enumerator_4689.current_mAttributeTypeProxy (HERE), enumerator_4689.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("list.galgas", 95))  COMMA_SOURCE_FILE ("list.galgas", 95)) ;
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 96)), enumerator_4689.current_mAttributeTypeProxy (HERE), enumerator_4689.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 96)) ;
    var_modifierOutputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 97)), enumerator_4689.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("list.galgas", 97)), enumerator_4689.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 97)) ;
    var_modifierInputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 98)), enumerator_4689.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 98)), enumerator_4689.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 98)) ;
    enumerator_4689.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 101)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyList"), object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("list.galgas", 102)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 102)) ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 104))  COMMA_SOURCE_FILE ("list.galgas", 104)), var_constructorAttributeTypeList, GALGAS_bool (false), var_listTypeIndex, inCompiler COMMA_SOURCE_FILE ("list.galgas", 103)) ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("list.galgas", 110)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 111)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 118)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("list.galgas", 125)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 125)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("list.galgas", 126)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 126)) ;
  }
  cEnumerator_typedPropertyList enumerator_6272 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_6272.hasCurrentObject ()) {
    const enumGalgasBool test_2 = enumerator_6272.current_mHasGetter (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      GALGAS_functionSignature temp_3 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 132)) ;
      temp_3.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 132)), var_uintType, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("list.galgas", 132)) ;
      var_getterMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_6272.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("list.galgas", 130)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("list.galgas", 130)), enumerator_6272.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("list.galgas", 130))  COMMA_SOURCE_FILE ("list.galgas", 130)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 131)), temp_3, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 133)), GALGAS_bool (true), enumerator_6272.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 136)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 129)) ;
      }
    }
    enumerator_6272.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 142)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 144))  COMMA_SOURCE_FILE ("list.galgas", 144)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 145)), var_modifierOutputFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 147)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 149)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("list.galgas", 143)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 153))  COMMA_SOURCE_FILE ("list.galgas", 153)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 154)), var_modifierOutputFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 156)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 158)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("list.galgas", 152)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 162)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 164))  COMMA_SOURCE_FILE ("list.galgas", 164)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 165)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 168)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 163)) ;
  }
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 172))  COMMA_SOURCE_FILE ("list.galgas", 172)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 173)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 176)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 171)) ;
  }
  var_modifierOutputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 179)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 179)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("list.galgas", 179)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 181))  COMMA_SOURCE_FILE ("list.galgas", 181)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 182)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 185)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 180)) ;
  }
  var_modifierOutputFormalArgumentList.drop () ; // drop instruction
  cEnumerator_typedPropertyList enumerator_8121 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_8121.hasCurrentObject ()) {
    const enumGalgasBool test_4 = enumerator_8121.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_formalParameterSignature var_setterFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 191)) ;
      var_setterFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 192)), enumerator_8121.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 192)), enumerator_8121.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 192)) ;
      var_setterFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 193)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 193)), enumerator_8121.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 193)) ;
      {
      var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_8121.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("list.galgas", 195)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("list.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 195)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("list.galgas", 195)), enumerator_8121.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("list.galgas", 195))  COMMA_SOURCE_FILE ("list.galgas", 195)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 196)), var_setterFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 199)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 194)) ;
      }
    }
    enumerator_8121.gotoNextObject () ;
  }
  var_modifierInputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 205)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 205)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("list.galgas", 205)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 207))  COMMA_SOURCE_FILE ("list.galgas", 207)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 208)), var_modifierInputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 211)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 206)) ;
  }
  var_modifierInputFormalArgumentList.drop () ; // drop instruction
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("list.galgas", 216)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("list.galgas", 217)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("list.galgas", 218)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mListTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("list.galgas", 220)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("list.galgas", 235)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("list.galgas", 236)), GALGAS_bool (true), var_typedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 239)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("list.galgas", 240)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 245)), var_enumerationDescriptor, var_enumerationVariants, function_binaryConcatOperator (inCompiler COMMA_SOURCE_FILE ("list.galgas", 248)).operator_or (function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("list.galgas", 248)) COMMA_SOURCE_FILE ("list.galgas", 248)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("list.galgas", 248)) COMMA_SOURCE_FILE ("list.galgas", 248)).operator_or (function_binaryAddOperator (inCompiler COMMA_SOURCE_FILE ("list.galgas", 248)) COMMA_SOURCE_FILE ("list.galgas", 248)), var_constructorAttributeTypeList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 250)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("list.galgas", 251)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("list.galgas", 252)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("list.galgas", 253)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("list.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 257)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("list.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 231)) ;
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
//                        Overriding category method '@listDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("list.galgas", 267)) ;
  cEnumerator_propertyInCollectionListAST enumerator_10959 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_10959.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_10959.current_mPropertyTypeName (HERE), enumerator_10959.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("list.galgas", 272))  COMMA_SOURCE_FILE ("list.galgas", 269)) ;
    enumerator_10959.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("list.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 276)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("list.galgas", 276)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("list.galgas", 274))  COMMA_SOURCE_FILE ("list.galgas", 274)) ;
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
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("list.galgas", 292)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 293)) ;
  cEnumerator_propertyInCollectionListAST enumerator_12028 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_12028.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_12028.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 295)) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_12202 (enumerator_12028.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_12202.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_12202.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_hasGetter.operator_not (SOURCE_FILE ("list.galgas", 300)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (enumerator_12202.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicate feature")  COMMA_SOURCE_FILE ("list.galgas", 301)) ;
        }
        var_hasGetter = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_12202.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_hasSetter.boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_location location_5 (enumerator_12202.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_5, GALGAS_string ("duplicate feature")  COMMA_SOURCE_FILE ("list.galgas", 306)) ;
          }
          var_hasSetter = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          GALGAS_location location_6 (enumerator_12202.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_6, GALGAS_string ("unknown feature; the features available here are: 'nogetter', 'setter'")  COMMA_SOURCE_FILE ("list.galgas", 310)) ;
        }
      }
      enumerator_12202.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_t, enumerator_12028.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("list.galgas", 313)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_12028.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("list.galgas", 318)) ;
    }
    enumerator_12028.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("list.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 322)), GALGAS_listTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, inCompiler  COMMA_SOURCE_FILE ("list.galgas", 324)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("list.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 325)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("list.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 325)), var_typedAttributeList  COMMA_SOURCE_FILE ("list.galgas", 323)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("list.galgas", 321)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("list.galgas", 362)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("list.galgas", 363)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("list.galgas", 361))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("list.galgas", 367)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("list.galgas", 368)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("list.galgas", 369)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 370)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 371)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 372)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 373)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 374)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("list.galgas", 375)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("list.galgas", 376)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("list.galgas", 377)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("list.galgas", 378)) COMMA_SOURCE_FILE ("list.galgas", 366)))  COMMA_SOURCE_FILE ("list.galgas", 366)) ;
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
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_15410 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_15410.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_15410.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("list.galgas", 389)) ;
    enumerator_15410.gotoNextObject () ;
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("list.galgas", 391)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("list.galgas", 392)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("list.galgas", 394)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("list.galgas", 395)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("list.galgas", 393))) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("struct.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 51)), object->mAttribute_mStructTypeName.reader_location (SOURCE_FILE ("struct.galgas", 51))  COMMA_SOURCE_FILE ("struct.galgas", 51)) ;
  {
  const GALGAS_structDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 52)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2443 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2443.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2443.current_mPropertyTypeName (HERE).reader_string (SOURCE_FILE ("struct.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 54)), enumerator_2443.current_mPropertyTypeName (HERE).reader_location (SOURCE_FILE ("struct.galgas", 54))  COMMA_SOURCE_FILE ("struct.galgas", 54)) COMMA_SOURCE_FILE ("struct.galgas", 54)) ;
    }
    enumerator_2443.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_structTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, var_structTypeIndex COMMA_SOURCE_FILE ("struct.galgas", 69)) ;
  }
  GALGAS_attributeMap var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 71)) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 72)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("struct.galgas", 73)) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 74)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 75)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3814 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3814.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_3814.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("struct.galgas", 77)) ;
    }
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("struct.galgas", 78)), var_attributeTypeIndex, enumerator_3814.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("struct.galgas", 78)) ;
    var_typesToIncludeInHeaderCompilation.addAssign_operation (var_attributeTypeIndex  COMMA_SOURCE_FILE ("struct.galgas", 79)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_3814.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("struct.galgas", 82)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_3814.current_mPropertyName (HERE), var_attributeTypeIndex, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 83)) ;
    }
    enumerator_3814.gotoNextObject () ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 90))  COMMA_SOURCE_FILE ("struct.galgas", 90)), var_constructorAttributeTypeList, GALGAS_bool (false), var_structTypeIndex, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 89)) ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 97)) ;
  }
  cEnumerator_typedPropertyList enumerator_4618 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_4618.hasCurrentObject ()) {
    {
    routine_enterBaseFinalGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_4618.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("struct.galgas", 102)), enumerator_4618.current_mAttributeTypeProxy (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 103)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 99)) ;
    }
    enumerator_4618.gotoNextObject () ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 108)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 110)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mStructTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 112)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mEnumeratedElementTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_enumeratedType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("struct.galgas", 125)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumeratedElementTypeName, var_enumeratedType COMMA_SOURCE_FILE ("struct.galgas", 127)) ;
    }
  }
  GALGAS_string var_defaultConstructorName = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_5667 (var_typedAttributeList, kEnumeration_up) ;
  bool bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_5667.hasCurrentObject () && bool_1) {
    while (enumerator_5667.hasCurrentObject () && bool_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_5667.current_mAttributeTypeProxy (HERE).reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 136)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_5667.current_mAttributeTypeProxy (HERE).reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 136)).operator_not (SOURCE_FILE ("struct.galgas", 136)) COMMA_SOURCE_FILE ("struct.galgas", 136)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_defaultConstructorName = GALGAS_string::makeEmptyString () ;
      }
      enumerator_5667.gotoNextObject () ;
      if (enumerator_5667.hasCurrentObject ()) {
        bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mStructTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("struct.galgas", 145)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("struct.galgas", 146)), GALGAS_bool (false), var_typedAttributeList, var_attributeMap, var_typedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 155)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 156)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("struct.galgas", 157)), function_generateDescriptionReaderUtilityMethod (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 158)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("struct.galgas", 159)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 160)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 161)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("struct.galgas", 162)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("struct.galgas", 163)), GALGAS_bool (false), var_enumeratedType, var_defaultConstructorName, GALGAS_string ("struct-").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("struct.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 167)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("struct.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 141)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mAttributeList.reader_length (SOURCE_FILE ("struct.galgas", 190)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mStructTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a structure cannot be empty: it must have at least one field")  COMMA_SOURCE_FILE ("struct.galgas", 191)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 193)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 194)) ;
  cEnumerator_propertyInCollectionListAST enumerator_7961 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_7961.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_7961.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 196)) ;
    cEnumerator_lstringlist enumerator_8084 (enumerator_7961.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_8084.hasCurrentObject ()) {
      GALGAS_location location_2 (enumerator_8084.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("a struct attribute does not accept any feature")  COMMA_SOURCE_FILE ("struct.galgas", 198)) ;
      enumerator_8084.gotoNextObject () ;
    }
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (false) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_7961.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("struct.galgas", 202)) ;
    const enumGalgasBool test_3 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 207)).reader_hasKey (enumerator_7961.current_mPropertyName (HERE).mAttribute_string COMMA_SOURCE_FILE ("struct.galgas", 207)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_m = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_8479 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 209)), kEnumeration_up) ;
      while (enumerator_8479.hasCurrentObject ()) {
        var_m.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_8479.current (HERE), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 210))  COMMA_SOURCE_FILE ("struct.galgas", 210)) ;
        enumerator_8479.gotoNextObject () ;
      }
      var_m.dotAssign_operation (GALGAS_string ("; theses names are reserved")  COMMA_SOURCE_FILE ("struct.galgas", 212)) ;
      GALGAS_location location_4 (enumerator_7961.current_mPropertyName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, var_m  COMMA_SOURCE_FILE ("struct.galgas", 213)) ;
    }
    {
    var_attributeMap.modifier_insertKey (enumerator_7961.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 215)) ;
    }
    enumerator_7961.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("struct.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 218)), GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 220)), var_typedAttributeList  COMMA_SOURCE_FILE ("struct.galgas", 219)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("struct.galgas", 217)) ;
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
  cEnumerator_typedPropertyList enumerator_10219 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_10219.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_10219.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 259)) ;
    enumerator_10219.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 263)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 264)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 266)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("struct.galgas", 262))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 269)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 270)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 271)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 272)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 273)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 274)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 275)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 276)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 277)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 278)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 279)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 280)) COMMA_SOURCE_FILE ("struct.galgas", 268)))  COMMA_SOURCE_FILE ("struct.galgas", 268)) ;
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
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 291)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 293)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 294)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 296)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("struct.galgas", 292))) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("sorted-list.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 66)), object->mAttribute_mSortedListTypeName.reader_location (SOURCE_FILE ("sorted-list.galgas", 66))  COMMA_SOURCE_FILE ("sorted-list.galgas", 66)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 67)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2914 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2914.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2914.current_mPropertyTypeName (HERE).reader_string (SOURCE_FILE ("sorted-list.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 69)), enumerator_2914.current_mPropertyTypeName (HERE).reader_location (SOURCE_FILE ("sorted-list.galgas", 69))  COMMA_SOURCE_FILE ("sorted-list.galgas", 69)) COMMA_SOURCE_FILE ("sorted-list.galgas", 69)) ;
    }
    enumerator_2914.gotoNextObject () ;
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
//                     Overriding category method '@sortedListDeclarationAST addAssociatedElement'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 79)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3626 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3626.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_3626.current_mPropertyTypeName (HERE), enumerator_3626.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 85))  COMMA_SOURCE_FILE ("sorted-list.galgas", 81)) ;
    enumerator_3626.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 89)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("sorted-list.galgas", 89)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("sorted-list.galgas", 87))  COMMA_SOURCE_FILE ("sorted-list.galgas", 87)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, var_listTypeIndex COMMA_SOURCE_FILE ("sorted-list.galgas", 102)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 106)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("sorted-list.galgas", 106)), var_listElementTypeIndex COMMA_SOURCE_FILE ("sorted-list.galgas", 104)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 110)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 111)) ;
  GALGAS_formalParameterSignature var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 112)) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 113)) ;
  cEnumerator_propertyInCollectionListAST enumerator_5173 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_5173.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_5173.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("sorted-list.galgas", 115)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_5173.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("sorted-list.galgas", 118)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_5173.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("sorted-list.galgas", 119)) ;
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("sorted-list.galgas", 120)), var_attributeTypeIndex, enumerator_5173.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("sorted-list.galgas", 120)) ;
    var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("sorted-list.galgas", 121)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("sorted-list.galgas", 121)), enumerator_5173.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("sorted-list.galgas", 121)) ;
    enumerator_5173.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 124)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptySortedList"), object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("sorted-list.galgas", 125)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 125)) ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 127))  COMMA_SOURCE_FILE ("sorted-list.galgas", 127)), var_constructorAttributeTypeList, GALGAS_bool (false), var_listTypeIndex, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 126)) ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 133)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 134)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 142)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 144))  COMMA_SOURCE_FILE ("sorted-list.galgas", 144)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("sorted-list.galgas", 145)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("sorted-list.galgas", 148)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("sorted-list.galgas", 143)) ;
  }
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 152))  COMMA_SOURCE_FILE ("sorted-list.galgas", 152)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("sorted-list.galgas", 153)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("sorted-list.galgas", 156)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("sorted-list.galgas", 151)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 160)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 162))  COMMA_SOURCE_FILE ("sorted-list.galgas", 162)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("sorted-list.galgas", 163)), var_modifierFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 165)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("sorted-list.galgas", 167)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 161)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 171))  COMMA_SOURCE_FILE ("sorted-list.galgas", 171)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("sorted-list.galgas", 172)), var_modifierFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 174)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("sorted-list.galgas", 176)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 170)) ;
  }
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 180)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("sorted-list.galgas", 181)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("sorted-list.galgas", 182)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mSortedListTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 184)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mSortedListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("sorted-list.galgas", 199)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("sorted-list.galgas", 200)), GALGAS_bool (true), var_typedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 203)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 204)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 209)), var_enumerationDescriptor, var_enumerationVariants, function_binaryConcatOperator (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 212)).operator_or (function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 212)) COMMA_SOURCE_FILE ("sorted-list.galgas", 212)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 212)) COMMA_SOURCE_FILE ("sorted-list.galgas", 212)), var_constructorAttributeTypeList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 214)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 215)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 216)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 217)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptySortedList"), GALGAS_string ("sortedlist-").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("sorted-list.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 223)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("sorted-list.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 195)) ;
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
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 238)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 239)) ;
  cEnumerator_propertyInCollectionListAST enumerator_9675 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_9675.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_9675.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 241)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_9675.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("sorted-list.galgas", 244)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_9675.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 249)) ;
    }
    enumerator_9675.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("sorted-list.galgas", 252)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 253)) ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_10148 (object->mAttribute_mSortDescriptorList, kEnumeration_up) ;
  while (enumerator_10148.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type ;
    var_attributeMap.method_searchKey (enumerator_10148.current_mSortedAttributeName (HERE), var_type, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 255)) ;
    var_sortDescriptorList.addAssign_operation (var_type, enumerator_10148.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("sorted-list.galgas", 256)), enumerator_10148.current_mAscending (HERE)  COMMA_SOURCE_FILE ("sorted-list.galgas", 256)) ;
    const enumGalgasBool test_0 = var_attributesUsedForSorting.reader_hasKey (enumerator_10148.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("sorted-list.galgas", 257)) COMMA_SOURCE_FILE ("sorted-list.galgas", 257)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_10148.current_mSortedAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_10148.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("sorted-list.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 258)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 258))  COMMA_SOURCE_FILE ("sorted-list.galgas", 258)) ;
    }
    var_attributesUsedForSorting.addAssign_operation (enumerator_10148.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("sorted-list.galgas", 260))  COMMA_SOURCE_FILE ("sorted-list.galgas", 260)) ;
    enumerator_10148.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("sorted-list.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 264)), GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 266)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 267)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("sorted-list.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 267)), var_typedAttributeList, var_sortDescriptorList  COMMA_SOURCE_FILE ("sorted-list.galgas", 265)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("sorted-list.galgas", 263)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 314)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 315)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("sorted-list.galgas", 313))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 319)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 320)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 321)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 322)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 323)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 324)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 325)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 326)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 327)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 328)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 329)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 330)) COMMA_SOURCE_FILE ("sorted-list.galgas", 318)))  COMMA_SOURCE_FILE ("sorted-list.galgas", 318)) ;
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
                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_13677 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_13677.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_13677.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 341)) ;
    enumerator_13677.gotoNextObject () ;
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 343)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 344)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 346)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSortDescriptorList COMMA_SOURCE_FILE ("sorted-list.galgas", 345))) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 49)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 50))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 45))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 45)) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, object->mAttribute_mLexiqueIdentifier, GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 64)), object->mAttribute_mIndexingKeyList, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 66)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 67))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 60))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 60)) ;
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
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4763 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_4763.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_4763.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 81)), enumerator_4763.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 80)) ;
    enumerator_4763.gotoNextObject () ;
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 100)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_5641 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_5641.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_5641.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 103)), enumerator_5641.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 102)) ;
    enumerator_5641.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 106))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 106)) ;
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
  GALGAS_location joker_6420 ; // Joker input parameter
  object->mAttribute_mListOfSemanticInstructionListForGeneration.method_first (var_instructionList, joker_6420, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 119)) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 120))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 120)) ;
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
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 128))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 128)) ;
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
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 136))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 136)) ;
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
      GALGAS_terminalCheckInstructionForGeneration cast_10092_si ((cPtr_terminalCheckInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 192)).objectCompare (cast_10092_si.reader_mTerminalName (SOURCE_FILE ("syntaxSignature.galgas", 192)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 192)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 193)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_10092_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 194)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 195)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 195))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 194)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_10391_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_10391_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 198)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 199)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 199))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 198)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 202)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 205)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 206)) ;
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
      GALGAS_nonterminalInstructionForGeneration cast_11108_si ((cPtr_nonterminalInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mNonterminalName.objectCompare (cast_11108_si.reader_mNonterminalName (SOURCE_FILE ("syntaxSignature.galgas", 218)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 219)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_11108_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 220)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 221)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 221))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 220)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_11406_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_11406_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 224)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 225)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 225))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 224)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 228)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 231)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 232)) ;
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
      GALGAS_repeatInstructionForGeneration cast_12124_si ((cPtr_repeatInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = function_compareSyntaxSignature (object->mAttribute_m_5F_repeated_5F_instructionList, cast_12124_si.reader_m_5F_repeated_5F_instructionList (SOURCE_FILE ("syntaxSignature.galgas", 244)), cast_12124_si.reader_mEndOfRepeatedInstructions (SOURCE_FILE ("syntaxSignature.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 244)) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 245)).objectCompare (cast_12124_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 245)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 245)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 245)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_12124_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 246)), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 248)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 247)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 248)).add_operation (cast_12124_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 250)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 250)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 249))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 246)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_12805 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_12867 (cast_12124_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 253)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_12805.hasCurrentObject () && enumerator_12867.hasCurrentObject () && bool_1) {
        while (enumerator_12805.hasCurrentObject () && enumerator_12867.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_12805.current_mInstructionList (HERE), enumerator_12867.current_mInstructionList (HERE), enumerator_12867.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 254)) ;
          enumerator_12805.gotoNextObject () ;
          enumerator_12867.gotoNextObject () ;
          if (enumerator_12805.hasCurrentObject () && enumerator_12867.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_13051_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_13051_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 257)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 257)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 261)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 264)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 265)) ;
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
      GALGAS_selectInstructionForGeneration cast_13736_si ((cPtr_selectInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (true) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 278)).objectCompare (cast_13736_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 278)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 278)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 278)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_13736_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 279)), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 281)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 280)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 281)).add_operation (cast_13736_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 283)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 283)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 282))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 279)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_14303 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_14365 (cast_13736_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 286)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_14303.hasCurrentObject () && enumerator_14365.hasCurrentObject () && bool_1) {
        while (enumerator_14303.hasCurrentObject () && enumerator_14365.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_14303.current_mInstructionList (HERE), enumerator_14365.current_mInstructionList (HERE), enumerator_14365.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 287)) ;
          enumerator_14303.gotoNextObject () ;
          enumerator_14365.gotoNextObject () ;
          if (enumerator_14303.hasCurrentObject () && enumerator_14365.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_14549_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_14549_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 290)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 290)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 294)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 297)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 298)) ;
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
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_10071 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("grammarCompilation.galgas", 194))) ;
  if (NULL != objectArray_10071) {
      macroValidSharedObject (objectArray_10071, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex = objectArray_10071->mAttribute_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex = ioArgument_ioActuallyUsedTerminalSymbolMap.reader_count (SOURCE_FILE ("grammarCompilation.galgas", 197)) ;
    {
    ioArgument_ioActuallyUsedTerminalSymbolMap.modifier_insertKey (object->mAttribute_mTerminalName, var_terminalSymbolIndex, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 198)) ;
    }
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, var_terminalSymbolIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 200))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 200)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_terminalCheckInstruction.mSlotID,
                                            categoryMethod_terminalCheckInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstruction_transformInstruction (defineCategoryMethod_terminalCheckInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@nonterminalCallInstruction transformInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalCallInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                            GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                            const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                            GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                            GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalCallInstruction * object = (const cPtr_nonterminalCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalCallInstruction) ;
  GALGAS_uint var_nonTerminalSymbolIndex ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_11105 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex, joker_11105, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 214)) ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 215))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 215)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalCallInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                            categoryMethod_nonterminalCallInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalCallInstruction_transformInstruction (defineCategoryMethod_nonterminalCallInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@repeatInstruction transformInstruction'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                   GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                   const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                   GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstruction * object = (const cPtr_repeatInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 229)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 231)) ;
  {
  routine_transformInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 232)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList = GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (var_repeatedInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 239)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_12292 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_12292.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 242)) ;
    {
    routine_transformInstructionList (enumerator_12292.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 243)) ;
    }
    var_repeatBranchList.addAssign_operation (var_syntaxInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 250)) ;
    enumerator_12292.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_repeatBranchList, var_addedNonTerminalIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 253))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 253)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_repeatInstruction.mSlotID,
                                            categoryMethod_repeatInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstruction_transformInstruction (defineCategoryMethod_repeatInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@selectInstruction transformInstruction'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                   GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                   const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                   GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstruction * object = (const cPtr_selectInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 267)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 269)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_13509 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_13509.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 271)) ;
    {
    routine_transformInstructionList (enumerator_13509.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 272)) ;
    }
    var_selectBranchList.addAssign_operation (var_syntaxInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 279)) ;
    enumerator_13509.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_selectBranchList, var_addedNonTerminalIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 282))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 282)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_selectInstruction.mSlotID,
                                            categoryMethod_selectInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstruction_transformInstruction (defineCategoryMethod_selectInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@parseRewindInstruction transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                        GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                        const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                        GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstruction * object = (const cPtr_parseRewindInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstruction) ;
  GALGAS_syntaxInstructionList var_syntaxInstructionList ;
  GALGAS_location joker_14649 ; // Joker input parameter
  object->mAttribute_mParseRewindBranchList.method_first (var_syntaxInstructionList, joker_14649, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 296)) ;
  {
  routine_transformInstructionList (var_syntaxInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 298)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_parseRewindInstruction.mSlotID,
                                            categoryMethod_parseRewindInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstruction_transformInstruction (defineCategoryMethod_parseRewindInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@parseWhenInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                      GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                      GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                      GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstruction * object = (const cPtr_parseWhenInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstruction) ;
  {
  routine_transformInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 314)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_parseWhenInstruction.mSlotID,
                                            categoryMethod_parseWhenInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstruction_transformInstruction (defineCategoryMethod_parseWhenInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@parseLoopInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                      GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                      GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                      GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstruction * object = (const cPtr_parseLoopInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstruction) ;
  {
  routine_transformInstructionList (object->mAttribute_mDoInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 330)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_parseLoopInstruction.mSlotID,
                                            categoryMethod_parseLoopInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstruction_transformInstruction (defineCategoryMethod_parseLoopInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryModifierAST buildCategoryListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_genericCategoryMethodListMap & ioArgument_ioAbstractCategoryModifierListMapAST,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierAST * object = (const cPtr_abstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierAST) ;
  ioArgument_ioAbstractCategoryModifierListMapAST.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 61)), object->mAttribute_mAbstractCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 60)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                             categoryMethod_abstractCategoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierAST_buildCategoryListMaps (defineCategoryMethod_abstractCategoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryModifierAST buildCategoryListMaps'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                      GALGAS_genericCategoryMethodListMap & ioArgument_ioCategoryModifierListMap,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierAST * object = (const cPtr_categoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierAST) ;
  ioArgument_ioCategoryModifierListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 81)), object->mAttribute_mCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 80)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                             categoryMethod_categoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierAST_buildCategoryListMaps (defineCategoryMethod_categoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryModifierAST buildCategoryListMaps'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingCategoryModifierListMap,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryModifierAST * object = (const cPtr_overridingCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierAST) ;
  ioArgument_ioOverridingCategoryModifierListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 101)), object->mAttribute_mOverridingCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 100)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                             categoryMethod_overridingCategoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierAST_buildCategoryListMaps (defineCategoryMethod_overridingCategoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryModifierAST buildCategoryListMaps'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingAbstractCategoryModifierListMap,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryModifierAST * object = (const cPtr_overridingAbstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryModifierAST) ;
  ioArgument_ioOverridingAbstractCategoryModifierListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 121)), object->mAttribute_mOverridingCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 120)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                             categoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps (defineCategoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@abstractCategoryMethodAST buildCategoryListMaps'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & ioArgument_ioAbstractCategoryMethodListMapAST,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodAST * object = (const cPtr_abstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodAST) ;
  ioArgument_ioAbstractCategoryMethodListMapAST.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 141)), object->mAttribute_mAbstractCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 140)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                             categoryMethod_abstractCategoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodAST_buildCategoryListMaps (defineCategoryMethod_abstractCategoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@categoryMethodAST buildCategoryListMaps'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & ioArgument_ioCategoryMethodListMap,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodAST * object = (const cPtr_categoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodAST) ;
  ioArgument_ioCategoryMethodListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 161)), object->mAttribute_mCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 160)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                             categoryMethod_categoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodAST_buildCategoryListMaps (defineCategoryMethod_categoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@overridingCategoryMethodAST buildCategoryListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingCategoryMethodListMap,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryMethodAST * object = (const cPtr_overridingCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodAST) ;
  ioArgument_ioOverridingCategoryMethodListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 181)), object->mAttribute_mOverridingCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 180)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                             categoryMethod_overridingCategoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodAST_buildCategoryListMaps (defineCategoryMethod_overridingCategoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@overridingAbstractCategoryMethodAST buildCategoryListMaps'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingAbstractCategoryMethodListMap,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryMethodAST * object = (const cPtr_overridingAbstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryMethodAST) ;
  ioArgument_ioOverridingAbstractCategoryMethodListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 201)), object->mAttribute_mOverridingCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 200)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                             categoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps (defineCategoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@abstractCategoryReaderAST buildCategoryListMaps'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & ioArgument_ioAbstractCategoryReaderListMap,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderAST * object = (const cPtr_abstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderAST) ;
  ioArgument_ioAbstractCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 221)), object->mAttribute_mAbstractCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 220)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_abstractCategoryReaderAST.mSlotID,
                                             categoryMethod_abstractCategoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderAST_buildCategoryListMaps (defineCategoryMethod_abstractCategoryReaderAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@categoryReaderAST buildCategoryListMaps'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & ioArgument_ioCategoryReaderListMap,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderAST * object = (const cPtr_categoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderAST) ;
  ioArgument_ioCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 241)), object->mAttribute_mCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 240)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_categoryReaderAST.mSlotID,
                                             categoryMethod_categoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderAST_buildCategoryListMaps (defineCategoryMethod_categoryReaderAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@overridingCategoryReaderAST buildCategoryListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingCategoryReaderListMap,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryReaderAST * object = (const cPtr_overridingCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryReaderAST) ;
  ioArgument_ioOverridingCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 261)), object->mAttribute_mOverridingCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 260)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingCategoryReaderAST.mSlotID,
                                             categoryMethod_overridingCategoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryReaderAST_buildCategoryListMaps (defineCategoryMethod_overridingCategoryReaderAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@overridingAbstractCategoryReaderAST buildCategoryListMaps'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingAbstractCategoryReaderListMap,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryReaderAST * object = (const cPtr_overridingAbstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryReaderAST) ;
  ioArgument_ioOverridingAbstractCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 281)), object->mAttribute_mAbstractCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 280)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST.mSlotID,
                                             categoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps (defineCategoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps, NULL) ;

