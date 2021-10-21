#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionAST * object = (const cPtr_structuredCastInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionAST) ;
  const GALGAS_structuredCastInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mCastExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 125)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.getter_mElseInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 126)) ;
  const GALGAS_structuredCastInstructionAST temp_2 = object ;
  cEnumerator_castInstructionBranchListAST enumerator_4519 (temp_2.getter_mCastInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_4519.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4519.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 128)) ;
    enumerator_4519.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_structuredCastInstructionAST.mSlotID,
                                                          extensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionAST * object = (const cPtr_structuredCastInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_castExpression_5243 ;
  const GALGAS_structuredCastInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mCastExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-cast.galgas", 147)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_castExpression_5243, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 144)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 153)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList_5590 = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 155)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = object ;
  cEnumerator_castInstructionBranchListAST enumerator_5678 (temp_1.getter_mCastInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_5678.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_type_5716 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_5678.current_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 158)) ;
    GALGAS_unifiedTypeMap_2D_entry var_t_5894 = var_type_5716 ;
    GALGAS_bool var_found_5917 = GALGAS_bool (kIsEqual, var_t_5894.objectCompare (var_castExpression_5243.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 161)))) ;
    if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 162)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 162)).isValid ()) {
      uint32_t variant_5962 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 162)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 162)).uintValue () ;
      bool loop_5962 = true ;
      while (loop_5962) {
        loop_5962 = var_found_5917.operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_and (var_t_5894.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).isValid () ;
        if (loop_5962) {
          loop_5962 = var_found_5917.operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_and (var_t_5894.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).boolValue () ;
        }
        if (loop_5962 && (0 == variant_5962)) {
          loop_5962 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 162)) ;
        }
        if (loop_5962) {
          variant_5962 -- ;
          var_t_5894 = var_t_5894.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 164)) ;
          var_found_5917 = GALGAS_bool (kIsEqual, var_t_5894.objectCompare (var_castExpression_5243.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 165)))) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_found_5917.operator_not (SOURCE_FILE ("instruction-cast.galgas", 167)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5678.current_mTypeName (HERE).getter_location (SOURCE_FILE ("instruction-cast.galgas", 168)), GALGAS_string ("the '@").add_operation (enumerator_5678.current_mTypeName (HERE).getter_string (SOURCE_FILE ("instruction-cast.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (var_castExpression_5243.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 169)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)), fixItArray3  COMMA_SOURCE_FILE ("instruction-cast.galgas", 168)) ;
      }
    }
    GALGAS_string var_localConstantName_6407 ;
    GALGAS_localConstantList var_localConstantList_6433 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 173)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_5678.current_mConstantVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_localConstantName_6407 = GALGAS_string ("cast_").add_operation (enumerator_5678.current_mConstantVarName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (enumerator_5678.current_mConstantVarName (HERE).getter_string (SOURCE_FILE ("instruction-cast.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)) ;
        var_localConstantList_6433.addAssign_operation (var_type_5716, enumerator_5678.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName_6407  COMMA_SOURCE_FILE ("instruction-cast.galgas", 176)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_localConstantName_6407 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_6877 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_6433, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 191)), enumerator_5678.current_mInstructionList (HERE), enumerator_5678.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_6877, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 186)) ;
    }
    var_castBranchList_5590.addAssign_operation (enumerator_5678.current_mTypeComparisonKind (HERE), var_type_5716, var_localConstantName_6407, var_instructionList_6877  COMMA_SOURCE_FILE ("instruction-cast.galgas", 197)) ;
    enumerator_5678.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_7321 ;
  {
  const GALGAS_structuredCastInstructionAST temp_5 = object ;
  const GALGAS_structuredCastInstructionAST temp_6 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 205)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 206)), temp_5.getter_mElseInstructionList (HERE), temp_6.getter_mEndOfCastInstruction (HERE), ioArgument_ioVariableMap, var_else_5F_instructionList_7321, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 201)) ;
  }
  {
  const GALGAS_structuredCastInstructionAST temp_7 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_7.getter_mEndOfCastInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 213)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::constructor_new (var_castExpression_5243, var_castBranchList_5590, var_else_5F_instructionList_7321  COMMA_SOURCE_FILE ("instruction-cast.galgas", 215))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 215)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_structuredCastInstructionAST.mSlotID,
                                                   extensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structuredCastInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_castCppVarName_9442 ;
  const GALGAS_structuredCastInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_9442, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 251)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_9442, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 260)) ;
  }
  const GALGAS_structuredCastInstructionForGeneration temp_1 = object ;
  cEnumerator_castInstructionBranchListForGeneration enumerator_9590 (temp_1.getter_mCastBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_9590.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_9590.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 262)) ;
    switch (enumerator_9590.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_9442, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (enumerator_9590.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 266)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (enumerator_9590.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)).add_operation (var_castCppVarName_9442, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((").add_operation (var_castCppVarName_9442, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)).add_operation (enumerator_9590.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 274)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)).add_operation (enumerator_9590.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)).add_operation (var_castCppVarName_9442, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, enumerator_9590.current_mCastedVarCppName (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 279)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (enumerator_9590.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)).add_operation (enumerator_9590.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (enumerator_9590.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (var_castCppVarName_9442, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 280)) ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_9590.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 285)) ;
    }
    if (enumerator_9590.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)) ;
    }
    enumerator_9590.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_structuredCastInstructionForGeneration temp_4 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.getter_mElseInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 296)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 297)) ;
      {
      const GALGAS_structuredCastInstructionForGeneration temp_5 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.getter_mElseInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 308)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 309)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 310)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structuredCastInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration.mSlotID,
                                            extensionMethod_structuredCastInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structuredCastInstructionForGeneration_generateInstruction (defineExtensionMethod_structuredCastInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualExpressionInstructionAST * object = (const cPtr_plusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualExpressionInstructionAST) ;
  const GALGAS_plusEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 155)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@minusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_minusEqualExpressionInstructionAST * object = (const cPtr_minusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_minusEqualExpressionInstructionAST) ;
  const GALGAS_minusEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 161)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mulEqualExpressionInstructionAST * object = (const cPtr_mulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_mulEqualExpressionInstructionAST) ;
  const GALGAS_mulEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 167)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divEqualExpressionInstructionAST * object = (const cPtr_divEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divEqualExpressionInstructionAST) ;
  const GALGAS_divEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 173)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualElementsInstructionAST * object = (const cPtr_plusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualElementsInstructionAST) ;
  const GALGAS_plusEqualElementsInstructionAST temp_0 = object ;
  extensionMethod_enterInSemanticContext (temp_0.getter_mExpressions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 179)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST.mSlotID,
                                                          extensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualExpressionInstructionAST * object = (const cPtr_plusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_7388 ;
  GALGAS_string var_targetVariableCppName_7424 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_7474 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 198)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_plusEqualExpressionInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 199)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-concat.galgas", 199)) ;
          var_targetType_7388.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_7474.drop () ; // Release error dropped variable
          var_targetVariableCppName_7424.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 201)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_plusEqualExpressionInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 202)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 202)) ;
            var_targetType_7388.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_7474.drop () ; // Release error dropped variable
            var_targetVariableCppName_7424.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_7944 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 205)) ;
          const GALGAS_plusEqualExpressionInstructionAST temp_8 = object ;
          GALGAS_bool joker_8045 ; // Joker input parameter
          var_propertyMap_7944.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_8045, var_targetType_7388, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 206)) ;
          var_nameForCheckingFormalParameterUsing_7474 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_plusEqualExpressionInstructionAST temp_9 = object ;
          var_targetVariableCppName_7424 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 208)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 208)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 208)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualExpressionInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_7388, var_targetVariableCppName_7424, var_nameForCheckingFormalParameterUsing_7474, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 211)) ;
    }
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_8755 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_8755.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_8778 = var_targetType_7388.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 226)) ;
    GALGAS_bool var_isPublic_8855 ;
    var_propertyMap_8778.method_searchKey (enumerator_8755.current_mValue (HERE), var_isPublic_8855, var_targetType_7388, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 227)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_8855.operator_not (SOURCE_FILE ("instruction-concat.galgas", 228)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_8755.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 229)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 229)) ;
      }
    }
    enumerator_8755.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_7388.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 233)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 233)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 233)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_plusEqualExpressionInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_7388.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 234)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_9533 ;
  const GALGAS_plusEqualExpressionInstructionAST temp_17 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_17.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_7388, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9533, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 238)) ;
  {
  const GALGAS_plusEqualExpressionInstructionAST temp_18 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_7388, var_expression_9533.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 247)), temp_18.getter_mInstructionLocation (HERE), var_expression_9533, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 247)) ;
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_19 = object ;
  const GALGAS_plusEqualExpressionInstructionAST temp_20 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_19.getter_mInstructionLocation (HERE), var_targetType_7388, var_targetVariableCppName_7424, var_nameForCheckingFormalParameterUsing_7474, temp_20.getter_mStructAttributeList (HERE), var_expression_9533, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 249))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 249)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@minusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_minusEqualExpressionInstructionAST * object = (const cPtr_minusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_minusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_10539 ;
  GALGAS_string var_targetVariableCppName_10575 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_10625 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_minusEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 274)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_minusEqualExpressionInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 275)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-concat.galgas", 275)) ;
          var_targetType_10539.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_10625.drop () ; // Release error dropped variable
          var_targetVariableCppName_10575.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 277)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_minusEqualExpressionInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 278)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 278)) ;
            var_targetType_10539.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_10625.drop () ; // Release error dropped variable
            var_targetVariableCppName_10575.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_11095 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 281)) ;
          const GALGAS_minusEqualExpressionInstructionAST temp_8 = object ;
          GALGAS_bool joker_11196 ; // Joker input parameter
          var_propertyMap_11095.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_11196, var_targetType_10539, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 282)) ;
          var_nameForCheckingFormalParameterUsing_10625 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_minusEqualExpressionInstructionAST temp_9 = object ;
          var_targetVariableCppName_10575 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 284)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 284)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 284)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_minusEqualExpressionInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_10539, var_targetVariableCppName_10575, var_nameForCheckingFormalParameterUsing_10625, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 287)) ;
    }
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_11906 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_11906.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_11929 = var_targetType_10539.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 302)) ;
    GALGAS_bool var_isPublic_12006 ;
    var_propertyMap_11929.method_searchKey (enumerator_11906.current_mValue (HERE), var_isPublic_12006, var_targetType_10539, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 303)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_12006.operator_not (SOURCE_FILE ("instruction-concat.galgas", 304)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_11906.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 305)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 305)) ;
      }
    }
    enumerator_11906.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_10539.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 309)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 309)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 309)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_minusEqualExpressionInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_10539.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 311)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 311)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 310)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_12685 ;
  const GALGAS_minusEqualExpressionInstructionAST temp_17 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_17.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10539, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_12685, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 314)) ;
  {
  const GALGAS_minusEqualExpressionInstructionAST temp_18 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_10539, var_expression_12685.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 323)), temp_18.getter_mInstructionLocation (HERE), var_expression_12685, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 323)) ;
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_19 = object ;
  const GALGAS_minusEqualExpressionInstructionAST temp_20 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_19.getter_mInstructionLocation (HERE), var_targetType_10539, var_targetVariableCppName_10575, var_nameForCheckingFormalParameterUsing_10625, temp_20.getter_mStructAttributeList (HERE), var_expression_12685, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 325))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 325)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mulEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mulEqualExpressionInstructionAST * object = (const cPtr_mulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_mulEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_13690 ;
  GALGAS_string var_targetVariableCppName_13726 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_13776 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mulEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 350)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_mulEqualExpressionInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 351)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-concat.galgas", 351)) ;
          var_targetType_13690.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_13776.drop () ; // Release error dropped variable
          var_targetVariableCppName_13726.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 353)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_mulEqualExpressionInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 354)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 354)) ;
            var_targetType_13690.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_13776.drop () ; // Release error dropped variable
            var_targetVariableCppName_13726.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_14246 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 357)) ;
          const GALGAS_mulEqualExpressionInstructionAST temp_8 = object ;
          GALGAS_bool joker_14347 ; // Joker input parameter
          var_propertyMap_14246.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_14347, var_targetType_13690, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 358)) ;
          var_nameForCheckingFormalParameterUsing_13776 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_mulEqualExpressionInstructionAST temp_9 = object ;
          var_targetVariableCppName_13726 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 360)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 360)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 360)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_mulEqualExpressionInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_13690, var_targetVariableCppName_13726, var_nameForCheckingFormalParameterUsing_13776, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 363)) ;
    }
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_15057 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_15057.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_15080 = var_targetType_13690.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 378)) ;
    GALGAS_bool var_isPublic_15157 ;
    var_propertyMap_15080.method_searchKey (enumerator_15057.current_mValue (HERE), var_isPublic_15157, var_targetType_13690, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 379)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_15157.operator_not (SOURCE_FILE ("instruction-concat.galgas", 380)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_15057.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 381)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 381)) ;
      }
    }
    enumerator_15057.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_13690.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 385)).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 385)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_mulEqualExpressionInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_13690.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 386)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_15830 ;
  const GALGAS_mulEqualExpressionInstructionAST temp_17 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_17.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_13690, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15830, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 390)) ;
  {
  const GALGAS_mulEqualExpressionInstructionAST temp_18 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_13690, var_expression_15830.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 399)), temp_18.getter_mInstructionLocation (HERE), var_expression_15830, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 399)) ;
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_19 = object ;
  const GALGAS_mulEqualExpressionInstructionAST temp_20 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_19.getter_mInstructionLocation (HERE), var_targetType_13690, var_targetVariableCppName_13726, var_nameForCheckingFormalParameterUsing_13776, temp_20.getter_mStructAttributeList (HERE), var_expression_15830, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 401))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 401)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divEqualExpressionInstructionAST * object = (const cPtr_divEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_16833 ;
  GALGAS_string var_targetVariableCppName_16869 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_16919 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_divEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 426)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_divEqualExpressionInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 427)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-concat.galgas", 427)) ;
          var_targetType_16833.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_16919.drop () ; // Release error dropped variable
          var_targetVariableCppName_16869.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 429)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_divEqualExpressionInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 430)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 430)) ;
            var_targetType_16833.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_16919.drop () ; // Release error dropped variable
            var_targetVariableCppName_16869.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_17389 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 433)) ;
          const GALGAS_divEqualExpressionInstructionAST temp_8 = object ;
          GALGAS_bool joker_17490 ; // Joker input parameter
          var_propertyMap_17389.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_17490, var_targetType_16833, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 434)) ;
          var_nameForCheckingFormalParameterUsing_16919 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_divEqualExpressionInstructionAST temp_9 = object ;
          var_targetVariableCppName_16869 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 436)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 436)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 436)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_divEqualExpressionInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_16833, var_targetVariableCppName_16869, var_nameForCheckingFormalParameterUsing_16919, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 439)) ;
    }
  }
  const GALGAS_divEqualExpressionInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_18200 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_18200.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_18223 = var_targetType_16833.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 454)) ;
    GALGAS_bool var_isPublic_18300 ;
    var_propertyMap_18223.method_searchKey (enumerator_18200.current_mValue (HERE), var_isPublic_18300, var_targetType_16833, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 455)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_18300.operator_not (SOURCE_FILE ("instruction-concat.galgas", 456)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_18200.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 457)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 457)) ;
      }
    }
    enumerator_18200.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_16833.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 461)).getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 461)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_divEqualExpressionInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_16833.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 462)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_18973 ;
  const GALGAS_divEqualExpressionInstructionAST temp_17 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_17.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_16833, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_18973, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 466)) ;
  {
  const GALGAS_divEqualExpressionInstructionAST temp_18 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_16833, var_expression_18973.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 475)), temp_18.getter_mInstructionLocation (HERE), var_expression_18973, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 475)) ;
  }
  const GALGAS_divEqualExpressionInstructionAST temp_19 = object ;
  const GALGAS_divEqualExpressionInstructionAST temp_20 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_19.getter_mInstructionLocation (HERE), var_targetType_16833, var_targetVariableCppName_16869, var_nameForCheckingFormalParameterUsing_16919, temp_20.getter_mStructAttributeList (HERE), var_expression_18973, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 477))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 477)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualElementsInstructionAST * object = (const cPtr_plusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualElementsInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_19976 ;
  GALGAS_string var_targetVariableCppName_20012 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_20062 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualElementsInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 502)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_plusEqualElementsInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 503)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-concat.galgas", 503)) ;
          var_targetType_19976.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_20062.drop () ; // Release error dropped variable
          var_targetVariableCppName_20012.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 505)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_plusEqualElementsInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 506)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 506)) ;
            var_targetType_19976.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_20062.drop () ; // Release error dropped variable
            var_targetVariableCppName_20012.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_20532 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 509)) ;
          const GALGAS_plusEqualElementsInstructionAST temp_8 = object ;
          GALGAS_bool joker_20633 ; // Joker input parameter
          var_propertyMap_20532.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_20633, var_targetType_19976, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 510)) ;
          var_nameForCheckingFormalParameterUsing_20062 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_plusEqualElementsInstructionAST temp_9 = object ;
          var_targetVariableCppName_20012 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 512)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 512)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 512)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualElementsInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_19976, var_targetVariableCppName_20012, var_nameForCheckingFormalParameterUsing_20062, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 515)) ;
    }
  }
  const GALGAS_plusEqualElementsInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_21305 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_21305.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_21328 = var_targetType_19976.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 531)) ;
    GALGAS_bool var_isPublic_21405 ;
    var_propertyMap_21328.method_searchKey (enumerator_21305.current_mValue (HERE), var_isPublic_21405, var_targetType_19976, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 532)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_21405.operator_not (SOURCE_FILE ("instruction-concat.galgas", 533)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_21305.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 534)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 534)) ;
      }
    }
    enumerator_21305.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_21624 = var_targetType_19976.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 538)) ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_21624.getter_length (SOURCE_FILE ("instruction-concat.galgas", 539)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_plusEqualElementsInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_19976.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 540)) ;
    }
  }
  if (kBoolFalse == test_14) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      const GALGAS_plusEqualElementsInstructionAST temp_18 = object ;
      test_17 = GALGAS_bool (kIsNotEqual, temp_18.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-concat.galgas", 543)).objectCompare (var_addAssignOperatorArguments_21624.getter_length (SOURCE_FILE ("instruction-concat.galgas", 543)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GALGAS_plusEqualElementsInstructionAST temp_19 = object ;
        const GALGAS_plusEqualElementsInstructionAST temp_20 = object ;
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_19.getter_mInstructionLocation (HERE), GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_targetType_19976.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)).add_operation (var_addAssignOperatorArguments_21624.getter_length (SOURCE_FILE ("instruction-concat.galgas", 546)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 546)).add_operation (temp_20.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-concat.galgas", 547)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 546)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 547)), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 544)) ;
      }
    }
    if (kBoolFalse == test_17) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_22374 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 549)) ;
      const GALGAS_plusEqualElementsInstructionAST temp_22 = object ;
      cEnumerator_actualOutputExpressionList enumerator_22411 (temp_22.getter_mExpressions (HERE), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_22445 (var_addAssignOperatorArguments_21624, kENUMERATION_UP) ;
      while (enumerator_22411.hasCurrentObject () && enumerator_22445.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_22696 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_22411.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_22445.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_22696, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 551)) ;
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          test_23 = GALGAS_bool (kIsNotEqual, enumerator_22445.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_22411.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_23) {
            GALGAS_string temp_24 ;
            const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_22445.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_25) {
              temp_24 = GALGAS_string (":") ;
            }else if (kBoolFalse == test_25) {
              temp_24 = GALGAS_string::makeEmptyString () ;
            }
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_22411.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 560)), GALGAS_string ("the selector should be '!").add_operation (enumerator_22445.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 561)).add_operation (temp_24, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 561)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 561)), fixItArray26  COMMA_SOURCE_FILE ("instruction-concat.galgas", 560)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_22445.current_mFormalArgumentType (HERE), var_expression_22696.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 563)), enumerator_22411.current_mEndOfExpressionLocation (HERE), var_expression_22696, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 563)) ;
        }
        var_effectiveParameterList_22374.addAssign_operation (var_expression_22696  COMMA_SOURCE_FILE ("instruction-concat.galgas", 564)) ;
        enumerator_22411.gotoNextObject () ;
        enumerator_22445.gotoNextObject () ;
      }
      const GALGAS_plusEqualElementsInstructionAST temp_27 = object ;
      const GALGAS_plusEqualElementsInstructionAST temp_28 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_targetVariableCppName_20012, var_targetType_19976, var_nameForCheckingFormalParameterUsing_20062, temp_27.getter_mInstructionLocation (HERE), temp_28.getter_mStructAttributeList (HERE), var_effectiveParameterList_22374  COMMA_SOURCE_FILE ("instruction-concat.galgas", 567))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 567)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST.mSlotID,
                                                   extensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualnstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_plusEqualnstructionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mTargetType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 599)) ;
  GALGAS_stringlist var_parameterList_24478 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 600)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_1 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_24527 (temp_1.getter_mExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_24527.hasCurrentObject ()) {
    GALGAS_string var_parameter_24710 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_24527.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_24710, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 602)) ;
    var_parameterList_24478.addAssign_operation (var_parameter_24710  COMMA_SOURCE_FILE ("instruction-concat.galgas", 609)) ;
    enumerator_24527.gotoNextObject () ;
  }
  {
  const GALGAS_plusEqualnstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.getter_mNameForCheckingFormalParameterUsing (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 612)) ;
  }
  const GALGAS_plusEqualnstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.getter_mReceiverCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 613)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_4 = object ;
  cEnumerator_lstringlist enumerator_24937 (temp_4.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_24937.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_24937.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 615)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 615)) ;
    enumerator_24937.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 618)) ;
  {
  const GALGAS_plusEqualnstructionForGeneration temp_5 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.getter_mReceiverCppName (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 619)) ;
  }
  cEnumerator_stringlist enumerator_25201 (var_parameterList_24478, kENUMERATION_UP) ;
  while (enumerator_25201.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_25201.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 621)) ;
    if (enumerator_25201.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 622)) ;
    }
    enumerator_25201.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_plusEqualnstructionForGeneration temp_7 = object ;
    test_6 = temp_7.getter_mTargetType (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 624)).getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 624)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 625)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 626)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 626)) ;
      }
    }
  }
  const GALGAS_plusEqualnstructionForGeneration temp_8 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 628)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 628)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 628)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_plusEqualnstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration.mSlotID,
                                            extensionMethod_plusEqualnstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_plusEqualnstructionForGeneration_generateInstruction (defineExtensionMethod_plusEqualnstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@opEqualInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_opEqualInstructionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mTargetType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 651)) ;
  GALGAS_string var_sourceVar_26678 ;
  const GALGAS_opEqualInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_26678, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 652)) ;
  {
  const GALGAS_opEqualInstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.getter_mNameForCheckingFormalParameterUsing (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 659)) ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.getter_mTargetVariableCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 660)) ;
  const GALGAS_opEqualInstructionForGeneration temp_4 = object ;
  cEnumerator_lstringlist enumerator_26855 (temp_4.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_26855.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_26855.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 662)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 662)) ;
    enumerator_26855.gotoNextObject () ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_5 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (temp_5.getter_mGeneratedMethod (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 664)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 664)).add_operation (var_sourceVar_26678, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 664)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 664)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 665)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 665)) ;
  const GALGAS_opEqualInstructionForGeneration temp_6 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 666)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 666)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 666)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 667)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 667)) ;
  }
  {
  const GALGAS_opEqualInstructionForGeneration temp_7 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.getter_mTargetVariableCppName (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 668)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_opEqualInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_opEqualInstructionForGeneration.mSlotID,
                                            extensionMethod_opEqualInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_opEqualInstructionForGeneration_generateInstruction (defineExtensionMethod_opEqualInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dropInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dropInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_dropInstructionAST.mSlotID,
                                                          extensionMethod_dropInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dropInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_dropInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dropInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dropInstructionAST * object = (const cPtr_dropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_dropInstructionAST) ;
  const GALGAS_dropInstructionAST temp_0 = object ;
  cEnumerator_lstringlist enumerator_2215 (temp_0.getter_mDropList (HERE), kENUMERATION_UP) ;
  while (enumerator_2215.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_entry joker_2269_3 ; // Joker input parameter
    GALGAS_string joker_2269_2 ; // Joker input parameter
    GALGAS_string joker_2269_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForDropAccess (enumerator_2215.current_mValue (HERE), joker_2269_3, joker_2269_2, joker_2269_1, inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 53)) ;
    }
    enumerator_2215.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dropInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_dropInstructionAST.mSlotID,
                                                   extensionMethod_dropInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dropInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_dropInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_errorInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionAST * object = (const cPtr_errorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionAST) ;
  const GALGAS_errorInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLocationExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 109)) ;
  const GALGAS_errorInstructionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mMessageExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 110)) ;
  const GALGAS_errorInstructionAST temp_2 = object ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.getter_mFixitListAST (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 111)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_errorInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_errorInstructionAST.mSlotID,
                                                          extensionMethod_errorInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_errorInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_errorInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                               const GALGAS_semanticExpressionAST constinArgument_inLocationExpression,
                                               const GALGAS_semanticExpressionAST constinArgument_inMessageExpression,
                                               const GALGAS_fixitListAST constinArgument_inFixitListAST,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               const GALGAS_string constinArgument_inErrorOrWarningString,
                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                               GALGAS_semanticExpressionForGeneration & outArgument_outLocationExpression,
                                               GALGAS_semanticExpressionForGeneration & outArgument_outMessageExpression,
                                               GALGAS_fixitListForGeneration & outArgument_outFixitListForGeneration,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLocationExpression.drop () ; // Release 'out' argument
  outArgument_outMessageExpression.drop () ; // Release 'out' argument
  outArgument_outFixitListForGeneration.drop () ; // Release 'out' argument
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 164)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 173)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_getterMap var_getterMap_6617 = outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 174)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 174)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_getterMap_6617.getter_hasKey (GALGAS_string ("location") COMMA_SOURCE_FILE ("instruction-error.galgas", 175)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_methodKind var_kind_6798 ;
          GALGAS_functionSignature var_argumentTypeList_6847 ;
          GALGAS_bool var_hasCompilerArgument_6897 ;
          GALGAS_unifiedTypeMap_2D_entry var_returnedType_6945 ;
          GALGAS_location joker_6857 ; // Joker input parameter
          GALGAS_methodQualifier joker_6955_2 ; // Joker input parameter
          GALGAS_string joker_6955_1 ; // Joker input parameter
          var_getterMap_6617.method_searchKey (GALGAS_string ("location").getter_nowhere (SOURCE_FILE ("instruction-error.galgas", 177)), var_kind_6798, var_argumentTypeList_6847, joker_6857, var_hasCompilerArgument_6897, var_returnedType_6945, joker_6955_2, joker_6955_1, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 176)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsNotEqual, var_argumentTypeList_6847.getter_length (SOURCE_FILE ("instruction-error.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 187)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (GALGAS_string ("' and defines a 'location' getter with arguments; it should be either of the '@location' type,"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (GALGAS_string (" either defines a 'location' getter without argument that returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 188)), fixItArray3  COMMA_SOURCE_FILE ("instruction-error.galgas", 186)) ;
            }
          }
          if (kBoolFalse == test_2) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsNotEqual, var_returnedType_6945.objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 192)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (GALGAS_string ("' and defines a 'location' getter that returns an '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (var_returnedType_6945.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 193)).add_operation (GALGAS_string ("' object; it should be either of the '@location' type, either defines a 'location' getter without"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 193)).add_operation (GALGAS_string (" argument that returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 194)), fixItArray5  COMMA_SOURCE_FILE ("instruction-error.galgas", 191)) ;
              }
            }
            if (kBoolFalse == test_4) {
              GALGAS_getterCallExpressionForGeneration var_conversionExpression_7898 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE), constinArgument_inErrorLocation, var_kind_6798, outArgument_outLocationExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 202)), constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 203)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 204)), var_hasCompilerArgument_6897  COMMA_SOURCE_FILE ("instruction-error.galgas", 197)) ;
              outArgument_outLocationExpression = var_conversionExpression_7898 ;
            }
          }
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 211)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 211)).add_operation (outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 211)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 211)).add_operation (GALGAS_string ("' and does not define a 'location' getter; it should be either of the '@location' type, either"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 211)).add_operation (GALGAS_string (" defines a 'location' getter without argument that returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 212)), fixItArray6  COMMA_SOURCE_FILE ("instruction-error.galgas", 210)) ;
      }
    }
  }
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-error.galgas", 220)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 217)) ;
  outArgument_outFixitListForGeneration = GALGAS_fixitListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 226)) ;
  cEnumerator_fixitListAST enumerator_8966 (constinArgument_inFixitListAST, kENUMERATION_UP) ;
  while (enumerator_8966.hasCurrentObject ()) {
    switch (enumerator_8966.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 230))  COMMA_SOURCE_FILE ("instruction-error.galgas", 230)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_9963 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_8966.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_9963->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_9963->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_9347 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9347, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 232)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, var_expression_9347.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 240)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (kIsNotEqual, var_expression_9347.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 241)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_9 = test_8 ;
          if (kBoolTrue == test_9.boolEnum ()) {
            test_9 = GALGAS_bool (kIsNotEqual, var_expression_9347.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 242)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_10 = test_9 ;
          if (kBoolTrue == test_10.boolEnum ()) {
            test_10 = GALGAS_bool (kIsNotEqual, var_expression_9347.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 243)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_7 = test_10.boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_9347.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 244)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 244)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 244)), fixItArray11  COMMA_SOURCE_FILE ("instruction-error.galgas", 244)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItReplace (var_expression_9347  COMMA_SOURCE_FILE ("instruction-error.galgas", 247))  COMMA_SOURCE_FILE ("instruction-error.galgas", 247)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_10875 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_8966.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_10875->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_10875->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_10254 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10254, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 249)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          GALGAS_bool test_13 = GALGAS_bool (kIsNotEqual, var_expression_10254.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 257)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = GALGAS_bool (kIsNotEqual, var_expression_10254.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 258)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_14 = test_13 ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = GALGAS_bool (kIsNotEqual, var_expression_10254.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 259)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_15 = test_14 ;
          if (kBoolTrue == test_15.boolEnum ()) {
            test_15 = GALGAS_bool (kIsNotEqual, var_expression_10254.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 260)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_12 = test_15.boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_10254.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 261)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 261)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 261)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 261)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertBefore (var_expression_10254  COMMA_SOURCE_FILE ("instruction-error.galgas", 264))  COMMA_SOURCE_FILE ("instruction-error.galgas", 264)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_11785 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_8966.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_11785->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_11785->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_11165 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11165, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 266)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          GALGAS_bool test_18 = GALGAS_bool (kIsNotEqual, var_expression_11165.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 274)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_18.boolEnum ()) {
            test_18 = GALGAS_bool (kIsNotEqual, var_expression_11165.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 275)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_19 = test_18 ;
          if (kBoolTrue == test_19.boolEnum ()) {
            test_19 = GALGAS_bool (kIsNotEqual, var_expression_11165.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 276)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_20 = test_19 ;
          if (kBoolTrue == test_20.boolEnum ()) {
            test_20 = GALGAS_bool (kIsNotEqual, var_expression_11165.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 277)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_17 = test_20.boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_11165.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 278)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 278)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 278)), fixItArray21  COMMA_SOURCE_FILE ("instruction-error.galgas", 278)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertAfter (var_expression_11165  COMMA_SOURCE_FILE ("instruction-error.galgas", 281))  COMMA_SOURCE_FILE ("instruction-error.galgas", 281)) ;
      }
      break ;
    }
    enumerator_8966.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsNotEqual, outArgument_outMessageExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 285)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_22) {
      TC_Array <C_FixItDescription> fixItArray23 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)).add_operation (GALGAS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)).add_operation (outArgument_outMessageExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 287)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)).add_operation (GALGAS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)), fixItArray23  COMMA_SOURCE_FILE ("instruction-error.galgas", 286)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_errorInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionAST * object = (const cPtr_errorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_locationExpression_12869 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_12896 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_12928 ;
  {
  const GALGAS_errorInstructionAST temp_0 = object ;
  const GALGAS_errorInstructionAST temp_1 = object ;
  const GALGAS_errorInstructionAST temp_2 = object ;
  const GALGAS_errorInstructionAST temp_3 = object ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_0.getter_mLocationExpression (HERE), temp_1.getter_mMessageExpression (HERE), temp_2.getter_mFixitListAST (HERE), temp_3.getter_mInstructionLocation (HERE), GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_12869, var_messageExpression_12896, var_fixitListForGeneration_12928, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 302)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_12993 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 317)) ;
  const GALGAS_errorInstructionAST temp_4 = object ;
  cEnumerator_lstringlist enumerator_13046 (temp_4.getter_mBuiltVariableList (HERE), kENUMERATION_UP) ;
  while (enumerator_13046.hasCurrentObject ()) {
    GALGAS_string var_varCppName_13118 ;
    {
    GALGAS_unifiedTypeMap_2D_entry joker_13101 ; // Joker input parameter
    GALGAS_string joker_13120 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForWriteAccess (enumerator_13046.current_mValue (HERE), joker_13101, var_varCppName_13118, joker_13120, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 319)) ;
    }
    var_builtVariableCppNameList_12993.addAssign_operation (var_varCppName_13118  COMMA_SOURCE_FILE ("instruction-error.galgas", 320)) ;
    enumerator_13046.gotoNextObject () ;
  }
  const GALGAS_errorInstructionAST temp_5 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::constructor_new (temp_5.getter_mInstructionLocation (HERE), var_locationExpression_12869, var_messageExpression_12896, var_builtVariableCppNameList_12993, var_fixitListForGeneration_12928  COMMA_SOURCE_FILE ("instruction-error.galgas", 323))  COMMA_SOURCE_FILE ("instruction-error.galgas", 323)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_errorInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_errorInstructionAST.mSlotID,
                                                   extensionMethod_errorInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_errorInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_errorInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_receiverCppVarName_16509 ;
  const GALGAS_errorInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_16509, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 402)) ;
  GALGAS_string var_messageCppVarName_16716 ;
  const GALGAS_errorInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mErrorExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_16716, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 410)) ;
  GALGAS_string var_fixItArrayCppName_16969 ;
  const GALGAS_errorInstructionForGeneration temp_2 = object ;
  extensionMethod_generateFixIt (temp_2.getter_mFixitListForGeneration (HERE), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_16969, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 418)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 427)) COMMA_SOURCE_FILE ("instruction-error.galgas", 427)) ;
  }
  const GALGAS_errorInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 428)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 428)).add_operation (var_receiverCppVarName_16509, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 428)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 429)).add_operation (var_messageCppVarName_16716, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 429)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 430)).add_operation (var_fixItArrayCppName_16969, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 430)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (extensionGetter_commaSourceFile (temp_3.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 428)) ;
  const GALGAS_errorInstructionForGeneration temp_4 = object ;
  cEnumerator_stringlist enumerator_17361 (temp_4.getter_mBuiltVariableCppNameList (HERE), kENUMERATION_UP) ;
  while (enumerator_17361.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_17361.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 435)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17361.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 436)) ;
    enumerator_17361.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_errorInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_errorInstructionForGeneration.mSlotID,
                                            extensionMethod_errorInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_errorInstructionForGeneration_generateInstruction (defineExtensionMethod_errorInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  const GALGAS_forInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mWhileExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 280)) ;
  const GALGAS_forInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.getter_mBeforeInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 281)) ;
  const GALGAS_forInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.getter_mBetweenInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 282)) ;
  const GALGAS_forInstructionAST temp_3 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.getter_mDoInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 283)) ;
  const GALGAS_forInstructionAST temp_4 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.getter_mAfterInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 284)) ;
  const GALGAS_forInstructionAST temp_5 = object ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_10083 (temp_5.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  while (enumerator_10083.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_10083.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 286)) ;
    enumerator_10083.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                          extensionMethod_forInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_forInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 297)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST.mSlotID,
                                               extensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionCstListInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 303)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST.mSlotID,
                                               extensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (defineExtensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionVarInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 309)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST.mSlotID,
                                               extensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (defineExtensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                        GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                        GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 339)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 336)) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.getter_mEndOfEnumerationExpression (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 345)).getter_string (SOURCE_FILE ("instruction-for.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 345)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_12862 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 346)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 346)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_12862.getter_length (SOURCE_FILE ("instruction-for.galgas", 347)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 348)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 348)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 348)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 348)) ;
    }
  }
  cEnumerator_enumerationDescriptorList enumerator_13188 (var_enumerationDescriptorList_12862, kENUMERATION_UP) ;
  while (enumerator_13188.hasCurrentObject ()) {
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_5 = object ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_6 = object ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_13188.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (temp_5.getter_mPrefix (HERE).getter_string (HERE).add_operation (enumerator_13188.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 354)), temp_6.getter_mEndOfEnumerationExpression (HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas", 354)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 355)).add_operation (enumerator_13188.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 355)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 355))  COMMA_SOURCE_FILE ("instruction-for.galgas", 352)) ;
    enumerator_13188.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (void) {
  enterExtensionMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST.mSlotID,
                                           extensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionCstListInExpAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                    GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                    GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 373)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 370)) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.getter_mEndOfEnumerationExpression (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 379)).getter_string (SOURCE_FILE ("instruction-for.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 379)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_14363 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 380)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 380)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_14363.getter_length (SOURCE_FILE ("instruction-for.galgas", 381)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 382)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 382)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 382)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 382)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_6 = object ;
      const GALGAS_enumeratedCollectionCstListInExpAST temp_7 = object ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 385)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (temp_7.getter_mEndsWithEllipsis (HERE).operator_not (SOURCE_FILE ("instruction-for.galgas", 385)) COMMA_SOURCE_FILE ("instruction-for.galgas", 385)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList_14746 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 386)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 386)) ;
        cEnumerator_enumerationDescriptorList enumerator_14854 (var_currentTypedAttributeList_14746, kENUMERATION_UP) ;
        while (enumerator_14854.hasCurrentObject ()) {
          {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_8 = object ;
          ioArgument_ioVariableMap.setter_insertUsedLocalConstant (GALGAS_lstring::constructor_new (enumerator_14854.current_mEnumerationName (HERE), temp_8.getter_mEndOfEnumerationExpression (HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas", 389)), enumerator_14854.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 391)).add_operation (enumerator_14854.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 391)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 391)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 392)).add_operation (enumerator_14854.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 392)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 388)) ;
          }
          enumerator_14854.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_enumeratedCollectionCstListInExpAST temp_10 = object ;
        const GALGAS_enumeratedCollectionCstListInExpAST temp_11 = object ;
        test_9 = temp_10.getter_mEndsWithEllipsis (HERE).operator_not (SOURCE_FILE ("instruction-for.galgas", 395)).operator_and (GALGAS_bool (kIsNotEqual, temp_11.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 395)).objectCompare (var_enumerationDescriptorList_14363.getter_length (SOURCE_FILE ("instruction-for.galgas", 395)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 395)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_12 = object ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_14363.getter_length (SOURCE_FILE ("instruction-for.galgas", 399)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_15 = object ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_12.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 397)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 397)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 397)).add_operation (var_enumerationDescriptorList_14363.getter_length (SOURCE_FILE ("instruction-for.galgas", 398)).getter_string (SOURCE_FILE ("instruction-for.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 397)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 398)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 398)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 399)).add_operation (temp_15.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 401)).getter_string (SOURCE_FILE ("instruction-for.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 400)), fixItArray16  COMMA_SOURCE_FILE ("instruction-for.galgas", 396)) ;
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_18 = object ;
          const GALGAS_enumeratedCollectionCstListInExpAST temp_19 = object ;
          test_17 = temp_18.getter_mEndsWithEllipsis (HERE).operator_and (GALGAS_bool (kIsStrictSup, temp_19.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 402)).objectCompare (var_enumerationDescriptorList_14363.getter_length (SOURCE_FILE ("instruction-for.galgas", 402)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 402)).boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_enumeratedCollectionCstListInExpAST temp_20 = object ;
            GALGAS_string temp_21 ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_14363.getter_length (SOURCE_FILE ("instruction-for.galgas", 406)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_22) {
              temp_21 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_22) {
              temp_21 = GALGAS_string::makeEmptyString () ;
            }
            const GALGAS_enumeratedCollectionCstListInExpAST temp_23 = object ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_20.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 404)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 404)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 404)).add_operation (var_enumerationDescriptorList_14363.getter_length (SOURCE_FILE ("instruction-for.galgas", 405)).getter_string (SOURCE_FILE ("instruction-for.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 404)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 405)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 405)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 406)).add_operation (temp_23.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 408)).getter_string (SOURCE_FILE ("instruction-for.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 407)), fixItArray24  COMMA_SOURCE_FILE ("instruction-for.galgas", 403)) ;
          }
        }
        if (kBoolFalse == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_25 = object ;
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_16224 (temp_25.getter_mElementList (HERE), kENUMERATION_UP) ;
          cEnumerator_enumerationDescriptorList enumerator_16257 (var_enumerationDescriptorList_14363, kENUMERATION_UP) ;
          while (enumerator_16224.hasCurrentObject () && enumerator_16257.hasCurrentObject ()) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsNotEqual, enumerator_16224.current_mOptionalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-for.galgas", 411)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_26) {
                enumGalgasBool test_27 = kBoolTrue ;
                if (kBoolTrue == test_27) {
                  test_27 = GALGAS_bool (kIsNotEqual, enumerator_16224.current_mOptionalTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_27) {
                    GALGAS_unifiedTypeMap_2D_entry var_foundType_16412 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_16224.current_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 413)) ;
                    enumGalgasBool test_28 = kBoolTrue ;
                    if (kBoolTrue == test_28) {
                      test_28 = GALGAS_bool (kIsNotEqual, var_foundType_16412.objectCompare (enumerator_16257.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_28) {
                        TC_Array <C_FixItDescription> fixItArray29 ;
                        inCompiler->emitSemanticError (enumerator_16224.current_mOptionalTypeName (HERE).getter_location (SOURCE_FILE ("instruction-for.galgas", 418)), GALGAS_string ("incorrect '@").add_operation (var_foundType_16412.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)).add_operation (enumerator_16257.current_mEnumeratedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)), fixItArray29  COMMA_SOURCE_FILE ("instruction-for.galgas", 418)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_16257.current_mEnumeratedType (HERE), enumerator_16224.current_mOptionalConstantName (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 421)).add_operation (enumerator_16257.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 421)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 421))  COMMA_SOURCE_FILE ("instruction-for.galgas", 421)) ;
              }
            }
            enumerator_16224.gotoNextObject () ;
            enumerator_16257.gotoNextObject () ;
          }
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (void) {
  enterExtensionMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST.mSlotID,
                                           extensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (defineExtensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionVarInExpAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 442)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 439)) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.getter_mEndOfEnumerationExpression (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 448)).getter_string (SOURCE_FILE ("instruction-for.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 448)) ;
  GALGAS_unifiedTypeMap_2D_entry var_enumeratedElementType_17885 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 449)).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 449)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_enumeratedElementType_17885.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 450)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 451)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 451)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 451)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 451)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_5 = object ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_17885, temp_5.getter_mEnumerationVariable (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 453))  COMMA_SOURCE_FILE ("instruction-for.galgas", 453)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_7 = object ;
    test_6 = GALGAS_bool (kIsNotEqual, temp_7.getter_mEnumerationOptionalTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_8 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_explicitType_18378 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_8.getter_mEnumerationOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 457)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, var_enumeratedElementType_17885.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 461)).objectCompare (var_explicitType_18378.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 461)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionVarInExpAST temp_10 = object ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.getter_mEnumerationOptionalTypeName (HERE).getter_location (SOURCE_FILE ("instruction-for.galgas", 462)), GALGAS_string ("the '@").add_operation (var_enumeratedElementType_17885.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 462)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 462)), fixItArray11  COMMA_SOURCE_FILE ("instruction-for.galgas", 462)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (void) {
  enterExtensionMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST.mSlotID,
                                           extensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (defineExtensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 478)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 479)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 481)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_19396 ;
  {
  const GALGAS_forInstructionAST temp_0 = object ;
  const GALGAS_forInstructionAST temp_1 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 487)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 488)), temp_0.getter_mBeforeInstructionList (HERE), temp_1.getter_mEndOf_5F_before_5F_branch (HERE), ioArgument_ioVariableMap, var_before_5F_instructionList_19396, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 483)) ;
  }
  {
  const GALGAS_forInstructionAST temp_2 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_2.getter_mEndOf_5F_before_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 494)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 496)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_19905 ;
  {
  const GALGAS_forInstructionAST temp_3 = object ;
  const GALGAS_forInstructionAST temp_4 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 502)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 503)), temp_3.getter_mBetweenInstructionList (HERE), temp_4.getter_mEndOf_5F_between_5F_branch (HERE), ioArgument_ioVariableMap, var_between_5F_instructionList_19905, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 498)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_5.getter_mEndOf_5F_between_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 509)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 511)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_20702 ;
  {
  const GALGAS_forInstructionAST temp_6 = object ;
  const GALGAS_forInstructionAST temp_7 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 516)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 517)), temp_6.getter_mAfterInstructionList (HERE), temp_7.getter_mEndOf_5F_after_5F_branch (HERE), ioArgument_ioVariableMap, var_after_5F_instructionList_20702, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 512)) ;
  }
  {
  const GALGAS_forInstructionAST temp_8 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_8.getter_mEndOf_5F_after_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 523)) ;
  }
  GALGAS_localInitializedVariableList var_localConstantListForDoBranch_20859 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 525)) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_20931 = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 526)) ;
  const GALGAS_forInstructionAST temp_9 = object ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_20975 (temp_9.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  while (enumerator_20975.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_21211 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_21277 ;
    callExtensionMethod_analyzeEnumeration ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_20975.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_localConstantListForDoBranch_20859, var_enumeratorCppName_21211, var_enumerationExpression_21277, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 528)) ;
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = enumerator_20975.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("UP") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string ("DOWN") ;
    }
    var_enumerationList_20931.addAssign_operation (temp_10, var_enumerationExpression_21277, var_enumeratorCppName_21211  COMMA_SOURCE_FILE ("instruction-for.galgas", 538)) ;
    enumerator_20975.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 544)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 545)) ;
  }
  cEnumerator_localInitializedVariableList enumerator_21601 (var_localConstantListForDoBranch_20859, kENUMERATION_UP) ;
  while (enumerator_21601.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_21601.current (HERE).getter_mName (HERE), enumerator_21601.current (HERE).getter_mType (HERE), enumerator_21601.current (HERE).getter_mCppName (HERE), enumerator_21601.current (HERE).getter_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 548)) ;
    }
    enumerator_21601.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_22029 ;
  const GALGAS_forInstructionAST temp_12 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_12.getter_mWhileExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 559)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression_22029, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 556)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_22207 ;
  {
  const GALGAS_forInstructionAST temp_13 = object ;
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_13.getter_mEndOf_5F_while_5F_expression (HERE), var_uncheckedWhileExpression_22029, var_whileExpression_22207, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 564)) ;
  }
  {
  const GALGAS_forInstructionAST temp_14 = object ;
  ioArgument_ioVariableMap.setter_closeBranch (temp_14.getter_mEndOf_5F_while_5F_expression (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 571)) ;
  }
  {
  const GALGAS_forInstructionAST temp_15 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_15.getter_mEndOf_5F_while_5F_expression (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 572)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 574)) ;
  }
  GALGAS_string var_indexCppName_22430 = GALGAS_string::makeEmptyString () ;
  GALGAS_localConstantList var_indexDeclaration_22473 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 576)) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_forInstructionAST temp_17 = object ;
    test_16 = GALGAS_bool (kIsNotEqual, temp_17.getter_mIndexVariableName (HERE).getter_string (SOURCE_FILE ("instruction-for.galgas", 577)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_forInstructionAST temp_18 = object ;
      var_indexCppName_22430 = GALGAS_string ("index_").add_operation (temp_18.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)).getter_string (SOURCE_FILE ("instruction-for.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)) ;
      const GALGAS_forInstructionAST temp_19 = object ;
      var_indexDeclaration_22473.addAssign_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), temp_19.getter_mIndexVariableName (HERE), GALGAS_bool (false), var_indexCppName_22430  COMMA_SOURCE_FILE ("instruction-for.galgas", 579)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_22839 ;
  {
  const GALGAS_forInstructionAST temp_20 = object ;
  const GALGAS_forInstructionAST temp_21 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_indexDeclaration_22473, var_localConstantListForDoBranch_20859, temp_20.getter_mDoInstructionList (HERE), temp_21.getter_mEndOf_5F_do_5F_branch (HERE), ioArgument_ioVariableMap, var_do_5F_instructionList_22839, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 587)) ;
  }
  {
  const GALGAS_forInstructionAST temp_22 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_22.getter_mEndOf_5F_foreach_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 599)) ;
  }
  {
  const GALGAS_forInstructionAST temp_23 = object ;
  ioArgument_ioVariableMap.setter_closeBranch (temp_23.getter_mEndOf_5F_foreach_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 601)) ;
  }
  {
  const GALGAS_forInstructionAST temp_24 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_24.getter_mEndOf_5F_foreach_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 602)) ;
  }
  const GALGAS_forInstructionAST temp_25 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::constructor_new (temp_25.getter_mInstructionLocation (HERE), var_enumerationList_20931, var_indexCppName_22430, var_whileExpression_22207, var_before_5F_instructionList_19396, var_between_5F_instructionList_19905, var_do_5F_instructionList_22839, var_after_5F_instructionList_20702  COMMA_SOURCE_FILE ("instruction-for.galgas", 604))  COMMA_SOURCE_FILE ("instruction-for.galgas", 604)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                   extensionMethod_forInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_forInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionForGeneration * object = (const cPtr_forInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionForGeneration) ;
  GALGAS_stringlist var_enumerationVarCppNameList_25353 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 650)) ;
  const GALGAS_forInstructionForGeneration temp_0 = object ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_25397 (temp_0.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  while (enumerator_25397.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar_25427 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_25397.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_25427, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 653)) ;
    var_enumerationVarCppNameList_25353.addAssign_operation (var_enumerationVar_25427  COMMA_SOURCE_FILE ("instruction-for.galgas", 660)) ;
    enumerator_25397.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_1 = object ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_25710 (temp_1.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  cEnumerator_stringlist enumerator_25743 (var_enumerationVarCppNameList_25353, kENUMERATION_UP) ;
  while (enumerator_25710.hasCurrentObject () && enumerator_25743.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (enumerator_25710.current_mEnumeratedExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 663)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)).add_operation (enumerator_25710.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (enumerator_25743.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (GALGAS_string (", kENUMERATION_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (enumerator_25710.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 665)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 665)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 663)) ;
    enumerator_25710.gotoNextObject () ;
    enumerator_25743.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_2 = object ;
  GALGAS_bool var_whileExpressionIsAllwaysTrue_26027 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mWhileExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 668)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_forInstructionForGeneration temp_4 = object ;
    const GALGAS_forInstructionForGeneration temp_5 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.getter_mBeforeInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 670)).add_operation (temp_5.getter_mAfterInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 670)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_whileExpressionIsAllwaysTrue_26027.operator_not (SOURCE_FILE ("instruction-for.galgas", 670)) COMMA_SOURCE_FILE ("instruction-for.galgas", 670)).boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_forInstructionForGeneration temp_7 = object ;
        test_6 = GALGAS_bool (kIsNotEqual, temp_7.getter_mIndexVariableCppName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_forInstructionForGeneration temp_8 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_8.getter_mIndexVariableCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 673)) ;
        }
      }
      GALGAS_string var_boolVarCppName_26462 = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 675)) ;
      ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 675)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_26027.boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolVarCppName_26462, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 677)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 677)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 677)) ;
        }
      }
      if (kBoolFalse == test_9) {
        GALGAS_string var_whileVar_26681 ;
        const GALGAS_forInstructionForGeneration temp_10 = object ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_10.getter_mWhileExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_26681, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_boolVarCppName_26462, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 681)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 681)).add_operation (var_whileVar_26681, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 681)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 681)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 681)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 683)) ;
      const GALGAS_forInstructionForGeneration temp_11 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_27006 (temp_11.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
      while (enumerator_27006.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_27006.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 685)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 685)) ;
        enumerator_27006.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_26462.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 687)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 687)) ;
      {
      const GALGAS_forInstructionForGeneration temp_12 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_12.getter_mBeforeInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 688)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 696)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 697)) ;
      const GALGAS_forInstructionForGeneration temp_13 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_27489 (temp_13.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
      while (enumerator_27489.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_27489.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 699)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 699)) ;
        enumerator_27489.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_26462.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 701)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 701)) ;
      {
      const GALGAS_forInstructionForGeneration temp_14 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_14.getter_mDoInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 703)) ;
      }
      const GALGAS_forInstructionForGeneration temp_15 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_27950 (temp_15.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
      while (enumerator_27950.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_27950.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 713)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 713)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 713)) ;
        enumerator_27950.gotoNextObject () ;
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_forInstructionForGeneration temp_17 = object ;
        test_16 = GALGAS_bool (kIsNotEqual, temp_17.getter_mIndexVariableCppName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_forInstructionForGeneration temp_18 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_18.getter_mIndexVariableCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 716)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 716)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 716)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_26027.operator_not (SOURCE_FILE ("instruction-for.galgas", 719)).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 720)) ;
          const GALGAS_forInstructionForGeneration temp_20 = object ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_28329 (temp_20.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
          while (enumerator_28329.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_28329.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 722)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 722)) ;
            if (enumerator_28329.hasNextObject ()) {
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 723)) ;
            }
            enumerator_28329.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 725)) ;
          GALGAS_string var_whileVar_28508 ;
          const GALGAS_forInstructionForGeneration temp_21 = object ;
          callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_21.getter_mWhileExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_28508, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 727)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    ").add_operation (var_boolVarCppName_26462, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)).add_operation (var_whileVar_28508, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 734)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 735)) ;
        }
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_forInstructionForGeneration temp_23 = object ;
        test_22 = GALGAS_bool (kIsStrictSup, temp_23.getter_mBetweenInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 738)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 739)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 740)) ;
          const GALGAS_forInstructionForGeneration temp_24 = object ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_29052 (temp_24.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
          while (enumerator_29052.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_29052.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 742)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 742)) ;
            enumerator_29052.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_26462.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 744)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 744)) ;
          {
          const GALGAS_forInstructionForGeneration temp_25 = object ;
          routine_generateInstructionList (ioArgument_ioInclusionSet, temp_25.getter_mBetweenInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 745)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 753)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 754)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 757)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 759)) ;
      }
      {
      const GALGAS_forInstructionForGeneration temp_26 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_26.getter_mAfterInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 760)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 768)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_forInstructionForGeneration temp_28 = object ;
      test_27 = GALGAS_bool (kIsNotEqual, temp_28.getter_mIndexVariableCppName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_forInstructionForGeneration temp_29 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_29.getter_mIndexVariableCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 771)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 771)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 773)) ;
    const GALGAS_forInstructionForGeneration temp_30 = object ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30227 (temp_30.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
    while (enumerator_30227.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30227.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 775)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 775)) ;
      if (enumerator_30227.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 776)) ;
      }
      enumerator_30227.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 778)) ;
    {
    const GALGAS_forInstructionForGeneration temp_31 = object ;
    routine_generateInstructionList (ioArgument_ioInclusionSet, temp_31.getter_mDoInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 780)) ;
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_forInstructionForGeneration temp_33 = object ;
      test_32 = GALGAS_bool (kIsStrictSup, temp_33.getter_mBetweenInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 789)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_32) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 790)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 791)) ;
        const GALGAS_forInstructionForGeneration temp_34 = object ;
        cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30853 (temp_34.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
        while (enumerator_30853.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30853.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 793)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 793)) ;
          if (enumerator_30853.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 794)) ;
          }
          enumerator_30853.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 796)) ;
        {
        const GALGAS_forInstructionForGeneration temp_35 = object ;
        routine_generateInstructionList (ioArgument_ioInclusionSet, temp_35.getter_mBetweenInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 797)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 805)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 806)) ;
        }
      }
    }
    const GALGAS_forInstructionForGeneration temp_36 = object ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_31419 (temp_36.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
    while (enumerator_31419.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_31419.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 810)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 810)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 810)) ;
      enumerator_31419.gotoNextObject () ;
    }
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      const GALGAS_forInstructionForGeneration temp_38 = object ;
      test_37 = GALGAS_bool (kIsNotEqual, temp_38.getter_mIndexVariableCppName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 813)) COMMA_SOURCE_FILE ("instruction-for.galgas", 813)) ;
        }
        const GALGAS_forInstructionForGeneration temp_39 = object ;
        const GALGAS_forInstructionForGeneration temp_40 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_39.getter_mIndexVariableCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)).add_operation (extensionGetter_commaSourceFile (temp_40.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 815)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 815)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 815)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 814)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 817)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_forInstructionForGeneration.mSlotID,
                                            extensionMethod_forInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionForGeneration_generateInstruction (defineExtensionMethod_forInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInFileInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInFileInstructionAST * object = (const cPtr_grammarInFileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInFileInstructionAST) ;
  const GALGAS_grammarInFileInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 183)) ;
  const GALGAS_grammarInFileInstructionAST temp_1 = object ;
  cEnumerator_actualParameterListAST enumerator_7562 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_7562.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_7562.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
    enumerator_7562.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_grammarInFileInstructionAST.mSlotID,
                                                          extensionMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInStringInstructionAST * object = (const cPtr_grammarInStringInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInStringInstructionAST) ;
  const GALGAS_grammarInStringInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 194)) ;
  const GALGAS_grammarInStringInstructionAST temp_1 = object ;
  cEnumerator_actualParameterListAST enumerator_8002 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_8002.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_8002.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 196)) ;
    enumerator_8002.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_grammarInStringInstructionAST.mSlotID,
                                                          extensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInFileInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInFileInstructionAST * object = (const cPtr_grammarInFileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInFileInstructionAST) ;
  const GALGAS_grammarInFileInstructionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_8680 = function_grammarNameForUsefulEntitiesGraph (temp_0.getter_mGrammarComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 211)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_8680 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 212)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_8997 ;
  GALGAS_bool var_hasTranslateFeature_9039 ;
  const GALGAS_grammarInFileInstructionAST temp_1 = object ;
  GALGAS_bool joker_9003 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mGrammarMap (HERE).method_searchKey (temp_1.getter_mGrammarComponentName (HERE), var_grammarLabelMap_8997, joker_9003, var_hasTranslateFeature_9039, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  GALGAS_formalParameterSignature var_labelSignature_9161 ;
  const GALGAS_grammarInFileInstructionAST temp_2 = object ;
  var_grammarLabelMap_8997.method_searchKey (temp_2.getter_mLabelName (HERE), var_labelSignature_9161, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_9575 ;
  {
  const GALGAS_grammarInFileInstructionAST temp_3 = object ;
  const GALGAS_grammarInFileInstructionAST temp_4 = object ;
  const GALGAS_grammarInFileInstructionAST temp_5 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.getter_mLabelName (HERE), GALGAS_string ("label of the ").add_operation (temp_4.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 231)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 231)), var_labelSignature_9161, temp_5.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_9575, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 226)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_9856 ;
  const GALGAS_grammarInFileInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 242)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_9856, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 239)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_9856.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 248)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInFileInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.getter_mEndOfSourceExpression (HERE), GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (var_sourceExpression_9856.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 251)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 250)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 251)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 249)) ;
    }
  }
  const GALGAS_grammarInFileInstructionAST temp_10 = object ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_10329 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.getter_mGrammarComponentName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 254)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 254)) ;
  GALGAS_stringlist var_assignementList_10442 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 255)) ;
  const GALGAS_grammarInFileInstructionAST temp_11 = object ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (HERE).ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_9039, var_syntaxDirectedTranslationResultVarName_10329, var_assignementList_10442, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 256)) ;
  const GALGAS_grammarInFileInstructionAST temp_12 = object ;
  const GALGAS_grammarInFileInstructionAST temp_13 = object ;
  const GALGAS_grammarInFileInstructionAST temp_14 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (temp_12.getter_mInstructionLocation (HERE), temp_13.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 266)), temp_14.getter_mLabelName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 267)), var_sourceExpression_9856, var_actualParameterListForGeneration_9575, var_hasTranslateFeature_9039, var_assignementList_10442, var_syntaxDirectedTranslationResultVarName_10329  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 264))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 264)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_grammarInFileInstructionAST.mSlotID,
                                                   extensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInFileInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInStringInstructionAST * object = (const cPtr_grammarInStringInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInStringInstructionAST) ;
  const GALGAS_grammarInStringInstructionAST temp_0 = object ;
  GALGAS_lstring var_grammarUsefulnessName_11536 = function_grammarNameForUsefulEntitiesGraph (temp_0.getter_mGrammarComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 285)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_11536 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 286)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_11860 ;
  GALGAS_bool var_hasTranslateFeature_11902 ;
  const GALGAS_grammarInStringInstructionAST temp_1 = object ;
  GALGAS_bool joker_11866 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mGrammarMap (HERE).method_searchKey (temp_1.getter_mGrammarComponentName (HERE), var_grammarLabelMap_11860, joker_11866, var_hasTranslateFeature_11902, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 288)) ;
  GALGAS_formalParameterSignature var_labelSignature_12024 ;
  const GALGAS_grammarInStringInstructionAST temp_2 = object ;
  var_grammarLabelMap_11860.method_searchKey (temp_2.getter_mLabelName (HERE), var_labelSignature_12024, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 295)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_12438 ;
  {
  const GALGAS_grammarInStringInstructionAST temp_3 = object ;
  const GALGAS_grammarInStringInstructionAST temp_4 = object ;
  const GALGAS_grammarInStringInstructionAST temp_5 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.getter_mLabelName (HERE), GALGAS_string ("label of the ").add_operation (temp_4.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)), var_labelSignature_12024, temp_5.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_12438, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 300)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_12719 ;
  const GALGAS_grammarInStringInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 316)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_12719, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 313)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_12719.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 322)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInStringInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.getter_mEndOfSourceExpression (HERE), GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_12719.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 325)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 324)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 325)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 323)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_13313 ;
  const GALGAS_grammarInStringInstructionAST temp_10 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_10.getter_mNameExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 331)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_nameExpression_13313, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 328)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_nameExpression_13313.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 337)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_grammarInStringInstructionAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.getter_mEndOfNameExpression (HERE), GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_12719.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 340)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 339)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 340)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 338)) ;
    }
  }
  const GALGAS_grammarInStringInstructionAST temp_14 = object ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_13729 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.getter_mGrammarComponentName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)) ;
  GALGAS_stringlist var_assignementList_13842 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 344)) ;
  const GALGAS_grammarInStringInstructionAST temp_15 = object ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (HERE).ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_11902, var_syntaxDirectedTranslationResultVarName_13729, var_assignementList_13842, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 345)) ;
  const GALGAS_grammarInStringInstructionAST temp_16 = object ;
  const GALGAS_grammarInStringInstructionAST temp_17 = object ;
  const GALGAS_grammarInStringInstructionAST temp_18 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (temp_16.getter_mInstructionLocation (HERE), temp_17.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 355)), temp_18.getter_mLabelName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 356)), var_sourceExpression_12719, var_nameExpression_13313, var_actualParameterListForGeneration_12438, var_hasTranslateFeature_11902, var_assignementList_13842, var_syntaxDirectedTranslationResultVarName_13729  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 353))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 353)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_grammarInStringInstructionAST.mSlotID,
                                                   extensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInStringInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionWithSourceFileForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                               const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionWithSourceFileForGeneration * object = (const cPtr_grammarInstructionWithSourceFileForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionWithSourceFileForGeneration) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.getter_mGrammarName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 390))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 390)) ;
  GALGAS_string var_sourceVar_15907 ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceFileExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_15907, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 392)) ;
  GALGAS_stringlist var_parameterCppNameList_15960 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 400)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_16013 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 401)) ;
  GALGAS_stringlist var_inputVariableList_16055 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 402)) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_2 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_16111 (temp_2.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_16111.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_16390 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_16111.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_16013, var_inputVariableList_16055, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_16390, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 404)) ;
    var_parameterCppNameList_15960.addAssign_operation (var_parameterCppName_16390  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 413)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_16111.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_16390.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 415)) ;
      }
    }
    enumerator_16111.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_5 = object ;
    test_4 = temp_5.getter_mGrammarHasTranslateFeature (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionWithSourceFileForGeneration temp_6 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_6.getter_mSyntaxDirectedTranslationResultVarName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_7 = object ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_8 = object ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_9 = object ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = temp_9.getter_mGrammarHasTranslateFeature (HERE).boolEnum () ;
  if (kBoolTrue == test_11) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_12 = object ;
    temp_10 = temp_12.getter_mSyntaxDirectedTranslationResultVarName (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 425)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_7.getter_mGrammarName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)).add_operation (temp_8.getter_mLabelName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 422)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 422)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 423)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)).add_operation (var_sourceVar_15907, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)) ;
  cEnumerator_stringlist enumerator_17197 (var_parameterCppNameList_15960, kENUMERATION_UP) ;
  while (enumerator_17197.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_17197.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 428)) ;
    enumerator_17197.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_13 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)) ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_14 = object ;
  cEnumerator_stringlist enumerator_17430 (temp_14.getter_mAssignementList (HERE), kENUMERATION_UP) ;
  while (enumerator_17430.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17430.current (HERE).getter_mValue (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 433)) ;
    enumerator_17430.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration.mSlotID,
                                            extensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction (defineExtensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionWithSourceExpressionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                     const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionWithSourceExpressionForGeneration * object = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.getter_mGrammarName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 461))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 461)) ;
  GALGAS_string var_sourceVar_18975 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceStringExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_18975, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 463)) ;
  GALGAS_string var_nameVar_19193 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mNameStringExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_19193, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 471)) ;
  GALGAS_stringlist var_parameterCppNameList_19246 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 479)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_19299 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 480)) ;
  GALGAS_stringlist var_inputVariableList_19341 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 481)) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_3 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_19397 (temp_3.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_19397.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_19683 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_19397.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_19299, var_inputVariableList_19341, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_19683, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 483)) ;
    var_parameterCppNameList_19246.addAssign_operation (var_parameterCppName_19683  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 492)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_19397.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_19683.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 494)) ;
      }
    }
    enumerator_19397.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_6 = object ;
    test_5 = temp_6.getter_mGrammarHasTranslateFeature (HERE).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_7 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_7.getter_mSyntaxDirectedTranslationResultVarName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 498)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 498)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_8 = object ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_9 = object ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_10 = object ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.getter_mGrammarHasTranslateFeature (HERE).boolEnum () ;
  if (kBoolTrue == test_12) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_13 = object ;
    temp_11 = temp_13.getter_mSyntaxDirectedTranslationResultVarName (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 503)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_8.getter_mGrammarName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)).add_operation (temp_9.getter_mLabelName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 501)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 501)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (var_sourceVar_18975, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 503)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 504)).add_operation (var_nameVar_19193, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)) ;
  cEnumerator_stringlist enumerator_20509 (var_parameterCppNameList_19246, kENUMERATION_UP) ;
  while (enumerator_20509.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_20509.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)) ;
    enumerator_20509.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_14 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 510)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 510)) ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_15 = object ;
  cEnumerator_stringlist enumerator_20742 (temp_15.getter_mAssignementList (HERE), kENUMERATION_UP) ;
  while (enumerator_20742.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_20742.current (HERE).getter_mValue (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)) ;
    enumerator_20742.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration.mSlotID,
                                            extensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction (defineExtensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_incDecInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_incDecInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                                                          extensionMethod_incDecInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_incDecInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_incDecInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST.mSlotID,
                                                          extensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfIncDecInstructionAST.mSlotID,
                                                          extensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                             GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST.mSlotID,
                                                          extensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_incDecInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionAST * object = (const cPtr_incDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_6160 ;
  GALGAS_string var_targetVariableCppName_6196 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_6246 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_incDecInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 185)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_incDecInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 186)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 186)) ;
          var_targetType_6160.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_6246.drop () ; // Release error dropped variable
          var_targetVariableCppName_6196.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 188)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_incDecInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 189)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 189)) ;
            var_targetType_6160.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_6246.drop () ; // Release error dropped variable
            var_targetVariableCppName_6196.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_6716 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 192)) ;
          const GALGAS_incDecInstructionAST temp_8 = object ;
          GALGAS_bool joker_6817 ; // Joker input parameter
          var_propertyMap_6716.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_6817, var_targetType_6160, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 193)) ;
          var_nameForCheckingFormalParameterUsing_6246 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_incDecInstructionAST temp_9 = object ;
          var_targetVariableCppName_6196 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 195)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 195)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_incDecInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_6160, var_targetVariableCppName_6196, var_nameForCheckingFormalParameterUsing_6246, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 198)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_7481 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_7481.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_7504 = var_targetType_6160.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 210)) ;
    GALGAS_bool var_isPublic_7581 ;
    var_propertyMap_7504.method_searchKey (enumerator_7481.current_mValue (HERE), var_isPublic_7581, var_targetType_6160, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 211)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_7581.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 212)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_7481.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 213)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 213)) ;
      }
    }
    enumerator_7481.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_6160.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 217)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 217)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 217)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_incDecInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_6160.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 219)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 219)), fixItArray16  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 218)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_17 = object ;
  const GALGAS_incDecInstructionAST temp_18 = object ;
  const GALGAS_incDecInstructionAST temp_19 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_17.getter_mInstructionLocation (HERE), var_targetVariableCppName_6196, var_targetType_6160, temp_18.getter_mStructAttributeList (HERE), temp_19.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 222))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 222)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_incDecInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                                                   extensionMethod_incDecInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_incDecInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_incDecInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecNoOVFInstructionAST * object = (const cPtr_incDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecNoOVFInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_8737 ;
  GALGAS_string var_targetVariableCppName_8769 ;
  {
  const GALGAS_incDecNoOVFInstructionAST temp_0 = object ;
  GALGAS_string joker_8870 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_0.getter_mReceiverName (HERE), var_targetType_8737, var_targetVariableCppName_8769, joker_8870, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 243)) ;
  }
  const GALGAS_incDecNoOVFInstructionAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_8910 (temp_1.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_8910.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_8933 = var_targetType_8737.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 245)) ;
    GALGAS_bool var_isPublic_9010 ;
    var_propertyMap_8933.method_searchKey (enumerator_8910.current_mValue (HERE), var_isPublic_9010, var_targetType_8737, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 246)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_isPublic_9010.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 247)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_8910.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 248)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 248)) ;
      }
    }
    enumerator_8910.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_targetType_8737.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 252)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 252)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 252)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_incDecNoOVFInstructionAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_8737.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 254)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 254)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 253)) ;
    }
  }
  const GALGAS_incDecNoOVFInstructionAST temp_7 = object ;
  const GALGAS_incDecNoOVFInstructionAST temp_8 = object ;
  const GALGAS_incDecNoOVFInstructionAST temp_9 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_7.getter_mInstructionLocation (HERE), var_targetVariableCppName_8769, var_targetType_8737, temp_8.getter_mStructAttributeList (HERE), temp_9.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 257))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 257)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST.mSlotID,
                                                   extensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                      const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecNoOVFInstructionAST * object = (const cPtr_selfIncDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecNoOVFInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_10197 ;
  GALGAS_string var_selfObjectCppName_10225 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 278)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfIncDecNoOVFInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 279)) ;
      var_selfObjectCppName_10225.drop () ; // Release error dropped variable
      var_selfTypeEntry_10197.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_10225 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_10197 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_10197.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 285)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 285)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 285)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfIncDecNoOVFInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_10197.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 286)) ;
    }
  }
  const GALGAS_selfIncDecNoOVFInstructionAST temp_6 = object ;
  const GALGAS_selfIncDecNoOVFInstructionAST temp_7 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_6.getter_mInstructionLocation (HERE), var_selfObjectCppName_10225, var_selfTypeEntry_10197, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 294)), temp_7.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 290))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 290)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST.mSlotID,
                                                   extensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecInstructionAST * object = (const cPtr_selfIncDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_11560 ;
  GALGAS_string var_selfObjectCppName_11588 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 311)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfIncDecInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 312)) ;
      var_selfObjectCppName_11588.drop () ; // Release error dropped variable
      var_selfTypeEntry_11560.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_11588 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_11560 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_11560.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 318)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 318)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfIncDecInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_11560.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 320)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 320)), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 319)) ;
    }
  }
  const GALGAS_selfIncDecInstructionAST temp_6 = object ;
  const GALGAS_selfIncDecInstructionAST temp_7 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_6.getter_mInstructionLocation (HERE), var_selfObjectCppName_11588, var_selfTypeEntry_11560, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 327)), temp_7.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 323))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 323)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfIncDecInstructionAST.mSlotID,
                                                   extensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_incDecInstructionForGeneration temp_0 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.getter_mReceiverCppName (HERE) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 364)) ;
  }
  const GALGAS_incDecInstructionForGeneration temp_1 = object ;
  GALGAS_string var_receiverCppName_13750 = temp_1.getter_mReceiverCppName (HERE) ;
  const GALGAS_incDecInstructionForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_13812 (temp_2.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_13812.hasCurrentObject ()) {
    var_receiverCppName_13750.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_13812.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-inc-dec.galgas", 367)).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 367)) ;
    enumerator_13812.gotoNextObject () ;
  }
  const GALGAS_incDecInstructionForGeneration temp_3 = object ;
  switch (temp_3.getter_mKind (HERE).enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      const GALGAS_incDecInstructionForGeneration temp_4 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_13750.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)).add_operation (extensionGetter_commaSourceFile (temp_4.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 373)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 374)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 374)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      const GALGAS_incDecInstructionForGeneration temp_5 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_13750.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)).add_operation (extensionGetter_commaSourceFile (temp_5.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 377)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 378)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 378)) ;
      }
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_incDecInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_incDecInstructionForGeneration.mSlotID,
                                            extensionMethod_incDecInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_incDecInstructionForGeneration_generateInstruction (defineExtensionMethod_incDecInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_incDecNoOVFInstructionForGeneration temp_0 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.getter_mReceiverCppName (HERE) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 392)) ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_1 = object ;
  GALGAS_string var_receiverCppName_14978 = temp_1.getter_mReceiverCppName (HERE) ;
  const GALGAS_incDecNoOVFInstructionForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_15040 (temp_2.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_15040.hasCurrentObject ()) {
    var_receiverCppName_14978.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_15040.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-inc-dec.galgas", 395)).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 395)) ;
    enumerator_15040.gotoNextObject () ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_3 = object ;
  switch (temp_3.getter_mKind (HERE).enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14978.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14978.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 402)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_incDecNoOVFInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration.mSlotID,
                                            extensionMethod_incDecNoOVFInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_incDecNoOVFInstructionForGeneration_generateInstruction (defineExtensionMethod_incDecNoOVFInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  const GALGAS_ifInstructionAST temp_0 = object ;
  cEnumerator_ifExpressionList enumerator_7140 (temp_0.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_7140.hasCurrentObject ()) {
    switch (enumerator_7140.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_7250 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_7140.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_7250->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_7418 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_7140.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_7418->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_7418->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)) ;
        {
        GALGAS_unifiedTypeMap_2D_entry joker_7416 ; // Joker input parameter
        GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, extractedValue_typeName, joker_7416 COMMA_SOURCE_FILE ("instruction-if.galgas", 200)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_7860 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_7140.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_receiverExpression = extractPtr_7860->mAssociatedValue0 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_parameters = extractPtr_7860->mAssociatedValue2 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_receiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202)) ;
        cEnumerator_optionalMethodActualArgumentList enumerator_7592 (extractedValue_parameters, kENUMERATION_UP) ;
        while (enumerator_7592.hasCurrentObject ()) {
          switch (enumerator_7592.current_mActualArgument (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgument::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_7731 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_7592.current_mActualArgument (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionAST extractedValue_expression = extractPtr_7731->mAssociatedValue0 ;
              callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
            {
            }
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
            {
            }
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
            {
            }
            break ;
          }
          enumerator_7592.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_7140.gotoNextObject () ;
  }
  const GALGAS_ifInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.getter_m_5F_then_5F_instructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 214)) ;
  const GALGAS_ifInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.getter_m_5F_else_5F_instructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                          extensionMethod_ifInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_ifInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_ifTestListForGeneration var_testListForGeneration_9323 = GALGAS_ifTestListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 252)) ;
  const GALGAS_ifInstructionAST temp_0 = object ;
  cEnumerator_ifExpressionList enumerator_9368 (temp_0.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_9368.hasCurrentObject ()) {
    switch (enumerator_9368.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_9950 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_9368.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_9950->mAssociatedValue0 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_9630 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 259)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_9630, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 256)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_9793 ;
        {
        const GALGAS_ifInstructionAST temp_1 = object ;
        routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_1.getter_mEndOf_5F_if_5F_instruction (HERE), var_analyzed_5F_if_5F_expression_9630, var_if_5F_expression_9793, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 264)) ;
        }
        var_testListForGeneration_9323.addAssign_operation (GALGAS_ifTestForGeneration::constructor_regular (var_if_5F_expression_9793  COMMA_SOURCE_FILE ("instruction-if.galgas", 270))  COMMA_SOURCE_FILE ("instruction-if.galgas", 270)) ;
        {
        ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 271)) ;
        }
        {
        ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 272)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_11795 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_9368.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_constantName = extractPtr_11795->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_11795->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_11795->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_10212 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 277)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzedExpression_10212, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 274)) ;
        GALGAS_unifiedTypeMap_2D_entry var_castType_10269 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 283)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_analyzedExpression_10212.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 285)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 285)).getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 285)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_unifiedTypeMap_2D_entry var_t_10563 = var_castType_10269 ;
            GALGAS_bool var_found_10594 = GALGAS_bool (kIsEqual, var_t_10563.objectCompare (var_analyzedExpression_10212.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 288)))) ;
            if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 289)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 289)).isValid ()) {
              uint32_t variant_10647 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 289)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 289)).uintValue () ;
              bool loop_10647 = true ;
              while (loop_10647) {
                loop_10647 = var_found_10594.operator_not (SOURCE_FILE ("instruction-if.galgas", 290)).operator_and (var_t_10563.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 290)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 290)).operator_not (SOURCE_FILE ("instruction-if.galgas", 290)) COMMA_SOURCE_FILE ("instruction-if.galgas", 290)).isValid () ;
                if (loop_10647) {
                  loop_10647 = var_found_10594.operator_not (SOURCE_FILE ("instruction-if.galgas", 290)).operator_and (var_t_10563.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 290)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 290)).operator_not (SOURCE_FILE ("instruction-if.galgas", 290)) COMMA_SOURCE_FILE ("instruction-if.galgas", 290)).boolValue () ;
                }
                if (loop_10647 && (0 == variant_10647)) {
                  loop_10647 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 289)) ;
                }
                if (loop_10647) {
                  variant_10647 -- ;
                  var_t_10563 = var_t_10563.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 291)) ;
                  var_found_10594 = GALGAS_bool (kIsEqual, var_t_10563.objectCompare (var_analyzedExpression_10212.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 292)))) ;
                }
              }
            }
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_found_10594.operator_not (SOURCE_FILE ("instruction-if.galgas", 294)).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (extractedValue_typeName.getter_location (SOURCE_FILE ("instruction-if.galgas", 295)), GALGAS_string ("the '@").add_operation (extractedValue_typeName.getter_string (SOURCE_FILE ("instruction-if.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 296)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 296)).add_operation (var_analyzedExpression_10212.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 296)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 296)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 296)), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 295)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_2) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_analyzedExpression_10212.getter_mLocation (SOURCE_FILE ("instruction-if.galgas", 300)), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_analyzedExpression_10212.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 301)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 300)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 301)), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 300)) ;
        }
        {
        ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 303)) ;
        }
        {
        ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 304)) ;
        }
        GALGAS_string var_targetVariableCppName_11381 = GALGAS_string ("var_").add_operation (extractedValue_constantName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 305)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 305)).add_operation (extractedValue_constantName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 306)).getter_string (SOURCE_FILE ("instruction-if.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 306)) ;
        {
        ioArgument_ioVariableMap.setter_insertLocalConstant (extractedValue_constantName, var_castType_10269, var_targetVariableCppName_11381, var_targetVariableCppName_11381, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 307)) ;
        }
        var_testListForGeneration_9323.addAssign_operation (GALGAS_ifTestForGeneration::constructor_letExp (var_targetVariableCppName_11381, var_analyzedExpression_10212, var_castType_10269  COMMA_SOURCE_FILE ("instruction-if.galgas", 313))  COMMA_SOURCE_FILE ("instruction-if.galgas", 313)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_12192 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_9368.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_receiverExpression = extractPtr_12192->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalMethodName = extractPtr_12192->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_parameters = extractPtr_12192->mAssociatedValue2 ;
        {
        routine_analyzeOptionalMethodCall (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, extractedValue_receiverExpression, extractedValue_optionalMethodName, extractedValue_parameters, var_testListForGeneration_9323, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 319)) ;
        }
      }
      break ;
    }
    enumerator_9368.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_12518 ;
  {
  const GALGAS_ifInstructionAST temp_6 = object ;
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 336)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 337)), temp_6.getter_m_5F_then_5F_instructionList (HERE), ioArgument_ioVariableMap, var_then_5F_instructionList_12518, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 332)) ;
  }
  const GALGAS_ifInstructionAST temp_7 = object ;
  GALGAS_ifExpressionList var_expressions_12540 = temp_7.getter_mExpressions (HERE) ;
  {
  GALGAS_ifExpressionKind joker_12587 ; // Joker input parameter
  var_expressions_12540.setter_popLast (joker_12587, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 343)) ;
  }
  cEnumerator_ifExpressionList enumerator_12623 (var_expressions_12540, kENUMERATION_UP) ;
  while (enumerator_12623.hasCurrentObject ()) {
    {
    const GALGAS_ifInstructionAST temp_8 = object ;
    ioArgument_ioVariableMap.setter_closeBranch (temp_8.getter_mEndOf_5F_then_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 345)) ;
    }
    {
    const GALGAS_ifInstructionAST temp_9 = object ;
    ioArgument_ioVariableMap.setter_closeOverride (temp_9.getter_mEndOf_5F_then_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 346)) ;
    }
    enumerator_12623.gotoNextObject () ;
  }
  {
  const GALGAS_ifInstructionAST temp_10 = object ;
  ioArgument_ioVariableMap.setter_closeBranch (temp_10.getter_mEndOf_5F_then_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 348)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_13140 ;
  {
  const GALGAS_ifInstructionAST temp_11 = object ;
  const GALGAS_ifInstructionAST temp_12 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 354)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 355)), temp_11.getter_m_5F_else_5F_instructionList (HERE), temp_12.getter_mEndOf_5F_if_5F_instruction (HERE), ioArgument_ioVariableMap, var_else_5F_instructionList_13140, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 350)) ;
  }
  {
  const GALGAS_ifInstructionAST temp_13 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_13.getter_mEndOf_5F_if_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 361)) ;
  }
  const GALGAS_ifInstructionAST temp_14 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (temp_14.getter_mEndOf_5F_then_5F_branch (HERE), var_testListForGeneration_9323, var_then_5F_instructionList_12518, var_else_5F_instructionList_13140  COMMA_SOURCE_FILE ("instruction-if.galgas", 363))  COMMA_SOURCE_FILE ("instruction-if.galgas", 363)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                   extensionMethod_ifInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_ifInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOptionalMethodCall'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeOptionalMethodCall (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                        const GALGAS_semanticExpressionAST constinArgument_inReceiverExpression,
                                        const GALGAS_lstring constinArgument_inOptionalMethodName,
                                        const GALGAS_optionalMethodActualArgumentList constinArgument_inActualParameters,
                                        GALGAS_ifTestListForGeneration & ioArgument_ioTestListForGeneration,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_14420 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 389)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_14420, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 386)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 394)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 395)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_14572 = var_receiverExpression_14420.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 397)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_14650 = var_receiverType_14572.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 398)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_14821 ;
  var_optionalMethodMap_14650.method_searchKey (constinArgument_inOptionalMethodName, var_optionalMethodSignature_14821, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 400)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 402)).objectCompare (var_optionalMethodSignature_14821.getter_length (SOURCE_FILE ("instruction-if.galgas", 402)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.getter_location (SOURCE_FILE ("instruction-if.galgas", 403)), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.getter_string (SOURCE_FILE ("instruction-if.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 404)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 404)).add_operation (var_receiverType_14572.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 404)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 404)).add_operation (var_optionalMethodSignature_14821.getter_length (SOURCE_FILE ("instruction-if.galgas", 405)).getter_string (SOURCE_FILE ("instruction-if.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 404)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 405)).add_operation (constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 406)).getter_string (SOURCE_FILE ("instruction-if.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 405)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 406)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 403)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_15314 = GALGAS_optionalMethodActualArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 408)) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_15382 (constinArgument_inActualParameters, kENUMERATION_UP) ;
    cEnumerator_optionalMethodSignature enumerator_15456 (var_optionalMethodSignature_14821, kENUMERATION_UP) ;
    while (enumerator_15382.hasCurrentObject () && enumerator_15456.hasCurrentObject ()) {
      switch (enumerator_15382.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_16178 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_15382.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_expression = extractPtr_16178->mAssociatedValue0 ;
          const GALGAS_location extractedValue_location = extractPtr_16178->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_15781 ;
          callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_15456.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_15781, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 413)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsNotEqual, enumerator_15456.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_15382.current_mSelector (HERE).getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_2) {
              GALGAS_string temp_3 ;
              const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_15456.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_4) {
                temp_3 = GALGAS_string (":") ;
              }else if (kBoolFalse == test_4) {
                temp_3 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_15382.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-if.galgas", 422)), GALGAS_string ("the selector should be '!").add_operation (enumerator_15456.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 423)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 423)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 423)), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 422)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_15456.current_mFormalArgumentType (HERE), var_exp_15781.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 425)), extractedValue_location, var_exp_15781, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 425)) ;
          }
          var_actualParameterList_15314.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualOutput (var_exp_15781  COMMA_SOURCE_FILE ("instruction-if.galgas", 426))  COMMA_SOURCE_FILE ("instruction-if.galgas", 426)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_17161 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_15382.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_actualTypeName = extractPtr_17161->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_constantName = extractPtr_17161->mAssociatedValue1 ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            GALGAS_bool test_7 = GALGAS_bool (kIsNotEqual, extractedValue_actualTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_7.boolEnum ()) {
              test_7 = GALGAS_bool (kIsNotEqual, enumerator_15456.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 428)).objectCompare (extractedValue_actualTypeName.getter_string (HERE))) ;
            }
            test_6 = test_7.boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              appendFixItActions (fixItArray8, kFixItReplace, GALGAS_string ("@").add_operation (enumerator_15456.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 431))) ;
              inCompiler->emitSemanticError (extractedValue_actualTypeName.getter_location (SOURCE_FILE ("instruction-if.galgas", 429)), GALGAS_string ("the '@").add_operation (enumerator_15456.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 430)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 430)), fixItArray8  COMMA_SOURCE_FILE ("instruction-if.galgas", 429)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_16550 = GALGAS_string ("var_").add_operation (extractedValue_constantName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 433)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 433)).add_operation (extractedValue_constantName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 434)).getter_string (SOURCE_FILE ("instruction-if.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 434)) ;
          {
          ioArgument_ioVariableMap.setter_insertLocalConstant (extractedValue_constantName, enumerator_15456.current_mFormalArgumentType (HERE), var_targetVariableCppName_16550, var_targetVariableCppName_16550, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 435)) ;
          }
          var_actualParameterList_15314.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualLetInput (enumerator_15456.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 441)), var_targetVariableCppName_16550  COMMA_SOURCE_FILE ("instruction-if.galgas", 441))  COMMA_SOURCE_FILE ("instruction-if.galgas", 441)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsNotEqual, enumerator_15456.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_15382.current_mSelector (HERE).getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_9) {
              GALGAS_string temp_10 ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, enumerator_15456.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                temp_10 = GALGAS_string (":") ;
              }else if (kBoolFalse == test_11) {
                temp_10 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_15382.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-if.galgas", 443)), GALGAS_string ("the selector should be '\?").add_operation (enumerator_15456.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 444)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 444)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 444)), fixItArray12  COMMA_SOURCE_FILE ("instruction-if.galgas", 443)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_18152 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_15382.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_actualTypeName = extractPtr_18152->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_variableName = extractPtr_18152->mAssociatedValue1 ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            GALGAS_bool test_14 = GALGAS_bool (kIsNotEqual, extractedValue_actualTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_14.boolEnum ()) {
              test_14 = GALGAS_bool (kIsNotEqual, enumerator_15456.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 447)).objectCompare (extractedValue_actualTypeName.getter_string (HERE))) ;
            }
            test_13 = test_14.boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              appendFixItActions (fixItArray15, kFixItReplace, GALGAS_string ("@").add_operation (enumerator_15456.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 450))) ;
              inCompiler->emitSemanticError (extractedValue_actualTypeName.getter_location (SOURCE_FILE ("instruction-if.galgas", 448)), GALGAS_string ("the '@").add_operation (enumerator_15456.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 449)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 449)), fixItArray15  COMMA_SOURCE_FILE ("instruction-if.galgas", 448)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_17534 = GALGAS_string ("var_").add_operation (extractedValue_variableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 452)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 452)).add_operation (extractedValue_variableName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 453)).getter_string (SOURCE_FILE ("instruction-if.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 453)) ;
          {
          ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (extractedValue_variableName, enumerator_15456.current_mFormalArgumentType (HERE), var_targetVariableCppName_17534, var_targetVariableCppName_17534, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 454)) ;
          }
          var_actualParameterList_15314.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (enumerator_15456.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)), var_targetVariableCppName_17534  COMMA_SOURCE_FILE ("instruction-if.galgas", 460))  COMMA_SOURCE_FILE ("instruction-if.galgas", 460)) ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = GALGAS_bool (kIsNotEqual, enumerator_15456.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_15382.current_mSelector (HERE).getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_16) {
              GALGAS_string temp_17 ;
              const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, enumerator_15456.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_18) {
                temp_17 = GALGAS_string (":") ;
              }else if (kBoolFalse == test_18) {
                temp_17 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (enumerator_15382.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-if.galgas", 462)), GALGAS_string ("the selector should be '\?").add_operation (enumerator_15456.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 463)).add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 463)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 463)), fixItArray19  COMMA_SOURCE_FILE ("instruction-if.galgas", 462)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_18657 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_15382.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_checkSelector = extractPtr_18657->mAssociatedValue0 ;
          const GALGAS_location extractedValue_location = extractPtr_18657->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_idx = extractPtr_18657->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_18245 = GALGAS_string ("var_unused_").add_operation (extractedValue_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 466)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 466)).add_operation (extractedValue_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 466)).getter_string (SOURCE_FILE ("instruction-if.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 466)) ;
          var_actualParameterList_15314.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (enumerator_15456.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 467)), var_targetVariableCppName_18245  COMMA_SOURCE_FILE ("instruction-if.galgas", 467))  COMMA_SOURCE_FILE ("instruction-if.galgas", 467)) ;
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            GALGAS_bool test_21 = extractedValue_checkSelector ;
            if (kBoolTrue == test_21.boolEnum ()) {
              test_21 = GALGAS_bool (kIsNotEqual, enumerator_15456.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_15382.current_mSelector (HERE).getter_string (HERE))) ;
            }
            test_20 = test_21.boolEnum () ;
            if (kBoolTrue == test_20) {
              GALGAS_string temp_22 ;
              const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, enumerator_15456.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_23) {
                temp_22 = GALGAS_string (":") ;
              }else if (kBoolFalse == test_23) {
                temp_22 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray24 ;
              inCompiler->emitSemanticError (enumerator_15382.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-if.galgas", 469)), GALGAS_string ("the selector should be '\?").add_operation (enumerator_15456.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 470)).add_operation (temp_22, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 470)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 470)), fixItArray24  COMMA_SOURCE_FILE ("instruction-if.galgas", 469)) ;
            }
          }
        }
        break ;
      }
      enumerator_15382.gotoNextObject () ;
      enumerator_15456.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::constructor_optionalMethodCall (var_receiverExpression_14420, constinArgument_inOptionalMethodName, var_actualParameterList_15314  COMMA_SOURCE_FILE ("instruction-if.galgas", 474))  COMMA_SOURCE_FILE ("instruction-if.galgas", 474)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_testVar_21608 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 551)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 552)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_21608, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 553)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 553)) ;
  const GALGAS_ifInstructionForGeneration temp_0 = object ;
  cEnumerator_ifTestListForGeneration enumerator_21794 (temp_0.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_21794.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_21608, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 555)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 555)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 555)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 556)) ;
    }
    switch (enumerator_21794.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_22209 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_21794.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_exp = extractPtr_22209->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_22126 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_22126, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 559)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_21608.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 566)).add_operation (var_cppVarName_22126, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 566)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 566)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 566)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_22840 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_21794.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_targetVarCppName = extractPtr_22840->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_exp = extractPtr_22840->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMap_2D_entry extractedValue_type = extractPtr_22840->mAssociatedValue2 ;
        GALGAS_string var_typeName_22274 = extractedValue_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 568)) ;
        GALGAS_string var_cppVarName_22485 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_22485, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 569)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_typeName_22274, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 576)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 576)).add_operation (extractedValue_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 576)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 576)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (dynamic_cast <const cPtr_").add_operation (var_typeName_22274, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 577)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 577)).add_operation (var_cppVarName_22485, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 577)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 577)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 577)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL == ").add_operation (extractedValue_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 578)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 578)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_21608, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 579)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 579)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 580)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * extractPtr_24567 = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) (enumerator_21794.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_receiverExpression = extractPtr_24567->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalMethodName = extractPtr_24567->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentListForGeneration extractedValue_parameters = extractPtr_24567->mAssociatedValue2 ;
        GALGAS_string var_cppVarName_23113 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_receiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_23113, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 582)) ;
        GALGAS_stringlist var_actualParameterNameList_23163 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 589)) ;
        cEnumerator_optionalMethodActualArgumentListForGeneration enumerator_23204 (extractedValue_parameters, kENUMERATION_UP) ;
        while (enumerator_23204.hasCurrentObject ()) {
          switch (enumerator_23204.current_mParameter (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgumentForGeneration::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * extractPtr_23552 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) (enumerator_23204.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionForGeneration extractedValue_expression = extractPtr_23552->mAssociatedValue0 ;
              GALGAS_string var_argumentCppName_23486 ;
              callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_expression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_23486, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 593)) ;
              var_actualParameterNameList_23163.addAssign_operation (var_argumentCppName_23486  COMMA_SOURCE_FILE ("instruction-if.galgas", 600)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualLetInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * extractPtr_23764 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) (enumerator_23204.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_typeName = extractPtr_23764->mAssociatedValue0 ;
              const GALGAS_string extractedValue_constantName = extractPtr_23764->mAssociatedValue1 ;
              var_actualParameterNameList_23163.addAssign_operation (extractedValue_constantName  COMMA_SOURCE_FILE ("instruction-if.galgas", 602)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 603)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 603)).add_operation (extractedValue_constantName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 603)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 603)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualVarInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * extractPtr_23976 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) (enumerator_23204.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_typeName = extractPtr_23976->mAssociatedValue0 ;
              const GALGAS_string extractedValue_variableName = extractPtr_23976->mAssociatedValue1 ;
              var_actualParameterNameList_23163.addAssign_operation (extractedValue_variableName  COMMA_SOURCE_FILE ("instruction-if.galgas", 605)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 606)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 606)).add_operation (extractedValue_variableName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 606)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 606)) ;
            }
            break ;
          }
          enumerator_23204.gotoNextObject () ;
        }
        GALGAS_string var_boolResultName_24023 = GALGAS_string ("optionalResult").add_operation (extractedValue_optionalMethodName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 609)).getter_string (SOURCE_FILE ("instruction-if.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 609)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolResultName_24023, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 610)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 610)).add_operation (var_cppVarName_23113, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 610)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".optional_").add_operation (extractedValue_optionalMethodName.getter_string (SOURCE_FILE ("instruction-if.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 611)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 611)) ;
        cEnumerator_stringlist enumerator_24275 (var_actualParameterNameList_23163, kENUMERATION_UP) ;
        while (enumerator_24275.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_24275.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 614)) ;
          if (enumerator_24275.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 616)) ;
          }
          enumerator_24275.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 618)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (!").add_operation (var_boolResultName_24023, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 619)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 619)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 619)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_21608, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 620)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 620)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 621)) ;
      }
      break ;
    }
    enumerator_21794.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_21608, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 625)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 625)) ;
  {
  const GALGAS_ifInstructionForGeneration temp_1 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.getter_m_5F_then_5F_instructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 626)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 634)) ;
  const GALGAS_ifInstructionForGeneration temp_2 = object ;
  cEnumerator_ifTestListForGeneration enumerator_24935 (temp_2.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_24935.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 636)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 637)) ;
    enumerator_24935.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ifInstructionForGeneration temp_4 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.getter_m_5F_else_5F_instructionList (HERE).getter_length (SOURCE_FILE ("instruction-if.galgas", 640)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_21608, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 641)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 641)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 641)) ;
      {
      const GALGAS_ifInstructionForGeneration temp_5 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.getter_m_5F_else_5F_instructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 642)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 650)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_ifInstructionForGeneration.mSlotID,
                                            extensionMethod_ifInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionForGeneration_generateInstruction (defineExtensionMethod_ifInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST.mSlotID,
                                                          extensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext (defineExtensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localConstantDeclarationWithAssignmentAST * object = (const cPtr_localConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localConstantDeclarationWithAssignmentAST) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 93)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST.mSlotID,
                                                          extensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineExtensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * object = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.getter_mOptionalTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = object ;
      GALGAS_unifiedTypeMap_2D_entry joker_3906 ; // Joker input parameter
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, temp_2.getter_mOptionalTypeName (HERE), joker_3906 COMMA_SOURCE_FILE ("instruction-let.galgas", 102)) ;
      }
    }
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_3.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST.mSlotID,
                                                          extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_undefinedLocalConstantDeclarationAST * object = (const cPtr_undefinedLocalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_undefinedLocalConstantDeclarationAST) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_4601 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mConstantTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 118)) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_1 = object ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_4734 = GALGAS_string ("var_").add_operation (temp_1.getter_mConstantName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (temp_2.getter_mConstantName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).getter_string (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)) ;
  {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_3 = object ;
  ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (temp_3.getter_mConstantName (HERE), var_targetType_4601, var_targetVariableCppName_4734, var_targetVariableCppName_4734, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 120)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (var_targetType_4601, var_targetVariableCppName_4734  COMMA_SOURCE_FILE ("instruction-let.galgas", 127))  COMMA_SOURCE_FILE ("instruction-let.galgas", 127)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST.mSlotID,
                                                   extensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction (defineExtensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localConstantDeclarationWithAssignmentAST * object = (const cPtr_localConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localConstantDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_5881 ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-let.galgas", 145)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_5881, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 142)) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_1 = object ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_5940 = GALGAS_string ("var_").add_operation (temp_1.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).add_operation (temp_2.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).getter_string (SOURCE_FILE ("instruction-let.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)) ;
  {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_3 = object ;
  ioArgument_ioVariableMap.setter_insertLocalConstant (temp_3.getter_mVariableName (HERE), var_expression_5881.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 152)), var_targetVariableCppName_5940, var_targetVariableCppName_5940, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 152)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_5881.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 155)), GALGAS_bool (true), var_targetVariableCppName_5940, var_expression_5881  COMMA_SOURCE_FILE ("instruction-let.galgas", 154))  COMMA_SOURCE_FILE ("instruction-let.galgas", 154)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST.mSlotID,
                                                   extensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineExtensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * object = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_6885 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 170)) ;
  GALGAS_semanticExpressionForGeneration var_expression_7243 ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_6885, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7243, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 172)) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = object ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = object ;
  GALGAS_string var_targetVariableCppName_7302 = GALGAS_string ("var_").add_operation (temp_2.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).add_operation (temp_3.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).getter_string (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = object ;
    test_4 = temp_5.getter_mIsConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = object ;
      ioArgument_ioVariableMap.setter_insertLocalConstant (temp_6.getter_mVariableName (HERE), var_targetType_6885, var_targetVariableCppName_7302, var_targetVariableCppName_7302, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 183)) ;
      }
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = object ;
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (temp_7.getter_mVariableName (HERE), var_targetType_6885, var_targetVariableCppName_7302, var_targetVariableCppName_7302, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 185)) ;
    }
  }
  {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_6885, var_expression_7243.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 188)), temp_8.getter_mInstructionLocation (HERE), var_expression_7243, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 188)) ;
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType_6885, temp_9.getter_mIsConstant (HERE), var_targetVariableCppName_7302, var_expression_7243  COMMA_SOURCE_FILE ("instruction-let.galgas", 190))  COMMA_SOURCE_FILE ("instruction-let.galgas", 190)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST.mSlotID,
                                                   extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mTargetType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 225)) ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_1 = object ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.getter_mTargetType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)).add_operation (temp_2.getter_mCppVariableName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 226)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration.mSlotID,
                                            extensionMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction (defineExtensionMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithSourceExpressionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mTargetType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 238)) ;
  GALGAS_string var_sourceVar_10152 ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_10152, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 239)) ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = object ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_2.getter_mTargetType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (temp_3.getter_mCppVariableName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (var_sourceVar_10152, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 246)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration.mSlotID,
                                            extensionMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (defineExtensionMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_logInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionAST * object = (const cPtr_logInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionAST) ;
  const GALGAS_logInstructionAST temp_0 = object ;
  cEnumerator_logListAST enumerator_2316 (temp_0.getter_mLogList (HERE), kENUMERATION_UP) ;
  while (enumerator_2316.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_2316.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 67)) ;
    enumerator_2316.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_logInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_logInstructionAST.mSlotID,
                                                          extensionMethod_logInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_logInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_logInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_logInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionAST * object = (const cPtr_logInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionAST) ;
  const GALGAS_logInstructionAST temp_0 = object ;
  cEnumerator_logListAST enumerator_2983 (temp_0.getter_mLogList (HERE), kENUMERATION_UP) ;
  while (enumerator_2983.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_3067 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_2983.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-log.galgas", 87)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3067, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 84)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_2983.current_mLogMessage (HERE), var_expression_3067  COMMA_SOURCE_FILE ("instruction-log.galgas", 93))  COMMA_SOURCE_FILE ("instruction-log.galgas", 93)) ;
    enumerator_2983.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_logInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_logInstructionAST.mSlotID,
                                                   extensionMethod_logInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_logInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_logInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_logVar_4412 ;
  const GALGAS_logInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mLogExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_4412, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 118)) ;
  const GALGAS_logInstructionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_4412.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 125)).add_operation (temp_1.getter_mLogMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("instruction-log.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 125)) ;
  const GALGAS_logInstructionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.getter_mLogMessage (HERE).getter_location (SOURCE_FILE ("instruction-log.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 126)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_logInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_logInstructionForGeneration.mSlotID,
                                            extensionMethod_logInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_logInstructionForGeneration_generateInstruction (defineExtensionMethod_logInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_loopInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionAST * object = (const cPtr_loopInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionAST) ;
  const GALGAS_loopInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mVariantExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 78)) ;
  const GALGAS_loopInstructionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mLoopExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 79)) ;
  const GALGAS_loopInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.getter_mFirstInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 80)) ;
  const GALGAS_loopInstructionAST temp_3 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.getter_mSecondInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 81)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loopInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_loopInstructionAST.mSlotID,
                                                          extensionMethod_loopInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loopInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_loopInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_loopInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionAST * object = (const cPtr_loopInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_variantExpression_3820 ;
  const GALGAS_loopInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mVariantExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 99)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variantExpression_3820, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 96)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_variantExpression_3820.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 105)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_loopInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mEndOfVariantExpression (HERE), GALGAS_string ("the variant expression type should be '@").add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (var_variantExpression_3820.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 107)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop.galgas", 106)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_4461 ;
  const GALGAS_loopInstructionAST temp_4 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_4.getter_mLoopExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 114)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression_4461, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 111)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_loopExpression_4461.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 120)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_loopInstructionAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mEndOfLoopExpression (HERE), GALGAS_string ("the loop expression type should be '@").add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (var_loopExpression_4461.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 122)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), fixItArray7  COMMA_SOURCE_FILE ("instruction-loop.galgas", 121)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 125)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_5191 ;
  {
  const GALGAS_loopInstructionAST temp_8 = object ;
  const GALGAS_loopInstructionAST temp_9 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 132)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 133)), temp_8.getter_mFirstInstructions (HERE), temp_9.getter_mEndOfFirstInstructions (HERE), ioArgument_ioVariableMap, var_first_5F_instructionList_5191, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 128)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_5523 ;
  {
  const GALGAS_loopInstructionAST temp_10 = object ;
  const GALGAS_loopInstructionAST temp_11 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 145)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 146)), temp_10.getter_mSecondInstructions (HERE), temp_11.getter_mEndOfSecondInstructions (HERE), ioArgument_ioVariableMap, var_second_5F_instructionList_5523, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 141)) ;
  }
  {
  const GALGAS_loopInstructionAST temp_12 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_12.getter_mEndOfLoopInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 153)) ;
  }
  const GALGAS_loopInstructionAST temp_13 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionForGeneration::constructor_new (temp_13.getter_mInstructionLocation (HERE), var_variantExpression_3820, var_first_5F_instructionList_5191, var_loopExpression_4461, var_second_5F_instructionList_5523  COMMA_SOURCE_FILE ("instruction-loop.galgas", 155))  COMMA_SOURCE_FILE ("instruction-loop.galgas", 155)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loopInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_loopInstructionAST.mSlotID,
                                                   extensionMethod_loopInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loopInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_loopInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_variantCppVarName_7278 ;
  const GALGAS_loopInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mVariantExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_7278, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 185)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_7278, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 193)) ;
  }
  const GALGAS_loopInstructionForGeneration temp_1 = object ;
  GALGAS_string var_variantVar_7416 = GALGAS_string ("variant_").add_operation (temp_1.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_7416, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (var_variantCppVarName_7278, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)) ;
  const GALGAS_loopInstructionForGeneration temp_2 = object ;
  GALGAS_string var_loopVar_7600 = GALGAS_string ("loop_").add_operation (temp_2.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_7600, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (var_loopVar_7600, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 199)) ;
  }
  {
  const GALGAS_loopInstructionForGeneration temp_3 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.getter_mFirstInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 200)) ;
  }
  GALGAS_string var_loopExpressionVar_8051 ;
  const GALGAS_loopInstructionForGeneration temp_4 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_4.getter_mLoopExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_8051, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 209)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7600.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopExpressionVar_8051, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopVar_7600, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (var_loopVar_7600, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (var_loopExpressionVar_8051, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) ;
  }
  const GALGAS_loopInstructionForGeneration temp_5 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_7600, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_variantVar_7416, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (")) {\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_loopVar_7600, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (GALGAS_string (" = false ;\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (extensionGetter_sourceFile (temp_5.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string (") ;\n"
    "}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 218)).add_operation (var_loopVar_7600, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_7416, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)) ;
  {
  const GALGAS_loopInstructionForGeneration temp_6 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_6.getter_mSecondInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 221)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loopInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_loopInstructionForGeneration.mSlotID,
                                            extensionMethod_loopInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loopInstructionForGeneration_generateInstruction (defineExtensionMethod_loopInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@matchInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_matchInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionAST * object = (const cPtr_matchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionAST) ;
  const GALGAS_matchInstructionAST temp_0 = object ;
  cEnumerator_semanticExpressionListAST enumerator_4852 (temp_0.getter_mMatchedExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_4852.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_4852.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 135)) ;
    enumerator_4852.gotoNextObject () ;
  }
  const GALGAS_matchInstructionAST temp_1 = object ;
  cEnumerator_matchInstructionBranchListAST enumerator_4969 (temp_1.getter_mMatchInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_4969.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4969.current_mMatchBranchInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 138)) ;
    enumerator_4969.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_matchInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_matchInstructionAST.mSlotID,
                                                          extensionMethod_matchInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_matchInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_matchInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@matchInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_matchInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionAST * object = (const cPtr_matchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionAST) ;
  GALGAS_semanticExpressionListForGeneration var_expressionList_5650 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 152)) ;
  const GALGAS_matchInstructionAST temp_0 = object ;
  cEnumerator_semanticExpressionListAST enumerator_5731 (temp_0.getter_mMatchedExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_5731.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_matchedExpression_6008 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_5731.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-match.galgas", 158)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_matchedExpression_6008, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 155)) ;
    var_expressionList_5650.addAssign_operation (var_matchedExpression_6008  COMMA_SOURCE_FILE ("instruction-match.galgas", 163)) ;
    GALGAS_unifiedTypeMap_2D_entry var_type_6123 = var_matchedExpression_6008.getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 165)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_type_6123.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).getter_isClassType (SOURCE_FILE ("instruction-match.galgas", 166)).operator_not (SOURCE_FILE ("instruction-match.galgas", 166)).operator_and (GALGAS_bool (kIsNotEqual, var_type_6123.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 166)))) COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5731.current_mEndOfExpressionLocation (HERE), GALGAS_string ("this expression is an instance of '@").add_operation (var_type_6123.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)).add_operation (GALGAS_string ("' type, but this type is neither an enumeration, neither a class"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)), fixItArray2  COMMA_SOURCE_FILE ("instruction-match.galgas", 167)) ;
      }
    }
    enumerator_5731.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 172)) ;
  }
  GALGAS_matchInstructionBranchListForGeneration var_matchInstructionBranchList_6543 = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 173)) ;
  const GALGAS_matchInstructionAST temp_3 = object ;
  cEnumerator_matchInstructionBranchListAST enumerator_6633 (temp_3.getter_mMatchInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_6633.hasCurrentObject ()) {
    GALGAS_localConstantList var_localConstantList_6680 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 176)) ;
    GALGAS_matchListForGeneration var_matchListForGeneration_6734 = GALGAS_matchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 177)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, var_expressionList_5650.getter_length (SOURCE_FILE ("instruction-match.galgas", 178)).objectCompare (enumerator_6633.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 178)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_semanticExpressionListForGeneration enumerator_6858 (var_expressionList_5650, kENUMERATION_UP) ;
        cEnumerator_matchEntryListAST enumerator_6881 (enumerator_6633.current_mMatchEntryList (HERE), kENUMERATION_UP) ;
        while (enumerator_6858.hasCurrentObject () && enumerator_6881.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_type_6901 = enumerator_6858.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 180)) ;
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_type_6901.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 181)).getter_isClassType (SOURCE_FILE ("instruction-match.galgas", 181)).boolEnum () ;
            if (kBoolTrue == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = enumerator_6881.current_mIsType (HERE).boolEnum () ;
                if (kBoolTrue == test_6) {
                  GALGAS_unifiedTypeMap_2D_entry var_namedType_7032 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_6881.current_mTypeNameOrEnumerationConstantName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 183)) ;
                  GALGAS_unifiedTypeMap_2D_entry var_t_7186 = var_type_6901 ;
                  GALGAS_bool var_found_7217 = GALGAS_bool (kIsEqual, var_t_7186.objectCompare (var_namedType_7032)) ;
                  if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-match.galgas", 186)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).isValid ()) {
                    uint32_t variant_7251 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-match.galgas", 186)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).uintValue () ;
                    bool loop_7251 = true ;
                    while (loop_7251) {
                      loop_7251 = var_found_7217.operator_not (SOURCE_FILE ("instruction-match.galgas", 187)).operator_and (var_t_7186.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 187)).operator_not (SOURCE_FILE ("instruction-match.galgas", 187)) COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).isValid () ;
                      if (loop_7251) {
                        loop_7251 = var_found_7217.operator_not (SOURCE_FILE ("instruction-match.galgas", 187)).operator_and (var_t_7186.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 187)).operator_not (SOURCE_FILE ("instruction-match.galgas", 187)) COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).boolValue () ;
                      }
                      if (loop_7251 && (0 == variant_7251)) {
                        loop_7251 = false ;
                        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-match.galgas", 186)) ;
                      }
                      if (loop_7251) {
                        variant_7251 -- ;
                        var_t_7186 = var_t_7186.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 188)) ;
                        var_found_7217 = GALGAS_bool (kIsEqual, var_t_7186.objectCompare (var_namedType_7032)) ;
                      }
                    }
                  }
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = var_found_7217.operator_not (SOURCE_FILE ("instruction-match.galgas", 191)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      TC_Array <C_FixItDescription> fixItArray8 ;
                      inCompiler->emitSemanticError (enumerator_6881.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 192)), GALGAS_string ("the '@").add_operation (enumerator_6881.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (var_type_6901.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)), fixItArray8  COMMA_SOURCE_FILE ("instruction-match.galgas", 192)) ;
                    }
                  }
                  if (kBoolFalse == test_7) {
                    enumGalgasBool test_9 = kBoolTrue ;
                    if (kBoolTrue == test_9) {
                      test_9 = GALGAS_bool (kIsStrictSup, enumerator_6881.current_mLocalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 194)).getter_length (SOURCE_FILE ("instruction-match.galgas", 194)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                      if (kBoolTrue == test_9) {
                        var_localConstantList_6680.addAssign_operation (var_t_7186, enumerator_6881.current_mLocalConstantName (HERE), GALGAS_bool (false), GALGAS_string ("match_instruction_constant_name")  COMMA_SOURCE_FILE ("instruction-match.galgas", 195)) ;
                      }
                    }
                  }
                }
              }
              if (kBoolFalse == test_6) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_6881.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 198)), GALGAS_string ("a type that inherits from '@").add_operation (enumerator_6858.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 199)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)).add_operation (GALGAS_string ("' class is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)), fixItArray10  COMMA_SOURCE_FILE ("instruction-match.galgas", 198)) ;
              }
              var_matchListForGeneration_6734.addAssign_operation (GALGAS_bool (true), enumerator_6881.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 201)), enumerator_6881.current_mLocalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 201))  COMMA_SOURCE_FILE ("instruction-match.galgas", 201)) ;
            }
          }
          if (kBoolFalse == test_5) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsEqual, var_type_6901.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 202)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 202)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = enumerator_6881.current_mIsType (HERE).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (enumerator_6881.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 204)), GALGAS_string ("a constant of the '@").add_operation (enumerator_6858.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 205)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)).add_operation (GALGAS_string ("' enumeration type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)), fixItArray13  COMMA_SOURCE_FILE ("instruction-match.galgas", 204)) ;
                  }
                }
                if (kBoolFalse == test_12) {
                  enumGalgasBool test_14 = kBoolTrue ;
                  if (kBoolTrue == test_14) {
                    test_14 = var_type_6901.getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 206)).getter_hasKey (enumerator_6881.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 206)) COMMA_SOURCE_FILE ("instruction-match.galgas", 206)).operator_not (SOURCE_FILE ("instruction-match.galgas", 206)).boolEnum () ;
                    if (kBoolTrue == test_14) {
                      TC_Array <C_FixItDescription> fixItArray15 ;
                      inCompiler->emitSemanticError (enumerator_6881.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 207)), GALGAS_string ("the '").add_operation (enumerator_6881.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (GALGAS_string ("' symbol is not a constant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (enumerator_6858.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 208)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)), fixItArray15  COMMA_SOURCE_FILE ("instruction-match.galgas", 207)) ;
                    }
                  }
                }
                var_matchListForGeneration_6734.addAssign_operation (GALGAS_bool (false), enumerator_6881.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 212)), enumerator_6858.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 213)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 213))  COMMA_SOURCE_FILE ("instruction-match.galgas", 210)) ;
              }
            }
            if (kBoolFalse == test_11) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (enumerator_6881.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 215)), GALGAS_string ("internal error"), fixItArray16  COMMA_SOURCE_FILE ("instruction-match.galgas", 215)) ;
            }
          }
          enumerator_6858.gotoNextObject () ;
          enumerator_6881.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (enumerator_6633.current_mEndOfMatchEntryList (HERE), GALGAS_string ("this match list should contain ").add_operation (var_expressionList_5650.getter_length (SOURCE_FILE ("instruction-match.galgas", 220)).getter_string (SOURCE_FILE ("instruction-match.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)).add_operation (GALGAS_string (" elements, but it acually contains "), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)).add_operation (enumerator_6633.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 221)).getter_string (SOURCE_FILE ("instruction-match.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)), fixItArray17  COMMA_SOURCE_FILE ("instruction-match.galgas", 219)) ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_9316 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_6680, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 230)), enumerator_6633.current_mMatchBranchInstructionList (HERE), enumerator_6633.current_mEndOf_5F_instructionList (HERE), ioArgument_ioVariableMap, var_instructionList_9316, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 225)) ;
    }
    var_matchInstructionBranchList_6543.addAssign_operation (var_matchListForGeneration_6734, var_instructionList_9316  COMMA_SOURCE_FILE ("instruction-match.galgas", 237)) ;
    enumerator_6633.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_elseInstructionList_9762 ;
  {
  const GALGAS_matchInstructionAST temp_18 = object ;
  const GALGAS_matchInstructionAST temp_19 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 245)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 246)), temp_18.getter_mElseInstructionList (HERE), temp_19.getter_mEndOf_5F_match_5F_instruction (HERE), ioArgument_ioVariableMap, var_elseInstructionList_9762, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 241)) ;
  }
  {
  const GALGAS_matchInstructionAST temp_20 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_20.getter_mEndOf_5F_match_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 253)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_matchInstructionForGeneration::constructor_new (var_expressionList_5650, var_matchInstructionBranchList_6543, var_elseInstructionList_9762  COMMA_SOURCE_FILE ("instruction-match.galgas", 255))  COMMA_SOURCE_FILE ("instruction-match.galgas", 255)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_matchInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_matchInstructionAST.mSlotID,
                                                   extensionMethod_matchInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_matchInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_matchInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@matchInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_stringlist var_receiverList_11912 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 296)) ;
  const GALGAS_matchInstructionForGeneration temp_0 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_11968 (temp_0.getter_mMatchedExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_11968.hasCurrentObject ()) {
    GALGAS_string var_variable_12120 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_11968.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variable_12120, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 298)) ;
    var_receiverList_11912.addAssign_operation (var_variable_12120  COMMA_SOURCE_FILE ("instruction-match.galgas", 299)) ;
    enumerator_11968.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 301)) ;
  cEnumerator_stringlist enumerator_12210 (var_receiverList_11912, kENUMERATION_UP) ;
  while (enumerator_12210.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12210.current_mValue (HERE).add_operation (GALGAS_string (".isValid ()"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 303)) ;
    if (enumerator_12210.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 304)) ;
    }
    enumerator_12210.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 306)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 307)) ;
  }
  const GALGAS_matchInstructionForGeneration temp_1 = object ;
  cEnumerator_matchInstructionBranchListForGeneration enumerator_12417 (temp_1.getter_mMatchInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_12417.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 309)) ;
    cEnumerator_matchListForGeneration enumerator_12488 (enumerator_12417.current_mMatchListForGeneration (HERE), kENUMERATION_UP) ;
    cEnumerator_stringlist enumerator_12508 (var_receiverList_11912, kENUMERATION_UP) ;
    while (enumerator_12488.hasCurrentObject () && enumerator_12508.hasCurrentObject ()) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = enumerator_12488.current_mIsType (HERE).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(NULL != dynamic_cast <const cPtr_").add_operation (enumerator_12488.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)).add_operation (enumerator_12508.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 312)) ;
        }
      }
      if (kBoolFalse == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(").add_operation (enumerator_12508.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (GALGAS_string (".enumValue () == GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (enumerator_12488.current_mLocalConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 316)).add_operation (enumerator_12488.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 317)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 315)) ;
      }
      if (enumerator_12488.hasNextObject () && enumerator_12508.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 319)) ;
      }
      enumerator_12488.gotoNextObject () ;
      enumerator_12508.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 321)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_12417.current_mMatchBranchInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 322)) ;
    }
    if (enumerator_12417.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 330)) ;
    }
    enumerator_12417.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 332)) ;
  {
  const GALGAS_matchInstructionForGeneration temp_3 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.getter_mElseInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 333)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 341)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 342)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 343)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_matchInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_matchInstructionForGeneration.mSlotID,
                                            extensionMethod_matchInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_matchInstructionForGeneration_generateInstruction (defineExtensionMethod_matchInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_messageInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  const GALGAS_messageInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 35)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_messageInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                          extensionMethod_messageInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_messageInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_messageInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_messageInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2244 ;
  const GALGAS_messageInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-message.galgas", 53)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2244, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_2244.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 59)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_messageInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("the expression has the '@").add_operation (var_expression_2244.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 61)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 60)) ;
    }
  }
  const GALGAS_messageInstructionAST temp_4 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression_2244, temp_4.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("instruction-message.galgas", 64))  COMMA_SOURCE_FILE ("instruction-message.galgas", 64)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_messageInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                   extensionMethod_messageInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_messageInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_messageInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_messageCppVarName_3921 ;
  const GALGAS_messageInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_3921, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 88)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)).add_operation (var_messageCppVarName_3921, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 96)) ;
  const GALGAS_messageInstructionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 97)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 98)) COMMA_SOURCE_FILE ("instruction-message.galgas", 98)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_messageInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_messageInstructionForGeneration.mSlotID,
                                            extensionMethod_messageInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_messageInstructionForGeneration_generateInstruction (defineExtensionMethod_messageInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  const GALGAS_methodCallInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 46)) ;
  const GALGAS_methodCallInstructionAST temp_1 = object ;
  cEnumerator_actualParameterListAST enumerator_1930 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_1930.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1930.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 48)) ;
    enumerator_1930.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                          extensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_methodCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_methodCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_2863 ;
  const GALGAS_methodCallInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 66)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_2863, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 63)) ;
  GALGAS_formalParameterSignature var_routineSignature_2943 ;
  GALGAS_bool var_hasCompilerArgument_2971 ;
  GALGAS_methodKind var_kind_2990 ;
  GALGAS_string var_errorMessage_3013 ;
  const GALGAS_methodCallInstructionAST temp_1 = object ;
  GALGAS_location joker_3124 ; // Joker input parameter
  GALGAS_methodQualifier joker_3148 ; // Joker input parameter
  var_receiverExpression_2863.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 76)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 76)).method_searchKey (temp_1.getter_mMethodName (HERE), var_kind_2990, var_routineSignature_2943, joker_3124, var_hasCompilerArgument_2971, joker_3148, var_errorMessage_3013, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 76)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_errorMessage_3013.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_methodCallInstructionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mMethodName (HERE).getter_location (SOURCE_FILE ("instruction-method-call.galgas", 78)), var_errorMessage_3013, fixItArray4  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 78)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3651 ;
  {
  const GALGAS_methodCallInstructionAST temp_5 = object ;
  const GALGAS_methodCallInstructionAST temp_6 = object ;
  const GALGAS_methodCallInstructionAST temp_7 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_5.getter_mMethodName (HERE), GALGAS_string ("'").add_operation (temp_6.getter_mMethodName (HERE).getter_string (SOURCE_FILE ("instruction-method-call.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)), var_routineSignature_2943, temp_7.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3651, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 81)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_baseType_3717 = var_receiverExpression_2863.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 94)) ;
  GALGAS_bool var_searching_3768 = GALGAS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 96)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 97)).isValid ()) {
        uint32_t variant_3817 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 97)).uintValue () ;
        bool loop_3817 = true ;
        while (loop_3817) {
          loop_3817 = var_searching_3768.isValid () ;
          if (loop_3817) {
            loop_3817 = var_searching_3768.boolValue () ;
          }
          if (loop_3817 && (0 == variant_3817)) {
            loop_3817 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 97)) ;
          }
          if (loop_3817) {
            variant_3817 -- ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = var_baseType_3717.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 98)).getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 98)).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_searching_3768 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                const GALGAS_methodCallInstructionAST temp_11 = object ;
                test_10 = var_baseType_3717.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).getter_hasKey (temp_11.getter_mMethodName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_baseType_3717 = var_baseType_3717.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 102)) ;
                }
              }
              if (kBoolFalse == test_10) {
                var_searching_3768 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_methodCallInstructionAST temp_12 = object ;
  const GALGAS_methodCallInstructionAST temp_13 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (temp_12.getter_mInstructionLocation (HERE), var_receiverExpression_2863.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 112)), var_receiverExpression_2863, temp_13.getter_mMethodName (HERE).getter_string (SOURCE_FILE ("instruction-method-call.galgas", 114)), var_kind_2990, var_actualParameterListForGeneration_3651, var_hasCompilerArgument_2971, var_baseType_3717  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 110))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 110)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_methodCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                   extensionMethod_methodCallInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_methodCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_methodCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_receiverCppName_5695 ;
  const GALGAS_methodCallInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_5695, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 146)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_5695 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 147)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_5788 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 149)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5839 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 150)) ;
  GALGAS_stringlist var_inputVariableList_5879 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 151)) ;
  const GALGAS_methodCallInstructionForGeneration temp_1 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_5933 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_5933.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5965 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_5933.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5839, var_inputVariableList_5879, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5965, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 154)) ;
    var_parameterCppNameList_5788.addAssign_operation (var_parameterCppName_5965  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 155)) ;
    enumerator_5933.gotoNextObject () ;
  }
  const GALGAS_methodCallInstructionForGeneration temp_2 = object ;
  switch (temp_2.getter_mKind (HERE).enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_methodCallInstructionForGeneration temp_3 = object ;
      const GALGAS_methodCallInstructionForGeneration temp_4 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (temp_3.getter_mMethodBaseType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).add_operation (temp_4.getter_mMethodName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_6 = object ;
        test_5 = temp_6.getter_mReceiverType (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)).getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 161)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_methodCallInstructionForGeneration temp_7 = object ;
          const GALGAS_methodCallInstructionForGeneration temp_8 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (temp_7.getter_mMethodName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (temp_8.getter_mReceiverExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 163)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (var_receiverCppName_5695, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_9 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (temp_9.getter_mMethodName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (var_receiverCppName_5695, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_methodCallInstructionForGeneration temp_10 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_5695.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (temp_10.getter_mMethodName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_7048 (var_parameterCppNameList_5788, kENUMERATION_UP) ;
  while (enumerator_7048.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_7048.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)) ;
    if (enumerator_7048.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 172)) ;
    }
    enumerator_7048.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_parameterCppNameList_5788.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_methodCallInstructionForGeneration temp_13 = object ;
        test_12 = temp_13.getter_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 178)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_11) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      const GALGAS_methodCallInstructionForGeneration temp_15 = object ;
      test_14 = temp_15.getter_mHasCompilerArgument (HERE).boolEnum () ;
      if (kBoolTrue == test_14) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 183)) ;
      }
    }
    if (kBoolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 185)) ;
    }
  }
  const GALGAS_methodCallInstructionForGeneration temp_16 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_16.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_methodCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_methodCallInstructionForGeneration.mSlotID,
                                            extensionMethod_methodCallInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_methodCallInstructionForGeneration_generateInstruction (defineExtensionMethod_methodCallInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_procCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  const GALGAS_procCallInstructionAST temp_0 = object ;
  cEnumerator_actualParameterListAST enumerator_1690 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_1690.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1690.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 40)) ;
    enumerator_1690.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                                                          extensionMethod_procCallInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_procCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_procCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  const GALGAS_procCallInstructionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_2357 = function_procedureNameForUsefulEntitiesGraph (temp_0.getter_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 55)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2357 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 56)) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_2662 ;
  GALGAS_bool var_isInternal_2689 ;
  const GALGAS_procCallInstructionAST temp_1 = object ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mRoutineMap (HERE).method_searchKey (temp_1.getter_mRoutineName (HERE), var_routineSignature_2662, var_isInternal_2689, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 58)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_2689.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_procCallInstructionAST temp_3 = object ;
      GALGAS_location var_procDeclarationLocation_2767 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mRoutineMap (HERE).getter_locationForKey (temp_3.getter_mRoutineName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 65)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_procCallInstructionAST temp_5 = object ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.getter_mRoutineName (HERE).getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)).objectCompare (var_procDeclarationLocation_2767.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_procCallInstructionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.getter_mRoutineName (HERE).getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 67)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_2767.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)) ;
        }
      }
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3462 ;
  {
  const GALGAS_procCallInstructionAST temp_8 = object ;
  const GALGAS_procCallInstructionAST temp_9 = object ;
  const GALGAS_procCallInstructionAST temp_10 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_8.getter_mRoutineName (HERE), GALGAS_string ("'").add_operation (temp_9.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)), var_routineSignature_2662, temp_10.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3462, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 71)) ;
  }
  const GALGAS_procCallInstructionAST temp_11 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (temp_11.getter_mRoutineName (HERE), var_actualParameterListForGeneration_3462  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 84))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 84)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                                                   extensionMethod_procCallInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_procCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_procCallInstructionForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_0.getter_mRoutineName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 107))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 107)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 108)) ;
  GALGAS_stringlist var_parameterCppNameList_4602 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 110)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4650 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 111)) ;
  GALGAS_stringlist var_inputVariableList_4687 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 112)) ;
  const GALGAS_procCallInstructionForGeneration temp_1 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_4730 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_4730.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4985 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4730.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4650, var_inputVariableList_4687, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4985, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 114)) ;
    var_parameterCppNameList_4602.addAssign_operation (var_parameterCppName_4985  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 123)) ;
    enumerator_4730.gotoNextObject () ;
  }
  const GALGAS_procCallInstructionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (temp_2.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 126)).getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)) ;
  cEnumerator_stringlist enumerator_5197 (var_parameterCppNameList_4602, kENUMERATION_UP) ;
  while (enumerator_5197.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_5197.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 128)) ;
    enumerator_5197.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)) ;
  }
  const GALGAS_procCallInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)).add_operation (extensionGetter_commaSourceFile (temp_3.getter_mRoutineName (HERE).getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 132)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_procCallInstructionForGeneration.mSlotID,
                                            extensionMethod_procCallInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procCallInstructionForGeneration_generateInstruction (defineExtensionMethod_procCallInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfAssignmentInstructionAST * object = (const cPtr_selfAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfAssignmentInstructionAST) ;
  const GALGAS_selfAssignmentInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 40)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfAssignmentInstructionAST.mSlotID,
                                                          extensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfAssignmentInstructionAST * object = (const cPtr_selfAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfAssignmentInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2523 ;
  const GALGAS_selfAssignmentInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2523, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 55)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-assignment.galgas", 64)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_selfAssignmentInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("'self' cannot be used in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 65)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-assignment.galgas", 66)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_selfAssignmentInstructionAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("'self' object is not mutable"), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 67)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 68)).getter_isClassType (SOURCE_FILE ("instruction-self-assignment.galgas", 68)).boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_selfAssignmentInstructionAST temp_8 = object ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.getter_mInstructionLocation (HERE), GALGAS_string ("'self' assignment is not allowed for class instances"), fixItArray9  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 69)) ;
        }
      }
    }
  }
  {
  const GALGAS_selfAssignmentInstructionAST temp_10 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE), var_expression_2523.getter_mResultType (SOURCE_FILE ("instruction-self-assignment.galgas", 72)), temp_10.getter_mInstructionLocation (HERE), var_expression_2523, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 72)) ;
  }
  const GALGAS_selfAssignmentInstructionAST temp_11 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 78)).getter_string (SOURCE_FILE ("instruction-self-assignment.galgas", 78)), var_expression_2523, temp_11.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 74))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 74)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfAssignmentInstructionAST.mSlotID,
                                                   extensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 113)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMinusEqualExpressionInstructionAST * object = (const cPtr_selfMinusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMinusEqualExpressionInstructionAST) ;
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 119)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMulEqualExpressionInstructionAST * object = (const cPtr_selfMulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMulEqualExpressionInstructionAST) ;
  const GALGAS_selfMulEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 125)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfDivEqualExpressionInstructionAST * object = (const cPtr_selfDivEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfDivEqualExpressionInstructionAST) ;
  const GALGAS_selfDivEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 131)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  const GALGAS_selfPlusEqualElementsInstructionAST temp_0 = object ;
  extensionMethod_enterInSemanticContext (temp_0.getter_mExpressions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 137)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST.mSlotID,
                                                          extensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_6325 ;
  GALGAS_string var_selfObjectCppName_6353 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 153)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfPlusEqualElementsInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
      var_selfObjectCppName_6353.drop () ; // Release error dropped variable
      var_selfTypeEntry_6325.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_6353 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_6325 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_6738 = var_selfTypeEntry_6325.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 160)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_6738.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 161)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfPlusEqualElementsInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_6325.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 162)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      const GALGAS_selfPlusEqualElementsInstructionAST temp_7 = object ;
      test_6 = GALGAS_bool (kIsNotEqual, temp_7.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)).objectCompare (var_addAssignOperatorArguments_6738.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_selfPlusEqualElementsInstructionAST temp_8 = object ;
        const GALGAS_selfPlusEqualElementsInstructionAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_8.getter_mInstructionLocation (HERE), GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_selfTypeEntry_6325.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (var_addAssignOperatorArguments_6738.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 168)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (temp_9.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 169)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)), fixItArray10  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 166)) ;
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_7464 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 171)) ;
      const GALGAS_selfPlusEqualElementsInstructionAST temp_11 = object ;
      cEnumerator_actualOutputExpressionList enumerator_7537 (temp_11.getter_mExpressions (HERE), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_7571 (var_addAssignOperatorArguments_6738, kENUMERATION_UP) ;
      while (enumerator_7537.hasCurrentObject () && enumerator_7571.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_7822 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_7537.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_7571.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7822, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 173)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsNotEqual, enumerator_7571.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_7537.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_12) {
            GALGAS_string temp_13 ;
            const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_7571.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              temp_13 = enumerator_7571.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)) ;
            }else if (kBoolFalse == test_14) {
              temp_13 = GALGAS_string::makeEmptyString () ;
            }
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (enumerator_7537.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-self-concat.galgas", 182)), GALGAS_string ("the selector should be '!").add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)), fixItArray15  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 182)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_7571.current_mFormalArgumentType (HERE), var_expression_7822.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 185)), enumerator_7537.current_mEndOfExpressionLocation (HERE), var_expression_7822, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 185)) ;
        }
        var_effectiveParameterList_7464.addAssign_operation (var_expression_7822  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 186)) ;
        enumerator_7537.gotoNextObject () ;
        enumerator_7571.gotoNextObject () ;
      }
      const GALGAS_selfPlusEqualElementsInstructionAST temp_16 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_selfObjectCppName_6353, var_selfTypeEntry_6325, GALGAS_string::makeEmptyString (), temp_16.getter_mInstructionLocation (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 194)), var_effectiveParameterList_7464  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 189))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 189)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST.mSlotID,
                                                   extensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_9042 ;
  GALGAS_string var_selfObjectCppName_9070 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 210)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 211)) ;
      var_selfObjectCppName_9070.drop () ; // Release error dropped variable
      var_selfTypeEntry_9042.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_9070 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_9042 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_9042.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 217)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 217)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 217)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_9042.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 218)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_9923 ;
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeEntry_9042, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9923, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 222)) ;
  {
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_7 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeEntry_9042, var_expression_9923.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 231)), temp_7.getter_mInstructionLocation (HERE), var_expression_9923, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 231)) ;
  }
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), var_selfTypeEntry_9042, var_selfObjectCppName_9070, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 238)), var_expression_9923, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 233))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 233)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMinusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMinusEqualExpressionInstructionAST * object = (const cPtr_selfMinusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMinusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_10867 ;
  GALGAS_string var_selfObjectCppName_10895 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 255)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 256)) ;
      var_selfObjectCppName_10895.drop () ; // Release error dropped variable
      var_selfTypeEntry_10867.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_10895 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_10867 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_10867.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 262)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 262)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 262)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_10867.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_11749 ;
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeEntry_10867, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11749, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)) ;
  {
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_7 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeEntry_10867, var_expression_11749.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 276)), temp_7.getter_mInstructionLocation (HERE), var_expression_11749, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 276)) ;
  }
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), var_selfTypeEntry_10867, var_selfObjectCppName_10895, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 283)), var_expression_11749, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMulEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMulEqualExpressionInstructionAST * object = (const cPtr_selfMulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMulEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_12692 ;
  GALGAS_string var_selfObjectCppName_12720 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 300)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 301)) ;
      var_selfObjectCppName_12720.drop () ; // Release error dropped variable
      var_selfTypeEntry_12692.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_12720 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_12692 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_12692.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 307)).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 307)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_12692.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 308)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_13568 ;
  const GALGAS_selfMulEqualExpressionInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeEntry_12692, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13568, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)) ;
  {
  const GALGAS_selfMulEqualExpressionInstructionAST temp_7 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeEntry_12692, var_expression_13568.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 321)), temp_7.getter_mInstructionLocation (HERE), var_expression_13568, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 321)) ;
  }
  const GALGAS_selfMulEqualExpressionInstructionAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), var_selfTypeEntry_12692, var_selfObjectCppName_12720, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 328)), var_expression_13568, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfDivEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfDivEqualExpressionInstructionAST * object = (const cPtr_selfDivEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfDivEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_14509 ;
  GALGAS_string var_selfObjectCppName_14537 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 345)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 346)) ;
      var_selfObjectCppName_14537.drop () ; // Release error dropped variable
      var_selfTypeEntry_14509.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_14537 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_14509 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_14509.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 352)).getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 352)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_14509.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 353)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_15385 ;
  const GALGAS_selfDivEqualExpressionInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeEntry_14509, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15385, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 357)) ;
  {
  const GALGAS_selfDivEqualExpressionInstructionAST temp_7 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeEntry_14509, var_expression_15385.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 366)), temp_7.getter_mInstructionLocation (HERE), var_expression_15385, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 366)) ;
  }
  const GALGAS_selfDivEqualExpressionInstructionAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), var_selfTypeEntry_14509, var_selfObjectCppName_14537, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 373)), var_expression_15385, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionAST * object = (const cPtr_setterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionAST) ;
  const GALGAS_setterCallInstructionAST temp_0 = object ;
  cEnumerator_actualParameterListAST enumerator_3475 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_3475.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3475.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 105)) ;
    enumerator_3475.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_setterCallInstructionAST.mSlotID,
                                                          extensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_setterCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionAST * object = (const cPtr_selfSetterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionAST) ;
  const GALGAS_selfSetterCallInstructionAST temp_0 = object ;
  cEnumerator_actualParameterListAST enumerator_3825 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_3825.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3825.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 115)) ;
    enumerator_3825.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfSetterCallInstructionAST.mSlotID,
                                                          extensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_setterCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionAST * object = (const cPtr_setterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_4514 ;
  GALGAS_string var_targetVariableCppName_4550 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_4600 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_setterCallInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 134)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_setterCallInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 135)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 135)) ;
          var_receiverType_4514.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_4600.drop () ; // Release error dropped variable
          var_targetVariableCppName_4550.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 137)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_setterCallInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 138)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 138)) ;
            var_receiverType_4514.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_4600.drop () ; // Release error dropped variable
            var_targetVariableCppName_4550.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_5074 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 141)) ;
          const GALGAS_setterCallInstructionAST temp_8 = object ;
          GALGAS_bool joker_5175 ; // Joker input parameter
          var_propertyMap_5074.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_5175, var_receiverType_4514, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 142)) ;
          var_nameForCheckingFormalParameterUsing_4600 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_setterCallInstructionAST temp_9 = object ;
          var_targetVariableCppName_4550 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 144)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 144)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_setterCallInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_receiverType_4514, var_targetVariableCppName_4550, var_nameForCheckingFormalParameterUsing_4600, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)) ;
    }
  }
  const GALGAS_setterCallInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_5700 (temp_11.getter_mReceiverStructAttributes (HERE), kENUMERATION_UP) ;
  while (enumerator_5700.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_5723 = var_receiverType_4514.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
    GALGAS_bool var_isPublic_5802 ;
    var_propertyMap_5723.method_searchKey (enumerator_5700.current_mValue (HERE), var_isPublic_5802, var_receiverType_4514, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 157)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_5802.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 158)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_5700.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 159)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 159)) ;
      }
    }
    enumerator_5700.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_castType_6502 ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_setterCallInstructionAST temp_15 = object ;
    test_14 = GALGAS_bool (kIsNotEqual, temp_15.getter_mTypeNameForCasting (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_setterCallInstructionAST temp_16 = object ;
      var_castType_6502 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_16.getter_mTypeNameForCasting (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)) ;
      {
      const GALGAS_setterCallInstructionAST temp_17 = object ;
      routine_checkAssignmentTypes (var_receiverType_4514, var_castType_6502, temp_17.getter_mTypeNameForCasting (HERE).getter_location (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 180)) ;
      }
    }
  }
  if (kBoolFalse == test_14) {
    var_castType_6502 = var_receiverType_4514 ;
  }
  GALGAS_methodKind var_kind_6874 ;
  GALGAS_formalParameterSignature var_routineSignature_6900 ;
  GALGAS_bool var_hasCompilerArgument_6929 ;
  GALGAS_string var_setterErrorMessage_6964 ;
  const GALGAS_setterCallInstructionAST temp_18 = object ;
  GALGAS_methodQualifier joker_6935 ; // Joker input parameter
  var_castType_6502.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 185)).method_searchKey (temp_18.getter_mSetterName (HERE), var_kind_6874, var_routineSignature_6900, var_hasCompilerArgument_6929, joker_6935, var_setterErrorMessage_6964, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 185)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_6964.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_setterCallInstructionAST temp_20 = object ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.getter_mSetterName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 194)), var_setterErrorMessage_6964, fixItArray21  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 194)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_7458 ;
  {
  const GALGAS_setterCallInstructionAST temp_22 = object ;
  const GALGAS_setterCallInstructionAST temp_23 = object ;
  const GALGAS_setterCallInstructionAST temp_24 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_22.getter_mSetterName (HERE), GALGAS_string ("'").add_operation (temp_23.getter_mSetterName (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 202)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 202)), var_routineSignature_6900, temp_24.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_7458, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 197)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_baseType_7524 = var_castType_6502 ;
  GALGAS_bool var_searching_7551 = GALGAS_bool (true) ;
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 212)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_25) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 213)).isValid ()) {
        uint32_t variant_7599 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 213)).uintValue () ;
        bool loop_7599 = true ;
        while (loop_7599) {
          loop_7599 = var_searching_7551.isValid () ;
          if (loop_7599) {
            loop_7599 = var_searching_7551.boolValue () ;
          }
          if (loop_7599 && (0 == variant_7599)) {
            loop_7599 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 213)) ;
          }
          if (loop_7599) {
            variant_7599 -- ;
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = var_baseType_7524.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 214)).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 214)).boolEnum () ;
              if (kBoolTrue == test_26) {
                var_searching_7551 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_26) {
              enumGalgasBool test_27 = kBoolTrue ;
              if (kBoolTrue == test_27) {
                const GALGAS_setterCallInstructionAST temp_28 = object ;
                test_27 = var_baseType_7524.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 217)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 217)).getter_hasKey (temp_28.getter_mSetterName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 217)).boolEnum () ;
                if (kBoolTrue == test_27) {
                  var_baseType_7524 = var_baseType_7524.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 218)) ;
                }
              }
              if (kBoolFalse == test_27) {
                var_searching_7551 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_setterCallInstructionAST temp_29 = object ;
  const GALGAS_setterCallInstructionAST temp_30 = object ;
  const GALGAS_setterCallInstructionAST temp_31 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (temp_29.getter_mReceiverName (HERE).getter_location (HERE), var_targetVariableCppName_4550, var_nameForCheckingFormalParameterUsing_4600, temp_30.getter_mReceiverStructAttributes (HERE), var_castType_6502, var_receiverType_4514, temp_31.getter_mSetterName (HERE), var_kind_6874, var_actualParameterListForGeneration_7458, var_hasCompilerArgument_6929, var_baseType_7524  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 226))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 226)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_setterCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_setterCallInstructionAST.mSlotID,
                                                   extensionMethod_setterCallInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_setterCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_setterCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionAST * object = (const cPtr_selfSetterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_8830 ;
  GALGAS_string var_selfObjectCppName_8858 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 252)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfSetterCallInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mSetterName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 253)), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 253)) ;
      var_selfObjectCppName_8858.drop () ; // Release error dropped variable
      var_selfTypeEntry_8830.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_8858 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_8830 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_9218 ;
  GALGAS_bool var_hasCompilerArgument_9246 ;
  GALGAS_methodKind var_kind_9265 ;
  const GALGAS_selfSetterCallInstructionAST temp_3 = object ;
  GALGAS_methodQualifier joker_9370 ; // Joker input parameter
  GALGAS_string joker_9373 ; // Joker input parameter
  var_selfTypeEntry_8830.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 262)).method_searchKey (temp_3.getter_mSetterName (HERE), var_kind_9265, var_routineSignature_9218, var_hasCompilerArgument_9246, joker_9370, joker_9373, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 262)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_9776 ;
  {
  const GALGAS_selfSetterCallInstructionAST temp_4 = object ;
  const GALGAS_selfSetterCallInstructionAST temp_5 = object ;
  const GALGAS_selfSetterCallInstructionAST temp_6 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_4.getter_mSetterName (HERE), GALGAS_string ("'").add_operation (temp_5.getter_mSetterName (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 269)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 269)), var_routineSignature_9218, temp_6.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_9776, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 264)) ;
  }
  const GALGAS_selfSetterCallInstructionAST temp_7 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::constructor_new (var_selfObjectCppName_8858, var_selfTypeEntry_8830, temp_7.getter_mSetterName (HERE), var_kind_9265, var_actualParameterListForGeneration_9776, var_hasCompilerArgument_9246  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 277))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 277)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfSetterCallInstructionAST.mSlotID,
                                                   extensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)) ;
  const GALGAS_setterCallInstructionForGeneration temp_0 = object ;
  GALGAS_string var_receiverCppName_11625 = temp_0.getter_mReceiverCppName (HERE) ;
  const GALGAS_setterCallInstructionForGeneration temp_1 = object ;
  cEnumerator_lstringlist enumerator_11692 (temp_1.getter_mReceiverStructAttributes (HERE), kENUMERATION_UP) ;
  while (enumerator_11692.hasCurrentObject ()) {
    var_receiverCppName_11625.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_11692.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 328)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 328)) ;
    enumerator_11692.gotoNextObject () ;
  }
  {
  const GALGAS_setterCallInstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.getter_mReceiverBaseName (HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_11901 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 332)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_11949 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 333)) ;
  GALGAS_stringlist var_inputVariableList_11986 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 334)) ;
  const GALGAS_setterCallInstructionForGeneration temp_3 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_12029 (temp_3.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_12029.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_12284 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_12029.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_11949, var_inputVariableList_11986, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_12284, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)) ;
    var_parameterCppNameList_11901.addAssign_operation (var_parameterCppName_12284  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)) ;
    enumerator_12029.gotoNextObject () ;
  }
  const GALGAS_setterCallInstructionForGeneration temp_4 = object ;
  switch (temp_4.getter_mKind (HERE).enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_setterCallInstructionForGeneration temp_5 = object ;
      const GALGAS_setterCallInstructionForGeneration temp_6 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (temp_5.getter_mMethodBaseType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 350)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 350)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 350)).add_operation (temp_6.getter_mSetterName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 350))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 350)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_8 = object ;
        test_7 = temp_8.getter_mReceiverType (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)).getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 351)).boolEnum () ;
        if (kBoolTrue == test_7) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            const GALGAS_setterCallInstructionForGeneration temp_10 = object ;
            test_9 = GALGAS_bool (kIsStrictSup, temp_10.getter_mReceiverType (HERE).getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 352)).getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 352)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_9) {
              ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_11625.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_11 = object ;
          GALGAS_string var_pointerUniqueName_12831 = GALGAS_string ("ptr_").add_operation (temp_11.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)) ;
          const GALGAS_setterCallInstructionForGeneration temp_12 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (temp_12.getter_mReceiverType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 356)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 356)).add_operation (var_pointerUniqueName_12831, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 356)) ;
          const GALGAS_setterCallInstructionForGeneration temp_13 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (temp_13.getter_mReceiverType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 357)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 357)).add_operation (var_receiverCppName_11625, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 357)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 357)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            const GALGAS_setterCallInstructionForGeneration temp_15 = object ;
            const GALGAS_setterCallInstructionForGeneration temp_16 = object ;
            test_14 = GALGAS_bool (kIsNotEqual, temp_15.getter_mCastType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 358)).objectCompare (temp_16.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 358)))).boolEnum () ;
            if (kBoolTrue == test_14) {
              const GALGAS_setterCallInstructionForGeneration temp_17 = object ;
              ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (temp_17.getter_mCastType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 359)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 359))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 359)) ;
              const GALGAS_setterCallInstructionForGeneration temp_18 = object ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName_12831, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 360)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 360)).add_operation (temp_18.getter_mCastType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 361)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 361)).add_operation (var_pointerUniqueName_12831, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 361)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 360)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 363)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 363)) ;
              }
              const GALGAS_setterCallInstructionForGeneration temp_19 = object ;
              const GALGAS_setterCallInstructionForGeneration temp_20 = object ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)).add_operation (temp_19.getter_mCastType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)).add_operation (extensionGetter_commaSourceFile (temp_20.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_12831, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 367)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_21 = object ;
          const GALGAS_setterCallInstructionForGeneration temp_22 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_21.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)).add_operation (temp_22.getter_mCastType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 370)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 370)).add_operation (var_pointerUniqueName_12831, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 370)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)) ;
        }
      }
      if (kBoolFalse == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_23 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_23.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)).add_operation (var_receiverCppName_11625, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_setterCallInstructionForGeneration temp_24 = object ;
      extensionMethod_addHeaderFileName (temp_24.getter_mReceiverType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 375)) ;
      const GALGAS_setterCallInstructionForGeneration temp_25 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_11625.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 376)).add_operation (temp_25.getter_mSetterName (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 376)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 376)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 376)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_14483 (var_parameterCppNameList_11901, kENUMERATION_UP) ;
  while (enumerator_14483.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_14483.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 379)) ;
    if (enumerator_14483.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 380)) ;
    }
    enumerator_14483.gotoNextObject () ;
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    const GALGAS_setterCallInstructionForGeneration temp_27 = object ;
    test_26 = temp_27.getter_mHasCompilerArgument (HERE).boolEnum () ;
    if (kBoolTrue == test_26) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_11901.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 383)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_28) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 384)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 386)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 386)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 388)) ;
    }
  }
  if (kBoolFalse == test_26) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_11901.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 389)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_29) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 390)) ;
      }
    }
  }
  const GALGAS_setterCallInstructionForGeneration temp_30 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_30.getter_mSetterName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 392)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 392)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 394)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_setterCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_setterCallInstructionForGeneration.mSlotID,
                                            extensionMethod_setterCallInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_setterCallInstructionForGeneration_generateInstruction (defineExtensionMethod_setterCallInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)) ;
  {
  const GALGAS_selfSetterCallInstructionForGeneration temp_0 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.getter_mSelfCppName (HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 406)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_15598 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 408)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_15649 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 409)) ;
  GALGAS_stringlist var_inputVariableList_15689 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 410)) ;
  const GALGAS_selfSetterCallInstructionForGeneration temp_1 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_15743 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_15743.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_16006 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_15743.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_15649, var_inputVariableList_15689, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_16006, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 412)) ;
    var_parameterCppNameList_15598.addAssign_operation (var_parameterCppName_16006  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 420)) ;
    enumerator_15743.gotoNextObject () ;
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_2 = object ;
  switch (temp_2.getter_mKind (HERE).enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_selfSetterCallInstructionForGeneration temp_3 = object ;
      const GALGAS_selfSetterCallInstructionForGeneration temp_4 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (temp_3.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)).add_operation (temp_4.getter_mSetterName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_6 = object ;
        test_5 = temp_6.getter_mReceiverType (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 426)).getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 426)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_7 = object ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_8 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_7.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 427)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 427)).add_operation (temp_8.getter_mSelfCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 427)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 427)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_9 = object ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_10 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_9.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)).add_operation (temp_10.getter_mSelfCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_12 = object ;
        test_11 = temp_12.getter_mReceiverType (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 432)).getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 432)).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_13 = object ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_14 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(temp_13.getter_mSelfCppName (HERE).add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)).add_operation (temp_14.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)) ;
        }
      }
      if (kBoolFalse == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_15 = object ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_16 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(temp_15.getter_mSelfCppName (HERE).add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (temp_16.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_16958 (var_parameterCppNameList_15598, kENUMERATION_UP) ;
  while (enumerator_16958.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16958.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 439)) ;
    if (enumerator_16958.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 440)) ;
    }
    enumerator_16958.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_selfSetterCallInstructionForGeneration temp_18 = object ;
    test_17 = temp_18.getter_mHasCompilerArgument (HERE).boolEnum () ;
    if (kBoolTrue == test_17) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_15598.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 443)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 444)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 446)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 446)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 447)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 447)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 448)) ;
    }
  }
  if (kBoolFalse == test_17) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_15598.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 449)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_20) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 450)) ;
      }
    }
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_21 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_21.getter_mSetterName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 452)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 452)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 453)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfSetterCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration.mSlotID,
                                            extensionMethod_selfSetterCallInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfSetterCallInstructionForGeneration_generateInstruction (defineExtensionMethod_selfSetterCallInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  const GALGAS_switchInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSwitchExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
  const GALGAS_switchInstructionAST temp_1 = object ;
  cEnumerator_switchBranchesAST enumerator_4415 (temp_1.getter_mBranches (HERE), kENUMERATION_UP) ;
  while (enumerator_4415.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4415.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
    enumerator_4415.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                          extensionMethod_switchInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_switchInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression_5145 ;
  const GALGAS_switchInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mSwitchExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 154)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression_5145, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_switchExpression_5145.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 160)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-switch.galgas", 160)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_switchInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mEndOfSwitchExpression (HERE), GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (var_switchExpression_5145.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 163)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 161)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_5760 = var_switchExpression_5145.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 166)).getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 166)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_5859 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 167)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 169)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_5992 = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 170)) ;
  const GALGAS_switchInstructionAST temp_4 = object ;
  cEnumerator_switchBranchesAST enumerator_6024 (temp_4.getter_mBranches (HERE), kENUMERATION_UP) ;
  while (enumerator_6024.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_6110 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 172)) ;
    GALGAS_bool var_firstConstant_6139 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_6180 (enumerator_6024.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_6180.hasCurrentObject ()) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_enumConstantMap_5760.getter_hasKey (enumerator_6180.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 175)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 175)).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_constantsNamedInSwitchInstruction_5859.getter_hasKey (enumerator_6180.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 176)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 176)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_6180.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 177)), GALGAS_string ("the '").add_operation (enumerator_6180.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 177)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_5859.addAssign_operation (enumerator_6180.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 180))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 180)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_6594 ;
          GALGAS_uint joker_6544 ; // Joker input parameter
          var_enumConstantMap_5760.method_searchKey (enumerator_6180.current_mValue (HERE), joker_6544, var_associatedTypeList_6594, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 181)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6594.getter_length (SOURCE_FILE ("instruction-switch.galgas", 182)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_6024.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 182)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_6180.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 183)), GALGAS_string ("the associated values of '").add_operation (enumerator_6180.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas", 183)) ;
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_6594.getter_length (SOURCE_FILE ("instruction-switch.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_6024.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 185)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_6180.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 186)), GALGAS_string ("the '").add_operation (enumerator_6180.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 187)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 187)), fixItArray11  COMMA_SOURCE_FILE ("instruction-switch.galgas", 186)) ;
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_6594.getter_length (SOURCE_FILE ("instruction-switch.galgas", 188)).objectCompare (enumerator_6024.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 188)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  GALGAS_string temp_13 ;
                  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6594.getter_length (SOURCE_FILE ("instruction-switch.galgas", 191)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    temp_13 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_14) {
                    temp_13 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_6180.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 189)), GALGAS_string ("the '").add_operation (enumerator_6180.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (var_associatedTypeList_6594.getter_length (SOURCE_FILE ("instruction-switch.galgas", 190)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
                }
              }
              if (kBoolFalse == test_12) {
                GALGAS_uint var_associatedValueIndex_7328 = GALGAS_uint ((uint32_t) 0U) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_7371 (var_associatedTypeList_6594, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_7406 (enumerator_6024.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_7371.hasCurrentObject () && enumerator_7406.hasCurrentObject ()) {
                  enumGalgasBool test_16 = kBoolTrue ;
                  if (kBoolTrue == test_16) {
                    test_16 = GALGAS_bool (kIsNotEqual, enumerator_7406.current_mExtractedValueTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_16) {
                      enumGalgasBool test_17 = kBoolTrue ;
                      if (kBoolTrue == test_17) {
                        test_17 = GALGAS_bool (kIsNotEqual, enumerator_7371.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)).objectCompare (enumerator_7406.current_mExtractedValueTypeName (HERE).getter_string (HERE))).boolEnum () ;
                        if (kBoolTrue == test_17) {
                          TC_Array <C_FixItDescription> fixItArray18 ;
                          inCompiler->emitSemanticError (enumerator_7406.current_mExtractedValueTypeName (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 197)), GALGAS_string ("the required type is '@").add_operation (enumerator_7371.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), fixItArray18  COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = var_firstConstant_6139.operator_and (GALGAS_bool (kIsNotEqual, enumerator_7406.current_mExtractedValueName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      GALGAS_string var_cppName_7777 = GALGAS_string ("extractedValue_").add_operation (enumerator_7406.current_mExtractedValueName (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
                      var_extractedAssociatedValuesForGeneration_6110.addAssign_operation (enumerator_7371.current_mType (HERE), var_cppName_7777, var_associatedValueIndex_7328  COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)) ;
                      enumGalgasBool test_20 = kBoolTrue ;
                      if (kBoolTrue == test_20) {
                        test_20 = enumerator_7406.current_mMarkedAsUnused (HERE).boolEnum () ;
                        if (kBoolTrue == test_20) {
                          {
                          ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_7406.current_mExtractedValueName (HERE), enumerator_7371.current_mType (HERE), var_cppName_7777, var_cppName_7777, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
                          }
                        }
                      }
                      if (kBoolFalse == test_20) {
                        {
                        ioArgument_ioVariableMap.setter_insertLocalConstant (enumerator_7406.current_mExtractedValueName (HERE), enumerator_7371.current_mType (HERE), var_cppName_7777, var_cppName_7777, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
                        }
                      }
                    }
                  }
                  var_associatedValueIndex_7328.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
                  enumerator_7371.gotoNextObject () ;
                  enumerator_7406.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_6180.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 213)), GALGAS_string ("'").add_operation (enumerator_6180.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (var_switchExpression_5145.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 214)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)), fixItArray21  COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
      }
      var_firstConstant_6139 = GALGAS_bool (false) ;
      enumerator_6180.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_8805 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 222)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 223)), enumerator_6024.current_mInstructions (HERE), enumerator_6024.current_mEndOfBranch (HERE), ioArgument_ioVariableMap, var_instructionList_8805, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 218)) ;
    }
    var_switchBranchesForGeneration_5992.addAssign_operation (enumerator_6024.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_6110, enumerator_6024.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 229)), var_instructionList_8805  COMMA_SOURCE_FILE ("instruction-switch.galgas", 229)) ;
    enumerator_6024.gotoNextObject () ;
  }
  {
  const GALGAS_switchInstructionAST temp_22 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_22.getter_mEndOf_5F_switch_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 231)) ;
  }
  GALGAS_stringset var_forgottenConstants_9092 = var_enumConstantMap_5760.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 233)).substract_operation (var_constantsNamedInSwitchInstruction_5859, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 233)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_9092.getter_count (SOURCE_FILE ("instruction-switch.galgas", 234)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_string var_s_9210 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_9248 (var_forgottenConstants_9092, kENUMERATION_UP) ;
      while (enumerator_9248.hasCurrentObject ()) {
        var_s_9210.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_9248.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 237)) ;
        enumerator_9248.gotoNextObject () ;
      }
      const GALGAS_switchInstructionAST temp_24 = object ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.getter_mEndOf_5F_switch_5F_instruction (HERE), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_9210, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 240)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas", 239)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression_5145.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 244)), var_switchExpression_5145, var_switchBranchesForGeneration_5992  COMMA_SOURCE_FILE ("instruction-switch.galgas", 243))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 243)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                   extensionMethod_switchInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_switchInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_switchVar_11282 ;
  const GALGAS_switchInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mSwitchExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_11282, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 286)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_11282, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)) ;
  const GALGAS_switchInstructionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_1.getter_mSwitchExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 294)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)) ;
  const GALGAS_switchInstructionForGeneration temp_2 = object ;
  cEnumerator_switchBranchesForGeneration enumerator_11536 (temp_2.getter_mBranches (HERE), kENUMERATION_UP) ;
  while (enumerator_11536.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_11573 (enumerator_11536.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_11573.hasCurrentObject ()) {
      const GALGAS_switchInstructionForGeneration temp_3 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_3.getter_mSwitchExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 298)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (enumerator_11573.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 298)).getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)) ;
      enumerator_11573.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 300)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_11536.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 302)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_switchInstructionForGeneration temp_5 = object ;
        GALGAS_string var_type_11907 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (temp_5.getter_mEnumType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)).add_operation (enumerator_11536.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)) ;
        GALGAS_string var_varPtr_12069 = GALGAS_string ("extractPtr_").add_operation (enumerator_11536.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 305)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_11907, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_varPtr_12069, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_type_11907, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_switchVar_11282, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_12284 (enumerator_11536.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_12284.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (enumerator_12284.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (enumerator_12284.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (var_varPtr_12069, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (enumerator_12284.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)) ;
          enumerator_12284.gotoNextObject () ;
        }
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_11536.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 312)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 320)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 321)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)) ;
    }
    enumerator_11536.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 324)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_switchInstructionForGeneration.mSlotID,
                                            extensionMethod_switchInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionForGeneration_generateInstruction (defineExtensionMethod_switchInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionAST * object = (const cPtr_typeMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionAST) ;
  const GALGAS_typeMethodCallInstructionAST temp_0 = object ;
  cEnumerator_actualParameterListAST enumerator_1838 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_1838.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1838.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 43)) ;
    enumerator_1838.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_typeMethodCallInstructionAST.mSlotID,
                                                          extensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionAST * object = (const cPtr_typeMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionAST) ;
  const GALGAS_typeMethodCallInstructionAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2545 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 58)) ;
  GALGAS_formalParameterSignature var_routineSignature_2719 ;
  GALGAS_bool var_hasCompilerArgument_2747 ;
  const GALGAS_typeMethodCallInstructionAST temp_1 = object ;
  var_type_2545.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)).method_searchKey (temp_1.getter_mMethodName (HERE), var_routineSignature_2719, var_hasCompilerArgument_2747, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3246 ;
  {
  const GALGAS_typeMethodCallInstructionAST temp_2 = object ;
  const GALGAS_typeMethodCallInstructionAST temp_3 = object ;
  const GALGAS_typeMethodCallInstructionAST temp_4 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_2.getter_mMethodName (HERE), GALGAS_string ("'").add_operation (temp_3.getter_mMethodName (HERE).getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 69)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 69)), var_routineSignature_2719, temp_4.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3246, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 64)) ;
  }
  const GALGAS_typeMethodCallInstructionAST temp_5 = object ;
  const GALGAS_typeMethodCallInstructionAST temp_6 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::constructor_new (temp_5.getter_mTypeName (HERE), temp_6.getter_mMethodName (HERE), var_actualParameterListForGeneration_3246, var_hasCompilerArgument_2747  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 77))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 77)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_typeMethodCallInstructionAST.mSlotID,
                                                   extensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_stringlist var_parameterCppNameList_4416 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4467 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 106)) ;
  GALGAS_stringlist var_inputVariableList_4507 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 107)) ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_0 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_4561 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_4561.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4824 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4561.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4467, var_inputVariableList_4507, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4824, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 109)) ;
    var_parameterCppNameList_4416.addAssign_operation (var_parameterCppName_4824  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 117)) ;
    enumerator_4561.gotoNextObject () ;
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_1 = object ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.getter_mTypeName (HERE).getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 120)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)).add_operation (temp_2.getter_mMethodName (HERE).getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 121)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 121)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)) ;
  cEnumerator_stringlist enumerator_5120 (var_parameterCppNameList_4416, kENUMERATION_UP) ;
  while (enumerator_5120.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_5120.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 123)) ;
    if (enumerator_5120.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 124)) ;
    }
    enumerator_5120.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_4 = object ;
    test_3 = temp_4.getter_mHasCompilerArgument (HERE).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 127)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 127)) ;
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList_4416.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 128)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_5) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 129)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 131)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_7 = object ;
    test_6 = temp_7.getter_mHasCompilerArgument (HERE).operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList_4416.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 133)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 133)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 134)) ;
    }
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_8 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_8.getter_mMethodName (HERE).getter_location (SOURCE_FILE ("instruction-type-method-call.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 137)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeMethodCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration.mSlotID,
                                            extensionMethod_typeMethodCallInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeMethodCallInstructionForGeneration_generateInstruction (defineExtensionMethod_typeMethodCallInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationAST * object = (const cPtr_localVariableDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationAST) ;
  {
  const GALGAS_localVariableDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry joker_2329 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, temp_0.getter_mTypeName (HERE), joker_2329 COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 43)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableDeclarationAST.mSlotID,
                                                          extensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                    GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationAST * object = (const cPtr_localVariableDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationAST) ;
  const GALGAS_localVariableDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_3072 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 58)) ;
  const GALGAS_localVariableDeclarationAST temp_1 = object ;
  const GALGAS_localVariableDeclarationAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_3197 = GALGAS_string ("var_").add_operation (temp_1.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (temp_2.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_localVariableDeclarationAST temp_4 = object ;
    test_3 = temp_4.getter_mIsUndefinedConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_localVariableDeclarationAST temp_5 = object ;
      ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (temp_5.getter_mVariableName (HERE), var_targetType_3072, var_targetVariableCppName_3197, var_targetVariableCppName_3197, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 61)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    {
    const GALGAS_localVariableDeclarationAST temp_6 = object ;
    ioArgument_ioVariableMap.setter_insertUndefinedLocalVariable (temp_6.getter_mVariableName (HERE), var_targetType_3072, var_targetVariableCppName_3197, var_targetVariableCppName_3197, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (var_targetType_3072, var_targetVariableCppName_3197  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationAST.mSlotID,
                                                   extensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableDeclarationAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_localVariableDeclarationForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mVariableType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 90)) ;
  const GALGAS_localVariableDeclarationForGeneration temp_1 = object ;
  const GALGAS_localVariableDeclarationForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.getter_mVariableType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (temp_2.getter_mCppVariableName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableDeclarationForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration.mSlotID,
                                            extensionMethod_localVariableDeclarationForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableDeclarationForGeneration_generateInstruction (defineExtensionMethod_localVariableDeclarationForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationWithAssignmentAST * object = (const cPtr_localVariableDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationWithAssignmentAST) ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 41)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST.mSlotID,
                                                          extensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationWithAssignmentAST * object = (const cPtr_localVariableDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2607 ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 59)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2607, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 56)) ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_1 = object ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_2666 = GALGAS_string ("var_").add_operation (temp_1.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).add_operation (temp_2.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).getter_string (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)) ;
  {
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_3 = object ;
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (temp_3.getter_mVariableName (HERE), var_expression_2607.getter_mResultType (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 68)), var_targetVariableCppName_2666, var_targetVariableCppName_2666, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 66)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_2607.getter_mResultType (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 74)), GALGAS_bool (false), var_targetVariableCppName_2666, var_expression_2607  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 73))  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 73)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST.mSlotID,
                                                   extensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_warningInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionAST * object = (const cPtr_warningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionAST) ;
  const GALGAS_warningInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLocationExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 44)) ;
  const GALGAS_warningInstructionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mMessageExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 45)) ;
  const GALGAS_warningInstructionAST temp_2 = object ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.getter_mFixitListAST (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 46)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_warningInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_warningInstructionAST.mSlotID,
                                                          extensionMethod_warningInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_warningInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_warningInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_warningInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionAST * object = (const cPtr_warningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_locationExpression_2911 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_2938 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_2970 ;
  {
  const GALGAS_warningInstructionAST temp_0 = object ;
  const GALGAS_warningInstructionAST temp_1 = object ;
  const GALGAS_warningInstructionAST temp_2 = object ;
  const GALGAS_warningInstructionAST temp_3 = object ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_0.getter_mLocationExpression (HERE), temp_1.getter_mMessageExpression (HERE), temp_2.getter_mFixitListAST (HERE), temp_3.getter_mInstructionLocation (HERE), GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_2911, var_messageExpression_2938, var_fixitListForGeneration_2970, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 60)) ;
  }
  const GALGAS_warningInstructionAST temp_4 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (temp_4.getter_mInstructionLocation (HERE), var_locationExpression_2911, var_messageExpression_2938, var_fixitListForGeneration_2970  COMMA_SOURCE_FILE ("instruction-warning.galgas", 75))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 75)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_warningInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_warningInstructionAST.mSlotID,
                                                   extensionMethod_warningInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_warningInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_warningInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_receiverCppVarName_4163 ;
  const GALGAS_warningInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_4163, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 105)) ;
  GALGAS_string var_messageCppVarName_4527 ;
  const GALGAS_warningInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mWarningExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_4527, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 107)) ;
  GALGAS_string var_fixItArrayCppName_4780 ;
  const GALGAS_warningInstructionForGeneration temp_2 = object ;
  extensionMethod_generateFixIt (temp_2.getter_mFixitListForGeneration (HERE), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_4780, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 115)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)) ;
  }
  const GALGAS_warningInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (var_receiverCppVarName_4163, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (var_messageCppVarName_4527, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)).add_operation (var_fixItArrayCppName_4780, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 128)).add_operation (extensionGetter_commaSourceFile (temp_3.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 128)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_warningInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_warningInstructionForGeneration.mSlotID,
                                            extensionMethod_warningInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_warningInstructionForGeneration_generateInstruction (defineExtensionMethod_warningInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readAccessWithInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readAccessWithInstructionAST * object = (const cPtr_readAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readAccessWithInstructionAST) ;
  const GALGAS_readAccessWithInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 194)) ;
  const GALGAS_readAccessWithInstructionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mKeyExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 195)) ;
  const GALGAS_readAccessWithInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.getter_mDoBranchInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 196)) ;
  const GALGAS_readAccessWithInstructionAST temp_3 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.getter_mElseBranchInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 197)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_readAccessWithInstructionAST.mSlotID,
                                                          extensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteAccessWithInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mKeyExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 205)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.getter_m_5F_do_5F_Instructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 206)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.getter_m_5F_else_5F_Instructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 207)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST.mSlotID,
                                                          extensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readAccessWithInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readAccessWithInstructionAST * object = (const cPtr_readAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readAccessWithInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_8305 ;
  const GALGAS_readAccessWithInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 224)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_8305, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 221)) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_8328 = var_receiverExpression_8305.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 229)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readAccessWithInstructionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool var_found_8467 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_8525 (var_receiverType_8328.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 233)), kENUMERATION_UP) ;
      bool bool_3 = var_found_8467.operator_not (SOURCE_FILE ("instruction-with.galgas", 233)).isValidAndTrue () ;
      if (enumerator_8525.hasCurrentObject () && bool_3) {
        while (enumerator_8525.hasCurrentObject () && bool_3) {
          const GALGAS_readAccessWithInstructionAST temp_4 = object ;
          var_found_8467 = GALGAS_bool (kIsEqual, enumerator_8525.current_mSearchMethodName (HERE).getter_string (HERE).objectCompare (temp_4.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE))) ;
          enumerator_8525.gotoNextObject () ;
          if (enumerator_8525.hasCurrentObject ()) {
            bool_3 = var_found_8467.operator_not (SOURCE_FILE ("instruction-with.galgas", 233)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_found_8467.operator_not (SOURCE_FILE ("instruction-with.galgas", 236)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_readAccessWithInstructionAST temp_6 = object ;
          const GALGAS_readAccessWithInstructionAST temp_7 = object ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_6.getter_mSearchMethodNameForErrorSignaling (HERE).getter_location (SOURCE_FILE ("instruction-with.galgas", 237)), GALGAS_string ("there is no '").add_operation (temp_7.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 237)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 237)).add_operation (var_receiverType_8328.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 238)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 238)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 237)) ;
        }
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression_9139 ;
  const GALGAS_readAccessWithInstructionAST temp_9 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_9.getter_mKeyExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 245)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_9139, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 242)) ;
  const GALGAS_readAccessWithInstructionAST temp_10 = object ;
  GALGAS_string var_objectArrayCppName_9195 = GALGAS_string ("objectArray_").add_operation (temp_10.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 251)).getter_string (SOURCE_FILE ("instruction-with.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 251)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_receiverType_8328.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 253)).getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 253)).operator_not (SOURCE_FILE ("instruction-with.galgas", 253)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_readAccessWithInstructionAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.getter_mEndOfReceiverExpression (HERE), GALGAS_string ("the '@").add_operation (var_receiverType_8328.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 254)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 254)), fixItArray13  COMMA_SOURCE_FILE ("instruction-with.galgas", 254)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 257)) ;
  }
  GALGAS_localConstantList var_localConstantList_9646 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 259)) ;
  cEnumerator_typedPropertyList enumerator_9723 (var_receiverType_8328.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 260)), kENUMERATION_UP) ;
  while (enumerator_9723.hasCurrentObject ()) {
    const GALGAS_readAccessWithInstructionAST temp_14 = object ;
    const GALGAS_readAccessWithInstructionAST temp_15 = object ;
    var_localConstantList_9646.addAssign_operation (enumerator_9723.current_mPropertyTypeEntry (HERE), GALGAS_lstring::constructor_new (temp_14.getter_mPrefix (HERE).getter_string (HERE).add_operation (enumerator_9723.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 263)), temp_15.getter_mEndOfReceiverExpression (HERE)  COMMA_SOURCE_FILE ("instruction-with.galgas", 263)), GALGAS_bool (true), var_objectArrayCppName_9195.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 265)).add_operation (enumerator_9723.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 265))  COMMA_SOURCE_FILE ("instruction-with.galgas", 261)) ;
    enumerator_9723.gotoNextObject () ;
  }
  const GALGAS_readAccessWithInstructionAST temp_16 = object ;
  const GALGAS_readAccessWithInstructionAST temp_17 = object ;
  var_localConstantList_9646.addAssign_operation (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 269)), GALGAS_lstring::constructor_new (temp_16.getter_mPrefix (HERE).getter_string (HERE).add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 270)), temp_17.getter_mEndOfReceiverExpression (HERE)  COMMA_SOURCE_FILE ("instruction-with.galgas", 270)), GALGAS_bool (true), var_objectArrayCppName_9195.add_operation (GALGAS_string ("->mPropertylkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 272))  COMMA_SOURCE_FILE ("instruction-with.galgas", 268)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_10620 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_18 = object ;
  const GALGAS_readAccessWithInstructionAST temp_19 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_9646, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 278)), temp_18.getter_mDoBranchInstructions (HERE), temp_19.getter_mEndOf_5F_do_5F_instructions (HERE), ioArgument_ioVariableMap, var_do_5F_instructionList_10620, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 273)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_10934 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_20 = object ;
  const GALGAS_readAccessWithInstructionAST temp_21 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 289)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 290)), temp_20.getter_mElseBranchInstructions (HERE), temp_21.getter_mEndOf_5F_else_5F_instructions (HERE), ioArgument_ioVariableMap, var_else_5F_instructionList_10934, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 285)) ;
  }
  {
  const GALGAS_readAccessWithInstructionAST temp_22 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_22.getter_mEndOf_5F_else_5F_instructions (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 296)) ;
  }
  const GALGAS_readAccessWithInstructionAST temp_23 = object ;
  const GALGAS_readAccessWithInstructionAST temp_24 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (temp_23.getter_mInstructionLocation (HERE), var_receiverExpression_8305, var_objectArrayCppName_9195, var_keyExpression_9139, temp_24.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE), var_do_5F_instructionList_10620, var_else_5F_instructionList_10934  COMMA_SOURCE_FILE ("instruction-with.galgas", 298))  COMMA_SOURCE_FILE ("instruction-with.galgas", 298)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_readAccessWithInstructionAST.mSlotID,
                                                   extensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteAccessWithInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_keyExpression_12031 ;
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mKeyExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 321)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_12031, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 318)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readWriteAccessWithInstructionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_keyExpression_12031.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 328)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 328)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_readWriteAccessWithInstructionAST temp_4 = object ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.getter_mEndOfKeyExpression (HERE), GALGAS_string ("the key type is '@").add_operation (var_keyExpression_12031.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 329)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 329)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 329)), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 329)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, var_keyExpression_12031.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 331)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 331)).objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_readWriteAccessWithInstructionAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.getter_mEndOfKeyExpression (HERE), GALGAS_string ("the key type is '@").add_operation (var_keyExpression_12031.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 332)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 332)).add_operation (GALGAS_string ("', it should be '@lstring'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 332)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 332)) ;
      }
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_9 = object ;
  GALGAS_string var_objectArrayCppName_12581 = GALGAS_string ("objectArray_").add_operation (temp_9.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 335)).getter_string (SOURCE_FILE ("instruction-with.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 335)) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_12725 ;
  GALGAS_string var_receiverVariableCppName_12763 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readWriteAccessWithInstructionAST temp_11 = object ;
    test_10 = temp_11.getter_mReceiverIsPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-with.galgas", 341)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_readWriteAccessWithInstructionAST temp_13 = object ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-with.galgas", 342)), GALGAS_string ("'self' cannot be used in this context"), fixItArray14  COMMA_SOURCE_FILE ("instruction-with.galgas", 342)) ;
          var_targetType_12725.drop () ; // Release error dropped variable
          var_receiverVariableCppName_12763.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_12) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-with.galgas", 344)).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_readWriteAccessWithInstructionAST temp_16 = object ;
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (temp_16.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-with.galgas", 345)), GALGAS_string ("'self' object is not mutable"), fixItArray17  COMMA_SOURCE_FILE ("instruction-with.galgas", 345)) ;
            var_targetType_12725.drop () ; // Release error dropped variable
            var_receiverVariableCppName_12763.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_15) {
          GALGAS_propertyMap var_propertyMap_13224 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 348)) ;
          const GALGAS_readWriteAccessWithInstructionAST temp_18 = object ;
          GALGAS_bool joker_13325 ; // Joker input parameter
          var_propertyMap_13224.method_searchKey (temp_18.getter_mReceiverName (HERE), joker_13325, var_targetType_12725, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 349)) ;
          const GALGAS_readWriteAccessWithInstructionAST temp_19 = object ;
          var_receiverVariableCppName_12763 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 351)).add_operation (temp_19.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 352)).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 352)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_10) {
    {
    const GALGAS_readWriteAccessWithInstructionAST temp_20 = object ;
    GALGAS_string joker_13734 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_20.getter_mReceiverName (HERE), var_targetType_12725, var_receiverVariableCppName_12763, joker_13734, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 355)) ;
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_21 = object ;
  cEnumerator_lstringlist enumerator_13981 (temp_21.getter_mFieldList (HERE), kENUMERATION_UP) ;
  while (enumerator_13981.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_14004 = var_targetType_12725.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 369)) ;
    GALGAS_bool var_isPublic_14081 ;
    var_propertyMap_14004.method_searchKey (enumerator_13981.current_mValue (HERE), var_isPublic_14081, var_targetType_12725, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 370)) ;
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = var_isPublic_14081.operator_not (SOURCE_FILE ("instruction-with.galgas", 371)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (enumerator_13981.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-with.galgas", 372)), GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray23  COMMA_SOURCE_FILE ("instruction-with.galgas", 372)) ;
      }
    }
    enumerator_13981.gotoNextObject () ;
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = var_targetType_12725.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 376)).getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 376)).operator_not (SOURCE_FILE ("instruction-with.galgas", 376)).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_readWriteAccessWithInstructionAST temp_25 = object ;
      TC_Array <C_FixItDescription> fixItArray26 ;
      inCompiler->emitSemanticError (temp_25.getter_mEndOfReceiverExpression (HERE), GALGAS_string ("the '@").add_operation (var_targetType_12725.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 377)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 377)), fixItArray26  COMMA_SOURCE_FILE ("instruction-with.galgas", 377)) ;
    }
  }
  enumGalgasBool test_27 = kBoolTrue ;
  if (kBoolTrue == test_27) {
    const GALGAS_readWriteAccessWithInstructionAST temp_28 = object ;
    test_27 = GALGAS_bool (kIsNotEqual, temp_28.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_27) {
      GALGAS_bool var_found_14551 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_14607 (var_targetType_12725.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 382)), kENUMERATION_UP) ;
      bool bool_29 = var_found_14551.operator_not (SOURCE_FILE ("instruction-with.galgas", 382)).isValidAndTrue () ;
      if (enumerator_14607.hasCurrentObject () && bool_29) {
        while (enumerator_14607.hasCurrentObject () && bool_29) {
          const GALGAS_readWriteAccessWithInstructionAST temp_30 = object ;
          var_found_14551 = GALGAS_bool (kIsEqual, enumerator_14607.current_mSearchMethodName (HERE).getter_string (HERE).objectCompare (temp_30.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE))) ;
          enumerator_14607.gotoNextObject () ;
          if (enumerator_14607.hasCurrentObject ()) {
            bool_29 = var_found_14551.operator_not (SOURCE_FILE ("instruction-with.galgas", 382)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        test_31 = var_found_14551.operator_not (SOURCE_FILE ("instruction-with.galgas", 385)).boolEnum () ;
        if (kBoolTrue == test_31) {
          const GALGAS_readWriteAccessWithInstructionAST temp_32 = object ;
          const GALGAS_readWriteAccessWithInstructionAST temp_33 = object ;
          TC_Array <C_FixItDescription> fixItArray34 ;
          inCompiler->emitSemanticError (temp_32.getter_mSearchMethodNameForErrorSignaling (HERE).getter_location (SOURCE_FILE ("instruction-with.galgas", 386)), GALGAS_string ("there is no '").add_operation (temp_33.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 386)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 386)).add_operation (var_targetType_12725.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 386)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 386)), fixItArray34  COMMA_SOURCE_FILE ("instruction-with.galgas", 386)) ;
        }
      }
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 390)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList_15093 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 392)) ;
  cEnumerator_typedPropertyList enumerator_15150 (var_targetType_12725.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 393)), kENUMERATION_UP) ;
  while (enumerator_15150.hasCurrentObject ()) {
    const GALGAS_readWriteAccessWithInstructionAST temp_35 = object ;
    const GALGAS_readWriteAccessWithInstructionAST temp_36 = object ;
    var_localInitializedVariableList_15093.addAssign_operation (enumerator_15150.current_mPropertyTypeEntry (HERE), GALGAS_lstring::constructor_new (temp_35.getter_mPrefix (HERE).getter_string (HERE).add_operation (enumerator_15150.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 396)), temp_36.getter_mEndOfReceiverExpression (HERE)  COMMA_SOURCE_FILE ("instruction-with.galgas", 396)), var_objectArrayCppName_12581.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 397)).add_operation (enumerator_15150.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 397))  COMMA_SOURCE_FILE ("instruction-with.galgas", 394)) ;
    enumerator_15150.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_37 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 403)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_38 = object ;
  const GALGAS_readWriteAccessWithInstructionAST temp_39 = object ;
  temp_37.addAssign_operation (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 400)), GALGAS_lstring::constructor_new (temp_38.getter_mPrefix (HERE).getter_string (HERE).add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 401)), temp_39.getter_mEndOfReceiverExpression (HERE)  COMMA_SOURCE_FILE ("instruction-with.galgas", 401)), GALGAS_bool (true), var_objectArrayCppName_12581.add_operation (GALGAS_string ("->mProperty_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 403))  COMMA_SOURCE_FILE ("instruction-with.galgas", 403)) ;
  GALGAS_localConstantList var_localConstantList_15421 = temp_37 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_16038 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_40 = object ;
  const GALGAS_readWriteAccessWithInstructionAST temp_41 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_15421, var_localInitializedVariableList_15093, temp_40.getter_m_5F_do_5F_Instructions (HERE), temp_41.getter_mEndOf_5F_do_5F_instructions (HERE), ioArgument_ioVariableMap, var_do_5F_instructionList_16038, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 405)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_16120 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_42 = object ;
  const GALGAS_readWriteAccessWithInstructionAST temp_43 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 422)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 423)), temp_42.getter_m_5F_else_5F_Instructions (HERE), temp_43.getter_mEndOf_5F_else_5F_instructions (HERE), ioArgument_ioVariableMap, var_else_5F_instructionList_16120, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 418)) ;
  }
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_44 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_44.getter_mEndOf_5F_else_5F_instructions (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)) ;
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_45 = object ;
  const GALGAS_readWriteAccessWithInstructionAST temp_46 = object ;
  const GALGAS_readWriteAccessWithInstructionAST temp_47 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (temp_45.getter_mInstructionLocation (HERE), var_receiverVariableCppName_12763, var_targetType_12725, temp_46.getter_mFieldList (HERE), var_objectArrayCppName_12581, var_keyExpression_12031, temp_47.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE), var_do_5F_instructionList_16038, var_else_5F_instructionList_16120  COMMA_SOURCE_FILE ("instruction-with.galgas", 431))  COMMA_SOURCE_FILE ("instruction-with.galgas", 431)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST.mSlotID,
                                                   extensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readOnlyWithInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_receiverVarCppName_18815 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName_18815, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 482)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_18835 = temp_1.getter_mReceiverExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 483)) ;
  GALGAS_string var_keyVarCppName_19056 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mKeyExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_19056, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 485)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const cMapElement_").add_operation (var_receiverType_18835.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)).add_operation (temp_3.getter_mObjectArrayCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 488)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 488)).add_operation (var_receiverType_18835.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 488)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 488)).add_operation (var_receiverVarCppName_18815, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 489)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 487)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_5 = object ;
    test_4 = GALGAS_bool (kIsEqual, temp_5.getter_mSearchMethodNameForErrorSignaling (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName_19056, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 491)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 491)) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_6 = object ;
    const GALGAS_readOnlyWithInstructionForGeneration temp_7 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("performSearch (").add_operation (var_keyVarCppName_19056, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 493)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 493)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 494)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 494)).add_operation (var_receiverType_18835.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)).add_operation (temp_6.getter_mSearchMethodNameForErrorSignaling (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)).add_operation (extensionGetter_commaSourceFile (temp_7.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 496)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 493)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 497)) COMMA_SOURCE_FILE ("instruction-with.galgas", 497)) ;
    }
  }
  const GALGAS_readOnlyWithInstructionForGeneration temp_8 = object ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_9 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != ").add_operation (temp_8.getter_mObjectArrayCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 499)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 499)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 499)).add_operation (temp_9.getter_mObjectArrayCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 500)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 500)).add_operation (var_receiverType_18835.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 500)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 500)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 499)) ;
  {
  const GALGAS_readOnlyWithInstructionForGeneration temp_10 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_10.getter_mDoBranchInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 501)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_12 = object ;
    test_11 = GALGAS_bool (kIsStrictSup, temp_12.getter_mElseBranchInstructions (HERE).getter_length (SOURCE_FILE ("instruction-with.galgas", 509)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 510)) ;
      {
      const GALGAS_readOnlyWithInstructionForGeneration temp_13 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_13.getter_mElseBranchInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 511)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 520)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_readOnlyWithInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration.mSlotID,
                                            extensionMethod_readOnlyWithInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_readOnlyWithInstructionForGeneration_generateInstruction (defineExtensionMethod_readOnlyWithInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteWithInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_readWriteWithInstructionForGeneration temp_0 = object ;
  GALGAS_string var_receiverCppName_21077 = temp_0.getter_mReceiverVariableCppName (HERE) ;
  const GALGAS_readWriteWithInstructionForGeneration temp_1 = object ;
  cEnumerator_lstringlist enumerator_21147 (temp_1.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_21147.hasCurrentObject ()) {
    var_receiverCppName_21077.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_21147.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 534)).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 534)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 534)) ;
    enumerator_21147.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName_21438 ;
  const GALGAS_readWriteWithInstructionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mKeyExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_21438, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 537)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 545)) COMMA_SOURCE_FILE ("instruction-with.galgas", 545)) ;
  }
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_3 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.getter_mReceiverVariableCppName (HERE) COMMA_SOURCE_FILE ("instruction-with.galgas", 546)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_4 = object ;
  extensionMethod_addHeaderFileName (temp_4.getter_mReceiverType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 547)) ;
  const GALGAS_readWriteWithInstructionForGeneration temp_5 = object ;
  const GALGAS_readWriteWithInstructionForGeneration temp_6 = object ;
  const GALGAS_readWriteWithInstructionForGeneration temp_7 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cMapElement_").add_operation (temp_5.getter_mReceiverType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 548)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 548)).add_operation (temp_6.getter_mObjectArrayCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 549)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 549)).add_operation (temp_7.getter_mReceiverType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 549)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 549)).add_operation (var_receiverCppName_21077, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 550)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 548)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_readWriteWithInstructionForGeneration temp_9 = object ;
    test_8 = GALGAS_bool (kIsEqual, temp_9.getter_mSearchMethodNameForErrorSignaling (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 552)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 552)).add_operation (var_keyVarCppName_21438, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 552)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 552)) ;
    }
  }
  if (kBoolFalse == test_8) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 554)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 554)).add_operation (var_keyVarCppName_21438, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 554)) ;
    const GALGAS_readWriteWithInstructionForGeneration temp_10 = object ;
    const GALGAS_readWriteWithInstructionForGeneration temp_11 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", kSearchErrorMessage_").add_operation (temp_10.getter_mReceiverType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 555)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 555)).add_operation (temp_11.getter_mSearchMethodNameForErrorSignaling (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 555)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 555)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_12 = object ;
  const GALGAS_readWriteWithInstructionForGeneration temp_13 = object ;
  const GALGAS_readWriteWithInstructionForGeneration temp_14 = object ;
  const GALGAS_readWriteWithInstructionForGeneration temp_15 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_12.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 557)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 557)).add_operation (GALGAS_string ("if (NULL != "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 557)).add_operation (temp_13.getter_mObjectArrayCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 558)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 558)).add_operation (GALGAS_string ("  macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 558)).add_operation (temp_14.getter_mObjectArrayCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 559)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 559)).add_operation (temp_15.getter_mReceiverType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 559)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 559)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 557)) ;
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_16 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_16.getter_mDoBranchInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 560)) ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_readWriteWithInstructionForGeneration temp_18 = object ;
    test_17 = GALGAS_bool (kIsStrictSup, temp_18.getter_mElseBranchInstructions (HERE).getter_length (SOURCE_FILE ("instruction-with.galgas", 568)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_17) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 569)) ;
      {
      const GALGAS_readWriteWithInstructionForGeneration temp_19 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_19.getter_mElseBranchInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 570)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 579)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_readWriteWithInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration.mSlotID,
                                            extensionMethod_readWriteWithInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_readWriteWithInstructionForGeneration_generateInstruction (defineExtensionMethod_readWriteWithInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalCallInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_nonterminalCallInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                             GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                             GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                             GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalCallInstruction * object = (const cPtr_nonterminalCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalCallInstruction) ;
  GALGAS_uint var_nonTerminalSymbolIndex_2892 ;
  const GALGAS_nonterminalCallInstruction temp_0 = object ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_2977 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (temp_0.getter_mNonterminalName (HERE), var_nonTerminalSymbolIndex_2892, joker_2977, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 64)) ;
  const GALGAS_nonterminalCallInstruction temp_1 = object ;
  const GALGAS_nonterminalCallInstruction temp_2 = object ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (temp_1.getter_mInstructionLocation (HERE), temp_2.getter_mNonterminalName (HERE), var_nonTerminalSymbolIndex_2892  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_nonterminalCallInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                             extensionMethod_nonterminalCallInstruction_transformInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_nonterminalCallInstruction_transformInstruction (defineExtensionMethod_nonterminalCallInstruction_transformInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalCallInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalCallInstruction * object = (const cPtr_nonterminalCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalCallInstruction) ;
  GALGAS_nonterminalLabelMap var_labelMap_4076 ;
  const GALGAS_nonterminalCallInstruction temp_0 = object ;
  constinArgument_inNonterminalMap.method_searchKey (temp_0.getter_mNonterminalName (HERE), var_labelMap_4076, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 90)) ;
  GALGAS_formalParameterSignature var_signature_4115 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_nonterminalCallInstruction temp_2 = object ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.getter_mLabelName (HERE).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 92)).objectCompare (GALGAS_string ("parse"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_signature_4115 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 93)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_nonterminalCallInstruction temp_3 = object ;
    GALGAS_formalParameterListForGeneration joker_4230 ; // Joker input parameter
    GALGAS_location joker_4244 ; // Joker input parameter
    var_labelMap_4076.method_searchKey (temp_3.getter_mLabelName (HERE), joker_4230, var_signature_4115, joker_4244, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 95)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4656 ;
  {
  const GALGAS_nonterminalCallInstruction temp_4 = object ;
  const GALGAS_nonterminalCallInstruction temp_5 = object ;
  const GALGAS_nonterminalCallInstruction temp_6 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_4.getter_mNonterminalName (HERE), GALGAS_string ("'<").add_operation (temp_5.getter_mNonterminalName (HERE).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 103)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 103)), var_signature_4115, temp_6.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4656, inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 98)) ;
  }
  const GALGAS_nonterminalCallInstruction temp_7 = object ;
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_7.getter_mGrammarInstructionSyntaxDirectedTranslationResult (HERE).ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 111)) ;
  const GALGAS_nonterminalCallInstruction temp_8 = object ;
  const GALGAS_nonterminalCallInstruction temp_9 = object ;
  const GALGAS_nonterminalCallInstruction temp_10 = object ;
  const GALGAS_nonterminalCallInstruction temp_11 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), temp_9.getter_mNonterminalName (HERE).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 119)), temp_10.getter_mLabelName (HERE).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 120)), var_actualParameterListForGeneration_4656, temp_11.getter_mGrammarInstructionSyntaxDirectedTranslationResult (HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 117))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 117)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                                 extensionMethod_nonterminalCallInstruction_analyzeSyntaxInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (defineExtensionMethod_nonterminalCallInstruction_analyzeSyntaxInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       const GALGAS_string constinArgument_inPosfix,
                                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  const GALGAS_nonterminalInstructionForGeneration temp_0 = object ;
  const GALGAS_nonterminalInstructionForGeneration temp_1 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (temp_0.getter_mInstructionLocation (HERE), temp_1.getter_mNonterminalName (HERE), constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 149)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-non-terminal.galgas", 150))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 145))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 145)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                              extensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@nonterminalInstructionForGeneration compareInstructionSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                          const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_nonterminalInstructionForGeneration cast_6966_si ((cPtr_nonterminalInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      const GALGAS_nonterminalInstructionForGeneration temp_0 = object ;
      result_outOk = GALGAS_bool (kIsEqual, temp_0.getter_mNonterminalName (HERE).objectCompare (cast_6966_si.getter_mNonterminalName (SOURCE_FILE ("instruction-non-terminal.galgas", 163)))) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = result_outOk.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 164)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_nonterminalInstructionForGeneration temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (cast_6966_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-non-terminal.galgas", 165)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_2.getter_mNonterminalName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 166)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 166)), fixItArray3  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 165)) ;
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_7274_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      const GALGAS_nonterminalInstructionForGeneration temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (cast_7274_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-non-terminal.galgas", 169)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_4.getter_mNonterminalName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 170)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 170)), fixItArray5  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 169)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      const GALGAS_nonterminalInstructionForGeneration temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mInstructionLocation (HERE), GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 173)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = result_outOk.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 176)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_nonterminalInstructionForGeneration temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.getter_mInstructionLocation (HERE), GALGAS_string ("reference syntax instruction is here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 177)) ;
    }
  }
