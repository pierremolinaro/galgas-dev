#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-25.h"


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
  GALGAS_string var_variantCppVarName_7287 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_7287, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 185)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_7287, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 193)) ;
  }
  GALGAS_string var_variantVar_7425 = GALGAS_string ("variant_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_7425, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (var_variantCppVarName_7287, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)) ;
  GALGAS_string var_loopVar_7604 = GALGAS_string ("loop_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_7604, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (var_loopVar_7604, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 199)) ;
  }
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mFirstInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 200)) ;
  }
  GALGAS_string var_loopExpressionVar_8045 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLoopExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_8045, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 209)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7604.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopExpressionVar_8045, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopVar_7604, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (var_loopVar_7604, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (var_loopExpressionVar_8045, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_7604, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_variantVar_7425, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (")) {\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_loopVar_7604, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (GALGAS_string (" = false ;\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (extensionGetter_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string (") ;\n"
    "}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 218)).add_operation (var_loopVar_7604, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_7425, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mSecondInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 221)) ;
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
  cEnumerator_semanticExpressionListAST enumerator_4953 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_4953.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_4953.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 136)) ;
    enumerator_4953.gotoNextObject () ;
  }
  cEnumerator_matchInstructionBranchListAST enumerator_5065 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_5065.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_5065.current_mMatchBranchInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 139)) ;
    enumerator_5065.gotoNextObject () ;
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
  GALGAS_semanticExpressionListForGeneration var_expressionList_5742 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 153)) ;
  cEnumerator_semanticExpressionListAST enumerator_5818 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_5818.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_matchedExpression_6096 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_5818.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-match.galgas", 159)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_matchedExpression_6096, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 156)) ;
    var_expressionList_5742.addAssign_operation (var_matchedExpression_6096  COMMA_SOURCE_FILE ("instruction-match.galgas", 164)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_type_6211 = var_matchedExpression_6096.getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 166)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type_6211.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 167)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-match.galgas", 167)))).operator_and (GALGAS_bool (kIsNotEqual, var_type_6211.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 167)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 167)))) COMMA_SOURCE_FILE ("instruction-match.galgas", 167)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_5818.current_mEndOfExpressionLocation (HERE), GALGAS_string ("this expression is an instance of '@").add_operation (var_type_6211.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 169)).add_operation (GALGAS_string ("' type, but this type is neither an enumeration, neither a class"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 169)), fixItArray1  COMMA_SOURCE_FILE ("instruction-match.galgas", 168)) ;
    }
    enumerator_5818.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 173)) ;
  }
  GALGAS_matchInstructionBranchListForGeneration var_matchInstructionBranchList_6641 = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 174)) ;
  cEnumerator_matchInstructionBranchListAST enumerator_6726 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_6726.hasCurrentObject ()) {
    GALGAS_localConstantList var_localConstantList_6773 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 177)) ;
    GALGAS_matchListForGeneration var_matchListForGeneration_6827 = GALGAS_matchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 178)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_expressionList_5742.getter_length (SOURCE_FILE ("instruction-match.galgas", 179)).objectCompare (enumerator_6726.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 179)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      cEnumerator_semanticExpressionListForGeneration enumerator_6951 (var_expressionList_5742, kEnumeration_up) ;
      cEnumerator_matchEntryListAST enumerator_6974 (enumerator_6726.current_mMatchEntryList (HERE), kEnumeration_up) ;
      while (enumerator_6951.hasCurrentObject () && enumerator_6974.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type_6994 = enumerator_6951.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 181)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_type_6994.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 182)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-match.galgas", 182)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = enumerator_6974.current_mIsType (HERE).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_unifiedTypeMap_2D_proxy var_namedType_7139 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_6974.current_mTypeNameOrEnumerationConstantName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 184)) ;
            GALGAS_unifiedTypeMap_2D_proxy var_t_7293 = var_type_6994 ;
            GALGAS_bool var_found_7324 = GALGAS_bool (kIsEqual, var_t_7293.objectCompare (var_namedType_7139)) ;
            if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("instruction-match.galgas", 187)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).isValid ()) {
              uint32_t variant_7358 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("instruction-match.galgas", 187)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).uintValue () ;
              bool loop_7358 = true ;
              while (loop_7358) {
                loop_7358 = var_found_7324.operator_not (SOURCE_FILE ("instruction-match.galgas", 188)).operator_and (var_t_7293.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 188)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 188)).operator_not (SOURCE_FILE ("instruction-match.galgas", 188)) COMMA_SOURCE_FILE ("instruction-match.galgas", 188)).isValid () ;
                if (loop_7358) {
                  loop_7358 = var_found_7324.operator_not (SOURCE_FILE ("instruction-match.galgas", 188)).operator_and (var_t_7293.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 188)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 188)).operator_not (SOURCE_FILE ("instruction-match.galgas", 188)) COMMA_SOURCE_FILE ("instruction-match.galgas", 188)).boolValue () ;
                }
                if (loop_7358 && (0 == variant_7358)) {
                  loop_7358 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-match.galgas", 187)) ;
                }
                if (loop_7358) {
                  variant_7358 -- ;
                  var_t_7293 = var_t_7293.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 189)) ;
                  var_found_7324 = GALGAS_bool (kIsEqual, var_t_7293.objectCompare (var_namedType_7139)) ;
                }
              }
            }
            const enumGalgasBool test_5 = var_found_7324.operator_not (SOURCE_FILE ("instruction-match.galgas", 192)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_6974.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 193)), GALGAS_string ("the '@").add_operation (enumerator_6974.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 194)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 194)).add_operation (var_type_6994.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 194)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 194)), fixItArray6  COMMA_SOURCE_FILE ("instruction-match.galgas", 193)) ;
            }else if (kBoolFalse == test_5) {
              const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, enumerator_6974.current_mLocalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 195)).getter_length (SOURCE_FILE ("instruction-match.galgas", 195)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_localConstantList_6773.addAssign_operation (var_t_7293, enumerator_6974.current_mLocalConstantName (HERE), GALGAS_bool (false), GALGAS_string ("match_instruction_constant_name")  COMMA_SOURCE_FILE ("instruction-match.galgas", 196)) ;
              }
            }
          }else if (kBoolFalse == test_4) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_6974.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 199)), GALGAS_string ("a type that inherits from '@").add_operation (enumerator_6951.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 200)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 200)).add_operation (GALGAS_string ("' class is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 200)), fixItArray8  COMMA_SOURCE_FILE ("instruction-match.galgas", 199)) ;
          }
          var_matchListForGeneration_6827.addAssign_operation (GALGAS_bool (true), enumerator_6974.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 202)), enumerator_6974.current_mLocalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 202))  COMMA_SOURCE_FILE ("instruction-match.galgas", 202)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_type_6994.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 203)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 203)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            const enumGalgasBool test_10 = enumerator_6974.current_mIsType (HERE).boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_6974.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 205)), GALGAS_string ("a constant of the '@").add_operation (enumerator_6951.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 206)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 206)).add_operation (GALGAS_string ("' enumeration type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 206)), fixItArray11  COMMA_SOURCE_FILE ("instruction-match.galgas", 205)) ;
            }else if (kBoolFalse == test_10) {
              const enumGalgasBool test_12 = var_type_6994.getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 207)).getter_hasKey (enumerator_6974.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 207)) COMMA_SOURCE_FILE ("instruction-match.galgas", 207)).operator_not (SOURCE_FILE ("instruction-match.galgas", 207)).boolEnum () ;
              if (kBoolTrue == test_12) {
                TC_Array <C_FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_6974.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 208)), GALGAS_string ("the '").add_operation (enumerator_6974.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 209)).add_operation (GALGAS_string ("' symbol is not a constant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 209)).add_operation (enumerator_6951.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 209)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 209)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 209)), fixItArray13  COMMA_SOURCE_FILE ("instruction-match.galgas", 208)) ;
              }
            }
            var_matchListForGeneration_6827.addAssign_operation (GALGAS_bool (false), enumerator_6974.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 213)), enumerator_6951.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 214)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 214))  COMMA_SOURCE_FILE ("instruction-match.galgas", 211)) ;
          }else if (kBoolFalse == test_9) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_6974.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 216)), GALGAS_string ("internal error"), fixItArray14  COMMA_SOURCE_FILE ("instruction-match.galgas", 216)) ;
          }
        }
        enumerator_6951.gotoNextObject () ;
        enumerator_6974.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (enumerator_6726.current_mEndOfMatchEntryList (HERE), GALGAS_string ("this match list should contain ").add_operation (var_expressionList_5742.getter_length (SOURCE_FILE ("instruction-match.galgas", 221)).getter_string (SOURCE_FILE ("instruction-match.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 221)).add_operation (GALGAS_string (" elements, but it acually contains "), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 221)).add_operation (enumerator_6726.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 222)).getter_string (SOURCE_FILE ("instruction-match.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 221)), fixItArray15  COMMA_SOURCE_FILE ("instruction-match.galgas", 220)) ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_9423 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_6773, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 231)), enumerator_6726.current_mMatchBranchInstructionList (HERE), enumerator_6726.current_mEndOf_5F_instructionList (HERE), ioArgument_ioVariableMap, var_instructionList_9423, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 226)) ;
    }
    var_matchInstructionBranchList_6641.addAssign_operation (var_matchListForGeneration_6827, var_instructionList_9423  COMMA_SOURCE_FILE ("instruction-match.galgas", 238)) ;
    enumerator_6726.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_elseInstructionList_9906 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 246)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 247)), object->mAttribute_mElseInstructionList, object->mAttribute_mEndOf_5F_match_5F_instruction, ioArgument_ioVariableMap, var_elseInstructionList_9906, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 242)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_match_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 254)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_matchInstructionForGeneration::constructor_new (var_expressionList_5742, var_matchInstructionBranchList_6641, var_elseInstructionList_9906  COMMA_SOURCE_FILE ("instruction-match.galgas", 256))  COMMA_SOURCE_FILE ("instruction-match.galgas", 256)) ;
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
  GALGAS_stringlist var_receiverList_12097 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 297)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_12148 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_12148.hasCurrentObject ()) {
    GALGAS_string var_variable_12300 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_12148.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variable_12300, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 299)) ;
    var_receiverList_12097.addAssign_operation (var_variable_12300  COMMA_SOURCE_FILE ("instruction-match.galgas", 300)) ;
    enumerator_12148.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 302)) ;
  cEnumerator_stringlist enumerator_12390 (var_receiverList_12097, kEnumeration_up) ;
  while (enumerator_12390.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12390.current_mValue (HERE).add_operation (GALGAS_string (".isValid ()"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 304)) ;
    if (enumerator_12390.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 305)) ;
    }
    enumerator_12390.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 307)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 308)) ;
  }
  cEnumerator_matchInstructionBranchListForGeneration enumerator_12592 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_12592.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 310)) ;
    cEnumerator_matchListForGeneration enumerator_12663 (enumerator_12592.current_mMatchListForGeneration (HERE), kEnumeration_up) ;
    cEnumerator_stringlist enumerator_12683 (var_receiverList_12097, kEnumeration_up) ;
    while (enumerator_12663.hasCurrentObject () && enumerator_12683.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_12663.current_mIsType (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(NULL != dynamic_cast <const cPtr_").add_operation (enumerator_12663.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)).add_operation (enumerator_12683.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 314)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 313)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(").add_operation (enumerator_12683.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 316)).add_operation (GALGAS_string (".enumValue () == GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 316)).add_operation (enumerator_12663.current_mLocalConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 316)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 317)).add_operation (enumerator_12663.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 318)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 316)) ;
      }
      if (enumerator_12663.hasNextObject () && enumerator_12683.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 320)) ;
      }
      enumerator_12663.gotoNextObject () ;
      enumerator_12683.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 322)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_12592.current_mMatchBranchInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 323)) ;
    }
    if (enumerator_12592.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 331)) ;
    }
    enumerator_12592.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 333)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 334)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 342)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 343)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 344)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 38)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_2246 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-message.galgas", 56)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2246, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 53)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression_2246.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 62)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the expression has the '@").add_operation (var_expression_2246.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 64)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 64)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 64)), fixItArray1  COMMA_SOURCE_FILE ("instruction-message.galgas", 63)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression_2246, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("instruction-message.galgas", 67))  COMMA_SOURCE_FILE ("instruction-message.galgas", 67)) ;
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
  GALGAS_string var_messageCppVarName_3897 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_3897, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 91)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)).add_operation (var_messageCppVarName_3897, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 99)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 100)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 100)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 101)) COMMA_SOURCE_FILE ("instruction-message.galgas", 101)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 46)) ;
  cEnumerator_actualParameterListAST enumerator_1913 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_2838 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 66)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_2838, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 63)) ;
  GALGAS_formalParameterSignature var_routineSignature_2918 ;
  GALGAS_bool var_hasCompilerArgument_2946 ;
  GALGAS_methodKind var_kind_2965 ;
  GALGAS_string var_errorMessage_2988 ;
  GALGAS_location joker_3094 ; // Joker input parameter
  GALGAS_methodQualifier joker_3118 ; // Joker input parameter
  var_receiverExpression_2838.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 76)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 76)).method_searchKey (object->mAttribute_mMethodName, var_kind_2965, var_routineSignature_2918, joker_3094, var_hasCompilerArgument_2946, joker_3118, var_errorMessage_2988, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 76)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_errorMessage_2988.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mMethodName.getter_location (SOURCE_FILE ("instruction-method-call.galgas", 78)), var_errorMessage_2988, fixItArray1  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 78)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3601 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mAttribute_mMethodName, GALGAS_string ("'").add_operation (object->mAttribute_mMethodName.getter_string (SOURCE_FILE ("instruction-method-call.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)), var_routineSignature_2918, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3601, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 81)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType_3667 = var_receiverExpression_2838.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 94)) ;
  GALGAS_bool var_searching_3718 = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 96)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 97)).isValid ()) {
      uint32_t variant_3767 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 97)).uintValue () ;
      bool loop_3767 = true ;
      while (loop_3767) {
        loop_3767 = var_searching_3718.isValid () ;
        if (loop_3767) {
          loop_3767 = var_searching_3718.boolValue () ;
        }
        if (loop_3767 && (0 == variant_3767)) {
          loop_3767 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 97)) ;
        }
        if (loop_3767) {
          variant_3767 -- ;
          const enumGalgasBool test_3 = var_baseType_3667.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 98)).getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 98)).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_searching_3718 = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_3) {
            const enumGalgasBool test_4 = var_baseType_3667.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).getter_hasKey (object->mAttribute_mMethodName.mAttribute_string COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_baseType_3667 = var_baseType_3667.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 102)) ;
            }else if (kBoolFalse == test_4) {
              var_searching_3718 = GALGAS_bool (false) ;
            }
          }
        }
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverExpression_2838.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 112)), var_receiverExpression_2838, object->mAttribute_mMethodName.getter_string (SOURCE_FILE ("instruction-method-call.galgas", 114)), var_kind_2965, var_actualParameterListForGeneration_3601, var_hasCompilerArgument_2946, var_baseType_3667  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 110))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 110)) ;
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
  GALGAS_string var_receiverCppName_5618 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_5618, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 146)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_5618 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 147)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_5711 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 149)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5762 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 150)) ;
  GALGAS_stringlist var_inputVariableList_5802 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 151)) ;
  cEnumerator_actualParameterListForGeneration enumerator_5851 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_5851.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5883 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_5851.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5762, var_inputVariableList_5802, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5883, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 154)) ;
    var_parameterCppNameList_5711.addAssign_operation (var_parameterCppName_5883  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 155)) ;
    enumerator_5851.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mMethodBaseType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).add_operation (object->mAttribute_mMethodName, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-method-call.galgas", 161)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (object->mAttribute_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 163)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (var_receiverCppName_5618, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (object->mAttribute_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (var_receiverCppName_5618, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_5618.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (object->mAttribute_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_6890 (var_parameterCppNameList_5711, kEnumeration_up) ;
  while (enumerator_6890.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6890.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)) ;
    if (enumerator_6890.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 172)) ;
    }
    enumerator_6890.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_parameterCppNameList_5711.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 178)) ;
    }
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)) ;
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
  cEnumerator_actualParameterListAST enumerator_1673 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
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
  GALGAS_lstring var_usefulnessName_2336 = function_procedureNameForUsefulEntitiesGraph (object->mAttribute_mRoutineName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 54)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2336 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 55)) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_2631 ;
  GALGAS_bool var_isInternal_2658 ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mRoutineMap.method_searchKey (object->mAttribute_mRoutineName, var_routineSignature_2631, var_isInternal_2658, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 57)) ;
  const enumGalgasBool test_0 = var_isInternal_2658.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation_2736 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mRoutineMap.getter_locationForKey (object->mAttribute_mRoutineName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 64)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mRoutineName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 65)).objectCompare (var_procDeclarationLocation_2736.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 65)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mRoutineName.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 66)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_2736.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)), fixItArray2  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3401 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mAttribute_mRoutineName, GALGAS_string ("'").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 75)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 75)), var_routineSignature_2631, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3401, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 70)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (object->mAttribute_mRoutineName, var_actualParameterListForGeneration_3401  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 83))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 83)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 107)) ;
  GALGAS_stringlist var_parameterCppNameList_4499 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 109)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4547 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 110)) ;
  GALGAS_stringlist var_inputVariableList_4584 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 111)) ;
  cEnumerator_actualParameterListForGeneration enumerator_4622 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_4622.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4877 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4622.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4547, var_inputVariableList_4584, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4877, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 113)) ;
    var_parameterCppNameList_4499.addAssign_operation (var_parameterCppName_4877  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 122)) ;
    enumerator_4622.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 125)).getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)) ;
  cEnumerator_stringlist enumerator_5084 (var_parameterCppNameList_4499, kEnumeration_up) ;
  while (enumerator_5084.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_5084.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127)) ;
    enumerator_5084.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 129)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 129)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mRoutineName.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 40)) ;
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
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2502, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 55)) ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-assignment.galgas", 64)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 65)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 66)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-self-assignment.galgas", 66)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' assignment is not allowed for class instances"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 67)) ;
    }
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, var_expression_2502.getter_mResultType (SOURCE_FILE ("instruction-self-assignment.galgas", 70)), object->mAttribute_mInstructionLocation, var_expression_2502, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 70)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-assignment.galgas", 76)), var_expression_2502  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 72))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 72)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 113)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 119)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 125)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 131)) ;
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
  extensionMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 137)) ;
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
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 153)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
    var_selfObjectCppName_6289.drop () ; // Release error dropped variable
    var_selfTypeProxy_6261.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_6289 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_6261 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_6669 = var_selfTypeProxy_6261.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 160)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_6669.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 161)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_6261.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 162)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)).objectCompare (var_addAssignOperatorArguments_6669.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_selfTypeProxy_6261.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (var_addAssignOperatorArguments_6669.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 168)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 169)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 166)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_7375 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 171)) ;
      cEnumerator_actualOutputExpressionList enumerator_7443 (object->mAttribute_mExpressions, kEnumeration_up) ;
      cEnumerator_functionSignature enumerator_7477 (var_addAssignOperatorArguments_6669, kEnumeration_up) ;
      while (enumerator_7443.hasCurrentObject () && enumerator_7477.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_7728 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_7443.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_7477.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7728, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 173)) ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_7477.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_7443.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_7477.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_7477.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)) ;
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
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_selfObjectCppName_6289, var_selfTypeProxy_6261, GALGAS_string::makeEmptyString (), object->mAttribute_mInstructionLocation, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 194)), var_effectiveParameterList_7375  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 189))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 189)) ;
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
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 210)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 211)) ;
    var_selfObjectCppName_8967.drop () ; // Release error dropped variable
    var_selfTypeProxy_8939.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_8967 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_8939 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfTypeProxy_8939.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 217)).operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 217)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 217)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_8939.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 218)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_9811 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeProxy_8939, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9811, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 222)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_8939, var_expression_9811.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 231)), object->mAttribute_mInstructionLocation, var_expression_9811, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 231)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy_8939, var_selfObjectCppName_8967, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 238)), var_expression_9811, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 233))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 233)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_10741 ;
  GALGAS_string var_selfObjectCppName_10769 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 255)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 256)) ;
    var_selfObjectCppName_10769.drop () ; // Release error dropped variable
    var_selfTypeProxy_10741.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_10769 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_10741 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfTypeProxy_10741.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 262)).operator_and (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 262)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 262)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_10741.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_11614 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeProxy_10741, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11614, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_10741, var_expression_11614.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 276)), object->mAttribute_mInstructionLocation, var_expression_11614, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 276)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy_10741, var_selfObjectCppName_10769, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 283)), var_expression_11614, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_12543 ;
  GALGAS_string var_selfObjectCppName_12571 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 300)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 301)) ;
    var_selfObjectCppName_12571.drop () ; // Release error dropped variable
    var_selfTypeProxy_12543.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_12571 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_12543 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfTypeProxy_12543.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 307)).operator_and (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 307)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 307)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_12543.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 308)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_13414 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeProxy_12543, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13414, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_12543, var_expression_13414.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 321)), object->mAttribute_mInstructionLocation, var_expression_13414, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 321)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy_12543, var_selfObjectCppName_12571, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 328)), var_expression_13414, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_14341 ;
  GALGAS_string var_selfObjectCppName_14369 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 345)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 346)) ;
    var_selfObjectCppName_14369.drop () ; // Release error dropped variable
    var_selfTypeProxy_14341.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_14369 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_14341 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfTypeProxy_14341.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 352)).operator_and (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 352)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 352)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_14341.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 353)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_15212 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeProxy_14341, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15212, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 357)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_14341, var_expression_15212.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 366)), object->mAttribute_mInstructionLocation, var_expression_15212, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 366)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy_14341, var_selfObjectCppName_14369, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 373)), var_expression_15212, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)) ;
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
  cEnumerator_actualParameterListAST enumerator_3357 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
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
  cEnumerator_actualParameterListAST enumerator_3772 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
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
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_receiverType_4548, var_receiverVariableCppName_4590, var_receiverVariableBaseName_4633, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 125)) ;
  }
  cEnumerator_lstringlist enumerator_4675 (object->mAttribute_mReceiverStructAttributes, kEnumeration_up) ;
  while (enumerator_4675.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap_4699 = var_receiverType_4548.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 132)) ;
    var_attributeMap_4699.method_searchKey (enumerator_4675.current_mValue (HERE), var_receiverType_4548, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 133)) ;
    enumerator_4675.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_castType_4854 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeNameForCasting.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_castType_4854 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeNameForCasting, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 141)) ;
    {
    routine_checkAssignmentTypes (var_receiverType_4548, var_castType_4854, object->mAttribute_mTypeNameForCasting.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 142)) ;
    }
  }else if (kBoolFalse == test_0) {
    var_castType_4854 = var_receiverType_4548 ;
  }
  GALGAS_methodKind var_kind_5206 ;
  GALGAS_formalParameterSignature var_routineSignature_5232 ;
  GALGAS_bool var_hasCompilerArgument_5261 ;
  GALGAS_string var_setterErrorMessage_5296 ;
  GALGAS_methodQualifier joker_5267 ; // Joker input parameter
  var_castType_4854.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)).method_searchKey (object->mAttribute_mSetterName, var_kind_5206, var_routineSignature_5232, var_hasCompilerArgument_5261, joker_5267, var_setterErrorMessage_5296, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_5296.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mAttribute_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 156)), var_setterErrorMessage_5296, fixItArray2  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_5770 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mAttribute_mSetterName, GALGAS_string ("'").add_operation (object->mAttribute_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 164)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 164)), var_routineSignature_5232, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5770, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 159)) ;
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
            const enumGalgasBool test_5 = var_baseType_5836.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).getter_hasKey (object->mAttribute_mSetterName.mAttribute_string COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).boolEnum () ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (object->mAttribute_mReceiverName.mAttribute_location, var_receiverVariableCppName_4590, var_receiverVariableBaseName_4633, object->mAttribute_mReceiverStructAttributes, var_castType_4854, var_receiverType_4548, object->mAttribute_mSetterName, var_kind_5206, var_actualParameterListForGeneration_5770, var_hasCompilerArgument_5261, var_baseType_5836  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 188))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 188)) ;
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
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 214)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 215)), GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 215)) ;
    var_selfObjectCppName_7137.drop () ; // Release error dropped variable
    var_selfTypeProxy_7109.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_7137 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_7109 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  GALGAS_formalParameterSignature var_routineSignature_7492 ;
  GALGAS_bool var_hasCompilerArgument_7520 ;
  GALGAS_methodKind var_kind_7539 ;
  GALGAS_methodQualifier joker_7639 ; // Joker input parameter
  GALGAS_string joker_7642 ; // Joker input parameter
  var_selfTypeProxy_7109.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 224)).method_searchKey (object->mAttribute_mSetterName, var_kind_7539, var_routineSignature_7492, var_hasCompilerArgument_7520, joker_7639, joker_7642, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 224)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_8030 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mAttribute_mSetterName, GALGAS_string ("'").add_operation (object->mAttribute_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 231)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 231)), var_routineSignature_7492, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_8030, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 226)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::constructor_new (var_selfObjectCppName_7137, var_selfTypeProxy_7109, object->mAttribute_mSetterName, var_kind_7539, var_actualParameterListForGeneration_8030, var_hasCompilerArgument_7520  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 239))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 239)) ;
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
  GALGAS_string var_receiverCppName_9829 = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_9886 (object->mAttribute_mReceiverStructAttributes, kEnumeration_up) ;
  while (enumerator_9886.hasCurrentObject ()) {
    var_receiverCppName_9829.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_9886.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 289)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 289)) ;
    enumerator_9886.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mReceiverBaseName COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 291)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_10091 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 293)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_10139 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 294)) ;
  GALGAS_stringlist var_inputVariableList_10176 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 295)) ;
  cEnumerator_actualParameterListForGeneration enumerator_10214 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_10214.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_10469 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_10214.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_10139, var_inputVariableList_10176, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_10469, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 297)) ;
    var_parameterCppNameList_10091.addAssign_operation (var_parameterCppName_10469  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 306)) ;
    enumerator_10214.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mMethodBaseType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311)).add_operation (object->mAttribute_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 312)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-setter-call.galgas", 312)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mReceiverType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 313)).getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 313)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (object->mAttribute_mReceiverType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 313)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 313)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_9829.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 314)) ;
        }
        GALGAS_string var_pointerUniqueName_10945 = GALGAS_string ("ptr_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 316)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 316)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)).add_operation (var_pointerUniqueName_10945, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)).add_operation (var_receiverCppName_9829, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 319)).objectCompare (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 319)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (object->mAttribute_mCastType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 320))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 320)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName_10945, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 321)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 321)).add_operation (object->mAttribute_mCastType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 322)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 322)).add_operation (var_pointerUniqueName_10945, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 322)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 321)) ;
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 324)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 324)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)).add_operation (object->mAttribute_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_10945, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 328)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (object->mAttribute_mSetterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)).add_operation (object->mAttribute_mCastType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).add_operation (var_pointerUniqueName_10945, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (object->mAttribute_mSetterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)).add_operation (var_receiverCppName_9829, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_9829.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)).add_operation (object->mAttribute_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 337)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_12523 (var_parameterCppNameList_10091, kEnumeration_up) ;
  while (enumerator_12523.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12523.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)) ;
    if (enumerator_12523.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 341)) ;
    }
    enumerator_12523.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_10091.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 344)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 347)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 347)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_10091.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 350)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mSelfCppName COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_13563 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 368)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_13614 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 369)) ;
  GALGAS_stringlist var_inputVariableList_13654 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 370)) ;
  cEnumerator_actualParameterListForGeneration enumerator_13703 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_13703.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_13966 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_13703.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_13614, var_inputVariableList_13654, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_13966, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)) ;
    var_parameterCppNameList_13563.addAssign_operation (var_parameterCppName_13966  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 380)) ;
    enumerator_13703.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385)).add_operation (object->mAttribute_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 386)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-setter-call.galgas", 386)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (object->mAttribute_mSetterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (object->mAttribute_mSetterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 392)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-setter-call.galgas", 392)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mSelfCppName.add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 393)).add_operation (object->mAttribute_mSetterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 393)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 393)) ;
      }else if (kBoolFalse == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mSelfCppName.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)).add_operation (object->mAttribute_mSetterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_14831 (var_parameterCppNameList_13563, kEnumeration_up) ;
  while (enumerator_14831.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_14831.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 399)) ;
    if (enumerator_14831.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 400)) ;
    }
    enumerator_14831.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_13563.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 403)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 404)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 406)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 406)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 408)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_13563.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 409)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 410)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 412)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 412)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 115)) ;
  cEnumerator_switchBranchesAST enumerator_3956 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_3956.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_3956.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
    enumerator_3956.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_switchExpression_4682 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 136)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression_4682, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression_4682.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 142)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 142)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-switch.galgas", 142)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSwitchExpression, GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (var_switchExpression_4682.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 145)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 144)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 145)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 143)) ;
  }
  GALGAS_constantIndexMap var_enumConstantMap_5288 = var_switchExpression_4682.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 148)).getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 148)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_5380 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 149)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_5498 = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 152)) ;
  cEnumerator_switchBranchesAST enumerator_5553 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_5553.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_5639 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 154)) ;
    GALGAS_bool var_firstConstant_5668 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_5709 (enumerator_5553.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_5709.hasCurrentObject ()) {
      const enumGalgasBool test_2 = var_enumConstantMap_5288.getter_hasKey (enumerator_5709.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 157)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_constantsNamedInSwitchInstruction_5380.getter_hasKey (enumerator_5709.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 158)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 158)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_5709.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 159)), GALGAS_string ("the '").add_operation (enumerator_5709.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)), fixItArray4  COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)) ;
        }
        var_constantsNamedInSwitchInstruction_5380.addAssign_operation (enumerator_5709.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 162))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)) ;
        GALGAS_unifiedTypeMapProxyList var_associatedTypeList_6123 ;
        GALGAS_uint joker_6073 ; // Joker input parameter
        var_enumConstantMap_5288.method_searchKey (enumerator_5709.current_mValue (HERE), joker_6073, var_associatedTypeList_6123, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)) ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6123.getter_length (SOURCE_FILE ("instruction-switch.galgas", 164)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_5553.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 164)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 164)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5709.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 165)), GALGAS_string ("the associated values of '").add_operation (enumerator_5709.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 166)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 166)), fixItArray6  COMMA_SOURCE_FILE ("instruction-switch.galgas", 165)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_associatedTypeList_6123.getter_length (SOURCE_FILE ("instruction-switch.galgas", 167)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_5553.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 167)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 167)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_5709.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 168)), GALGAS_string ("the '").add_operation (enumerator_5709.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 169)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 169)), fixItArray8  COMMA_SOURCE_FILE ("instruction-switch.galgas", 168)) ;
          }else if (kBoolFalse == test_7) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_6123.getter_length (SOURCE_FILE ("instruction-switch.galgas", 170)).objectCompare (enumerator_5553.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 170)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              GALGAS_string temp_10 ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6123.getter_length (SOURCE_FILE ("instruction-switch.galgas", 173)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_11) {
                temp_10 = GALGAS_string ("s") ;
              }else if (kBoolFalse == test_11) {
                temp_10 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_5709.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 171)), GALGAS_string ("the '").add_operation (enumerator_5709.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 172)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 172)).add_operation (var_associatedTypeList_6123.getter_length (SOURCE_FILE ("instruction-switch.galgas", 172)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 172)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 172)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 172)), fixItArray12  COMMA_SOURCE_FILE ("instruction-switch.galgas", 171)) ;
            }else if (kBoolFalse == test_9) {
              GALGAS_uint var_associatedValueIndex_6857 = GALGAS_uint ((uint32_t) 0U) ;
              cEnumerator_unifiedTypeMapProxyList enumerator_6900 (var_associatedTypeList_6123, kEnumeration_up) ;
              cEnumerator_switchExtractedValuesListAST enumerator_6935 (enumerator_5553.current_mAssociatedValuesExtraction (HERE), kEnumeration_up) ;
              while (enumerator_6900.hasCurrentObject () && enumerator_6935.hasCurrentObject ()) {
                const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_6935.current_mExtractedValueTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_13) {
                  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_6900.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)).objectCompare (enumerator_6935.current_mExtractedValueTypeName (HERE).mAttribute_string)).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    TC_Array <C_FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (enumerator_6935.current_mExtractedValueTypeName (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 179)), GALGAS_string ("the required type is '@").add_operation (enumerator_6900.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)) ;
                  }
                }
                const enumGalgasBool test_16 = var_firstConstant_5668.operator_and (GALGAS_bool (kIsNotEqual, enumerator_6935.current_mExtractedValueName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)).boolEnum () ;
                if (kBoolTrue == test_16) {
                  GALGAS_string var_cppName_7306 = GALGAS_string ("extractedValue_").add_operation (enumerator_6935.current_mExtractedValueName (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 183)) ;
                  var_extractedAssociatedValuesForGeneration_5639.addAssign_operation (enumerator_6900.current_mType (HERE), var_cppName_7306, var_associatedValueIndex_6857  COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)) ;
                  const enumGalgasBool test_17 = enumerator_6935.current_mMarkedAsUnused (HERE).boolEnum () ;
                  if (kBoolTrue == test_17) {
                    {
                    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_6935.current_mExtractedValueName (HERE), enumerator_6900.current_mType (HERE), var_cppName_7306, var_cppName_7306, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 186)) ;
                    }
                  }else if (kBoolFalse == test_17) {
                    {
                    ioArgument_ioVariableMap.setter_insertLocalConstant (enumerator_6935.current_mExtractedValueName (HERE), enumerator_6900.current_mType (HERE), var_cppName_7306, var_cppName_7306, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 188)) ;
                    }
                  }
                }
                var_associatedValueIndex_6857.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 191)) ;
                enumerator_6900.gotoNextObject () ;
                enumerator_6935.gotoNextObject () ;
              }
            }
          }
        }
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_5709.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 195)), GALGAS_string ("'").add_operation (enumerator_5709.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)).add_operation (var_switchExpression_4682.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 196)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)), fixItArray18  COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)) ;
      }
      var_firstConstant_5668 = GALGAS_bool (false) ;
      enumerator_5709.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_8334 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 204)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 205)), enumerator_5553.current_mInstructions (HERE), enumerator_5553.current_mEndOfBranch (HERE), ioArgument_ioVariableMap, var_instructionList_8334, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)) ;
    }
    var_switchBranchesForGeneration_5498.addAssign_operation (enumerator_5553.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_5639, enumerator_5553.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)), var_instructionList_8334  COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)) ;
    enumerator_5553.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
  }
  GALGAS_stringset var_forgottenConstants_8616 = var_enumConstantMap_5288.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 215)).substract_operation (var_constantsNamedInSwitchInstruction_5380, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)) ;
  const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_8616.getter_count (SOURCE_FILE ("instruction-switch.galgas", 216)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_19) {
    GALGAS_string var_s_8734 = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_8772 (var_forgottenConstants_8616, kEnumeration_up) ;
    while (enumerator_8772.hasCurrentObject ()) {
      var_s_8734.plusAssign_operation(GALGAS_string ("\n"
        "  - ").add_operation (enumerator_8772.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 219)) ;
      enumerator_8772.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray20 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_switch_5F_instruction, GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_8734, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 222)), fixItArray20  COMMA_SOURCE_FILE ("instruction-switch.galgas", 221)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression_4682.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 226)), var_switchExpression_4682, var_switchBranchesForGeneration_5498  COMMA_SOURCE_FILE ("instruction-switch.galgas", 225))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 225)) ;
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
  GALGAS_string var_switchVar_10775 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_10775, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 267)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_10775, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 275)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 276)) ;
  cEnumerator_switchBranchesForGeneration enumerator_11019 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_11019.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_11056 (enumerator_11019.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_11056.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 279)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)).add_operation (enumerator_11056.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 279)).getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)) ;
      enumerator_11056.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_11019.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 283)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_type_11385 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (object->mAttribute_mEnumType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (enumerator_11019.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)) ;
      GALGAS_string var_varPtr_11542 = GALGAS_string ("extractPtr_").add_operation (enumerator_11019.current_mLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 286)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_11385, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (var_varPtr_11542, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (var_type_11385, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (var_switchVar_10775, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)) ;
      cEnumerator_extractedAssociatedValuesForGeneration enumerator_11746 (enumerator_11019.current_mExtractedAssociatedValuesForGeneration (HERE), kEnumeration_up) ;
      while (enumerator_11746.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (enumerator_11746.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)).add_operation (enumerator_11746.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)).add_operation (var_varPtr_11542, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).add_operation (enumerator_11746.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)) ;
        enumerator_11746.gotoNextObject () ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_11019.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 302)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)) ;
    }
    enumerator_11019.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 305)) ;
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
  cEnumerator_actualParameterListAST enumerator_1826 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_type_2529 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 58)) ;
  GALGAS_formalParameterSignature var_routineSignature_2698 ;
  GALGAS_bool var_hasCompilerArgument_2726 ;
  var_type_2529.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)).method_searchKey (object->mAttribute_mMethodName, var_routineSignature_2698, var_hasCompilerArgument_2726, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3205 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mAttribute_mMethodName, GALGAS_string ("'").add_operation (object->mAttribute_mMethodName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 69)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 69)), var_routineSignature_2698, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3205, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 64)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::constructor_new (object->mAttribute_mTypeName, object->mAttribute_mMethodName, var_actualParameterListForGeneration_3205, var_hasCompilerArgument_2726  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 77))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 77)) ;
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
  cEnumerator_actualParameterListForGeneration enumerator_4498 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_4498.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4761 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4498.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4409, var_inputVariableList_4449, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4761, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 109)) ;
    var_parameterCppNameList_4358.addAssign_operation (var_parameterCppName_4761  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 117)) ;
    enumerator_4498.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 120)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)).add_operation (object->mAttribute_mMethodName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 121)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 121)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)) ;
  cEnumerator_stringlist enumerator_5047 (var_parameterCppNameList_4358, kEnumeration_up) ;
  while (enumerator_5047.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_5047.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 123)) ;
    if (enumerator_5047.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 124)) ;
    }
    enumerator_5047.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
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
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList_4358.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 133)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 133)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 134)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mMethodName.getter_location (SOURCE_FILE ("instruction-type-method-call.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_2317 COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 43)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_3056 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 58)) ;
  GALGAS_string var_targetVariableCppName_3176 = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (object->mAttribute_mVariableName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsUndefinedConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (object->mAttribute_mVariableName, var_targetType_3056, var_targetVariableCppName_3176, var_targetVariableCppName_3176, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 61)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertUndefinedLocalVariable (object->mAttribute_mVariableName, var_targetType_3056, var_targetVariableCppName_3176, var_targetVariableCppName_3176, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
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
  extensionMethod_addHeaderFileName (object->mAttribute_mVariableType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 90)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mVariableType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (object->mAttribute_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 41)) ;
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
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 59)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2586, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 56)) ;
  GALGAS_string var_targetVariableCppName_2645 = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).add_operation (object->mAttribute_mVariableName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).getter_string (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_expression_2586.getter_mResultType (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 68)), var_targetVariableCppName_2645, var_targetVariableCppName_2645, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 66)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLocationExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 44)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mMessageExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 45)) ;
  extensionMethod_enterFixItListInSemanticContext (object->mAttribute_mFixitListAST, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 46)) ;
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
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mAttribute_mLocationExpression, object->mAttribute_mMessageExpression, object->mAttribute_mFixitListAST, object->mAttribute_mInstructionLocation, GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_2865, var_messageExpression_2892, var_fixitListForGeneration_2924, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 60)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_locationExpression_2865, var_messageExpression_2892, var_fixitListForGeneration_2924  COMMA_SOURCE_FILE ("instruction-warning.galgas", 75))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 75)) ;
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
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_4105, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 105)) ;
  GALGAS_string var_messageCppVarName_4459 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWarningExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_4459, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 107)) ;
  GALGAS_string var_fixItArrayCppName_4707 ;
  extensionMethod_generateFixIt (object->mAttribute_mFixitListForGeneration, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_4707, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 115)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (var_receiverCppVarName_4105, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (var_messageCppVarName_4459, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)).add_operation (var_fixItArrayCppName_4707, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 128)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 128)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 163)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 164)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mDoBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 165)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mElseBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 166)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 174)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_do_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 175)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_else_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 176)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_7368 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 193)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_7368, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 190)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_7391 = var_receiverExpression_7368.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 198)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bool var_found_7525 = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_7583 (var_receiverType_7391.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 202)), kEnumeration_up) ;
    bool bool_1 = var_found_7525.operator_not (SOURCE_FILE ("instruction-with.galgas", 202)).isValidAndTrue () ;
    if (enumerator_7583.hasCurrentObject () && bool_1) {
      while (enumerator_7583.hasCurrentObject () && bool_1) {
        var_found_7525 = GALGAS_bool (kIsEqual, enumerator_7583.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_7583.gotoNextObject () ;
        if (enumerator_7583.hasCurrentObject ()) {
          bool_1 = var_found_7525.operator_not (SOURCE_FILE ("instruction-with.galgas", 202)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_2 = var_found_7525.operator_not (SOURCE_FILE ("instruction-with.galgas", 205)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mSearchMethodNameForErrorSignaling.getter_location (SOURCE_FILE ("instruction-with.galgas", 206)), GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.getter_string (SOURCE_FILE ("instruction-with.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 206)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 206)).add_operation (var_receiverType_7391.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 206)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 206)), fixItArray3  COMMA_SOURCE_FILE ("instruction-with.galgas", 206)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression_8168 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 213)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_8168, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 210)) ;
  GALGAS_string var_objectArrayCppName_8224 = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 219)).getter_string (SOURCE_FILE ("instruction-with.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 219)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_receiverType_7391.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 221)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 221)) COMMA_SOURCE_FILE ("instruction-with.galgas", 221)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_receiverType_7391.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 222)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 222)), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 222)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 225)) ;
  }
  GALGAS_localConstantList var_localConstantList_8671 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 227)) ;
  cEnumerator_typedPropertyList enumerator_8748 (var_receiverType_7391.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 228)), kEnumeration_up) ;
  while (enumerator_8748.hasCurrentObject ()) {
    var_localConstantList_8671.addAssign_operation (enumerator_8748.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_8748.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 231)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 231)), GALGAS_bool (true), var_objectArrayCppName_8224.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 233)).add_operation (enumerator_8748.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 233))  COMMA_SOURCE_FILE ("instruction-with.galgas", 229)) ;
    enumerator_8748.gotoNextObject () ;
  }
  var_localConstantList_8671.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 237)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 238)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 238)), GALGAS_bool (true), var_objectArrayCppName_8224.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 240))  COMMA_SOURCE_FILE ("instruction-with.galgas", 236)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_9658 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_8671, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 246)), object->mAttribute_mDoBranchInstructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList_9658, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 241)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_10025 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 257)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 258)), object->mAttribute_mElseBranchInstructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList_10025, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 253)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 264)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverExpression_7368, var_objectArrayCppName_8224, var_keyExpression_8168, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList_9658, var_else_5F_instructionList_10025  COMMA_SOURCE_FILE ("instruction-with.galgas", 266))  COMMA_SOURCE_FILE ("instruction-with.galgas", 266)) ;
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
  GALGAS_semanticExpressionForGeneration var_keyExpression_11099 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 288)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_11099, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 285)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_keyExpression_11099.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 295)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 295)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression_11099.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 296)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 296)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 296)), fixItArray2  COMMA_SOURCE_FILE ("instruction-with.galgas", 296)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_keyExpression_11099.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 298)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 298)).objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression_11099.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 299)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 299)).add_operation (GALGAS_string ("', it should be '@lstring'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 299)), fixItArray4  COMMA_SOURCE_FILE ("instruction-with.galgas", 299)) ;
    }
  }
  GALGAS_string var_objectArrayCppName_11634 = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 302)).getter_string (SOURCE_FILE ("instruction-with.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 302)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_11839 ;
  GALGAS_string var_receiverVariableCppName_11880 ;
  {
  GALGAS_string joker_11886 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType_11839, var_receiverVariableCppName_11880, joker_11886, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 304)) ;
  }
  cEnumerator_lstringlist enumerator_11914 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_11914.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap_11938 = var_targetType_11839.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 311)) ;
    var_attributeMap_11938.method_searchKey (enumerator_11914.current_mValue (HERE), var_targetType_11839, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 312)) ;
    enumerator_11914.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_targetType_11839.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 322)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 322)) COMMA_SOURCE_FILE ("instruction-with.galgas", 322)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_targetType_11839.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 323)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 323)), fixItArray6  COMMA_SOURCE_FILE ("instruction-with.galgas", 323)) ;
  }
  const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_bool var_found_12564 = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_12620 (var_targetType_11839.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 328)), kEnumeration_up) ;
    bool bool_8 = var_found_12564.operator_not (SOURCE_FILE ("instruction-with.galgas", 328)).isValidAndTrue () ;
    if (enumerator_12620.hasCurrentObject () && bool_8) {
      while (enumerator_12620.hasCurrentObject () && bool_8) {
        var_found_12564 = GALGAS_bool (kIsEqual, enumerator_12620.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_12620.gotoNextObject () ;
        if (enumerator_12620.hasCurrentObject ()) {
          bool_8 = var_found_12564.operator_not (SOURCE_FILE ("instruction-with.galgas", 328)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_9 = var_found_12564.operator_not (SOURCE_FILE ("instruction-with.galgas", 331)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (object->mAttribute_mSearchMethodNameForErrorSignaling.getter_location (SOURCE_FILE ("instruction-with.galgas", 332)), GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.getter_string (SOURCE_FILE ("instruction-with.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 332)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 332)).add_operation (var_targetType_11839.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 332)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 332)), fixItArray10  COMMA_SOURCE_FILE ("instruction-with.galgas", 332)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 336)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList_13091 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 338)) ;
  cEnumerator_typedPropertyList enumerator_13148 (var_targetType_11839.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 339)), kEnumeration_up) ;
  while (enumerator_13148.hasCurrentObject ()) {
    var_localInitializedVariableList_13091.addAssign_operation (enumerator_13148.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_13148.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 342)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 342)), var_objectArrayCppName_11634.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 343)).add_operation (enumerator_13148.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 343))  COMMA_SOURCE_FILE ("instruction-with.galgas", 340)) ;
    enumerator_13148.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_11 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 349)) ;
  temp_11.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 346)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 347)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 347)), GALGAS_bool (true), var_objectArrayCppName_11634.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 349))  COMMA_SOURCE_FILE ("instruction-with.galgas", 349)) ;
  GALGAS_localConstantList var_localConstantList_13413 = temp_11 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_14011 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_13413, var_localInitializedVariableList_13091, object->mAttribute_m_5F_do_5F_Instructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList_14011, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 351)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_14093 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 368)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 369)), object->mAttribute_m_5F_else_5F_Instructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList_14093, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 364)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 375)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverVariableCppName_11880, var_targetType_11839, object->mAttribute_mFieldList, var_objectArrayCppName_11634, var_keyExpression_11099, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList_14011, var_else_5F_instructionList_14093  COMMA_SOURCE_FILE ("instruction-with.galgas", 377))  COMMA_SOURCE_FILE ("instruction-with.galgas", 377)) ;
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
  GALGAS_string var_receiverVarCppName_16802 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName_16802, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_16822 = object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 429)) ;
  GALGAS_string var_keyVarCppName_17033 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_17033, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 431)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const cMapElement_").add_operation (var_receiverType_16822.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 434)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 434)).add_operation (var_receiverType_16822.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 434)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 434)).add_operation (var_receiverVarCppName_16802, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 435)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 433)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName_17033, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 437)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 437)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 437)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("performSearch (").add_operation (var_keyVarCppName_17033, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 439)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 439)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 440)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 440)).add_operation (var_receiverType_16822.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 441)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 441)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 441)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 441)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 442)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 439)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 443)) COMMA_SOURCE_FILE ("instruction-with.galgas", 443)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != ").add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 445)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 445)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 445)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 446)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 446)).add_operation (var_receiverType_16822.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 446)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 446)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 445)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 447)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.getter_length (SOURCE_FILE ("instruction-with.galgas", 455)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 456)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 457)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 466)) ;
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
  GALGAS_string var_receiverCppName_19009 = object->mAttribute_mReceiverVariableCppName ;
  cEnumerator_lstringlist enumerator_19069 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_19069.hasCurrentObject ()) {
    var_receiverCppName_19009.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_19069.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 479)).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 479)) ;
    enumerator_19069.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName_19336 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_19336, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 482)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 484)) COMMA_SOURCE_FILE ("instruction-with.galgas", 484)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mReceiverVariableCppName COMMA_SOURCE_FILE ("instruction-with.galgas", 485)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cMapElement_").add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 486)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 486)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)).add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)).add_operation (var_receiverCppName_19009, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 488)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 486)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 490)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 490)).add_operation (var_keyVarCppName_19336, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 490)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 492)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 492)).add_operation (var_keyVarCppName_19336, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 492)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", kSearchErrorMessage_").add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 493)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 493)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 493)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)).add_operation (GALGAS_string ("if (NULL != "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 496)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 496)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 496)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 497)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 497)).add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 497)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 495)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 498)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.getter_length (SOURCE_FILE ("instruction-with.galgas", 506)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 507)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 508)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 517)) ;
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
  constinArgument_inNonTerminalSymbolMap.method_searchKey (object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex_2885, joker_2965, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 64)) ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex_2885  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65)) ;
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
  GALGAS_nonterminalLabelMap var_labelMap_4174 ;
  constinArgument_inNonterminalMap.method_searchKey (object->mAttribute_mNonterminalName, var_labelMap_4174, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 94)) ;
  GALGAS_formalParameterSignature var_signature_4271 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mLabelName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 96)).objectCompare (GALGAS_string ("parse"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_signature_4271 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 97)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_formalParameterListForGeneration joker_4409 ; // Joker input parameter
    GALGAS_location joker_4423 ; // Joker input parameter
    var_labelMap_4174.method_searchKey (object->mAttribute_mLabelName, joker_4409, var_signature_4271, joker_4423, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 99)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4820 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mAttribute_mNonterminalName, GALGAS_string ("'<").add_operation (object->mAttribute_mNonterminalName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 107)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 107)), var_signature_4271, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4820, inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 102)) ;
  }
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 115)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 123)), object->mAttribute_mLabelName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 124)), var_actualParameterListForGeneration_4820, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 121))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 121)) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 153)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-non-terminal.galgas", 154))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 149))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 149)) ;
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
                                                                                                          const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_nonterminalInstructionForGeneration cast_7088_si ((cPtr_nonterminalInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mNonterminalName.objectCompare (cast_7088_si.getter_mNonterminalName (SOURCE_FILE ("instruction-non-terminal.galgas", 167)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 168)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (cast_7088_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-non-terminal.galgas", 169)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 170)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 170)), fixItArray1  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 169)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_7386_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (cast_7386_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-non-terminal.galgas", 173)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 174)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 174)), fixItArray2  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 173)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 177)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_4 = result_outOk.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 180)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 181)) ;
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
  GALGAS_stringlist var_parameterCppNameList_8328 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 198)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_8379 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 199)) ;
  GALGAS_stringlist var_inputVariableList_8419 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 200)) ;
  cEnumerator_actualParameterListForGeneration enumerator_8468 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_8468.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_8731 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_8468.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_8379, var_inputVariableList_8419, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8731, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 202)) ;
    var_parameterCppNameList_8328.addAssign_operation (var_parameterCppName_8731  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 211)) ;
    enumerator_8468.gotoNextObject () ;
  }
  GALGAS_string var_sdtResultVarName_8838 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)) ;
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (var_sdtResultVarName_8838, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 216)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 216)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("nt_").add_operation (object->mAttribute_mNonterminalName.getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 218)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 218)).add_operation (object->mAttribute_mLabelName.getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 218)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 218)) ;
  cEnumerator_stringlist enumerator_9194 (var_parameterCppNameList_8328, kEnumeration_up) ;
  while (enumerator_9194.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_9194.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)) ;
    enumerator_9194.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(var_sdtResultVarName_8838.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 223)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 225)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 225)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 226)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 226)) ;
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_8838, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 227)) ;
  cEnumerator_stringlist enumerator_9728 (var_jokerParametersToReleaseList_8379, kEnumeration_up) ;
  while (enumerator_9728.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_9728.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 235)) ;
    enumerator_9728.gotoNextObject () ;
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
  GALGAS_uint var_addedNonTerminalIndex_2674 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 65)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList_2760 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 67)) ;
  {
  routine_transformInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_2760, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 68)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList_3073 = GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (var_repeatedInstructionList_2760  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 75)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_3175 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_3175.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_3208 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 78)) ;
    {
    routine_transformInstructionList (enumerator_3175.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_3208, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
    }
    var_repeatBranchList_3073.addAssign_operation (var_syntaxInstructionList_3208  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 86)) ;
    enumerator_3175.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_repeatBranchList_3073, var_addedNonTerminalIndex_2674  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 89))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 89)) ;
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
  GALGAS_uint var_choiceIndex_4531 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 115)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 117)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_4734 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mRepeatedInstructionList, object->mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_4734, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 120)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_5240 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 137)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_5275 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_5275.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_5678 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_5275.current_mSyntaxInstructionList (HERE), enumerator_5275.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_5678, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 139)) ;
    }
    var_listOfSemanticInstructionListForGeneration_5240.addAssign_operation (var_instructionList_5678, enumerator_5275.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 155)) ;
    enumerator_5275.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_repeat_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 158)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex_4531, var_repeated_5F_instructionList_4734, object->mAttribute_mEndOf_5F_repeat_5F_instruction, var_listOfSemanticInstructionListForGeneration_5240  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160)) ;
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
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_7166 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_m_5F_repeated_5F_instructionList, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 190)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7290 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 191)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7394 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_7394.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_7290.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_7394.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 194)), enumerator_7394.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 193)) ;
    enumerator_7394.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_repeated_5F_instructionList_7166, object->mAttribute_mEndOfRepeatedInstructions, var_listOfSemanticInstructionListForGeneration_7290  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 198))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 198)) ;
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
                                                                                                     const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_repeatInstructionForGeneration cast_8323_si ((cPtr_repeatInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = function_compareSyntaxSignature (object->mAttribute_m_5F_repeated_5F_instructionList, cast_8323_si.getter_m_5F_repeated_5F_instructionList (SOURCE_FILE ("instruction-repeat.galgas", 218)), cast_8323_si.getter_mEndOfRepeatedInstructions (SOURCE_FILE ("instruction-repeat.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 218)) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-repeat.galgas", 219)).objectCompare (cast_8323_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-repeat.galgas", 219)).getter_length (SOURCE_FILE ("instruction-repeat.galgas", 219)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas", 219)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (cast_8323_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-repeat.galgas", 220)), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-repeat.galgas", 222)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 221)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 222)).add_operation (cast_8323_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-repeat.galgas", 224)).getter_length (SOURCE_FILE ("instruction-repeat.galgas", 224)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 223)), fixItArray1  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 220)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9004 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9066 (cast_8323_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-repeat.galgas", 227)), kEnumeration_up) ;
      bool bool_2 = result_outOk.isValidAndTrue () ;
      if (enumerator_9004.hasCurrentObject () && enumerator_9066.hasCurrentObject () && bool_2) {
        while (enumerator_9004.hasCurrentObject () && enumerator_9066.hasCurrentObject () && bool_2) {
          result_outOk = function_compareSyntaxSignature (enumerator_9004.current_mInstructionList (HERE), enumerator_9066.current_mInstructionList (HERE), enumerator_9066.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 228)) ;
          enumerator_9004.gotoNextObject () ;
          enumerator_9066.gotoNextObject () ;
          if (enumerator_9004.hasCurrentObject () && enumerator_9066.hasCurrentObject ()) {
            bool_2 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_9250_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (cast_9250_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-repeat.galgas", 231)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray3  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 231)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 235)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_5 = result_outOk.operator_not (SOURCE_FILE ("instruction-repeat.galgas", 238)).boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 239)) ;
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
  GALGAS_string var_repeatFlagCppName_10143 = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 255)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 256)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_repeatFlagCppName_10143, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 257)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 257)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_repeatFlagCppName_10143, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 258)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 258)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_repeated_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 259)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 267)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (object->mAttribute_mChoiceIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_10823 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_10773 ((uint32_t) 0) ;
  while (enumerator_10823.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_10773.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_10823.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 271)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 279)) ;
    enumerator_10823.gotoNextObject () ;
    index_10773.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 269)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 281)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_10143, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 282)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 282)) ;
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
  GALGAS_uint var_addedNonTerminalIndex_2473 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 61)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList_2552 = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 63)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_2616 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_2616.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_2649 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 65)) ;
    {
    routine_transformInstructionList (enumerator_2616.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_2649, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 66)) ;
    }
    var_selectBranchList_2552.addAssign_operation (var_syntaxInstructionList_2649  COMMA_SOURCE_FILE ("instruction-select.galgas", 73)) ;
    enumerator_2616.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_selectBranchList_2552, var_addedNonTerminalIndex_2473  COMMA_SOURCE_FILE ("instruction-select.galgas", 76))  COMMA_SOURCE_FILE ("instruction-select.galgas", 76)) ;
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
  GALGAS_uint var_choiceIndex_3973 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 101)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 103)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_4150 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 105)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_4228 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_4228.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_4289 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_4228.current_mSyntaxInstructionList (HERE), enumerator_4228.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_4289, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 108)) ;
    }
    var_listOfSemanticInstructionListForGeneration_4150.addAssign_operation (var_instructionList_4289, enumerator_4228.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 124)) ;
    enumerator_4228.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_select_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 127)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex_3973, var_listOfSemanticInstructionListForGeneration_4150  COMMA_SOURCE_FILE ("instruction-select.galgas", 128))  COMMA_SOURCE_FILE ("instruction-select.galgas", 128)) ;
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_6018 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 153)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_6122 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_6122.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_6018.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_6122.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 156)), enumerator_6122.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 155)) ;
    enumerator_6122.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_listOfSemanticInstructionListForGeneration_6018  COMMA_SOURCE_FILE ("instruction-select.galgas", 159))  COMMA_SOURCE_FILE ("instruction-select.galgas", 159)) ;
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
                                                                                                     const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_selectInstructionForGeneration cast_6984_si ((cPtr_selectInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (true) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-select.galgas", 178)).objectCompare (cast_6984_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-select.galgas", 178)).getter_length (SOURCE_FILE ("instruction-select.galgas", 178)))) COMMA_SOURCE_FILE ("instruction-select.galgas", 178)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (cast_6984_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-select.galgas", 179)), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-select.galgas", 181)).getter_string (SOURCE_FILE ("instruction-select.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 180)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 181)).add_operation (cast_6984_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-select.galgas", 183)).getter_length (SOURCE_FILE ("instruction-select.galgas", 183)).getter_string (SOURCE_FILE ("instruction-select.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 182)), fixItArray1  COMMA_SOURCE_FILE ("instruction-select.galgas", 179)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7551 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7613 (cast_6984_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-select.galgas", 186)), kEnumeration_up) ;
      bool bool_2 = result_outOk.isValidAndTrue () ;
      if (enumerator_7551.hasCurrentObject () && enumerator_7613.hasCurrentObject () && bool_2) {
        while (enumerator_7551.hasCurrentObject () && enumerator_7613.hasCurrentObject () && bool_2) {
          result_outOk = function_compareSyntaxSignature (enumerator_7551.current_mInstructionList (HERE), enumerator_7613.current_mInstructionList (HERE), enumerator_7613.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 187)) ;
          enumerator_7551.gotoNextObject () ;
          enumerator_7613.gotoNextObject () ;
          if (enumerator_7551.hasCurrentObject () && enumerator_7613.hasCurrentObject ()) {
            bool_2 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_7797_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (cast_7797_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-select.galgas", 190)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray3  COMMA_SOURCE_FILE ("instruction-select.galgas", 190)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas", 194)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_5 = result_outOk.operator_not (SOURCE_FILE ("instruction-select.galgas", 197)).boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-select.galgas", 198)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (object->mAttribute_mChoiceIndex.getter_string (SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 215)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9006 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_8956 ((uint32_t) 0) ;
  while (enumerator_9006.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_8956.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 217)).getter_string (SOURCE_FILE ("instruction-select.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 217)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 217)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_9006.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 218)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 226)) ;
    enumerator_9006.gotoNextObject () ;
    index_8956.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 216)) ;
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
  GALGAS_uint var_terminalSymbolIndex_3635 ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_3642 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 76))) ;
  if (NULL != objectArray_3642) {
      macroValidSharedObject (objectArray_3642, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex_3635 = objectArray_3642->mAttribute_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex_3635 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 79)) ;
    {
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (object->mAttribute_mTerminalName, var_terminalSymbolIndex_3635, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 80)) ;
    }
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, var_terminalSymbolIndex_3635  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 82))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 82)) ;
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
  GALGAS_lexicalSentValueList var_sentAttributeList_4981 ;
  constinArgument_inTerminalMap.method_searchKey (object->mAttribute_mTerminalName, var_sentAttributeList_4981, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 106)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualInputParameterList.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 108)).objectCompare (var_sentAttributeList_4981.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 108)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_sentAttributeList_4981.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 111)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mAttribute_mActualInputParameterList.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 114)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mTerminalName.getter_location (SOURCE_FILE ("instruction-terminal.galgas", 109)), GALGAS_string ("naming the '$").add_operation (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 110)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 110)).add_operation (var_sentAttributeList_4981.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 110)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 110)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 110)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 111)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 111)).add_operation (object->mAttribute_mActualInputParameterList.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 113)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 112)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 113)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 113)), fixItArray5  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 109)) ;
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList_5495 = GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 117)) ;
  cEnumerator_actualInputParameterListAST enumerator_5567 (object->mAttribute_mActualInputParameterList, kEnumeration_up) ;
  cEnumerator_lexicalSentValueList enumerator_5592 (var_sentAttributeList_4981, kEnumeration_up) ;
  while (enumerator_5567.hasCurrentObject () && enumerator_5592.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((const cPtr_abstractInputParameter *) enumerator_5567.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, enumerator_5592.current_mLexicalType (HERE), enumerator_5592.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList_5495, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 119)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_5592.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_5567.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_5592.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_8) {
        temp_7 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (enumerator_5567.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-terminal.galgas", 127)), GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_5592.current_mLexicalFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)) ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticWarning (enumerator_5592.current_mLexicalFormalSelector (HERE).getter_location (SOURCE_FILE ("instruction-terminal.galgas", 128)), GALGAS_string ("the formal selector is declared here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 128)) ;
    }
    enumerator_5567.gotoNextObject () ;
    enumerator_5592.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_6129 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_6129.hasCurrentObject ()) {
    const enumGalgasBool test_11 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_6129.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 133)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 133)).operator_not (SOURCE_FILE ("instruction-terminal.galgas", 133)).boolEnum () ;
    if (kBoolTrue == test_11) {
      TC_Array <C_FixItDescription> fixItArray12 ;
      appendFixItActions (fixItArray12, kFixItReplace, constinArgument_inIndexNameSet) ;
      inCompiler->emitSemanticError (enumerator_6129.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("instruction-terminal.galgas", 134)), GALGAS_string ("the '").add_operation (enumerator_6129.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 134)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 134)), fixItArray12  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 134)) ;
    }
    enumerator_6129.gotoNextObject () ;
  }
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 138)) ;
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 143)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, constinArgument_inLexiqueName, var_terminalCheckAssignementList_5495, object->mAttribute_mIndexingKeyList, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 149))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 149)) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, object->mAttribute_mLexiqueIdentifier, GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 185)), object->mAttribute_mIndexingKeyList, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 187)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 188))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 181))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 181)) ;
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
                                                                                                            const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_terminalCheckInstructionForGeneration cast_9066_si ((cPtr_terminalCheckInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 202)).objectCompare (cast_9066_si.getter_mTerminalName (SOURCE_FILE ("instruction-terminal.galgas", 202)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 202)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 203)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (cast_9066_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-terminal.galgas", 204)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 205)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 205)), fixItArray1  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 204)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_9365_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (cast_9365_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-terminal.galgas", 208)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 209)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 209)), fixItArray2  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 208)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 212)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_4 = result_outOk.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 215)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 216)) ;
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
  cEnumerator_terminalCheckAssignementList enumerator_10343 (object->mAttribute_mTerminalCheckAssignementList, kEnumeration_up) ;
  while (enumerator_10343.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_10343.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_10343.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 234)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 234)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_10343.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 237)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 237)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 237)).add_operation (enumerator_10343.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 237)).add_operation (GALGAS_string (" () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 237)) ;
    enumerator_10343.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_10727 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_10727.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)).add_operation (GALGAS_string ("->enterIndexing (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 244)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 244)).add_operation (enumerator_10727.current_mValue_30_ (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 244)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 244)).add_operation (enumerator_10727.current_mValue_31_ (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("instruction-terminal.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 245)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)) ;
    enumerator_10727.gotoNextObject () ;
  }
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->preceedingSeparatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 248)) ;
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 254)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 261)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 261)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 262)).add_operation (GALGAS_string ("->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 262)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 262)).add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 263)).add_operation (object->mAttribute_mTerminalName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 263)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 263)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 262)) ;
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
  routine_transformInstructionList (object->mAttribute_mDoInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 66)) ;
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
  GALGAS_semanticExpressionForGeneration var_variant_5F_expression_3765 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 97)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variant_5F_expression_3765, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 94)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression_3765.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 102)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfVariantExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression_3765.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 104)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 104)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 104)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 105)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 105)), fixItArray1  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 103)) ;
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression_4361 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 112)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_while_5F_expression_4361, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 109)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_while_5F_expression_4361.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 117)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfWhileExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression_3765.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 119)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 119)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 119)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 120)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 120)), fixItArray3  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 118)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 124)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList_5035 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mDoInstructionList, object->mAttribute_mEndOfInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_5035, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 127)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 144)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_variant_5F_expression_3765, var_while_5F_expression_4361, var_instructionList_5035  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 146))  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 146)) ;
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
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 171)) ;
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
  GALGAS_string var_variantVarCppName_7351 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName_7351, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 188)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantVarCppName_7351, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 190)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 190)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 191)) ;
  }
  GALGAS_string var_variantVar_7656 = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_7656, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)).add_operation (var_variantVarCppName_7351, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)) ;
  GALGAS_string var_loopVar_7861 = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 195)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 195)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_7861, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 196)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 196)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_7861, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 197)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 197)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 198)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7861.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 199)) ;
  GALGAS_string var_whileVarCppName_8153 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName_8153, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 201)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_whileVarCppName_8153, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 202)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 202)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 203)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7861.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 204)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_variantVar_7656.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 205)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 206)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 206)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 207)) ;
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
  routine_generateInstructionList (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 226)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 224)) ;
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
  GALGAS_syntaxInstructionList var_syntaxInstructionList_2497 ;
  GALGAS_location joker_2499 ; // Joker input parameter
  object->mAttribute_mParseRewindBranchList.method_first (var_syntaxInstructionList_2497, joker_2499, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 61)) ;
  {
  routine_transformInstructionList (var_syntaxInstructionList_2497, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 63)) ;
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_3613 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 91)) ;
  GALGAS_uint var_referenceSelectMethodCount_3700 = ioArgument_ioSelectMethodCount ;
  cEnumerator_listOfSyntaxInstructionList enumerator_3757 (object->mAttribute_mParseRewindBranchList, kEnumeration_up) ;
  while (enumerator_3757.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount_3700 ;
    GALGAS_semanticInstructionListForGeneration var_instructionList_3837 = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 95)) ;
    cEnumerator_syntaxInstructionList enumerator_3916 (enumerator_3757.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_3916.hasCurrentObject ()) {
      callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_3916.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList_3837, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 97)) ;
      enumerator_3916.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration_3613.addAssign_operation (var_instructionList_3837, enumerator_3757.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 112)) ;
    enumerator_3757.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches_4508 = var_listOfSemanticInstructionListForGeneration_3613 ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_4609 ;
  {
  GALGAS_location joker_4661 ; // Joker input parameter
  var_tempListOfBranches_4508.setter_popFirst (var_instructionList_4609, joker_4661, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 117)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature_4726 = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList_4609, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 118)) ;
  GALGAS_bool var_ok_4800 = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4838 (var_tempListOfBranches_4508, kEnumeration_up) ;
  bool bool_0 = var_ok_4800.isValidAndTrue () ;
  if (enumerator_4838.hasCurrentObject () && bool_0) {
    while (enumerator_4838.hasCurrentObject () && bool_0) {
      var_ok_4800 = function_compareSyntaxSignature (var_referenceSignature_4726, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_4838.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 123)), enumerator_4838.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 121)) ;
      enumerator_4838.gotoNextObject () ;
      if (enumerator_4838.hasCurrentObject ()) {
        bool_0 = var_ok_4800.isValidAndTrue () ;
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_listOfSemanticInstructionListForGeneration_3613  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 128))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 128)) ;
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
  GALGAS_semanticInstructionListForGeneration var_instructionList_6153 ;
  GALGAS_location joker_6155 ; // Joker input parameter
  object->mAttribute_mListOfSemanticInstructionListForGeneration.method_first (var_instructionList_6153, joker_6155, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 150)) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList_6153, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 151)) ;
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
  GALGAS_string var_parsingContextVar_6880 = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-rewind.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 166)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 166)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar_6880, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7144 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_7144.hasCurrentObject ()) {
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_7144.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 170)) ;
    }
    if (enumerator_7144.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)).add_operation (var_parsingContextVar_6880, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)) ;
    }
    enumerator_7144.gotoNextObject () ;
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
  routine_transformInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 100)) ;
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
  GALGAS_semanticExpressionForGeneration var_when_5F_expression_5110 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhenExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-parse-when.galgas", 131)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_when_5F_expression_5110, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 128)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 137)) ;
  }
  GALGAS_uint var_localSelectMethodCount_5432 = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration_5528 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mWhenInstructionList, object->mAttribute_mEndOfWhenInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount_5432, var_when_5F_instructionListForGeneration_5528, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 141)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration_6016 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mElseInstructionList, object->mAttribute_mEndOfElseInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration_6016, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 159)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 176)) ;
  }
  GALGAS_bool var_ok_6527 = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration_5528, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 179)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration_6016, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 180)), object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 178)) ;
  const enumGalgasBool test_0 = var_ok_6527.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_when_5F_expression_5110, var_when_5F_instructionListForGeneration_5528, var_else_5F_instructionListForGeneration_6016  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 185))  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 185)) ;
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
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 210)) ;
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
  GALGAS_string var_sourceVar_8613 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_8613, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 225)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_8613, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 226)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 226)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 227)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 235)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 236)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 244)) ;
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
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 60)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_3097 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-syntax-send.galgas", 66)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3097, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 63)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expression_3097.getter_mResultType (SOURCE_FILE ("instruction-syntax-send.galgas", 72)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' expresion should be an @string expression"), fixItArray3  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 73)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_expression_3097  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 76))  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 76)) ;
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
  GALGAS_string var_sourceVar_4508 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_4508, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 101)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 103)) COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 103)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_4508, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 104)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 104)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 104)).add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)).add_operation (var_sourceVar_4508, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 104)) ;
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
  GALGAS_string var_nodeName_10123 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[terminal] {").add_operation (function_escapeForTex (object->mAttribute_mTerminalSymbolName.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 243)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 243)), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_10123, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 242)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)).add_operation (var_nodeName_10123, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)) ;
  ioArgument_ioCurrentNode = var_nodeName_10123 ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 251)) ;
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
  GALGAS_string var_nodeDefinition_10764 = GALGAS_string ("[nonterminal] {\\nonTerminalSymbol{").add_operation (function_escapeForTex (object->mAttribute_mNonterminalSymbolName.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 266)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 266)).add_operation (object->mAttribute_mNonterminalSymbolIndex.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 267)).add_operation (GALGAS_string ("}}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 267)) ;
  GALGAS_string var_nodeName_11009 ;
  {
  extensionSetter_append (ioArgument_ioRowList, var_nodeDefinition_10764, constinArgument_inRow, ioArgument_ioColumn, var_nodeName_11009, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 268)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)).add_operation (var_nodeName_11009, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)) ;
  ioArgument_ioCurrentNode = var_nodeName_11009 ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 277)) ;
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
    GALGAS_string var_markerStartNodeName_11822 ;
    {
    extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {SS").add_operation (object->mAttribute_mSelectBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 295)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 295)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 295)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_11822, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 294)) ;
    }
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)).add_operation (var_markerStartNodeName_11822, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)) ;
    ioArgument_ioCurrentNode = var_markerStartNodeName_11822 ;
    ioArgument_ioArrowShape = GALGAS_string ("--") ;
    ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 303)) ;
  }
  GALGAS_string var_startNodeName_12154 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_12154, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 306)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 307)) ;
  GALGAS_branchListForGrammarAnalysis var_branches_12207 = object->mAttribute_mSelectBranchList ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_brancheZero_12308 ;
  {
  var_branches_12207.setter_popFirst (var_brancheZero_12308, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 310)) ;
  }
  GALGAS_uint var_branchZeroColumn_12332 = ioArgument_ioColumn ;
  GALGAS_uint var_maxUsedRowIndex_12365 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_12308, ioArgument_ioRowList, constinArgument_inRow, var_branchZeroColumn_12332, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_12365, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 313)) ;
  GALGAS_uint var_endColumn_12620 = var_branchZeroColumn_12332 ;
  GALGAS_stringlist var_endingNodes_12695 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 325)) ;
  cEnumerator_branchListForGrammarAnalysis enumerator_12725 (var_branches_12207, kEnumeration_up) ;
  while (enumerator_12725.hasCurrentObject ()) {
    var_maxUsedRowIndex_12365.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 327)) ;
    GALGAS_uint var_branchColumn_12772 = ioArgument_ioColumn ;
    GALGAS_string var_currentNode_12803 = var_startNodeName_12154 ;
    GALGAS_string var_arrowStyle_12838 = GALGAS_string ("|-") ;
    extensionMethod_tikzNodeForSyntaxInstruction (enumerator_12725.current (HERE).mAttribute_mSyntaxInstructionList, ioArgument_ioRowList, var_maxUsedRowIndex_12365, var_branchColumn_12772, var_currentNode_12803, var_arrowStyle_12838, ioArgument_ioArrows, var_maxUsedRowIndex_12365, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 331)) ;
    var_endingNodes_12695.addAssign_operation (var_currentNode_12803  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 341)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_endColumn_12620.objectCompare (var_branchColumn_12772)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_endColumn_12620 = var_branchColumn_12772 ;
    }
    enumerator_12725.gotoNextObject () ;
  }
  ioArgument_ioColumn = var_endColumn_12620 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_12365)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_12365 ;
  }
  GALGAS_string var_endNodeName_13471 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_endNodeName_13471, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 352)) ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)).add_operation (var_endNodeName_13471, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)) ;
  ioArgument_ioCurrentNode = var_endNodeName_13471 ;
  cEnumerator_stringlist enumerator_13684 (var_endingNodes_12695, kEnumeration_up) ;
  while (enumerator_13684.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (enumerator_13684.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 358)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 358)).add_operation (var_endNodeName_13471, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 358)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 358)) ;
    enumerator_13684.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = constinArgument_inDebug.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_string var_markerEndNodeName_13978 ;
    {
    extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {SE").add_operation (object->mAttribute_mSelectBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 363)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 363)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 363)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_13978, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 362)) ;
    }
    ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 368)) ;
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)).add_operation (var_markerEndNodeName_13978, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)) ;
    ioArgument_ioCurrentNode = var_markerEndNodeName_13978 ;
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
    GALGAS_string var_markerStartNodeName_14801 ;
    {
    extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {RS").add_operation (object->mAttribute_mRepeatBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 389)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 389)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 389)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_14801, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 388)) ;
    }
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)).add_operation (var_markerStartNodeName_14801, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)) ;
    ioArgument_ioCurrentNode = var_markerStartNodeName_14801 ;
    ioArgument_ioArrowShape = GALGAS_string ("--") ;
    ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 397)) ;
  }
  GALGAS_string var_returnNodeName_15135 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_returnNodeName_15135, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 400)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 401)) ;
  GALGAS_branchListForGrammarAnalysis var_branches_15188 = object->mAttribute_mRepeatBranchList ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_brancheZero_15289 ;
  {
  var_branches_15188.setter_popFirst (var_brancheZero_15289, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 404)) ;
  }
  GALGAS_uint var_maxUsedRowIndex_15312 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_15289, ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_15312, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 406)) ;
  GALGAS_uint var_endColumn_15559 = ioArgument_ioColumn ;
  GALGAS_string var_startNodeName_15700 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_15700, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 419)) ;
  GALGAS_bool var_oneEmptyBranch_15801 = GALGAS_bool (kIsEqual, var_branches_15188.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 421)).objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
  const enumGalgasBool test_1 = var_oneEmptyBranch_15801.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_firstBranch_15888 ;
    var_branches_15188.method_first (var_firstBranch_15888, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 423)) ;
    var_oneEmptyBranch_15801 = GALGAS_bool (kIsEqual, var_firstBranch_15888.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 424)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_stringlist var_endingNodes_15988 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 427)) ;
  const enumGalgasBool test_2 = var_oneEmptyBranch_15801.boolEnum () ;
  if (kBoolTrue == test_2) {
    var_endingNodes_15988.addAssign_operation (var_startNodeName_15700  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_nextBranchUsedRowIndex_16090 = constinArgument_inRow ;
    cEnumerator_branchListForGrammarAnalysis enumerator_16125 (var_branches_15188, kEnumeration_up) ;
    while (enumerator_16125.hasCurrentObject ()) {
      var_nextBranchUsedRowIndex_16090.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 433)) ;
      GALGAS_uint var_branchColumn_16183 = ioArgument_ioColumn ;
      GALGAS_string var_currentNode_16216 = var_startNodeName_15700 ;
      GALGAS_string var_arrowStyle_16253 = GALGAS_string ("|-") ;
      extensionMethod_tikzNodeForSyntaxInstruction (enumerator_16125.current (HERE).mAttribute_mSyntaxInstructionList, ioArgument_ioRowList, var_nextBranchUsedRowIndex_16090, var_branchColumn_16183, var_currentNode_16216, var_arrowStyle_16253, ioArgument_ioArrows, var_nextBranchUsedRowIndex_16090, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 437)) ;
      var_endingNodes_15988.addAssign_operation (var_currentNode_16216  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 447)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_endColumn_15559.objectCompare (var_branchColumn_16183)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_endColumn_15559 = var_branchColumn_16183 ;
      }
      enumerator_16125.gotoNextObject () ;
    }
    ioArgument_ioColumn = var_endColumn_15559 ;
    ioArgument_ioMaxUsedRowIndex = var_nextBranchUsedRowIndex_16090 ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_15312)).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_15312 ;
  }
  ioArgument_ioMaxUsedRowIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 459)) ;
  GALGAS_string var_returnUpperNodeName_17091 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), ioArgument_ioMaxUsedRowIndex, ioArgument_ioColumn, var_returnUpperNodeName_17091, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 461)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 462)) ;
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_returnUpperNodeName_17091, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 463)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 463)).add_operation (var_returnNodeName_15135, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 463)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 463)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 463)) ;
  cEnumerator_stringlist enumerator_17248 (var_endingNodes_15988, kEnumeration_up) ;
  while (enumerator_17248.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (enumerator_17248.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)).add_operation (var_returnUpperNodeName_17091, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)) ;
    enumerator_17248.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = constinArgument_inDebug.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_markerEndNodeName_17550 ;
    {
    extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {RE").add_operation (object->mAttribute_mRepeatBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 471)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_17550, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 470)) ;
    }
    ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 476)) ;
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)).add_operation (var_markerEndNodeName_17550, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)) ;
    ioArgument_ioCurrentNode = var_markerEndNodeName_17550 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (void) {
  enterExtensionMethod_tikzNodeForSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis.mSlotID,
                                                     extensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (defineExtensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction, NULL) ;