//---
  return result_outOk ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature (void) {
  enterExtensionGetter_compareInstructionSyntaxSignature (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                                          extensionGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature (defineExtensionGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_stringlist var_parameterCppNameList_8231 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 194)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_8282 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 195)) ;
  GALGAS_stringlist var_inputVariableList_8322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 196)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_0 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_8376 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_8376.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_8639 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_8376.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_8282, var_inputVariableList_8322, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8639, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 198)) ;
    var_parameterCppNameList_8231.addAssign_operation (var_parameterCppName_8639  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 207)) ;
    enumerator_8376.gotoNextObject () ;
  }
  const GALGAS_nonterminalInstructionForGeneration temp_1 = object ;
  GALGAS_string var_sdtResultVarName_8746 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_1.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 210)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 210)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (var_sdtResultVarName_8746, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)) ;
    }
  }
  const GALGAS_nonterminalInstructionForGeneration temp_3 = object ;
  const GALGAS_nonterminalInstructionForGeneration temp_4 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("nt_").add_operation (temp_3.getter_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)).add_operation (temp_4.getter_mLabelName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)) ;
  cEnumerator_stringlist enumerator_9117 (var_parameterCppNameList_8231, kENUMERATION_UP) ;
  while (enumerator_9117.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_9117.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 216)) ;
    enumerator_9117.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_sdtResultVarName_8746.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)) ;
    }
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 221)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 221)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 222)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 222)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_6 = object ;
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_6.getter_mGrammarInstructionSyntaxDirectedTranslationResult (HERE).ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_8746, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 223)) ;
  cEnumerator_stringlist enumerator_9656 (var_jokerParametersToReleaseList_8282, kENUMERATION_UP) ;
  while (enumerator_9656.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_9656.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 231)) ;
    enumerator_9656.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_nonterminalInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                            extensionMethod_nonterminalInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_generateInstruction (defineExtensionMethod_nonterminalInstructionForGeneration_generateInstruction, NULL) ;

