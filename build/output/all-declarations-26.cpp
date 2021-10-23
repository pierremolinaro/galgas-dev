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
  cEnumerator_castInstructionBranchListAST enumerator_4517 (temp_2.getter_mCastInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_4517.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4517.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 128)) ;
    enumerator_4517.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_castExpression_5241 ;
  const GALGAS_structuredCastInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mCastExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-cast.galgas", 147)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_castExpression_5241, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 144)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 153)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList_5588 = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 155)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = object ;
  cEnumerator_castInstructionBranchListAST enumerator_5676 (temp_1.getter_mCastInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_5676.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_type_5714 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_5676.current_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 158)) ;
    GALGAS_unifiedTypeMap_2D_entry var_t_5892 = var_type_5714 ;
    GALGAS_bool var_found_5915 = GALGAS_bool (kIsEqual, var_t_5892.objectCompare (var_castExpression_5241.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 161)))) ;
    if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 162)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 162)).isValid ()) {
      uint32_t variant_5960 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 162)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 162)).uintValue () ;
      bool loop_5960 = true ;
      while (loop_5960) {
        loop_5960 = var_found_5915.operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_and (var_t_5892.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).isValid () ;
        if (loop_5960) {
          loop_5960 = var_found_5915.operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_and (var_t_5892.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).boolValue () ;
        }
        if (loop_5960 && (0 == variant_5960)) {
          loop_5960 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 162)) ;
        }
        if (loop_5960) {
          variant_5960 -- ;
          var_t_5892 = var_t_5892.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 164)) ;
          var_found_5915 = GALGAS_bool (kIsEqual, var_t_5892.objectCompare (var_castExpression_5241.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 165)))) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_found_5915.operator_not (SOURCE_FILE ("instruction-cast.galgas", 167)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5676.current_mTypeName (HERE).getter_location (SOURCE_FILE ("instruction-cast.galgas", 168)), GALGAS_string ("the '@").add_operation (enumerator_5676.current_mTypeName (HERE).getter_string (SOURCE_FILE ("instruction-cast.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (var_castExpression_5241.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 169)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)), fixItArray3  COMMA_SOURCE_FILE ("instruction-cast.galgas", 168)) ;
      }
    }
    GALGAS_string var_localConstantName_6405 ;
    GALGAS_localConstantList var_localConstantList_6431 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 173)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_5676.current_mConstantVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_localConstantName_6405 = GALGAS_string ("cast_").add_operation (enumerator_5676.current_mConstantVarName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (enumerator_5676.current_mConstantVarName (HERE).getter_string (SOURCE_FILE ("instruction-cast.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)) ;
        var_localConstantList_6431.addAssign_operation (var_type_5714, enumerator_5676.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName_6405  COMMA_SOURCE_FILE ("instruction-cast.galgas", 176)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_localConstantName_6405 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_6875 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_6431, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 191)), enumerator_5676.current_mInstructionList (HERE), enumerator_5676.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_6875, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 186)) ;
    }
    var_castBranchList_5588.addAssign_operation (enumerator_5676.current_mTypeComparisonKind (HERE), var_type_5714, var_localConstantName_6405, var_instructionList_6875  COMMA_SOURCE_FILE ("instruction-cast.galgas", 197)) ;
    enumerator_5676.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_7319 ;
  {
  const GALGAS_structuredCastInstructionAST temp_5 = object ;
  const GALGAS_structuredCastInstructionAST temp_6 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 205)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 206)), temp_5.getter_mElseInstructionList (HERE), temp_6.getter_mEndOfCastInstruction (HERE), ioArgument_ioVariableMap, var_else_5F_instructionList_7319, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 201)) ;
  }
  {
  const GALGAS_structuredCastInstructionAST temp_7 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_7.getter_mEndOfCastInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 213)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::constructor_new (var_castExpression_5241, var_castBranchList_5588, var_else_5F_instructionList_7319  COMMA_SOURCE_FILE ("instruction-cast.galgas", 215))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 215)) ;
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
  GALGAS_string var_castCppVarName_9438 ;
  const GALGAS_structuredCastInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_9438, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 251)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_9438, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 260)) ;
  }
  const GALGAS_structuredCastInstructionForGeneration temp_1 = object ;
  cEnumerator_castInstructionBranchListForGeneration enumerator_9586 (temp_1.getter_mCastBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_9586.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_9586.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 262)) ;
    switch (enumerator_9586.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_9438, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (enumerator_9586.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 266)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (enumerator_9586.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)).add_operation (var_castCppVarName_9438, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((").add_operation (var_castCppVarName_9438, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)).add_operation (enumerator_9586.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 274)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)).add_operation (enumerator_9586.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)).add_operation (var_castCppVarName_9438, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, enumerator_9586.current_mCastedVarCppName (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 279)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (enumerator_9586.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)).add_operation (enumerator_9586.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (enumerator_9586.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (var_castCppVarName_9438, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 280)) ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_9586.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 285)) ;
    }
    if (enumerator_9586.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)) ;
    }
    enumerator_9586.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_7378 ;
  GALGAS_string var_targetVariableCppName_7414 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_7464 ;
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
          var_targetType_7378.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_7464.drop () ; // Release error dropped variable
          var_targetVariableCppName_7414.drop () ; // Release error dropped variable
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
            var_targetType_7378.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_7464.drop () ; // Release error dropped variable
            var_targetVariableCppName_7414.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_7934 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 205)) ;
          const GALGAS_plusEqualExpressionInstructionAST temp_8 = object ;
          GALGAS_bool joker_8035 ; // Joker input parameter
          var_propertyMap_7934.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_8035, var_targetType_7378, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 206)) ;
          var_nameForCheckingFormalParameterUsing_7464 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_plusEqualExpressionInstructionAST temp_9 = object ;
          var_targetVariableCppName_7414 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 208)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 208)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 208)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualExpressionInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_7378, var_targetVariableCppName_7414, var_nameForCheckingFormalParameterUsing_7464, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 211)) ;
    }
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_8745 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_8745.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_8768 = var_targetType_7378.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 226)) ;
    GALGAS_bool var_isPublic_8845 ;
    var_propertyMap_8768.method_searchKey (enumerator_8745.current_mValue (HERE), var_isPublic_8845, var_targetType_7378, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 227)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_8845.operator_not (SOURCE_FILE ("instruction-concat.galgas", 228)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_8745.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 229)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 229)) ;
      }
    }
    enumerator_8745.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_7378.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 233)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 233)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 233)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_plusEqualExpressionInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_7378.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 234)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_9523 ;
  const GALGAS_plusEqualExpressionInstructionAST temp_17 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_17.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_7378, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9523, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 238)) ;
  {
  const GALGAS_plusEqualExpressionInstructionAST temp_18 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_7378, var_expression_9523.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 247)), temp_18.getter_mInstructionLocation (HERE), var_expression_9523, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 247)) ;
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_19 = object ;
  const GALGAS_plusEqualExpressionInstructionAST temp_20 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_19.getter_mInstructionLocation (HERE), var_targetType_7378, var_targetVariableCppName_7414, var_nameForCheckingFormalParameterUsing_7464, temp_20.getter_mStructAttributeList (HERE), var_expression_9523, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 249))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 249)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_10529 ;
  GALGAS_string var_targetVariableCppName_10565 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_10615 ;
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
          var_targetType_10529.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_10615.drop () ; // Release error dropped variable
          var_targetVariableCppName_10565.drop () ; // Release error dropped variable
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
            var_targetType_10529.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_10615.drop () ; // Release error dropped variable
            var_targetVariableCppName_10565.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_11085 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 281)) ;
          const GALGAS_minusEqualExpressionInstructionAST temp_8 = object ;
          GALGAS_bool joker_11186 ; // Joker input parameter
          var_propertyMap_11085.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_11186, var_targetType_10529, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 282)) ;
          var_nameForCheckingFormalParameterUsing_10615 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_minusEqualExpressionInstructionAST temp_9 = object ;
          var_targetVariableCppName_10565 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 284)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 284)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 284)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_minusEqualExpressionInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_10529, var_targetVariableCppName_10565, var_nameForCheckingFormalParameterUsing_10615, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 287)) ;
    }
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_11896 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_11896.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_11919 = var_targetType_10529.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 302)) ;
    GALGAS_bool var_isPublic_11996 ;
    var_propertyMap_11919.method_searchKey (enumerator_11896.current_mValue (HERE), var_isPublic_11996, var_targetType_10529, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 303)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_11996.operator_not (SOURCE_FILE ("instruction-concat.galgas", 304)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_11896.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 305)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 305)) ;
      }
    }
    enumerator_11896.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_10529.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 309)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 309)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 309)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_minusEqualExpressionInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_10529.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 311)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 311)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 310)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_12675 ;
  const GALGAS_minusEqualExpressionInstructionAST temp_17 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_17.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10529, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_12675, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 314)) ;
  {
  const GALGAS_minusEqualExpressionInstructionAST temp_18 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_10529, var_expression_12675.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 323)), temp_18.getter_mInstructionLocation (HERE), var_expression_12675, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 323)) ;
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_19 = object ;
  const GALGAS_minusEqualExpressionInstructionAST temp_20 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_19.getter_mInstructionLocation (HERE), var_targetType_10529, var_targetVariableCppName_10565, var_nameForCheckingFormalParameterUsing_10615, temp_20.getter_mStructAttributeList (HERE), var_expression_12675, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 325))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 325)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_13680 ;
  GALGAS_string var_targetVariableCppName_13716 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_13766 ;
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
          var_targetType_13680.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_13766.drop () ; // Release error dropped variable
          var_targetVariableCppName_13716.drop () ; // Release error dropped variable
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
            var_targetType_13680.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_13766.drop () ; // Release error dropped variable
            var_targetVariableCppName_13716.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_14236 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 357)) ;
          const GALGAS_mulEqualExpressionInstructionAST temp_8 = object ;
          GALGAS_bool joker_14337 ; // Joker input parameter
          var_propertyMap_14236.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_14337, var_targetType_13680, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 358)) ;
          var_nameForCheckingFormalParameterUsing_13766 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_mulEqualExpressionInstructionAST temp_9 = object ;
          var_targetVariableCppName_13716 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 360)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 360)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 360)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_mulEqualExpressionInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_13680, var_targetVariableCppName_13716, var_nameForCheckingFormalParameterUsing_13766, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 363)) ;
    }
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_15047 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_15047.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_15070 = var_targetType_13680.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 378)) ;
    GALGAS_bool var_isPublic_15147 ;
    var_propertyMap_15070.method_searchKey (enumerator_15047.current_mValue (HERE), var_isPublic_15147, var_targetType_13680, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 379)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_15147.operator_not (SOURCE_FILE ("instruction-concat.galgas", 380)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_15047.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 381)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 381)) ;
      }
    }
    enumerator_15047.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_13680.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 385)).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 385)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_mulEqualExpressionInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_13680.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 386)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_15820 ;
  const GALGAS_mulEqualExpressionInstructionAST temp_17 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_17.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_13680, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15820, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 390)) ;
  {
  const GALGAS_mulEqualExpressionInstructionAST temp_18 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_13680, var_expression_15820.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 399)), temp_18.getter_mInstructionLocation (HERE), var_expression_15820, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 399)) ;
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_19 = object ;
  const GALGAS_mulEqualExpressionInstructionAST temp_20 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_19.getter_mInstructionLocation (HERE), var_targetType_13680, var_targetVariableCppName_13716, var_nameForCheckingFormalParameterUsing_13766, temp_20.getter_mStructAttributeList (HERE), var_expression_15820, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 401))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 401)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_16823 ;
  GALGAS_string var_targetVariableCppName_16859 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_16909 ;
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
          var_targetType_16823.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_16909.drop () ; // Release error dropped variable
          var_targetVariableCppName_16859.drop () ; // Release error dropped variable
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
            var_targetType_16823.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_16909.drop () ; // Release error dropped variable
            var_targetVariableCppName_16859.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_17379 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 433)) ;
          const GALGAS_divEqualExpressionInstructionAST temp_8 = object ;
          GALGAS_bool joker_17480 ; // Joker input parameter
          var_propertyMap_17379.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_17480, var_targetType_16823, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 434)) ;
          var_nameForCheckingFormalParameterUsing_16909 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_divEqualExpressionInstructionAST temp_9 = object ;
          var_targetVariableCppName_16859 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 436)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 436)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 436)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_divEqualExpressionInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_16823, var_targetVariableCppName_16859, var_nameForCheckingFormalParameterUsing_16909, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 439)) ;
    }
  }
  const GALGAS_divEqualExpressionInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_18190 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_18190.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_18213 = var_targetType_16823.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 454)) ;
    GALGAS_bool var_isPublic_18290 ;
    var_propertyMap_18213.method_searchKey (enumerator_18190.current_mValue (HERE), var_isPublic_18290, var_targetType_16823, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 455)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_18290.operator_not (SOURCE_FILE ("instruction-concat.galgas", 456)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_18190.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 457)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 457)) ;
      }
    }
    enumerator_18190.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_16823.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 461)).getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 461)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_divEqualExpressionInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_16823.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 462)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_18963 ;
  const GALGAS_divEqualExpressionInstructionAST temp_17 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_17.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_16823, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_18963, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 466)) ;
  {
  const GALGAS_divEqualExpressionInstructionAST temp_18 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_16823, var_expression_18963.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 475)), temp_18.getter_mInstructionLocation (HERE), var_expression_18963, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 475)) ;
  }
  const GALGAS_divEqualExpressionInstructionAST temp_19 = object ;
  const GALGAS_divEqualExpressionInstructionAST temp_20 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_19.getter_mInstructionLocation (HERE), var_targetType_16823, var_targetVariableCppName_16859, var_nameForCheckingFormalParameterUsing_16909, temp_20.getter_mStructAttributeList (HERE), var_expression_18963, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 477))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 477)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_19966 ;
  GALGAS_string var_targetVariableCppName_20002 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_20052 ;
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
          var_targetType_19966.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_20052.drop () ; // Release error dropped variable
          var_targetVariableCppName_20002.drop () ; // Release error dropped variable
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
            var_targetType_19966.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_20052.drop () ; // Release error dropped variable
            var_targetVariableCppName_20002.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_20522 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 509)) ;
          const GALGAS_plusEqualElementsInstructionAST temp_8 = object ;
          GALGAS_bool joker_20623 ; // Joker input parameter
          var_propertyMap_20522.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_20623, var_targetType_19966, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 510)) ;
          var_nameForCheckingFormalParameterUsing_20052 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_plusEqualElementsInstructionAST temp_9 = object ;
          var_targetVariableCppName_20002 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 512)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 512)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 512)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualElementsInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_19966, var_targetVariableCppName_20002, var_nameForCheckingFormalParameterUsing_20052, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 515)) ;
    }
  }
  const GALGAS_plusEqualElementsInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_21295 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_21295.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_21318 = var_targetType_19966.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 531)) ;
    GALGAS_bool var_isPublic_21395 ;
    var_propertyMap_21318.method_searchKey (enumerator_21295.current_mValue (HERE), var_isPublic_21395, var_targetType_19966, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 532)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_21395.operator_not (SOURCE_FILE ("instruction-concat.galgas", 533)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_21295.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 534)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 534)) ;
      }
    }
    enumerator_21295.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_21614 = var_targetType_19966.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 538)) ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_21614.getter_length (SOURCE_FILE ("instruction-concat.galgas", 539)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_plusEqualElementsInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_19966.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 540)) ;
    }
  }
  if (kBoolFalse == test_14) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      const GALGAS_plusEqualElementsInstructionAST temp_18 = object ;
      test_17 = GALGAS_bool (kIsNotEqual, temp_18.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-concat.galgas", 543)).objectCompare (var_addAssignOperatorArguments_21614.getter_length (SOURCE_FILE ("instruction-concat.galgas", 543)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GALGAS_plusEqualElementsInstructionAST temp_19 = object ;
        const GALGAS_plusEqualElementsInstructionAST temp_20 = object ;
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_19.getter_mInstructionLocation (HERE), GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_targetType_19966.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)).add_operation (var_addAssignOperatorArguments_21614.getter_length (SOURCE_FILE ("instruction-concat.galgas", 546)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 546)).add_operation (temp_20.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-concat.galgas", 547)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 546)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 547)), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 544)) ;
      }
    }
    if (kBoolFalse == test_17) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_22364 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 549)) ;
      const GALGAS_plusEqualElementsInstructionAST temp_22 = object ;
      cEnumerator_actualOutputExpressionList enumerator_22401 (temp_22.getter_mExpressions (HERE), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_22435 (var_addAssignOperatorArguments_21614, kENUMERATION_UP) ;
      while (enumerator_22401.hasCurrentObject () && enumerator_22435.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_22686 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_22401.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_22435.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_22686, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 551)) ;
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          test_23 = GALGAS_bool (kIsNotEqual, enumerator_22435.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_22401.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_23) {
            GALGAS_string temp_24 ;
            const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_22435.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_25) {
              temp_24 = GALGAS_string (":") ;
            }else if (kBoolFalse == test_25) {
              temp_24 = GALGAS_string::makeEmptyString () ;
            }
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_22401.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 560)), GALGAS_string ("the selector should be '!").add_operation (enumerator_22435.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 561)).add_operation (temp_24, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 561)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 561)), fixItArray26  COMMA_SOURCE_FILE ("instruction-concat.galgas", 560)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_22435.current_mFormalArgumentType (HERE), var_expression_22686.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 563)), enumerator_22401.current_mEndOfExpressionLocation (HERE), var_expression_22686, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 563)) ;
        }
        var_effectiveParameterList_22364.addAssign_operation (var_expression_22686  COMMA_SOURCE_FILE ("instruction-concat.galgas", 564)) ;
        enumerator_22401.gotoNextObject () ;
        enumerator_22435.gotoNextObject () ;
      }
      const GALGAS_plusEqualElementsInstructionAST temp_27 = object ;
      const GALGAS_plusEqualElementsInstructionAST temp_28 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_targetVariableCppName_20002, var_targetType_19966, var_nameForCheckingFormalParameterUsing_20052, temp_27.getter_mInstructionLocation (HERE), temp_28.getter_mStructAttributeList (HERE), var_effectiveParameterList_22364  COMMA_SOURCE_FILE ("instruction-concat.galgas", 567))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 567)) ;
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
  GALGAS_stringlist var_parameterList_24466 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 600)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_1 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_24515 (temp_1.getter_mExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_24515.hasCurrentObject ()) {
    GALGAS_string var_parameter_24698 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_24515.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_24698, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 602)) ;
    var_parameterList_24466.addAssign_operation (var_parameter_24698  COMMA_SOURCE_FILE ("instruction-concat.galgas", 609)) ;
    enumerator_24515.gotoNextObject () ;
  }
  {
  const GALGAS_plusEqualnstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.getter_mNameForCheckingFormalParameterUsing (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 612)) ;
  }
  const GALGAS_plusEqualnstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.getter_mReceiverCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 613)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_4 = object ;
  cEnumerator_lstringlist enumerator_24925 (temp_4.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_24925.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_24925.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 615)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 615)) ;
    enumerator_24925.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 618)) ;
  {
  const GALGAS_plusEqualnstructionForGeneration temp_5 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.getter_mReceiverCppName (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 619)) ;
  }
  cEnumerator_stringlist enumerator_25189 (var_parameterList_24466, kENUMERATION_UP) ;
  while (enumerator_25189.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_25189.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 621)) ;
    if (enumerator_25189.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 622)) ;
    }
    enumerator_25189.gotoNextObject () ;
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
  GALGAS_string var_sourceVar_26664 ;
  const GALGAS_opEqualInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_26664, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 652)) ;
  {
  const GALGAS_opEqualInstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.getter_mNameForCheckingFormalParameterUsing (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 659)) ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.getter_mTargetVariableCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 660)) ;
  const GALGAS_opEqualInstructionForGeneration temp_4 = object ;
  cEnumerator_lstringlist enumerator_26841 (temp_4.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_26841.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_26841.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 662)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 662)) ;
    enumerator_26841.gotoNextObject () ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_5 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (temp_5.getter_mGeneratedMethod (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 664)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 664)).add_operation (var_sourceVar_26664, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 664)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 664)) ;
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
  cEnumerator_lstringlist enumerator_2213 (temp_0.getter_mDropList (HERE), kENUMERATION_UP) ;
  while (enumerator_2213.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_entry joker_2267_3 ; // Joker input parameter
    GALGAS_string joker_2267_2 ; // Joker input parameter
    GALGAS_string joker_2267_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForDropAccess (enumerator_2213.current_mValue (HERE), joker_2267_3, joker_2267_2, joker_2267_1, inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 53)) ;
    }
    enumerator_2213.gotoNextObject () ;
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
      GALGAS_getterMap var_getterMap_6615 = outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 174)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 174)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_getterMap_6615.getter_hasKey (GALGAS_string ("location") COMMA_SOURCE_FILE ("instruction-error.galgas", 175)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_methodKind var_kind_6796 ;
          GALGAS_functionSignature var_argumentTypeList_6845 ;
          GALGAS_bool var_hasCompilerArgument_6895 ;
          GALGAS_unifiedTypeMap_2D_entry var_returnedType_6943 ;
          GALGAS_location joker_6855 ; // Joker input parameter
          GALGAS_methodQualifier joker_6953_2 ; // Joker input parameter
          GALGAS_string joker_6953_1 ; // Joker input parameter
          var_getterMap_6615.method_searchKey (GALGAS_string ("location").getter_nowhere (SOURCE_FILE ("instruction-error.galgas", 177)), var_kind_6796, var_argumentTypeList_6845, joker_6855, var_hasCompilerArgument_6895, var_returnedType_6943, joker_6953_2, joker_6953_1, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 176)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsNotEqual, var_argumentTypeList_6845.getter_length (SOURCE_FILE ("instruction-error.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 187)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (GALGAS_string ("' and defines a 'location' getter with arguments; it should be either of the '@location' type,"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (GALGAS_string (" either defines a 'location' getter without argument that returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 188)), fixItArray3  COMMA_SOURCE_FILE ("instruction-error.galgas", 186)) ;
            }
          }
          if (kBoolFalse == test_2) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsNotEqual, var_returnedType_6943.objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 192)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (GALGAS_string ("' and defines a 'location' getter that returns an '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (var_returnedType_6943.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 193)).add_operation (GALGAS_string ("' object; it should be either of the '@location' type, either defines a 'location' getter without"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 193)).add_operation (GALGAS_string (" argument that returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 194)), fixItArray5  COMMA_SOURCE_FILE ("instruction-error.galgas", 191)) ;
              }
            }
            if (kBoolFalse == test_4) {
              GALGAS_getterCallExpressionForGeneration var_conversionExpression_7896 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE), constinArgument_inErrorLocation, var_kind_6796, outArgument_outLocationExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 202)), constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 203)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 204)), var_hasCompilerArgument_6895  COMMA_SOURCE_FILE ("instruction-error.galgas", 197)) ;
              outArgument_outLocationExpression = var_conversionExpression_7896 ;
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
  cEnumerator_fixitListAST enumerator_8964 (constinArgument_inFixitListAST, kENUMERATION_UP) ;
  while (enumerator_8964.hasCurrentObject ()) {
    switch (enumerator_8964.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 230))  COMMA_SOURCE_FILE ("instruction-error.galgas", 230)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_9961 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_8964.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_9961->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_9961->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_9345 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9345, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 232)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, var_expression_9345.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 240)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (kIsNotEqual, var_expression_9345.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 241)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_9 = test_8 ;
          if (kBoolTrue == test_9.boolEnum ()) {
            test_9 = GALGAS_bool (kIsNotEqual, var_expression_9345.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 242)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_10 = test_9 ;
          if (kBoolTrue == test_10.boolEnum ()) {
            test_10 = GALGAS_bool (kIsNotEqual, var_expression_9345.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 243)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_7 = test_10.boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_9345.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 244)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 244)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 244)), fixItArray11  COMMA_SOURCE_FILE ("instruction-error.galgas", 244)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItReplace (var_expression_9345  COMMA_SOURCE_FILE ("instruction-error.galgas", 247))  COMMA_SOURCE_FILE ("instruction-error.galgas", 247)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_10873 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_8964.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_10873->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_10873->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_10252 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10252, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 249)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          GALGAS_bool test_13 = GALGAS_bool (kIsNotEqual, var_expression_10252.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 257)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = GALGAS_bool (kIsNotEqual, var_expression_10252.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 258)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_14 = test_13 ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = GALGAS_bool (kIsNotEqual, var_expression_10252.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 259)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_15 = test_14 ;
          if (kBoolTrue == test_15.boolEnum ()) {
            test_15 = GALGAS_bool (kIsNotEqual, var_expression_10252.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 260)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_12 = test_15.boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_10252.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 261)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 261)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 261)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 261)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertBefore (var_expression_10252  COMMA_SOURCE_FILE ("instruction-error.galgas", 264))  COMMA_SOURCE_FILE ("instruction-error.galgas", 264)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_11783 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_8964.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_11783->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_11783->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_11163 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11163, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 266)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          GALGAS_bool test_18 = GALGAS_bool (kIsNotEqual, var_expression_11163.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 274)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_18.boolEnum ()) {
            test_18 = GALGAS_bool (kIsNotEqual, var_expression_11163.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 275)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_19 = test_18 ;
          if (kBoolTrue == test_19.boolEnum ()) {
            test_19 = GALGAS_bool (kIsNotEqual, var_expression_11163.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 276)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_20 = test_19 ;
          if (kBoolTrue == test_20.boolEnum ()) {
            test_20 = GALGAS_bool (kIsNotEqual, var_expression_11163.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 277)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_17 = test_20.boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_11163.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 278)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 278)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 278)), fixItArray21  COMMA_SOURCE_FILE ("instruction-error.galgas", 278)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertAfter (var_expression_11163  COMMA_SOURCE_FILE ("instruction-error.galgas", 281))  COMMA_SOURCE_FILE ("instruction-error.galgas", 281)) ;
      }
      break ;
    }
    enumerator_8964.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_locationExpression_12867 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_12894 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_12926 ;
  {
  const GALGAS_errorInstructionAST temp_0 = object ;
  const GALGAS_errorInstructionAST temp_1 = object ;
  const GALGAS_errorInstructionAST temp_2 = object ;
  const GALGAS_errorInstructionAST temp_3 = object ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_0.getter_mLocationExpression (HERE), temp_1.getter_mMessageExpression (HERE), temp_2.getter_mFixitListAST (HERE), temp_3.getter_mInstructionLocation (HERE), GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_12867, var_messageExpression_12894, var_fixitListForGeneration_12926, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 302)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_12991 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 317)) ;
  const GALGAS_errorInstructionAST temp_4 = object ;
  cEnumerator_lstringlist enumerator_13044 (temp_4.getter_mBuiltVariableList (HERE), kENUMERATION_UP) ;
  while (enumerator_13044.hasCurrentObject ()) {
    GALGAS_string var_varCppName_13116 ;
    {
    GALGAS_unifiedTypeMap_2D_entry joker_13099 ; // Joker input parameter
    GALGAS_string joker_13118 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForWriteAccess (enumerator_13044.current_mValue (HERE), joker_13099, var_varCppName_13116, joker_13118, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 319)) ;
    }
    var_builtVariableCppNameList_12991.addAssign_operation (var_varCppName_13116  COMMA_SOURCE_FILE ("instruction-error.galgas", 320)) ;
    enumerator_13044.gotoNextObject () ;
  }
  const GALGAS_errorInstructionAST temp_5 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::constructor_new (temp_5.getter_mInstructionLocation (HERE), var_locationExpression_12867, var_messageExpression_12894, var_builtVariableCppNameList_12991, var_fixitListForGeneration_12926  COMMA_SOURCE_FILE ("instruction-error.galgas", 323))  COMMA_SOURCE_FILE ("instruction-error.galgas", 323)) ;
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
  GALGAS_string var_receiverCppVarName_16505 ;
  const GALGAS_errorInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_16505, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 402)) ;
  GALGAS_string var_messageCppVarName_16712 ;
  const GALGAS_errorInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mErrorExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_16712, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 410)) ;
  GALGAS_string var_fixItArrayCppName_16965 ;
  const GALGAS_errorInstructionForGeneration temp_2 = object ;
  extensionMethod_generateFixIt (temp_2.getter_mFixitListForGeneration (HERE), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_16965, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 418)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 427)) COMMA_SOURCE_FILE ("instruction-error.galgas", 427)) ;
  }
  const GALGAS_errorInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 428)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 428)).add_operation (var_receiverCppVarName_16505, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 428)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 429)).add_operation (var_messageCppVarName_16712, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 429)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 430)).add_operation (var_fixItArrayCppName_16965, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 430)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (extensionGetter_commaSourceFile (temp_3.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 428)) ;
  const GALGAS_errorInstructionForGeneration temp_4 = object ;
  cEnumerator_stringlist enumerator_17357 (temp_4.getter_mBuiltVariableCppNameList (HERE), kENUMERATION_UP) ;
  while (enumerator_17357.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_17357.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 435)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17357.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 436)) ;
    enumerator_17357.gotoNextObject () ;
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
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_10073 (temp_5.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  while (enumerator_10073.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_10073.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 286)) ;
    enumerator_10073.gotoNextObject () ;
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
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_12852 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 346)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 346)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_12852.getter_length (SOURCE_FILE ("instruction-for.galgas", 347)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 348)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 348)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 348)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 348)) ;
    }
  }
  cEnumerator_enumerationDescriptorList enumerator_13178 (var_enumerationDescriptorList_12852, kENUMERATION_UP) ;
  while (enumerator_13178.hasCurrentObject ()) {
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_5 = object ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_6 = object ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_13178.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (temp_5.getter_mPrefix (HERE).getter_string (HERE).add_operation (enumerator_13178.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 354)), temp_6.getter_mEndOfEnumerationExpression (HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas", 354)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 355)).add_operation (enumerator_13178.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 355)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 355))  COMMA_SOURCE_FILE ("instruction-for.galgas", 352)) ;
    enumerator_13178.gotoNextObject () ;
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
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_14353 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 380)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 380)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_14353.getter_length (SOURCE_FILE ("instruction-for.galgas", 381)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList_14736 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 386)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 386)) ;
        cEnumerator_enumerationDescriptorList enumerator_14844 (var_currentTypedAttributeList_14736, kENUMERATION_UP) ;
        while (enumerator_14844.hasCurrentObject ()) {
          {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_8 = object ;
          ioArgument_ioVariableMap.setter_insertUsedLocalConstant (GALGAS_lstring::constructor_new (enumerator_14844.current_mEnumerationName (HERE), temp_8.getter_mEndOfEnumerationExpression (HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas", 389)), enumerator_14844.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 391)).add_operation (enumerator_14844.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 391)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 391)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 392)).add_operation (enumerator_14844.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 392)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 388)) ;
          }
          enumerator_14844.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_enumeratedCollectionCstListInExpAST temp_10 = object ;
        const GALGAS_enumeratedCollectionCstListInExpAST temp_11 = object ;
        test_9 = temp_10.getter_mEndsWithEllipsis (HERE).operator_not (SOURCE_FILE ("instruction-for.galgas", 395)).operator_and (GALGAS_bool (kIsNotEqual, temp_11.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 395)).objectCompare (var_enumerationDescriptorList_14353.getter_length (SOURCE_FILE ("instruction-for.galgas", 395)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 395)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_12 = object ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_14353.getter_length (SOURCE_FILE ("instruction-for.galgas", 399)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_15 = object ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_12.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 397)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 397)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 397)).add_operation (var_enumerationDescriptorList_14353.getter_length (SOURCE_FILE ("instruction-for.galgas", 398)).getter_string (SOURCE_FILE ("instruction-for.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 397)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 398)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 398)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 399)).add_operation (temp_15.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 401)).getter_string (SOURCE_FILE ("instruction-for.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 400)), fixItArray16  COMMA_SOURCE_FILE ("instruction-for.galgas", 396)) ;
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_18 = object ;
          const GALGAS_enumeratedCollectionCstListInExpAST temp_19 = object ;
          test_17 = temp_18.getter_mEndsWithEllipsis (HERE).operator_and (GALGAS_bool (kIsStrictSup, temp_19.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 402)).objectCompare (var_enumerationDescriptorList_14353.getter_length (SOURCE_FILE ("instruction-for.galgas", 402)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 402)).boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_enumeratedCollectionCstListInExpAST temp_20 = object ;
            GALGAS_string temp_21 ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_14353.getter_length (SOURCE_FILE ("instruction-for.galgas", 406)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_22) {
              temp_21 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_22) {
              temp_21 = GALGAS_string::makeEmptyString () ;
            }
            const GALGAS_enumeratedCollectionCstListInExpAST temp_23 = object ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_20.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 404)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 404)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 404)).add_operation (var_enumerationDescriptorList_14353.getter_length (SOURCE_FILE ("instruction-for.galgas", 405)).getter_string (SOURCE_FILE ("instruction-for.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 404)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 405)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 405)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 406)).add_operation (temp_23.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 408)).getter_string (SOURCE_FILE ("instruction-for.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 407)), fixItArray24  COMMA_SOURCE_FILE ("instruction-for.galgas", 403)) ;
          }
        }
        if (kBoolFalse == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_25 = object ;
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_16214 (temp_25.getter_mElementList (HERE), kENUMERATION_UP) ;
          cEnumerator_enumerationDescriptorList enumerator_16247 (var_enumerationDescriptorList_14353, kENUMERATION_UP) ;
          while (enumerator_16214.hasCurrentObject () && enumerator_16247.hasCurrentObject ()) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsNotEqual, enumerator_16214.current_mOptionalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-for.galgas", 411)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_26) {
                enumGalgasBool test_27 = kBoolTrue ;
                if (kBoolTrue == test_27) {
                  test_27 = GALGAS_bool (kIsNotEqual, enumerator_16214.current_mOptionalTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_27) {
                    GALGAS_unifiedTypeMap_2D_entry var_foundType_16402 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_16214.current_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 413)) ;
                    enumGalgasBool test_28 = kBoolTrue ;
                    if (kBoolTrue == test_28) {
                      test_28 = GALGAS_bool (kIsNotEqual, var_foundType_16402.objectCompare (enumerator_16247.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_28) {
                        TC_Array <C_FixItDescription> fixItArray29 ;
                        inCompiler->emitSemanticError (enumerator_16214.current_mOptionalTypeName (HERE).getter_location (SOURCE_FILE ("instruction-for.galgas", 418)), GALGAS_string ("incorrect '@").add_operation (var_foundType_16402.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)).add_operation (enumerator_16247.current_mEnumeratedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)), fixItArray29  COMMA_SOURCE_FILE ("instruction-for.galgas", 418)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_16247.current_mEnumeratedType (HERE), enumerator_16214.current_mOptionalConstantName (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 421)).add_operation (enumerator_16247.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 421)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 421))  COMMA_SOURCE_FILE ("instruction-for.galgas", 421)) ;
              }
            }
            enumerator_16214.gotoNextObject () ;
            enumerator_16247.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_enumeratedElementType_17875 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 449)).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 449)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_enumeratedElementType_17875.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 450)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 451)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 451)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 451)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 451)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_5 = object ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_17875, temp_5.getter_mEnumerationVariable (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 453))  COMMA_SOURCE_FILE ("instruction-for.galgas", 453)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_7 = object ;
    test_6 = GALGAS_bool (kIsNotEqual, temp_7.getter_mEnumerationOptionalTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_8 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_explicitType_18368 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_8.getter_mEnumerationOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 457)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, var_enumeratedElementType_17875.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 461)).objectCompare (var_explicitType_18368.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 461)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionVarInExpAST temp_10 = object ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.getter_mEnumerationOptionalTypeName (HERE).getter_location (SOURCE_FILE ("instruction-for.galgas", 462)), GALGAS_string ("the '@").add_operation (var_enumeratedElementType_17875.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 462)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 462)), fixItArray11  COMMA_SOURCE_FILE ("instruction-for.galgas", 462)) ;
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
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_19386 ;
  {
  const GALGAS_forInstructionAST temp_0 = object ;
  const GALGAS_forInstructionAST temp_1 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 487)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 488)), temp_0.getter_mBeforeInstructionList (HERE), temp_1.getter_mEndOf_5F_before_5F_branch (HERE), ioArgument_ioVariableMap, var_before_5F_instructionList_19386, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 483)) ;
  }
  {
  const GALGAS_forInstructionAST temp_2 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_2.getter_mEndOf_5F_before_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 494)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 496)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_19895 ;
  {
  const GALGAS_forInstructionAST temp_3 = object ;
  const GALGAS_forInstructionAST temp_4 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 502)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 503)), temp_3.getter_mBetweenInstructionList (HERE), temp_4.getter_mEndOf_5F_between_5F_branch (HERE), ioArgument_ioVariableMap, var_between_5F_instructionList_19895, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 498)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_5.getter_mEndOf_5F_between_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 509)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 511)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_20692 ;
  {
  const GALGAS_forInstructionAST temp_6 = object ;
  const GALGAS_forInstructionAST temp_7 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 516)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 517)), temp_6.getter_mAfterInstructionList (HERE), temp_7.getter_mEndOf_5F_after_5F_branch (HERE), ioArgument_ioVariableMap, var_after_5F_instructionList_20692, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 512)) ;
  }
  {
  const GALGAS_forInstructionAST temp_8 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_8.getter_mEndOf_5F_after_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 523)) ;
  }
  GALGAS_localInitializedVariableList var_localConstantListForDoBranch_20849 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 525)) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_20921 = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 526)) ;
  const GALGAS_forInstructionAST temp_9 = object ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_20965 (temp_9.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  while (enumerator_20965.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_21201 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_21267 ;
    callExtensionMethod_analyzeEnumeration ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_20965.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_localConstantListForDoBranch_20849, var_enumeratorCppName_21201, var_enumerationExpression_21267, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 528)) ;
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = enumerator_20965.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("UP") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string ("DOWN") ;
    }
    var_enumerationList_20921.addAssign_operation (temp_10, var_enumerationExpression_21267, var_enumeratorCppName_21201  COMMA_SOURCE_FILE ("instruction-for.galgas", 538)) ;
    enumerator_20965.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 544)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 545)) ;
  }
  cEnumerator_localInitializedVariableList enumerator_21591 (var_localConstantListForDoBranch_20849, kENUMERATION_UP) ;
  while (enumerator_21591.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_21591.current (HERE).getter_mName (HERE), enumerator_21591.current (HERE).getter_mType (HERE), enumerator_21591.current (HERE).getter_mCppName (HERE), enumerator_21591.current (HERE).getter_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 548)) ;
    }
    enumerator_21591.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_22019 ;
  const GALGAS_forInstructionAST temp_12 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_12.getter_mWhileExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 559)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression_22019, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 556)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_22197 ;
  {
  const GALGAS_forInstructionAST temp_13 = object ;
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_13.getter_mEndOf_5F_while_5F_expression (HERE), var_uncheckedWhileExpression_22019, var_whileExpression_22197, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 564)) ;
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
  GALGAS_string var_indexCppName_22420 = GALGAS_string::makeEmptyString () ;
  GALGAS_localConstantList var_indexDeclaration_22463 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 576)) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_forInstructionAST temp_17 = object ;
    test_16 = GALGAS_bool (kIsNotEqual, temp_17.getter_mIndexVariableName (HERE).getter_string (SOURCE_FILE ("instruction-for.galgas", 577)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_forInstructionAST temp_18 = object ;
      var_indexCppName_22420 = GALGAS_string ("index_").add_operation (temp_18.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)).getter_string (SOURCE_FILE ("instruction-for.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)) ;
      const GALGAS_forInstructionAST temp_19 = object ;
      var_indexDeclaration_22463.addAssign_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), temp_19.getter_mIndexVariableName (HERE), GALGAS_bool (false), var_indexCppName_22420  COMMA_SOURCE_FILE ("instruction-for.galgas", 579)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_22829 ;
  {
  const GALGAS_forInstructionAST temp_20 = object ;
  const GALGAS_forInstructionAST temp_21 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_indexDeclaration_22463, var_localConstantListForDoBranch_20849, temp_20.getter_mDoInstructionList (HERE), temp_21.getter_mEndOf_5F_do_5F_branch (HERE), ioArgument_ioVariableMap, var_do_5F_instructionList_22829, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 587)) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::constructor_new (temp_25.getter_mInstructionLocation (HERE), var_enumerationList_20921, var_indexCppName_22420, var_whileExpression_22197, var_before_5F_instructionList_19386, var_between_5F_instructionList_19895, var_do_5F_instructionList_22829, var_after_5F_instructionList_20692  COMMA_SOURCE_FILE ("instruction-for.galgas", 604))  COMMA_SOURCE_FILE ("instruction-for.galgas", 604)) ;
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
  GALGAS_stringlist var_enumerationVarCppNameList_25341 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 650)) ;
  const GALGAS_forInstructionForGeneration temp_0 = object ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_25385 (temp_0.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  while (enumerator_25385.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar_25415 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_25385.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_25415, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 653)) ;
    var_enumerationVarCppNameList_25341.addAssign_operation (var_enumerationVar_25415  COMMA_SOURCE_FILE ("instruction-for.galgas", 660)) ;
    enumerator_25385.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_1 = object ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_25698 (temp_1.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  cEnumerator_stringlist enumerator_25731 (var_enumerationVarCppNameList_25341, kENUMERATION_UP) ;
  while (enumerator_25698.hasCurrentObject () && enumerator_25731.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (enumerator_25698.current_mEnumeratedExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 663)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)).add_operation (enumerator_25698.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (enumerator_25731.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (GALGAS_string (", kENUMERATION_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (enumerator_25698.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 665)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 665)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 663)) ;
    enumerator_25698.gotoNextObject () ;
    enumerator_25731.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_2 = object ;
  GALGAS_bool var_whileExpressionIsAllwaysTrue_26015 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mWhileExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 668)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_forInstructionForGeneration temp_4 = object ;
    const GALGAS_forInstructionForGeneration temp_5 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.getter_mBeforeInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 670)).add_operation (temp_5.getter_mAfterInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 670)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_whileExpressionIsAllwaysTrue_26015.operator_not (SOURCE_FILE ("instruction-for.galgas", 670)) COMMA_SOURCE_FILE ("instruction-for.galgas", 670)).boolEnum () ;
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
      GALGAS_string var_boolVarCppName_26450 = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 675)) ;
      ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 675)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_26015.boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolVarCppName_26450, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 677)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 677)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 677)) ;
        }
      }
      if (kBoolFalse == test_9) {
        GALGAS_string var_whileVar_26669 ;
        const GALGAS_forInstructionForGeneration temp_10 = object ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_10.getter_mWhileExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_26669, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_boolVarCppName_26450, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 681)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 681)).add_operation (var_whileVar_26669, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 681)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 681)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 681)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 683)) ;
      const GALGAS_forInstructionForGeneration temp_11 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_26994 (temp_11.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
      while (enumerator_26994.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_26994.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 685)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 685)) ;
        enumerator_26994.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_26450.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 687)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 687)) ;
      {
      const GALGAS_forInstructionForGeneration temp_12 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_12.getter_mBeforeInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 688)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 696)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 697)) ;
      const GALGAS_forInstructionForGeneration temp_13 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_27477 (temp_13.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
      while (enumerator_27477.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_27477.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 699)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 699)) ;
        enumerator_27477.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_26450.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 701)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 701)) ;
      {
      const GALGAS_forInstructionForGeneration temp_14 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_14.getter_mDoInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 703)) ;
      }
      const GALGAS_forInstructionForGeneration temp_15 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_27938 (temp_15.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
      while (enumerator_27938.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_27938.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 713)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 713)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 713)) ;
        enumerator_27938.gotoNextObject () ;
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
        test_19 = var_whileExpressionIsAllwaysTrue_26015.operator_not (SOURCE_FILE ("instruction-for.galgas", 719)).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 720)) ;
          const GALGAS_forInstructionForGeneration temp_20 = object ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_28317 (temp_20.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
          while (enumerator_28317.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_28317.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 722)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 722)) ;
            if (enumerator_28317.hasNextObject ()) {
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 723)) ;
            }
            enumerator_28317.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 725)) ;
          GALGAS_string var_whileVar_28496 ;
          const GALGAS_forInstructionForGeneration temp_21 = object ;
          callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_21.getter_mWhileExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_28496, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 727)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    ").add_operation (var_boolVarCppName_26450, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)).add_operation (var_whileVar_28496, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 734)) ;
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
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_29040 (temp_24.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
          while (enumerator_29040.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_29040.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 742)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 742)) ;
            enumerator_29040.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_26450.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 744)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 744)) ;
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
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30215 (temp_30.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
    while (enumerator_30215.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30215.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 775)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 775)) ;
      if (enumerator_30215.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 776)) ;
      }
      enumerator_30215.gotoNextObject () ;
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
        cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30841 (temp_34.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
        while (enumerator_30841.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30841.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 793)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 793)) ;
          if (enumerator_30841.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 794)) ;
          }
          enumerator_30841.gotoNextObject () ;
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
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_31407 (temp_36.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
    while (enumerator_31407.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_31407.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 810)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 810)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 810)) ;
      enumerator_31407.gotoNextObject () ;
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
  cEnumerator_actualParameterListAST enumerator_7546 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_7546.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_7546.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
    enumerator_7546.gotoNextObject () ;
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
  cEnumerator_actualParameterListAST enumerator_7986 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_7986.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_7986.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 196)) ;
    enumerator_7986.gotoNextObject () ;
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
  GALGAS_lstring var_usefulnessName_8664 = function_grammarNameForUsefulEntitiesGraph (temp_0.getter_mGrammarComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 211)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_8664 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 212)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_8981 ;
  GALGAS_bool var_hasTranslateFeature_9023 ;
  const GALGAS_grammarInFileInstructionAST temp_1 = object ;
  GALGAS_bool joker_8987 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mGrammarMap (HERE).method_searchKey (temp_1.getter_mGrammarComponentName (HERE), var_grammarLabelMap_8981, joker_8987, var_hasTranslateFeature_9023, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  GALGAS_formalParameterSignature var_labelSignature_9145 ;
  const GALGAS_grammarInFileInstructionAST temp_2 = object ;
  var_grammarLabelMap_8981.method_searchKey (temp_2.getter_mLabelName (HERE), var_labelSignature_9145, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_9559 ;
  {
  const GALGAS_grammarInFileInstructionAST temp_3 = object ;
  const GALGAS_grammarInFileInstructionAST temp_4 = object ;
  const GALGAS_grammarInFileInstructionAST temp_5 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.getter_mLabelName (HERE), GALGAS_string ("label of the ").add_operation (temp_4.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 231)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 231)), var_labelSignature_9145, temp_5.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_9559, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 226)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_9840 ;
  const GALGAS_grammarInFileInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 242)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_9840, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 239)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_9840.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 248)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInFileInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.getter_mEndOfSourceExpression (HERE), GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (var_sourceExpression_9840.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 251)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 250)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 251)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 249)) ;
    }
  }
  const GALGAS_grammarInFileInstructionAST temp_10 = object ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_10313 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.getter_mGrammarComponentName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 254)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 254)) ;
  GALGAS_stringlist var_assignementList_10426 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 255)) ;
  const GALGAS_grammarInFileInstructionAST temp_11 = object ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (HERE).ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_9023, var_syntaxDirectedTranslationResultVarName_10313, var_assignementList_10426, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 256)) ;
  const GALGAS_grammarInFileInstructionAST temp_12 = object ;
  const GALGAS_grammarInFileInstructionAST temp_13 = object ;
  const GALGAS_grammarInFileInstructionAST temp_14 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (temp_12.getter_mInstructionLocation (HERE), temp_13.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 266)), temp_14.getter_mLabelName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 267)), var_sourceExpression_9840, var_actualParameterListForGeneration_9559, var_hasTranslateFeature_9023, var_assignementList_10426, var_syntaxDirectedTranslationResultVarName_10313  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 264))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 264)) ;
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
  GALGAS_lstring var_grammarUsefulnessName_11520 = function_grammarNameForUsefulEntitiesGraph (temp_0.getter_mGrammarComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 285)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_11520 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 286)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_11844 ;
  GALGAS_bool var_hasTranslateFeature_11886 ;
  const GALGAS_grammarInStringInstructionAST temp_1 = object ;
  GALGAS_bool joker_11850 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mGrammarMap (HERE).method_searchKey (temp_1.getter_mGrammarComponentName (HERE), var_grammarLabelMap_11844, joker_11850, var_hasTranslateFeature_11886, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 288)) ;
  GALGAS_formalParameterSignature var_labelSignature_12008 ;
  const GALGAS_grammarInStringInstructionAST temp_2 = object ;
  var_grammarLabelMap_11844.method_searchKey (temp_2.getter_mLabelName (HERE), var_labelSignature_12008, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 295)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_12422 ;
  {
  const GALGAS_grammarInStringInstructionAST temp_3 = object ;
  const GALGAS_grammarInStringInstructionAST temp_4 = object ;
  const GALGAS_grammarInStringInstructionAST temp_5 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.getter_mLabelName (HERE), GALGAS_string ("label of the ").add_operation (temp_4.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)), var_labelSignature_12008, temp_5.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_12422, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 300)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_12703 ;
  const GALGAS_grammarInStringInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 316)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_12703, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 313)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_12703.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 322)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInStringInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.getter_mEndOfSourceExpression (HERE), GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_12703.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 325)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 324)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 325)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 323)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_13297 ;
  const GALGAS_grammarInStringInstructionAST temp_10 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_10.getter_mNameExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 331)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_nameExpression_13297, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 328)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_nameExpression_13297.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 337)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_grammarInStringInstructionAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.getter_mEndOfNameExpression (HERE), GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_12703.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 340)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 339)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 340)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 338)) ;
    }
  }
  const GALGAS_grammarInStringInstructionAST temp_14 = object ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_13713 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.getter_mGrammarComponentName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)) ;
  GALGAS_stringlist var_assignementList_13826 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 344)) ;
  const GALGAS_grammarInStringInstructionAST temp_15 = object ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (HERE).ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_11886, var_syntaxDirectedTranslationResultVarName_13713, var_assignementList_13826, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 345)) ;
  const GALGAS_grammarInStringInstructionAST temp_16 = object ;
  const GALGAS_grammarInStringInstructionAST temp_17 = object ;
  const GALGAS_grammarInStringInstructionAST temp_18 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (temp_16.getter_mInstructionLocation (HERE), temp_17.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 355)), temp_18.getter_mLabelName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 356)), var_sourceExpression_12703, var_nameExpression_13297, var_actualParameterListForGeneration_12422, var_hasTranslateFeature_11886, var_assignementList_13826, var_syntaxDirectedTranslationResultVarName_13713  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 353))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 353)) ;
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
  GALGAS_string var_sourceVar_15889 ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceFileExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_15889, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 392)) ;
  GALGAS_stringlist var_parameterCppNameList_15942 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 400)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_15995 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 401)) ;
  GALGAS_stringlist var_inputVariableList_16037 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 402)) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_2 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_16093 (temp_2.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_16093.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_16372 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_16093.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_15995, var_inputVariableList_16037, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_16372, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 404)) ;
    var_parameterCppNameList_15942.addAssign_operation (var_parameterCppName_16372  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 413)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_16093.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_16372.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 415)) ;
      }
    }
    enumerator_16093.gotoNextObject () ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_7.getter_mGrammarName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)).add_operation (temp_8.getter_mLabelName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 422)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 422)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 423)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)).add_operation (var_sourceVar_15889, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)) ;
  cEnumerator_stringlist enumerator_17179 (var_parameterCppNameList_15942, kENUMERATION_UP) ;
  while (enumerator_17179.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_17179.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 428)) ;
    enumerator_17179.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_13 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)) ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_14 = object ;
  cEnumerator_stringlist enumerator_17412 (temp_14.getter_mAssignementList (HERE), kENUMERATION_UP) ;
  while (enumerator_17412.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17412.current (HERE).getter_mValue (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 433)) ;
    enumerator_17412.gotoNextObject () ;
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
  GALGAS_string var_sourceVar_18955 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceStringExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_18955, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 463)) ;
  GALGAS_string var_nameVar_19173 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mNameStringExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_19173, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 471)) ;
  GALGAS_stringlist var_parameterCppNameList_19226 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 479)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_19279 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 480)) ;
  GALGAS_stringlist var_inputVariableList_19321 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 481)) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_3 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_19377 (temp_3.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_19377.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_19663 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_19377.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_19279, var_inputVariableList_19321, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_19663, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 483)) ;
    var_parameterCppNameList_19226.addAssign_operation (var_parameterCppName_19663  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 492)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_19377.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_19663.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 494)) ;
      }
    }
    enumerator_19377.gotoNextObject () ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_8.getter_mGrammarName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)).add_operation (temp_9.getter_mLabelName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 501)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 501)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (var_sourceVar_18955, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 503)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 504)).add_operation (var_nameVar_19173, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)) ;
  cEnumerator_stringlist enumerator_20489 (var_parameterCppNameList_19226, kENUMERATION_UP) ;
  while (enumerator_20489.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_20489.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)) ;
    enumerator_20489.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_14 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 510)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 510)) ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_15 = object ;
  cEnumerator_stringlist enumerator_20722 (temp_15.getter_mAssignementList (HERE), kENUMERATION_UP) ;
  while (enumerator_20722.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_20722.current (HERE).getter_mValue (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)) ;
    enumerator_20722.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_6152 ;
  GALGAS_string var_targetVariableCppName_6188 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_6238 ;
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
          var_targetType_6152.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_6238.drop () ; // Release error dropped variable
          var_targetVariableCppName_6188.drop () ; // Release error dropped variable
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
            var_targetType_6152.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_6238.drop () ; // Release error dropped variable
            var_targetVariableCppName_6188.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_6708 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 192)) ;
          const GALGAS_incDecInstructionAST temp_8 = object ;
          GALGAS_bool joker_6809 ; // Joker input parameter
          var_propertyMap_6708.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_6809, var_targetType_6152, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 193)) ;
          var_nameForCheckingFormalParameterUsing_6238 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_incDecInstructionAST temp_9 = object ;
          var_targetVariableCppName_6188 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 195)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 195)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_incDecInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_6152, var_targetVariableCppName_6188, var_nameForCheckingFormalParameterUsing_6238, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 198)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_7473 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_7473.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_7496 = var_targetType_6152.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 210)) ;
    GALGAS_bool var_isPublic_7573 ;
    var_propertyMap_7496.method_searchKey (enumerator_7473.current_mValue (HERE), var_isPublic_7573, var_targetType_6152, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 211)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_7573.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 212)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_7473.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 213)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 213)) ;
      }
    }
    enumerator_7473.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_6152.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 217)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 217)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 217)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_incDecInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_6152.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 219)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 219)), fixItArray16  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 218)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_17 = object ;
  const GALGAS_incDecInstructionAST temp_18 = object ;
  const GALGAS_incDecInstructionAST temp_19 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_17.getter_mInstructionLocation (HERE), var_targetVariableCppName_6188, var_targetType_6152, temp_18.getter_mStructAttributeList (HERE), temp_19.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 222))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 222)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_8729 ;
  GALGAS_string var_targetVariableCppName_8761 ;
  {
  const GALGAS_incDecNoOVFInstructionAST temp_0 = object ;
  GALGAS_string joker_8862 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_0.getter_mReceiverName (HERE), var_targetType_8729, var_targetVariableCppName_8761, joker_8862, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 243)) ;
  }
  const GALGAS_incDecNoOVFInstructionAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_8902 (temp_1.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_8902.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_8925 = var_targetType_8729.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 245)) ;
    GALGAS_bool var_isPublic_9002 ;
    var_propertyMap_8925.method_searchKey (enumerator_8902.current_mValue (HERE), var_isPublic_9002, var_targetType_8729, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 246)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_isPublic_9002.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 247)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_8902.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 248)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 248)) ;
      }
    }
    enumerator_8902.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_targetType_8729.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 252)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 252)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 252)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_incDecNoOVFInstructionAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_8729.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 254)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 254)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 253)) ;
    }
  }
  const GALGAS_incDecNoOVFInstructionAST temp_7 = object ;
  const GALGAS_incDecNoOVFInstructionAST temp_8 = object ;
  const GALGAS_incDecNoOVFInstructionAST temp_9 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_7.getter_mInstructionLocation (HERE), var_targetVariableCppName_8761, var_targetType_8729, temp_8.getter_mStructAttributeList (HERE), temp_9.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 257))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 257)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_10189 ;
  GALGAS_string var_selfObjectCppName_10217 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 278)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfIncDecNoOVFInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 279)) ;
      var_selfObjectCppName_10217.drop () ; // Release error dropped variable
      var_selfTypeEntry_10189.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_10217 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_10189 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_10189.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 285)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 285)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 285)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfIncDecNoOVFInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_10189.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 286)) ;
    }
  }
  const GALGAS_selfIncDecNoOVFInstructionAST temp_6 = object ;
  const GALGAS_selfIncDecNoOVFInstructionAST temp_7 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_6.getter_mInstructionLocation (HERE), var_selfObjectCppName_10217, var_selfTypeEntry_10189, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 294)), temp_7.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 290))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 290)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_11552 ;
  GALGAS_string var_selfObjectCppName_11580 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 311)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfIncDecInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 312)) ;
      var_selfObjectCppName_11580.drop () ; // Release error dropped variable
      var_selfTypeEntry_11552.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_11580 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_11552 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_11552.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 318)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 318)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfIncDecInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_11552.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 320)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 320)), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 319)) ;
    }
  }
  const GALGAS_selfIncDecInstructionAST temp_6 = object ;
  const GALGAS_selfIncDecInstructionAST temp_7 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_6.getter_mInstructionLocation (HERE), var_selfObjectCppName_11580, var_selfTypeEntry_11552, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 327)), temp_7.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 323))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 323)) ;
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
  GALGAS_string var_receiverCppName_13738 = temp_1.getter_mReceiverCppName (HERE) ;
  const GALGAS_incDecInstructionForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_13800 (temp_2.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_13800.hasCurrentObject ()) {
    var_receiverCppName_13738.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_13800.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-inc-dec.galgas", 367)).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 367)) ;
    enumerator_13800.gotoNextObject () ;
  }
  const GALGAS_incDecInstructionForGeneration temp_3 = object ;
  switch (temp_3.getter_mKind (HERE).enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      const GALGAS_incDecInstructionForGeneration temp_4 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_13738.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)).add_operation (extensionGetter_commaSourceFile (temp_4.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 373)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 374)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 374)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      const GALGAS_incDecInstructionForGeneration temp_5 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_13738.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)).add_operation (extensionGetter_commaSourceFile (temp_5.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 377)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)) ;
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
  GALGAS_string var_receiverCppName_14966 = temp_1.getter_mReceiverCppName (HERE) ;
  const GALGAS_incDecNoOVFInstructionForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_15028 (temp_2.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_15028.hasCurrentObject ()) {
    var_receiverCppName_14966.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_15028.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-inc-dec.galgas", 395)).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 395)) ;
    enumerator_15028.gotoNextObject () ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_3 = object ;
  switch (temp_3.getter_mKind (HERE).enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14966.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14966.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 402)) ;
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
  cEnumerator_ifExpressionList enumerator_7138 (temp_0.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_7138.hasCurrentObject ()) {
    switch (enumerator_7138.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_7248 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_7138.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_7248->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_7416 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_7138.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_7416->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_7416->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)) ;
        {
        GALGAS_unifiedTypeMap_2D_entry joker_7414 ; // Joker input parameter
        GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, extractedValue_typeName, joker_7414 COMMA_SOURCE_FILE ("instruction-if.galgas", 200)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_7858 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_7138.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_receiverExpression = extractPtr_7858->mAssociatedValue0 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_parameters = extractPtr_7858->mAssociatedValue2 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_receiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202)) ;
        cEnumerator_optionalMethodActualArgumentList enumerator_7590 (extractedValue_parameters, kENUMERATION_UP) ;
        while (enumerator_7590.hasCurrentObject ()) {
          switch (enumerator_7590.current_mActualArgument (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgument::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_7729 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_7590.current_mActualArgument (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionAST extractedValue_expression = extractPtr_7729->mAssociatedValue0 ;
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
          enumerator_7590.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_7138.gotoNextObject () ;
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
  GALGAS_ifTestListForGeneration var_testListForGeneration_9321 = GALGAS_ifTestListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 252)) ;
  const GALGAS_ifInstructionAST temp_0 = object ;
  cEnumerator_ifExpressionList enumerator_9366 (temp_0.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_9366.hasCurrentObject ()) {
    switch (enumerator_9366.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_9948 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_9366.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_9948->mAssociatedValue0 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_9628 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 259)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_9628, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 256)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_9791 ;
        {
        const GALGAS_ifInstructionAST temp_1 = object ;
        routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_1.getter_mEndOf_5F_if_5F_instruction (HERE), var_analyzed_5F_if_5F_expression_9628, var_if_5F_expression_9791, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 264)) ;
        }
        var_testListForGeneration_9321.addAssign_operation (GALGAS_ifTestForGeneration::constructor_regular (var_if_5F_expression_9791  COMMA_SOURCE_FILE ("instruction-if.galgas", 270))  COMMA_SOURCE_FILE ("instruction-if.galgas", 270)) ;
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
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_11793 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_9366.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_constantName = extractPtr_11793->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_11793->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_11793->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_10210 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 277)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzedExpression_10210, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 274)) ;
        GALGAS_unifiedTypeMap_2D_entry var_castType_10267 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 283)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_analyzedExpression_10210.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 285)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 285)).getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 285)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_unifiedTypeMap_2D_entry var_t_10561 = var_castType_10267 ;
            GALGAS_bool var_found_10592 = GALGAS_bool (kIsEqual, var_t_10561.objectCompare (var_analyzedExpression_10210.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 288)))) ;
            if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 289)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 289)).isValid ()) {
              uint32_t variant_10645 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 289)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 289)).uintValue () ;
              bool loop_10645 = true ;
              while (loop_10645) {
                loop_10645 = var_found_10592.operator_not (SOURCE_FILE ("instruction-if.galgas", 290)).operator_and (var_t_10561.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 290)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 290)).operator_not (SOURCE_FILE ("instruction-if.galgas", 290)) COMMA_SOURCE_FILE ("instruction-if.galgas", 290)).isValid () ;
                if (loop_10645) {
                  loop_10645 = var_found_10592.operator_not (SOURCE_FILE ("instruction-if.galgas", 290)).operator_and (var_t_10561.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 290)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 290)).operator_not (SOURCE_FILE ("instruction-if.galgas", 290)) COMMA_SOURCE_FILE ("instruction-if.galgas", 290)).boolValue () ;
                }
                if (loop_10645 && (0 == variant_10645)) {
                  loop_10645 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 289)) ;
                }
                if (loop_10645) {
                  variant_10645 -- ;
                  var_t_10561 = var_t_10561.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 291)) ;
                  var_found_10592 = GALGAS_bool (kIsEqual, var_t_10561.objectCompare (var_analyzedExpression_10210.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 292)))) ;
                }
              }
            }
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_found_10592.operator_not (SOURCE_FILE ("instruction-if.galgas", 294)).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (extractedValue_typeName.getter_location (SOURCE_FILE ("instruction-if.galgas", 295)), GALGAS_string ("the '@").add_operation (extractedValue_typeName.getter_string (SOURCE_FILE ("instruction-if.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 296)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 296)).add_operation (var_analyzedExpression_10210.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 296)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 296)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 296)), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 295)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_2) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_analyzedExpression_10210.getter_mLocation (SOURCE_FILE ("instruction-if.galgas", 300)), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_analyzedExpression_10210.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 301)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 300)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 301)), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 300)) ;
        }
        {
        ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 303)) ;
        }
        {
        ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 304)) ;
        }
        GALGAS_string var_targetVariableCppName_11379 = GALGAS_string ("var_").add_operation (extractedValue_constantName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 305)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 305)).add_operation (extractedValue_constantName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 306)).getter_string (SOURCE_FILE ("instruction-if.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 306)) ;
        {
        ioArgument_ioVariableMap.setter_insertLocalConstant (extractedValue_constantName, var_castType_10267, var_targetVariableCppName_11379, var_targetVariableCppName_11379, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 307)) ;
        }
        var_testListForGeneration_9321.addAssign_operation (GALGAS_ifTestForGeneration::constructor_letExp (var_targetVariableCppName_11379, var_analyzedExpression_10210, var_castType_10267  COMMA_SOURCE_FILE ("instruction-if.galgas", 313))  COMMA_SOURCE_FILE ("instruction-if.galgas", 313)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_12190 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_9366.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_receiverExpression = extractPtr_12190->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalMethodName = extractPtr_12190->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_parameters = extractPtr_12190->mAssociatedValue2 ;
        {
        routine_analyzeOptionalMethodCall (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, extractedValue_receiverExpression, extractedValue_optionalMethodName, extractedValue_parameters, var_testListForGeneration_9321, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 319)) ;
        }
      }
      break ;
    }
    enumerator_9366.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_12516 ;
  {
  const GALGAS_ifInstructionAST temp_6 = object ;
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 336)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 337)), temp_6.getter_m_5F_then_5F_instructionList (HERE), ioArgument_ioVariableMap, var_then_5F_instructionList_12516, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 332)) ;
  }
  const GALGAS_ifInstructionAST temp_7 = object ;
  GALGAS_ifExpressionList var_expressions_12538 = temp_7.getter_mExpressions (HERE) ;
  {
  GALGAS_ifExpressionKind joker_12585 ; // Joker input parameter
  var_expressions_12538.setter_popLast (joker_12585, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 343)) ;
  }
  cEnumerator_ifExpressionList enumerator_12621 (var_expressions_12538, kENUMERATION_UP) ;
  while (enumerator_12621.hasCurrentObject ()) {
    {
    const GALGAS_ifInstructionAST temp_8 = object ;
    ioArgument_ioVariableMap.setter_closeBranch (temp_8.getter_mEndOf_5F_then_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 345)) ;
    }
    {
    const GALGAS_ifInstructionAST temp_9 = object ;
    ioArgument_ioVariableMap.setter_closeOverride (temp_9.getter_mEndOf_5F_then_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 346)) ;
    }
    enumerator_12621.gotoNextObject () ;
  }
  {
  const GALGAS_ifInstructionAST temp_10 = object ;
  ioArgument_ioVariableMap.setter_closeBranch (temp_10.getter_mEndOf_5F_then_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 348)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_13138 ;
  {
  const GALGAS_ifInstructionAST temp_11 = object ;
  const GALGAS_ifInstructionAST temp_12 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 354)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 355)), temp_11.getter_m_5F_else_5F_instructionList (HERE), temp_12.getter_mEndOf_5F_if_5F_instruction (HERE), ioArgument_ioVariableMap, var_else_5F_instructionList_13138, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 350)) ;
  }
  {
  const GALGAS_ifInstructionAST temp_13 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_13.getter_mEndOf_5F_if_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 361)) ;
  }
  const GALGAS_ifInstructionAST temp_14 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (temp_14.getter_mEndOf_5F_then_5F_branch (HERE), var_testListForGeneration_9321, var_then_5F_instructionList_12516, var_else_5F_instructionList_13138  COMMA_SOURCE_FILE ("instruction-if.galgas", 363))  COMMA_SOURCE_FILE ("instruction-if.galgas", 363)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_14418 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 389)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_14418, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 386)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 394)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 395)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_14570 = var_receiverExpression_14418.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 397)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_14648 = var_receiverType_14570.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 398)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_14819 ;
  var_optionalMethodMap_14648.method_searchKey (constinArgument_inOptionalMethodName, var_optionalMethodSignature_14819, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 400)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 402)).objectCompare (var_optionalMethodSignature_14819.getter_length (SOURCE_FILE ("instruction-if.galgas", 402)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.getter_location (SOURCE_FILE ("instruction-if.galgas", 403)), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.getter_string (SOURCE_FILE ("instruction-if.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 404)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 404)).add_operation (var_receiverType_14570.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 404)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 404)).add_operation (var_optionalMethodSignature_14819.getter_length (SOURCE_FILE ("instruction-if.galgas", 405)).getter_string (SOURCE_FILE ("instruction-if.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 404)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 405)).add_operation (constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 406)).getter_string (SOURCE_FILE ("instruction-if.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 405)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 406)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 403)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_15312 = GALGAS_optionalMethodActualArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 408)) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_15380 (constinArgument_inActualParameters, kENUMERATION_UP) ;
    cEnumerator_optionalMethodSignature enumerator_15454 (var_optionalMethodSignature_14819, kENUMERATION_UP) ;
    while (enumerator_15380.hasCurrentObject () && enumerator_15454.hasCurrentObject ()) {
      switch (enumerator_15380.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_16176 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_15380.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_expression = extractPtr_16176->mAssociatedValue0 ;
          const GALGAS_location extractedValue_location = extractPtr_16176->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_15779 ;
          callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_15454.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_15779, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 413)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsNotEqual, enumerator_15454.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_15380.current_mSelector (HERE).getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_2) {
              GALGAS_string temp_3 ;
              const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_15454.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_4) {
                temp_3 = GALGAS_string (":") ;
              }else if (kBoolFalse == test_4) {
                temp_3 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_15380.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-if.galgas", 422)), GALGAS_string ("the selector should be '!").add_operation (enumerator_15454.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 423)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 423)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 423)), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 422)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_15454.current_mFormalArgumentType (HERE), var_exp_15779.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 425)), extractedValue_location, var_exp_15779, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 425)) ;
          }
          var_actualParameterList_15312.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualOutput (var_exp_15779  COMMA_SOURCE_FILE ("instruction-if.galgas", 426))  COMMA_SOURCE_FILE ("instruction-if.galgas", 426)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_17159 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_15380.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_actualTypeName = extractPtr_17159->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_constantName = extractPtr_17159->mAssociatedValue1 ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            GALGAS_bool test_7 = GALGAS_bool (kIsNotEqual, extractedValue_actualTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_7.boolEnum ()) {
              test_7 = GALGAS_bool (kIsNotEqual, enumerator_15454.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 428)).objectCompare (extractedValue_actualTypeName.getter_string (HERE))) ;
            }
            test_6 = test_7.boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              appendFixItActions (fixItArray8, kFixItReplace, GALGAS_string ("@").add_operation (enumerator_15454.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 431))) ;
              inCompiler->emitSemanticError (extractedValue_actualTypeName.getter_location (SOURCE_FILE ("instruction-if.galgas", 429)), GALGAS_string ("the '@").add_operation (enumerator_15454.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 430)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 430)), fixItArray8  COMMA_SOURCE_FILE ("instruction-if.galgas", 429)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_16548 = GALGAS_string ("var_").add_operation (extractedValue_constantName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 433)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 433)).add_operation (extractedValue_constantName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 434)).getter_string (SOURCE_FILE ("instruction-if.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 434)) ;
          {
          ioArgument_ioVariableMap.setter_insertLocalConstant (extractedValue_constantName, enumerator_15454.current_mFormalArgumentType (HERE), var_targetVariableCppName_16548, var_targetVariableCppName_16548, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 435)) ;
          }
          var_actualParameterList_15312.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualLetInput (enumerator_15454.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 441)), var_targetVariableCppName_16548  COMMA_SOURCE_FILE ("instruction-if.galgas", 441))  COMMA_SOURCE_FILE ("instruction-if.galgas", 441)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsNotEqual, enumerator_15454.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_15380.current_mSelector (HERE).getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_9) {
              GALGAS_string temp_10 ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, enumerator_15454.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                temp_10 = GALGAS_string (":") ;
              }else if (kBoolFalse == test_11) {
                temp_10 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_15380.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-if.galgas", 443)), GALGAS_string ("the selector should be '\?").add_operation (enumerator_15454.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 444)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 444)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 444)), fixItArray12  COMMA_SOURCE_FILE ("instruction-if.galgas", 443)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_18150 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_15380.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_actualTypeName = extractPtr_18150->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_variableName = extractPtr_18150->mAssociatedValue1 ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            GALGAS_bool test_14 = GALGAS_bool (kIsNotEqual, extractedValue_actualTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_14.boolEnum ()) {
              test_14 = GALGAS_bool (kIsNotEqual, enumerator_15454.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 447)).objectCompare (extractedValue_actualTypeName.getter_string (HERE))) ;
            }
            test_13 = test_14.boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              appendFixItActions (fixItArray15, kFixItReplace, GALGAS_string ("@").add_operation (enumerator_15454.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 450))) ;
              inCompiler->emitSemanticError (extractedValue_actualTypeName.getter_location (SOURCE_FILE ("instruction-if.galgas", 448)), GALGAS_string ("the '@").add_operation (enumerator_15454.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 449)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 449)), fixItArray15  COMMA_SOURCE_FILE ("instruction-if.galgas", 448)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_17532 = GALGAS_string ("var_").add_operation (extractedValue_variableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 452)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 452)).add_operation (extractedValue_variableName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 453)).getter_string (SOURCE_FILE ("instruction-if.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 453)) ;
          {
          ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (extractedValue_variableName, enumerator_15454.current_mFormalArgumentType (HERE), var_targetVariableCppName_17532, var_targetVariableCppName_17532, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 454)) ;
          }
          var_actualParameterList_15312.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (enumerator_15454.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)), var_targetVariableCppName_17532  COMMA_SOURCE_FILE ("instruction-if.galgas", 460))  COMMA_SOURCE_FILE ("instruction-if.galgas", 460)) ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = GALGAS_bool (kIsNotEqual, enumerator_15454.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_15380.current_mSelector (HERE).getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_16) {
              GALGAS_string temp_17 ;
              const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, enumerator_15454.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_18) {
                temp_17 = GALGAS_string (":") ;
              }else if (kBoolFalse == test_18) {
                temp_17 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (enumerator_15380.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-if.galgas", 462)), GALGAS_string ("the selector should be '\?").add_operation (enumerator_15454.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 463)).add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 463)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 463)), fixItArray19  COMMA_SOURCE_FILE ("instruction-if.galgas", 462)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_18655 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_15380.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_checkSelector = extractPtr_18655->mAssociatedValue0 ;
          const GALGAS_location extractedValue_location = extractPtr_18655->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_idx = extractPtr_18655->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_18243 = GALGAS_string ("var_unused_").add_operation (extractedValue_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 466)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 466)).add_operation (extractedValue_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 466)).getter_string (SOURCE_FILE ("instruction-if.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 466)) ;
          var_actualParameterList_15312.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (enumerator_15454.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 467)), var_targetVariableCppName_18243  COMMA_SOURCE_FILE ("instruction-if.galgas", 467))  COMMA_SOURCE_FILE ("instruction-if.galgas", 467)) ;
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            GALGAS_bool test_21 = extractedValue_checkSelector ;
            if (kBoolTrue == test_21.boolEnum ()) {
              test_21 = GALGAS_bool (kIsNotEqual, enumerator_15454.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_15380.current_mSelector (HERE).getter_string (HERE))) ;
            }
            test_20 = test_21.boolEnum () ;
            if (kBoolTrue == test_20) {
              GALGAS_string temp_22 ;
              const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, enumerator_15454.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_23) {
                temp_22 = GALGAS_string (":") ;
              }else if (kBoolFalse == test_23) {
                temp_22 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray24 ;
              inCompiler->emitSemanticError (enumerator_15380.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-if.galgas", 469)), GALGAS_string ("the selector should be '\?").add_operation (enumerator_15454.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 470)).add_operation (temp_22, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 470)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 470)), fixItArray24  COMMA_SOURCE_FILE ("instruction-if.galgas", 469)) ;
            }
          }
        }
        break ;
      }
      enumerator_15380.gotoNextObject () ;
      enumerator_15454.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::constructor_optionalMethodCall (var_receiverExpression_14418, constinArgument_inOptionalMethodName, var_actualParameterList_15312  COMMA_SOURCE_FILE ("instruction-if.galgas", 474))  COMMA_SOURCE_FILE ("instruction-if.galgas", 474)) ;
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
  GALGAS_string var_testVar_21604 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 551)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 552)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_21604, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 553)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 553)) ;
  const GALGAS_ifInstructionForGeneration temp_0 = object ;
  cEnumerator_ifTestListForGeneration enumerator_21790 (temp_0.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_21790.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_21604, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 555)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 555)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 555)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 556)) ;
    }
    switch (enumerator_21790.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_22205 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_21790.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_exp = extractPtr_22205->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_22122 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_22122, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 559)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_21604.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 566)).add_operation (var_cppVarName_22122, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 566)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 566)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 566)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_22836 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_21790.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_targetVarCppName = extractPtr_22836->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_exp = extractPtr_22836->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMap_2D_entry extractedValue_type = extractPtr_22836->mAssociatedValue2 ;
        GALGAS_string var_typeName_22270 = extractedValue_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 568)) ;
        GALGAS_string var_cppVarName_22481 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_22481, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 569)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_typeName_22270, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 576)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 576)).add_operation (extractedValue_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 576)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 576)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (dynamic_cast <const cPtr_").add_operation (var_typeName_22270, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 577)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 577)).add_operation (var_cppVarName_22481, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 577)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 577)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 577)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL == ").add_operation (extractedValue_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 578)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 578)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_21604, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 579)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 579)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 580)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * extractPtr_24563 = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) (enumerator_21790.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_receiverExpression = extractPtr_24563->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalMethodName = extractPtr_24563->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentListForGeneration extractedValue_parameters = extractPtr_24563->mAssociatedValue2 ;
        GALGAS_string var_cppVarName_23109 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_receiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_23109, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 582)) ;
        GALGAS_stringlist var_actualParameterNameList_23159 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 589)) ;
        cEnumerator_optionalMethodActualArgumentListForGeneration enumerator_23200 (extractedValue_parameters, kENUMERATION_UP) ;
        while (enumerator_23200.hasCurrentObject ()) {
          switch (enumerator_23200.current_mParameter (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgumentForGeneration::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * extractPtr_23548 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) (enumerator_23200.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionForGeneration extractedValue_expression = extractPtr_23548->mAssociatedValue0 ;
              GALGAS_string var_argumentCppName_23482 ;
              callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_expression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_23482, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 593)) ;
              var_actualParameterNameList_23159.addAssign_operation (var_argumentCppName_23482  COMMA_SOURCE_FILE ("instruction-if.galgas", 600)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualLetInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * extractPtr_23760 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) (enumerator_23200.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_typeName = extractPtr_23760->mAssociatedValue0 ;
              const GALGAS_string extractedValue_constantName = extractPtr_23760->mAssociatedValue1 ;
              var_actualParameterNameList_23159.addAssign_operation (extractedValue_constantName  COMMA_SOURCE_FILE ("instruction-if.galgas", 602)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 603)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 603)).add_operation (extractedValue_constantName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 603)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 603)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualVarInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * extractPtr_23972 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) (enumerator_23200.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_typeName = extractPtr_23972->mAssociatedValue0 ;
              const GALGAS_string extractedValue_variableName = extractPtr_23972->mAssociatedValue1 ;
              var_actualParameterNameList_23159.addAssign_operation (extractedValue_variableName  COMMA_SOURCE_FILE ("instruction-if.galgas", 605)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 606)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 606)).add_operation (extractedValue_variableName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 606)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 606)) ;
            }
            break ;
          }
          enumerator_23200.gotoNextObject () ;
        }
        GALGAS_string var_boolResultName_24019 = GALGAS_string ("optionalResult").add_operation (extractedValue_optionalMethodName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 609)).getter_string (SOURCE_FILE ("instruction-if.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 609)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolResultName_24019, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 610)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 610)).add_operation (var_cppVarName_23109, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 610)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".optional_").add_operation (extractedValue_optionalMethodName.getter_string (SOURCE_FILE ("instruction-if.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 611)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 611)) ;
        cEnumerator_stringlist enumerator_24271 (var_actualParameterNameList_23159, kENUMERATION_UP) ;
        while (enumerator_24271.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_24271.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 614)) ;
          if (enumerator_24271.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 616)) ;
          }
          enumerator_24271.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 618)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (!").add_operation (var_boolResultName_24019, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 619)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 619)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 619)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_21604, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 620)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 620)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 621)) ;
      }
      break ;
    }
    enumerator_21790.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_21604, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 625)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 625)) ;
  {
  const GALGAS_ifInstructionForGeneration temp_1 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.getter_m_5F_then_5F_instructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 626)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 634)) ;
  const GALGAS_ifInstructionForGeneration temp_2 = object ;
  cEnumerator_ifTestListForGeneration enumerator_24931 (temp_2.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_24931.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 636)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 637)) ;
    enumerator_24931.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ifInstructionForGeneration temp_4 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.getter_m_5F_else_5F_instructionList (HERE).getter_length (SOURCE_FILE ("instruction-if.galgas", 640)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_21604, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 641)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 641)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 641)) ;
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
      GALGAS_unifiedTypeMap_2D_entry joker_3900 ; // Joker input parameter
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, temp_2.getter_mOptionalTypeName (HERE), joker_3900 COMMA_SOURCE_FILE ("instruction-let.galgas", 102)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_4595 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mConstantTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 118)) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_1 = object ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_4728 = GALGAS_string ("var_").add_operation (temp_1.getter_mConstantName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (temp_2.getter_mConstantName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).getter_string (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)) ;
  {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_3 = object ;
  ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (temp_3.getter_mConstantName (HERE), var_targetType_4595, var_targetVariableCppName_4728, var_targetVariableCppName_4728, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 120)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (var_targetType_4595, var_targetVariableCppName_4728  COMMA_SOURCE_FILE ("instruction-let.galgas", 127))  COMMA_SOURCE_FILE ("instruction-let.galgas", 127)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_5875 ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-let.galgas", 145)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_5875, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 142)) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_1 = object ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_5934 = GALGAS_string ("var_").add_operation (temp_1.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).add_operation (temp_2.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).getter_string (SOURCE_FILE ("instruction-let.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)) ;
  {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_3 = object ;
  ioArgument_ioVariableMap.setter_insertLocalConstant (temp_3.getter_mVariableName (HERE), var_expression_5875.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 152)), var_targetVariableCppName_5934, var_targetVariableCppName_5934, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 152)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_5875.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 155)), GALGAS_bool (true), var_targetVariableCppName_5934, var_expression_5875  COMMA_SOURCE_FILE ("instruction-let.galgas", 154))  COMMA_SOURCE_FILE ("instruction-let.galgas", 154)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_6879 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 170)) ;
  GALGAS_semanticExpressionForGeneration var_expression_7237 ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_6879, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7237, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 172)) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = object ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = object ;
  GALGAS_string var_targetVariableCppName_7296 = GALGAS_string ("var_").add_operation (temp_2.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).add_operation (temp_3.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).getter_string (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = object ;
    test_4 = temp_5.getter_mIsConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = object ;
      ioArgument_ioVariableMap.setter_insertLocalConstant (temp_6.getter_mVariableName (HERE), var_targetType_6879, var_targetVariableCppName_7296, var_targetVariableCppName_7296, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 183)) ;
      }
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = object ;
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (temp_7.getter_mVariableName (HERE), var_targetType_6879, var_targetVariableCppName_7296, var_targetVariableCppName_7296, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 185)) ;
    }
  }
  {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_6879, var_expression_7237.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 188)), temp_8.getter_mInstructionLocation (HERE), var_expression_7237, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 188)) ;
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType_6879, temp_9.getter_mIsConstant (HERE), var_targetVariableCppName_7296, var_expression_7237  COMMA_SOURCE_FILE ("instruction-let.galgas", 190))  COMMA_SOURCE_FILE ("instruction-let.galgas", 190)) ;
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
  GALGAS_string var_sourceVar_10142 ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_10142, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 239)) ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = object ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_2.getter_mTargetType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (temp_3.getter_mCppVariableName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (var_sourceVar_10142, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 246)) ;
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
  cEnumerator_logListAST enumerator_2314 (temp_0.getter_mLogList (HERE), kENUMERATION_UP) ;
  while (enumerator_2314.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_2314.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 67)) ;
    enumerator_2314.gotoNextObject () ;
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
  cEnumerator_logListAST enumerator_2981 (temp_0.getter_mLogList (HERE), kENUMERATION_UP) ;
  while (enumerator_2981.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_3065 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_2981.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-log.galgas", 87)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3065, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 84)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_2981.current_mLogMessage (HERE), var_expression_3065  COMMA_SOURCE_FILE ("instruction-log.galgas", 93))  COMMA_SOURCE_FILE ("instruction-log.galgas", 93)) ;
    enumerator_2981.gotoNextObject () ;
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
  GALGAS_string var_logVar_4408 ;
  const GALGAS_logInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mLogExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_4408, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 118)) ;
  const GALGAS_logInstructionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_4408.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 125)).add_operation (temp_1.getter_mLogMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("instruction-log.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 125)) ;
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
  GALGAS_semanticExpressionForGeneration var_variantExpression_3818 ;
  const GALGAS_loopInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mVariantExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 99)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variantExpression_3818, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 96)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_variantExpression_3818.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 105)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_loopInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mEndOfVariantExpression (HERE), GALGAS_string ("the variant expression type should be '@").add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (var_variantExpression_3818.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 107)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop.galgas", 106)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_4459 ;
  const GALGAS_loopInstructionAST temp_4 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_4.getter_mLoopExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 114)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression_4459, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 111)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_loopExpression_4459.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 120)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_loopInstructionAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mEndOfLoopExpression (HERE), GALGAS_string ("the loop expression type should be '@").add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (var_loopExpression_4459.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 122)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), fixItArray7  COMMA_SOURCE_FILE ("instruction-loop.galgas", 121)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 125)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_5189 ;
  {
  const GALGAS_loopInstructionAST temp_8 = object ;
  const GALGAS_loopInstructionAST temp_9 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 132)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 133)), temp_8.getter_mFirstInstructions (HERE), temp_9.getter_mEndOfFirstInstructions (HERE), ioArgument_ioVariableMap, var_first_5F_instructionList_5189, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 128)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_5521 ;
  {
  const GALGAS_loopInstructionAST temp_10 = object ;
  const GALGAS_loopInstructionAST temp_11 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 145)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 146)), temp_10.getter_mSecondInstructions (HERE), temp_11.getter_mEndOfSecondInstructions (HERE), ioArgument_ioVariableMap, var_second_5F_instructionList_5521, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 141)) ;
  }
  {
  const GALGAS_loopInstructionAST temp_12 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_12.getter_mEndOfLoopInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 153)) ;
  }
  const GALGAS_loopInstructionAST temp_13 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionForGeneration::constructor_new (temp_13.getter_mInstructionLocation (HERE), var_variantExpression_3818, var_first_5F_instructionList_5189, var_loopExpression_4459, var_second_5F_instructionList_5521  COMMA_SOURCE_FILE ("instruction-loop.galgas", 155))  COMMA_SOURCE_FILE ("instruction-loop.galgas", 155)) ;
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
  GALGAS_string var_variantCppVarName_7274 ;
  const GALGAS_loopInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mVariantExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_7274, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 185)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_7274, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 193)) ;
  }
  const GALGAS_loopInstructionForGeneration temp_1 = object ;
  GALGAS_string var_variantVar_7412 = GALGAS_string ("variant_").add_operation (temp_1.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_7412, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (var_variantCppVarName_7274, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)) ;
  const GALGAS_loopInstructionForGeneration temp_2 = object ;
  GALGAS_string var_loopVar_7596 = GALGAS_string ("loop_").add_operation (temp_2.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_7596, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (var_loopVar_7596, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 199)) ;
  }
  {
  const GALGAS_loopInstructionForGeneration temp_3 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.getter_mFirstInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 200)) ;
  }
  GALGAS_string var_loopExpressionVar_8047 ;
  const GALGAS_loopInstructionForGeneration temp_4 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_4.getter_mLoopExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_8047, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 209)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7596.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopExpressionVar_8047, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopVar_7596, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (var_loopVar_7596, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (var_loopExpressionVar_8047, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) ;
  }
  const GALGAS_loopInstructionForGeneration temp_5 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_7596, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_variantVar_7412, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (")) {\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_loopVar_7596, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (GALGAS_string (" = false ;\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (extensionGetter_sourceFile (temp_5.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string (") ;\n"
    "}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 218)).add_operation (var_loopVar_7596, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_7412, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)) ;
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
  cEnumerator_semanticExpressionListAST enumerator_4850 (temp_0.getter_mMatchedExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_4850.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_4850.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 135)) ;
    enumerator_4850.gotoNextObject () ;
  }
  const GALGAS_matchInstructionAST temp_1 = object ;
  cEnumerator_matchInstructionBranchListAST enumerator_4967 (temp_1.getter_mMatchInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_4967.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4967.current_mMatchBranchInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 138)) ;
    enumerator_4967.gotoNextObject () ;
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
  GALGAS_semanticExpressionListForGeneration var_expressionList_5648 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 152)) ;
  const GALGAS_matchInstructionAST temp_0 = object ;
  cEnumerator_semanticExpressionListAST enumerator_5729 (temp_0.getter_mMatchedExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_5729.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_matchedExpression_6006 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_5729.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-match.galgas", 158)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_matchedExpression_6006, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 155)) ;
    var_expressionList_5648.addAssign_operation (var_matchedExpression_6006  COMMA_SOURCE_FILE ("instruction-match.galgas", 163)) ;
    GALGAS_unifiedTypeMap_2D_entry var_type_6121 = var_matchedExpression_6006.getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 165)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_type_6121.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).getter_isClassType (SOURCE_FILE ("instruction-match.galgas", 166)).operator_not (SOURCE_FILE ("instruction-match.galgas", 166)).operator_and (GALGAS_bool (kIsNotEqual, var_type_6121.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 166)))) COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5729.current_mEndOfExpressionLocation (HERE), GALGAS_string ("this expression is an instance of '@").add_operation (var_type_6121.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)).add_operation (GALGAS_string ("' type, but this type is neither an enumeration, neither a class"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)), fixItArray2  COMMA_SOURCE_FILE ("instruction-match.galgas", 167)) ;
      }
    }
    enumerator_5729.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 172)) ;
  }
  GALGAS_matchInstructionBranchListForGeneration var_matchInstructionBranchList_6541 = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 173)) ;
  const GALGAS_matchInstructionAST temp_3 = object ;
  cEnumerator_matchInstructionBranchListAST enumerator_6631 (temp_3.getter_mMatchInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_6631.hasCurrentObject ()) {
    GALGAS_localConstantList var_localConstantList_6678 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 176)) ;
    GALGAS_matchListForGeneration var_matchListForGeneration_6732 = GALGAS_matchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 177)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, var_expressionList_5648.getter_length (SOURCE_FILE ("instruction-match.galgas", 178)).objectCompare (enumerator_6631.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 178)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_semanticExpressionListForGeneration enumerator_6856 (var_expressionList_5648, kENUMERATION_UP) ;
        cEnumerator_matchEntryListAST enumerator_6879 (enumerator_6631.current_mMatchEntryList (HERE), kENUMERATION_UP) ;
        while (enumerator_6856.hasCurrentObject () && enumerator_6879.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_type_6899 = enumerator_6856.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 180)) ;
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_type_6899.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 181)).getter_isClassType (SOURCE_FILE ("instruction-match.galgas", 181)).boolEnum () ;
            if (kBoolTrue == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = enumerator_6879.current_mIsType (HERE).boolEnum () ;
                if (kBoolTrue == test_6) {
                  GALGAS_unifiedTypeMap_2D_entry var_namedType_7030 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_6879.current_mTypeNameOrEnumerationConstantName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 183)) ;
                  GALGAS_unifiedTypeMap_2D_entry var_t_7184 = var_type_6899 ;
                  GALGAS_bool var_found_7215 = GALGAS_bool (kIsEqual, var_t_7184.objectCompare (var_namedType_7030)) ;
                  if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-match.galgas", 186)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).isValid ()) {
                    uint32_t variant_7249 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-match.galgas", 186)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).uintValue () ;
                    bool loop_7249 = true ;
                    while (loop_7249) {
                      loop_7249 = var_found_7215.operator_not (SOURCE_FILE ("instruction-match.galgas", 187)).operator_and (var_t_7184.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 187)).operator_not (SOURCE_FILE ("instruction-match.galgas", 187)) COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).isValid () ;
                      if (loop_7249) {
                        loop_7249 = var_found_7215.operator_not (SOURCE_FILE ("instruction-match.galgas", 187)).operator_and (var_t_7184.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 187)).operator_not (SOURCE_FILE ("instruction-match.galgas", 187)) COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).boolValue () ;
                      }
                      if (loop_7249 && (0 == variant_7249)) {
                        loop_7249 = false ;
                        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-match.galgas", 186)) ;
                      }
                      if (loop_7249) {
                        variant_7249 -- ;
                        var_t_7184 = var_t_7184.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 188)) ;
                        var_found_7215 = GALGAS_bool (kIsEqual, var_t_7184.objectCompare (var_namedType_7030)) ;
                      }
                    }
                  }
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = var_found_7215.operator_not (SOURCE_FILE ("instruction-match.galgas", 191)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      TC_Array <C_FixItDescription> fixItArray8 ;
                      inCompiler->emitSemanticError (enumerator_6879.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 192)), GALGAS_string ("the '@").add_operation (enumerator_6879.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (var_type_6899.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)), fixItArray8  COMMA_SOURCE_FILE ("instruction-match.galgas", 192)) ;
                    }
                  }
                  if (kBoolFalse == test_7) {
                    enumGalgasBool test_9 = kBoolTrue ;
                    if (kBoolTrue == test_9) {
                      test_9 = GALGAS_bool (kIsStrictSup, enumerator_6879.current_mLocalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 194)).getter_length (SOURCE_FILE ("instruction-match.galgas", 194)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                      if (kBoolTrue == test_9) {
                        var_localConstantList_6678.addAssign_operation (var_t_7184, enumerator_6879.current_mLocalConstantName (HERE), GALGAS_bool (false), GALGAS_string ("match_instruction_constant_name")  COMMA_SOURCE_FILE ("instruction-match.galgas", 195)) ;
                      }
                    }
                  }
                }
              }
              if (kBoolFalse == test_6) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_6879.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 198)), GALGAS_string ("a type that inherits from '@").add_operation (enumerator_6856.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 199)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)).add_operation (GALGAS_string ("' class is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)), fixItArray10  COMMA_SOURCE_FILE ("instruction-match.galgas", 198)) ;
              }
              var_matchListForGeneration_6732.addAssign_operation (GALGAS_bool (true), enumerator_6879.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 201)), enumerator_6879.current_mLocalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 201))  COMMA_SOURCE_FILE ("instruction-match.galgas", 201)) ;
            }
          }
          if (kBoolFalse == test_5) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsEqual, var_type_6899.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 202)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 202)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = enumerator_6879.current_mIsType (HERE).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (enumerator_6879.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 204)), GALGAS_string ("a constant of the '@").add_operation (enumerator_6856.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 205)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)).add_operation (GALGAS_string ("' enumeration type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)), fixItArray13  COMMA_SOURCE_FILE ("instruction-match.galgas", 204)) ;
                  }
                }
                if (kBoolFalse == test_12) {
                  enumGalgasBool test_14 = kBoolTrue ;
                  if (kBoolTrue == test_14) {
                    test_14 = var_type_6899.getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 206)).getter_hasKey (enumerator_6879.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 206)) COMMA_SOURCE_FILE ("instruction-match.galgas", 206)).operator_not (SOURCE_FILE ("instruction-match.galgas", 206)).boolEnum () ;
                    if (kBoolTrue == test_14) {
                      TC_Array <C_FixItDescription> fixItArray15 ;
                      inCompiler->emitSemanticError (enumerator_6879.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 207)), GALGAS_string ("the '").add_operation (enumerator_6879.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (GALGAS_string ("' symbol is not a constant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (enumerator_6856.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 208)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)), fixItArray15  COMMA_SOURCE_FILE ("instruction-match.galgas", 207)) ;
                    }
                  }
                }
                var_matchListForGeneration_6732.addAssign_operation (GALGAS_bool (false), enumerator_6879.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 212)), enumerator_6856.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 213)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 213))  COMMA_SOURCE_FILE ("instruction-match.galgas", 210)) ;
              }
            }
            if (kBoolFalse == test_11) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (enumerator_6879.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 215)), GALGAS_string ("internal error"), fixItArray16  COMMA_SOURCE_FILE ("instruction-match.galgas", 215)) ;
            }
          }
          enumerator_6856.gotoNextObject () ;
          enumerator_6879.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (enumerator_6631.current_mEndOfMatchEntryList (HERE), GALGAS_string ("this match list should contain ").add_operation (var_expressionList_5648.getter_length (SOURCE_FILE ("instruction-match.galgas", 220)).getter_string (SOURCE_FILE ("instruction-match.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)).add_operation (GALGAS_string (" elements, but it acually contains "), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)).add_operation (enumerator_6631.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 221)).getter_string (SOURCE_FILE ("instruction-match.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)), fixItArray17  COMMA_SOURCE_FILE ("instruction-match.galgas", 219)) ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_9314 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_6678, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 230)), enumerator_6631.current_mMatchBranchInstructionList (HERE), enumerator_6631.current_mEndOf_5F_instructionList (HERE), ioArgument_ioVariableMap, var_instructionList_9314, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 225)) ;
    }
    var_matchInstructionBranchList_6541.addAssign_operation (var_matchListForGeneration_6732, var_instructionList_9314  COMMA_SOURCE_FILE ("instruction-match.galgas", 237)) ;
    enumerator_6631.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_elseInstructionList_9760 ;
  {
  const GALGAS_matchInstructionAST temp_18 = object ;
  const GALGAS_matchInstructionAST temp_19 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 245)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 246)), temp_18.getter_mElseInstructionList (HERE), temp_19.getter_mEndOf_5F_match_5F_instruction (HERE), ioArgument_ioVariableMap, var_elseInstructionList_9760, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 241)) ;
  }
  {
  const GALGAS_matchInstructionAST temp_20 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_20.getter_mEndOf_5F_match_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 253)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_matchInstructionForGeneration::constructor_new (var_expressionList_5648, var_matchInstructionBranchList_6541, var_elseInstructionList_9760  COMMA_SOURCE_FILE ("instruction-match.galgas", 255))  COMMA_SOURCE_FILE ("instruction-match.galgas", 255)) ;
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
  GALGAS_stringlist var_receiverList_11908 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 296)) ;
  const GALGAS_matchInstructionForGeneration temp_0 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_11964 (temp_0.getter_mMatchedExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_11964.hasCurrentObject ()) {
    GALGAS_string var_variable_12116 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_11964.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variable_12116, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 298)) ;
    var_receiverList_11908.addAssign_operation (var_variable_12116  COMMA_SOURCE_FILE ("instruction-match.galgas", 299)) ;
    enumerator_11964.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 301)) ;
  cEnumerator_stringlist enumerator_12206 (var_receiverList_11908, kENUMERATION_UP) ;
  while (enumerator_12206.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12206.current_mValue (HERE).add_operation (GALGAS_string (".isValid ()"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 303)) ;
    if (enumerator_12206.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 304)) ;
    }
    enumerator_12206.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 306)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 307)) ;
  }
  const GALGAS_matchInstructionForGeneration temp_1 = object ;
  cEnumerator_matchInstructionBranchListForGeneration enumerator_12413 (temp_1.getter_mMatchInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_12413.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 309)) ;
    cEnumerator_matchListForGeneration enumerator_12484 (enumerator_12413.current_mMatchListForGeneration (HERE), kENUMERATION_UP) ;
    cEnumerator_stringlist enumerator_12504 (var_receiverList_11908, kENUMERATION_UP) ;
    while (enumerator_12484.hasCurrentObject () && enumerator_12504.hasCurrentObject ()) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = enumerator_12484.current_mIsType (HERE).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(NULL != dynamic_cast <const cPtr_").add_operation (enumerator_12484.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)).add_operation (enumerator_12504.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 312)) ;
        }
      }
      if (kBoolFalse == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(").add_operation (enumerator_12504.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (GALGAS_string (".enumValue () == GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (enumerator_12484.current_mLocalConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 316)).add_operation (enumerator_12484.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 317)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 315)) ;
      }
      if (enumerator_12484.hasNextObject () && enumerator_12504.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 319)) ;
      }
      enumerator_12484.gotoNextObject () ;
      enumerator_12504.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 321)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_12413.current_mMatchBranchInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 322)) ;
    }
    if (enumerator_12413.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 330)) ;
    }
    enumerator_12413.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_expression_2242 ;
  const GALGAS_messageInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-message.galgas", 53)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2242, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_2242.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 59)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_messageInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("the expression has the '@").add_operation (var_expression_2242.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 61)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 60)) ;
    }
  }
  const GALGAS_messageInstructionAST temp_4 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression_2242, temp_4.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("instruction-message.galgas", 64))  COMMA_SOURCE_FILE ("instruction-message.galgas", 64)) ;
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
  GALGAS_string var_messageCppVarName_3917 ;
  const GALGAS_messageInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_3917, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 88)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)).add_operation (var_messageCppVarName_3917, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 96)) ;
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
  cEnumerator_actualParameterListAST enumerator_1928 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_1928.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1928.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 48)) ;
    enumerator_1928.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_2861 ;
  const GALGAS_methodCallInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 66)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_2861, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 63)) ;
  GALGAS_formalParameterSignature var_routineSignature_2941 ;
  GALGAS_bool var_hasCompilerArgument_2969 ;
  GALGAS_methodKind var_kind_2988 ;
  GALGAS_string var_errorMessage_3011 ;
  const GALGAS_methodCallInstructionAST temp_1 = object ;
  GALGAS_location joker_3122 ; // Joker input parameter
  GALGAS_methodQualifier joker_3146 ; // Joker input parameter
  var_receiverExpression_2861.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 76)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 76)).method_searchKey (temp_1.getter_mMethodName (HERE), var_kind_2988, var_routineSignature_2941, joker_3122, var_hasCompilerArgument_2969, joker_3146, var_errorMessage_3011, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 76)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_errorMessage_3011.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_methodCallInstructionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mMethodName (HERE).getter_location (SOURCE_FILE ("instruction-method-call.galgas", 78)), var_errorMessage_3011, fixItArray4  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 78)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3649 ;
  {
  const GALGAS_methodCallInstructionAST temp_5 = object ;
  const GALGAS_methodCallInstructionAST temp_6 = object ;
  const GALGAS_methodCallInstructionAST temp_7 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_5.getter_mMethodName (HERE), GALGAS_string ("'").add_operation (temp_6.getter_mMethodName (HERE).getter_string (SOURCE_FILE ("instruction-method-call.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)), var_routineSignature_2941, temp_7.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3649, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 81)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_baseType_3715 = var_receiverExpression_2861.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 94)) ;
  GALGAS_bool var_searching_3766 = GALGAS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 96)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 97)).isValid ()) {
        uint32_t variant_3815 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 97)).uintValue () ;
        bool loop_3815 = true ;
        while (loop_3815) {
          loop_3815 = var_searching_3766.isValid () ;
          if (loop_3815) {
            loop_3815 = var_searching_3766.boolValue () ;
          }
          if (loop_3815 && (0 == variant_3815)) {
            loop_3815 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 97)) ;
          }
          if (loop_3815) {
            variant_3815 -- ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = var_baseType_3715.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 98)).getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 98)).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_searching_3766 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                const GALGAS_methodCallInstructionAST temp_11 = object ;
                test_10 = var_baseType_3715.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).getter_hasKey (temp_11.getter_mMethodName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_baseType_3715 = var_baseType_3715.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 102)) ;
                }
              }
              if (kBoolFalse == test_10) {
                var_searching_3766 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_methodCallInstructionAST temp_12 = object ;
  const GALGAS_methodCallInstructionAST temp_13 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (temp_12.getter_mInstructionLocation (HERE), var_receiverExpression_2861.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 112)), var_receiverExpression_2861, temp_13.getter_mMethodName (HERE).getter_string (SOURCE_FILE ("instruction-method-call.galgas", 114)), var_kind_2988, var_actualParameterListForGeneration_3649, var_hasCompilerArgument_2969, var_baseType_3715  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 110))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 110)) ;
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
  GALGAS_string var_receiverCppName_5691 ;
  const GALGAS_methodCallInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_5691, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 146)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_5691 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 147)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_5784 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 149)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5835 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 150)) ;
  GALGAS_stringlist var_inputVariableList_5875 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 151)) ;
  const GALGAS_methodCallInstructionForGeneration temp_1 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_5929 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_5929.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5961 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_5929.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5835, var_inputVariableList_5875, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5961, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 154)) ;
    var_parameterCppNameList_5784.addAssign_operation (var_parameterCppName_5961  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 155)) ;
    enumerator_5929.gotoNextObject () ;
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
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (temp_7.getter_mMethodName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (temp_8.getter_mReceiverExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 163)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (var_receiverCppName_5691, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_9 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (temp_9.getter_mMethodName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (var_receiverCppName_5691, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_methodCallInstructionForGeneration temp_10 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_5691.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (temp_10.getter_mMethodName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_7044 (var_parameterCppNameList_5784, kENUMERATION_UP) ;
  while (enumerator_7044.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_7044.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)) ;
    if (enumerator_7044.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 172)) ;
    }
    enumerator_7044.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_parameterCppNameList_5784.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
  cEnumerator_actualParameterListAST enumerator_1688 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_1688.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1688.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 40)) ;
    enumerator_1688.gotoNextObject () ;
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
  GALGAS_lstring var_usefulnessName_2355 = function_procedureNameForUsefulEntitiesGraph (temp_0.getter_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 55)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2355 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 56)) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_2660 ;
  GALGAS_bool var_isInternal_2687 ;
  const GALGAS_procCallInstructionAST temp_1 = object ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mRoutineMap (HERE).method_searchKey (temp_1.getter_mRoutineName (HERE), var_routineSignature_2660, var_isInternal_2687, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 58)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_2687.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_procCallInstructionAST temp_3 = object ;
      GALGAS_location var_procDeclarationLocation_2765 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mRoutineMap (HERE).getter_locationForKey (temp_3.getter_mRoutineName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 65)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_procCallInstructionAST temp_5 = object ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.getter_mRoutineName (HERE).getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)).objectCompare (var_procDeclarationLocation_2765.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_procCallInstructionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.getter_mRoutineName (HERE).getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 67)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_2765.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)) ;
        }
      }
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3460 ;
  {
  const GALGAS_procCallInstructionAST temp_8 = object ;
  const GALGAS_procCallInstructionAST temp_9 = object ;
  const GALGAS_procCallInstructionAST temp_10 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_8.getter_mRoutineName (HERE), GALGAS_string ("'").add_operation (temp_9.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)), var_routineSignature_2660, temp_10.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3460, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 71)) ;
  }
  const GALGAS_procCallInstructionAST temp_11 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (temp_11.getter_mRoutineName (HERE), var_actualParameterListForGeneration_3460  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 84))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 84)) ;
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
  GALGAS_stringlist var_parameterCppNameList_4598 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 110)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4646 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 111)) ;
  GALGAS_stringlist var_inputVariableList_4683 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 112)) ;
  const GALGAS_procCallInstructionForGeneration temp_1 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_4726 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_4726.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4981 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4726.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4646, var_inputVariableList_4683, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4981, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 114)) ;
    var_parameterCppNameList_4598.addAssign_operation (var_parameterCppName_4981  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 123)) ;
    enumerator_4726.gotoNextObject () ;
  }
  const GALGAS_procCallInstructionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (temp_2.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 126)).getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)) ;
  cEnumerator_stringlist enumerator_5193 (var_parameterCppNameList_4598, kENUMERATION_UP) ;
  while (enumerator_5193.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_5193.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 128)) ;
    enumerator_5193.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_expression_2521 ;
  const GALGAS_selfAssignmentInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2521, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 55)) ;
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
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE), var_expression_2521.getter_mResultType (SOURCE_FILE ("instruction-self-assignment.galgas", 72)), temp_10.getter_mInstructionLocation (HERE), var_expression_2521, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 72)) ;
  }
  const GALGAS_selfAssignmentInstructionAST temp_11 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 78)).getter_string (SOURCE_FILE ("instruction-self-assignment.galgas", 78)), var_expression_2521, temp_11.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 74))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 74)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_6315 ;
  GALGAS_string var_selfObjectCppName_6343 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 153)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfPlusEqualElementsInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
      var_selfObjectCppName_6343.drop () ; // Release error dropped variable
      var_selfTypeEntry_6315.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_6343 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_6315 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_6728 = var_selfTypeEntry_6315.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 160)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_6728.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 161)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfPlusEqualElementsInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_6315.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 162)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      const GALGAS_selfPlusEqualElementsInstructionAST temp_7 = object ;
      test_6 = GALGAS_bool (kIsNotEqual, temp_7.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)).objectCompare (var_addAssignOperatorArguments_6728.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_selfPlusEqualElementsInstructionAST temp_8 = object ;
        const GALGAS_selfPlusEqualElementsInstructionAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_8.getter_mInstructionLocation (HERE), GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_selfTypeEntry_6315.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (var_addAssignOperatorArguments_6728.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 168)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (temp_9.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 169)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)), fixItArray10  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 166)) ;
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_7454 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 171)) ;
      const GALGAS_selfPlusEqualElementsInstructionAST temp_11 = object ;
      cEnumerator_actualOutputExpressionList enumerator_7527 (temp_11.getter_mExpressions (HERE), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_7561 (var_addAssignOperatorArguments_6728, kENUMERATION_UP) ;
      while (enumerator_7527.hasCurrentObject () && enumerator_7561.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_7812 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_7527.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_7561.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7812, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 173)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsNotEqual, enumerator_7561.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_7527.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_12) {
            GALGAS_string temp_13 ;
            const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_7561.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              temp_13 = enumerator_7561.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)) ;
            }else if (kBoolFalse == test_14) {
              temp_13 = GALGAS_string::makeEmptyString () ;
            }
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (enumerator_7527.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-self-concat.galgas", 182)), GALGAS_string ("the selector should be '!").add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)), fixItArray15  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 182)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_7561.current_mFormalArgumentType (HERE), var_expression_7812.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 185)), enumerator_7527.current_mEndOfExpressionLocation (HERE), var_expression_7812, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 185)) ;
        }
        var_effectiveParameterList_7454.addAssign_operation (var_expression_7812  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 186)) ;
        enumerator_7527.gotoNextObject () ;
        enumerator_7561.gotoNextObject () ;
      }
      const GALGAS_selfPlusEqualElementsInstructionAST temp_16 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_selfObjectCppName_6343, var_selfTypeEntry_6315, GALGAS_string::makeEmptyString (), temp_16.getter_mInstructionLocation (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 194)), var_effectiveParameterList_7454  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 189))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 189)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_9032 ;
  GALGAS_string var_selfObjectCppName_9060 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 210)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 211)) ;
      var_selfObjectCppName_9060.drop () ; // Release error dropped variable
      var_selfTypeEntry_9032.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_9060 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_9032 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_9032.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 217)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 217)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 217)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_9032.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 218)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_9913 ;
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeEntry_9032, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9913, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 222)) ;
  {
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_7 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeEntry_9032, var_expression_9913.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 231)), temp_7.getter_mInstructionLocation (HERE), var_expression_9913, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 231)) ;
  }
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), var_selfTypeEntry_9032, var_selfObjectCppName_9060, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 238)), var_expression_9913, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 233))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 233)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_10857 ;
  GALGAS_string var_selfObjectCppName_10885 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 255)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 256)) ;
      var_selfObjectCppName_10885.drop () ; // Release error dropped variable
      var_selfTypeEntry_10857.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_10885 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_10857 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_10857.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 262)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 262)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 262)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_10857.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_11739 ;
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeEntry_10857, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11739, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)) ;
  {
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_7 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeEntry_10857, var_expression_11739.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 276)), temp_7.getter_mInstructionLocation (HERE), var_expression_11739, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 276)) ;
  }
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), var_selfTypeEntry_10857, var_selfObjectCppName_10885, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 283)), var_expression_11739, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_12682 ;
  GALGAS_string var_selfObjectCppName_12710 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 300)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 301)) ;
      var_selfObjectCppName_12710.drop () ; // Release error dropped variable
      var_selfTypeEntry_12682.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_12710 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_12682 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_12682.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 307)).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 307)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_12682.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 308)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_13558 ;
  const GALGAS_selfMulEqualExpressionInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeEntry_12682, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13558, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)) ;
  {
  const GALGAS_selfMulEqualExpressionInstructionAST temp_7 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeEntry_12682, var_expression_13558.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 321)), temp_7.getter_mInstructionLocation (HERE), var_expression_13558, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 321)) ;
  }
  const GALGAS_selfMulEqualExpressionInstructionAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), var_selfTypeEntry_12682, var_selfObjectCppName_12710, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 328)), var_expression_13558, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_14499 ;
  GALGAS_string var_selfObjectCppName_14527 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 345)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 346)) ;
      var_selfObjectCppName_14527.drop () ; // Release error dropped variable
      var_selfTypeEntry_14499.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_14527 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_14499 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_14499.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 352)).getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 352)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_14499.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 353)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_15375 ;
  const GALGAS_selfDivEqualExpressionInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeEntry_14499, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15375, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 357)) ;
  {
  const GALGAS_selfDivEqualExpressionInstructionAST temp_7 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeEntry_14499, var_expression_15375.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 366)), temp_7.getter_mInstructionLocation (HERE), var_expression_15375, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 366)) ;
  }
  const GALGAS_selfDivEqualExpressionInstructionAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), var_selfTypeEntry_14499, var_selfObjectCppName_14527, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 373)), var_expression_15375, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)) ;
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
  cEnumerator_actualParameterListAST enumerator_3471 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_3471.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3471.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 105)) ;
    enumerator_3471.gotoNextObject () ;
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
  cEnumerator_actualParameterListAST enumerator_3821 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_3821.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3821.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 115)) ;
    enumerator_3821.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_4510 ;
  GALGAS_string var_targetVariableCppName_4546 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_4596 ;
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
          var_receiverType_4510.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_4596.drop () ; // Release error dropped variable
          var_targetVariableCppName_4546.drop () ; // Release error dropped variable
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
            var_receiverType_4510.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_4596.drop () ; // Release error dropped variable
            var_targetVariableCppName_4546.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_5070 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 141)) ;
          const GALGAS_setterCallInstructionAST temp_8 = object ;
          GALGAS_bool joker_5171 ; // Joker input parameter
          var_propertyMap_5070.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_5171, var_receiverType_4510, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 142)) ;
          var_nameForCheckingFormalParameterUsing_4596 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_setterCallInstructionAST temp_9 = object ;
          var_targetVariableCppName_4546 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 144)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 144)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_setterCallInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_receiverType_4510, var_targetVariableCppName_4546, var_nameForCheckingFormalParameterUsing_4596, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)) ;
    }
  }
  const GALGAS_setterCallInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_5696 (temp_11.getter_mReceiverStructAttributes (HERE), kENUMERATION_UP) ;
  while (enumerator_5696.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_5719 = var_receiverType_4510.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
    GALGAS_bool var_isPublic_5798 ;
    var_propertyMap_5719.method_searchKey (enumerator_5696.current_mValue (HERE), var_isPublic_5798, var_receiverType_4510, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 157)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_5798.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 158)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_5696.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 159)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 159)) ;
      }
    }
    enumerator_5696.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_castType_6498 ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_setterCallInstructionAST temp_15 = object ;
    test_14 = GALGAS_bool (kIsNotEqual, temp_15.getter_mTypeNameForCasting (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_setterCallInstructionAST temp_16 = object ;
      var_castType_6498 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_16.getter_mTypeNameForCasting (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)) ;
      {
      const GALGAS_setterCallInstructionAST temp_17 = object ;
      routine_checkAssignmentTypes (var_receiverType_4510, var_castType_6498, temp_17.getter_mTypeNameForCasting (HERE).getter_location (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 180)) ;
      }
    }
  }
  if (kBoolFalse == test_14) {
    var_castType_6498 = var_receiverType_4510 ;
  }
  GALGAS_methodKind var_kind_6870 ;
  GALGAS_formalParameterSignature var_routineSignature_6896 ;
  GALGAS_bool var_hasCompilerArgument_6925 ;
  GALGAS_string var_setterErrorMessage_6960 ;
  const GALGAS_setterCallInstructionAST temp_18 = object ;
  GALGAS_methodQualifier joker_6931 ; // Joker input parameter
  var_castType_6498.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 185)).method_searchKey (temp_18.getter_mSetterName (HERE), var_kind_6870, var_routineSignature_6896, var_hasCompilerArgument_6925, joker_6931, var_setterErrorMessage_6960, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 185)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_6960.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_setterCallInstructionAST temp_20 = object ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.getter_mSetterName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 194)), var_setterErrorMessage_6960, fixItArray21  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 194)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_7454 ;
  {
  const GALGAS_setterCallInstructionAST temp_22 = object ;
  const GALGAS_setterCallInstructionAST temp_23 = object ;
  const GALGAS_setterCallInstructionAST temp_24 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_22.getter_mSetterName (HERE), GALGAS_string ("'").add_operation (temp_23.getter_mSetterName (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 202)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 202)), var_routineSignature_6896, temp_24.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_7454, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 197)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_baseType_7520 = var_castType_6498 ;
  GALGAS_bool var_searching_7547 = GALGAS_bool (true) ;
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 212)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_25) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 213)).isValid ()) {
        uint32_t variant_7595 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 213)).uintValue () ;
        bool loop_7595 = true ;
        while (loop_7595) {
          loop_7595 = var_searching_7547.isValid () ;
          if (loop_7595) {
            loop_7595 = var_searching_7547.boolValue () ;
          }
          if (loop_7595 && (0 == variant_7595)) {
            loop_7595 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 213)) ;
          }
          if (loop_7595) {
            variant_7595 -- ;
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = var_baseType_7520.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 214)).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 214)).boolEnum () ;
              if (kBoolTrue == test_26) {
                var_searching_7547 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_26) {
              enumGalgasBool test_27 = kBoolTrue ;
              if (kBoolTrue == test_27) {
                const GALGAS_setterCallInstructionAST temp_28 = object ;
                test_27 = var_baseType_7520.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 217)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 217)).getter_hasKey (temp_28.getter_mSetterName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 217)).boolEnum () ;
                if (kBoolTrue == test_27) {
                  var_baseType_7520 = var_baseType_7520.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 218)) ;
                }
              }
              if (kBoolFalse == test_27) {
                var_searching_7547 = GALGAS_bool (false) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (temp_29.getter_mReceiverName (HERE).getter_location (HERE), var_targetVariableCppName_4546, var_nameForCheckingFormalParameterUsing_4596, temp_30.getter_mReceiverStructAttributes (HERE), var_castType_6498, var_receiverType_4510, temp_31.getter_mSetterName (HERE), var_kind_6870, var_actualParameterListForGeneration_7454, var_hasCompilerArgument_6925, var_baseType_7520  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 226))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 226)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_8826 ;
  GALGAS_string var_selfObjectCppName_8854 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 252)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfSetterCallInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mSetterName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 253)), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 253)) ;
      var_selfObjectCppName_8854.drop () ; // Release error dropped variable
      var_selfTypeEntry_8826.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_8854 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_8826 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_9214 ;
  GALGAS_bool var_hasCompilerArgument_9242 ;
  GALGAS_methodKind var_kind_9261 ;
  const GALGAS_selfSetterCallInstructionAST temp_3 = object ;
  GALGAS_methodQualifier joker_9366 ; // Joker input parameter
  GALGAS_string joker_9369 ; // Joker input parameter
  var_selfTypeEntry_8826.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 262)).method_searchKey (temp_3.getter_mSetterName (HERE), var_kind_9261, var_routineSignature_9214, var_hasCompilerArgument_9242, joker_9366, joker_9369, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 262)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_9772 ;
  {
  const GALGAS_selfSetterCallInstructionAST temp_4 = object ;
  const GALGAS_selfSetterCallInstructionAST temp_5 = object ;
  const GALGAS_selfSetterCallInstructionAST temp_6 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_4.getter_mSetterName (HERE), GALGAS_string ("'").add_operation (temp_5.getter_mSetterName (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 269)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 269)), var_routineSignature_9214, temp_6.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_9772, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 264)) ;
  }
  const GALGAS_selfSetterCallInstructionAST temp_7 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::constructor_new (var_selfObjectCppName_8854, var_selfTypeEntry_8826, temp_7.getter_mSetterName (HERE), var_kind_9261, var_actualParameterListForGeneration_9772, var_hasCompilerArgument_9242  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 277))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 277)) ;
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
  GALGAS_string var_receiverCppName_11617 = temp_0.getter_mReceiverCppName (HERE) ;
  const GALGAS_setterCallInstructionForGeneration temp_1 = object ;
  cEnumerator_lstringlist enumerator_11684 (temp_1.getter_mReceiverStructAttributes (HERE), kENUMERATION_UP) ;
  while (enumerator_11684.hasCurrentObject ()) {
    var_receiverCppName_11617.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_11684.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 328)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 328)) ;
    enumerator_11684.gotoNextObject () ;
  }
  {
  const GALGAS_setterCallInstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.getter_mReceiverBaseName (HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_11893 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 332)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_11941 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 333)) ;
  GALGAS_stringlist var_inputVariableList_11978 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 334)) ;
  const GALGAS_setterCallInstructionForGeneration temp_3 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_12021 (temp_3.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_12021.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_12276 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_12021.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_11941, var_inputVariableList_11978, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_12276, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)) ;
    var_parameterCppNameList_11893.addAssign_operation (var_parameterCppName_12276  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)) ;
    enumerator_12021.gotoNextObject () ;
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
              ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_11617.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_11 = object ;
          GALGAS_string var_pointerUniqueName_12823 = GALGAS_string ("ptr_").add_operation (temp_11.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)) ;
          const GALGAS_setterCallInstructionForGeneration temp_12 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (temp_12.getter_mReceiverType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 356)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 356)).add_operation (var_pointerUniqueName_12823, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 356)) ;
          const GALGAS_setterCallInstructionForGeneration temp_13 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (temp_13.getter_mReceiverType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 357)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 357)).add_operation (var_receiverCppName_11617, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 357)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 357)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            const GALGAS_setterCallInstructionForGeneration temp_15 = object ;
            const GALGAS_setterCallInstructionForGeneration temp_16 = object ;
            test_14 = GALGAS_bool (kIsNotEqual, temp_15.getter_mCastType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 358)).objectCompare (temp_16.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 358)))).boolEnum () ;
            if (kBoolTrue == test_14) {
              const GALGAS_setterCallInstructionForGeneration temp_17 = object ;
              ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (temp_17.getter_mCastType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 359)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 359))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 359)) ;
              const GALGAS_setterCallInstructionForGeneration temp_18 = object ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName_12823, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 360)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 360)).add_operation (temp_18.getter_mCastType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 361)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 361)).add_operation (var_pointerUniqueName_12823, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 361)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 360)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 363)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 363)) ;
              }
              const GALGAS_setterCallInstructionForGeneration temp_19 = object ;
              const GALGAS_setterCallInstructionForGeneration temp_20 = object ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)).add_operation (temp_19.getter_mCastType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)).add_operation (extensionGetter_commaSourceFile (temp_20.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_12823, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 367)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_21 = object ;
          const GALGAS_setterCallInstructionForGeneration temp_22 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_21.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)).add_operation (temp_22.getter_mCastType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 370)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 370)).add_operation (var_pointerUniqueName_12823, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 370)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)) ;
        }
      }
      if (kBoolFalse == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_23 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_23.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)).add_operation (var_receiverCppName_11617, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_setterCallInstructionForGeneration temp_24 = object ;
      extensionMethod_addHeaderFileName (temp_24.getter_mReceiverType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 375)) ;
      const GALGAS_setterCallInstructionForGeneration temp_25 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_11617.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 376)).add_operation (temp_25.getter_mSetterName (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 376)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 376)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 376)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_14475 (var_parameterCppNameList_11893, kENUMERATION_UP) ;
  while (enumerator_14475.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_14475.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 379)) ;
    if (enumerator_14475.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 380)) ;
    }
    enumerator_14475.gotoNextObject () ;
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    const GALGAS_setterCallInstructionForGeneration temp_27 = object ;
    test_26 = temp_27.getter_mHasCompilerArgument (HERE).boolEnum () ;
    if (kBoolTrue == test_26) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_11893.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 383)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
      test_29 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_11893.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 389)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
  GALGAS_stringlist var_parameterCppNameList_15590 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 408)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_15641 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 409)) ;
  GALGAS_stringlist var_inputVariableList_15681 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 410)) ;
  const GALGAS_selfSetterCallInstructionForGeneration temp_1 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_15735 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_15735.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_15998 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_15735.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_15641, var_inputVariableList_15681, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_15998, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 412)) ;
    var_parameterCppNameList_15590.addAssign_operation (var_parameterCppName_15998  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 420)) ;
    enumerator_15735.gotoNextObject () ;
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
  cEnumerator_stringlist enumerator_16950 (var_parameterCppNameList_15590, kENUMERATION_UP) ;
  while (enumerator_16950.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16950.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 439)) ;
    if (enumerator_16950.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 440)) ;
    }
    enumerator_16950.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_selfSetterCallInstructionForGeneration temp_18 = object ;
    test_17 = temp_18.getter_mHasCompilerArgument (HERE).boolEnum () ;
    if (kBoolTrue == test_17) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_15590.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 443)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
      test_20 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_15590.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 449)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
  cEnumerator_switchBranchesAST enumerator_4413 (temp_1.getter_mBranches (HERE), kENUMERATION_UP) ;
  while (enumerator_4413.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4413.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
    enumerator_4413.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_switchExpression_5143 ;
  const GALGAS_switchInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mSwitchExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 154)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression_5143, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_switchExpression_5143.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 160)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-switch.galgas", 160)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_switchInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mEndOfSwitchExpression (HERE), GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (var_switchExpression_5143.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 163)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 161)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_5758 = var_switchExpression_5143.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 166)).getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 166)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_5857 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 167)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 169)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_5990 = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 170)) ;
  const GALGAS_switchInstructionAST temp_4 = object ;
  cEnumerator_switchBranchesAST enumerator_6022 (temp_4.getter_mBranches (HERE), kENUMERATION_UP) ;
  while (enumerator_6022.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_6108 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 172)) ;
    GALGAS_bool var_firstConstant_6137 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_6178 (enumerator_6022.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_6178.hasCurrentObject ()) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_enumConstantMap_5758.getter_hasKey (enumerator_6178.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 175)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 175)).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_constantsNamedInSwitchInstruction_5857.getter_hasKey (enumerator_6178.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 176)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 176)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_6178.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 177)), GALGAS_string ("the '").add_operation (enumerator_6178.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 177)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_5857.addAssign_operation (enumerator_6178.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 180))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 180)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_6592 ;
          GALGAS_uint joker_6542 ; // Joker input parameter
          var_enumConstantMap_5758.method_searchKey (enumerator_6178.current_mValue (HERE), joker_6542, var_associatedTypeList_6592, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 181)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6592.getter_length (SOURCE_FILE ("instruction-switch.galgas", 182)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_6022.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 182)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_6178.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 183)), GALGAS_string ("the associated values of '").add_operation (enumerator_6178.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas", 183)) ;
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_6592.getter_length (SOURCE_FILE ("instruction-switch.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_6022.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 185)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_6178.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 186)), GALGAS_string ("the '").add_operation (enumerator_6178.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 187)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 187)), fixItArray11  COMMA_SOURCE_FILE ("instruction-switch.galgas", 186)) ;
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_6592.getter_length (SOURCE_FILE ("instruction-switch.galgas", 188)).objectCompare (enumerator_6022.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 188)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  GALGAS_string temp_13 ;
                  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6592.getter_length (SOURCE_FILE ("instruction-switch.galgas", 191)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    temp_13 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_14) {
                    temp_13 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_6178.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 189)), GALGAS_string ("the '").add_operation (enumerator_6178.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (var_associatedTypeList_6592.getter_length (SOURCE_FILE ("instruction-switch.galgas", 190)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
                }
              }
              if (kBoolFalse == test_12) {
                GALGAS_uint var_associatedValueIndex_7326 = GALGAS_uint ((uint32_t) 0U) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_7369 (var_associatedTypeList_6592, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_7404 (enumerator_6022.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_7369.hasCurrentObject () && enumerator_7404.hasCurrentObject ()) {
                  enumGalgasBool test_16 = kBoolTrue ;
                  if (kBoolTrue == test_16) {
                    test_16 = GALGAS_bool (kIsNotEqual, enumerator_7404.current_mExtractedValueTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_16) {
                      enumGalgasBool test_17 = kBoolTrue ;
                      if (kBoolTrue == test_17) {
                        test_17 = GALGAS_bool (kIsNotEqual, enumerator_7369.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)).objectCompare (enumerator_7404.current_mExtractedValueTypeName (HERE).getter_string (HERE))).boolEnum () ;
                        if (kBoolTrue == test_17) {
                          TC_Array <C_FixItDescription> fixItArray18 ;
                          inCompiler->emitSemanticError (enumerator_7404.current_mExtractedValueTypeName (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 197)), GALGAS_string ("the required type is '@").add_operation (enumerator_7369.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), fixItArray18  COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = var_firstConstant_6137.operator_and (GALGAS_bool (kIsNotEqual, enumerator_7404.current_mExtractedValueName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      GALGAS_string var_cppName_7775 = GALGAS_string ("extractedValue_").add_operation (enumerator_7404.current_mExtractedValueName (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
                      var_extractedAssociatedValuesForGeneration_6108.addAssign_operation (enumerator_7369.current_mType (HERE), var_cppName_7775, var_associatedValueIndex_7326  COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)) ;
                      enumGalgasBool test_20 = kBoolTrue ;
                      if (kBoolTrue == test_20) {
                        test_20 = enumerator_7404.current_mMarkedAsUnused (HERE).boolEnum () ;
                        if (kBoolTrue == test_20) {
                          {
                          ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_7404.current_mExtractedValueName (HERE), enumerator_7369.current_mType (HERE), var_cppName_7775, var_cppName_7775, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
                          }
                        }
                      }
                      if (kBoolFalse == test_20) {
                        {
                        ioArgument_ioVariableMap.setter_insertLocalConstant (enumerator_7404.current_mExtractedValueName (HERE), enumerator_7369.current_mType (HERE), var_cppName_7775, var_cppName_7775, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
                        }
                      }
                    }
                  }
                  var_associatedValueIndex_7326.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
                  enumerator_7369.gotoNextObject () ;
                  enumerator_7404.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_6178.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 213)), GALGAS_string ("'").add_operation (enumerator_6178.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (var_switchExpression_5143.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 214)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)), fixItArray21  COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
      }
      var_firstConstant_6137 = GALGAS_bool (false) ;
      enumerator_6178.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_8803 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 222)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 223)), enumerator_6022.current_mInstructions (HERE), enumerator_6022.current_mEndOfBranch (HERE), ioArgument_ioVariableMap, var_instructionList_8803, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 218)) ;
    }
    var_switchBranchesForGeneration_5990.addAssign_operation (enumerator_6022.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_6108, enumerator_6022.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 229)), var_instructionList_8803  COMMA_SOURCE_FILE ("instruction-switch.galgas", 229)) ;
    enumerator_6022.gotoNextObject () ;
  }
  {
  const GALGAS_switchInstructionAST temp_22 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_22.getter_mEndOf_5F_switch_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 231)) ;
  }
  GALGAS_stringset var_forgottenConstants_9090 = var_enumConstantMap_5758.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 233)).substract_operation (var_constantsNamedInSwitchInstruction_5857, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 233)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_9090.getter_count (SOURCE_FILE ("instruction-switch.galgas", 234)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_string var_s_9208 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_9246 (var_forgottenConstants_9090, kENUMERATION_UP) ;
      while (enumerator_9246.hasCurrentObject ()) {
        var_s_9208.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_9246.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 237)) ;
        enumerator_9246.gotoNextObject () ;
      }
      const GALGAS_switchInstructionAST temp_24 = object ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.getter_mEndOf_5F_switch_5F_instruction (HERE), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_9208, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 240)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas", 239)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression_5143.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 244)), var_switchExpression_5143, var_switchBranchesForGeneration_5990  COMMA_SOURCE_FILE ("instruction-switch.galgas", 243))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 243)) ;
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
  GALGAS_string var_switchVar_11278 ;
  const GALGAS_switchInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mSwitchExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_11278, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 286)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_11278, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)) ;
  const GALGAS_switchInstructionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_1.getter_mSwitchExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 294)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)) ;
  const GALGAS_switchInstructionForGeneration temp_2 = object ;
  cEnumerator_switchBranchesForGeneration enumerator_11532 (temp_2.getter_mBranches (HERE), kENUMERATION_UP) ;
  while (enumerator_11532.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_11569 (enumerator_11532.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_11569.hasCurrentObject ()) {
      const GALGAS_switchInstructionForGeneration temp_3 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_3.getter_mSwitchExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 298)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (enumerator_11569.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 298)).getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)) ;
      enumerator_11569.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 300)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_11532.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 302)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_switchInstructionForGeneration temp_5 = object ;
        GALGAS_string var_type_11903 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (temp_5.getter_mEnumType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)).add_operation (enumerator_11532.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)) ;
        GALGAS_string var_varPtr_12065 = GALGAS_string ("extractPtr_").add_operation (enumerator_11532.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 305)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_11903, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_varPtr_12065, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_type_11903, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_switchVar_11278, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_12280 (enumerator_11532.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_12280.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (enumerator_12280.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (enumerator_12280.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (var_varPtr_12065, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (enumerator_12280.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)) ;
          enumerator_12280.gotoNextObject () ;
        }
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_11532.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 312)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 320)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 321)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)) ;
    }
    enumerator_11532.gotoNextObject () ;
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
  cEnumerator_actualParameterListAST enumerator_1836 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_1836.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1836.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 43)) ;
    enumerator_1836.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_type_2543 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 58)) ;
  GALGAS_formalParameterSignature var_routineSignature_2717 ;
  GALGAS_bool var_hasCompilerArgument_2745 ;
  const GALGAS_typeMethodCallInstructionAST temp_1 = object ;
  var_type_2543.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)).method_searchKey (temp_1.getter_mMethodName (HERE), var_routineSignature_2717, var_hasCompilerArgument_2745, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3244 ;
  {
  const GALGAS_typeMethodCallInstructionAST temp_2 = object ;
  const GALGAS_typeMethodCallInstructionAST temp_3 = object ;
  const GALGAS_typeMethodCallInstructionAST temp_4 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_2.getter_mMethodName (HERE), GALGAS_string ("'").add_operation (temp_3.getter_mMethodName (HERE).getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 69)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 69)), var_routineSignature_2717, temp_4.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3244, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 64)) ;
  }
  const GALGAS_typeMethodCallInstructionAST temp_5 = object ;
  const GALGAS_typeMethodCallInstructionAST temp_6 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::constructor_new (temp_5.getter_mTypeName (HERE), temp_6.getter_mMethodName (HERE), var_actualParameterListForGeneration_3244, var_hasCompilerArgument_2745  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 77))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 77)) ;
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
  GALGAS_stringlist var_parameterCppNameList_4412 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4463 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 106)) ;
  GALGAS_stringlist var_inputVariableList_4503 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 107)) ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_0 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_4557 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_4557.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4820 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4557.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4463, var_inputVariableList_4503, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4820, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 109)) ;
    var_parameterCppNameList_4412.addAssign_operation (var_parameterCppName_4820  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 117)) ;
    enumerator_4557.gotoNextObject () ;
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_1 = object ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.getter_mTypeName (HERE).getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 120)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)).add_operation (temp_2.getter_mMethodName (HERE).getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 121)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 121)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)) ;
  cEnumerator_stringlist enumerator_5116 (var_parameterCppNameList_4412, kENUMERATION_UP) ;
  while (enumerator_5116.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_5116.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 123)) ;
    if (enumerator_5116.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 124)) ;
    }
    enumerator_5116.gotoNextObject () ;
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
        test_5 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList_4412.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 128)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
    test_6 = temp_7.getter_mHasCompilerArgument (HERE).operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList_4412.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 133)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 133)).boolEnum () ;
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
  GALGAS_unifiedTypeMap_2D_entry joker_2099 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, temp_0.getter_mTypeName (HERE), joker_2099 COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 43)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_2766 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 58)) ;
  const GALGAS_localVariableDeclarationAST temp_1 = object ;
  const GALGAS_localVariableDeclarationAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_2891 = GALGAS_string ("var_").add_operation (temp_1.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (temp_2.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_localVariableDeclarationAST temp_4 = object ;
    test_3 = temp_4.getter_mIsUndefinedConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_localVariableDeclarationAST temp_5 = object ;
      ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (temp_5.getter_mVariableName (HERE), var_targetType_2766, var_targetVariableCppName_2891, var_targetVariableCppName_2891, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 61)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    {
    const GALGAS_localVariableDeclarationAST temp_6 = object ;
    ioArgument_ioVariableMap.setter_insertUndefinedLocalVariable (temp_6.getter_mVariableName (HERE), var_targetType_2766, var_targetVariableCppName_2891, var_targetVariableCppName_2891, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (var_targetType_2766, var_targetVariableCppName_2891  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_2605 ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 59)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2605, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 56)) ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_1 = object ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_2664 = GALGAS_string ("var_").add_operation (temp_1.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).add_operation (temp_2.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).getter_string (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)) ;
  {
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_3 = object ;
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (temp_3.getter_mVariableName (HERE), var_expression_2605.getter_mResultType (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 68)), var_targetVariableCppName_2664, var_targetVariableCppName_2664, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 66)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_2605.getter_mResultType (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 74)), GALGAS_bool (false), var_targetVariableCppName_2664, var_expression_2605  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 73))  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 73)) ;
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
  GALGAS_semanticExpressionForGeneration var_locationExpression_2909 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_2936 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_2968 ;
  {
  const GALGAS_warningInstructionAST temp_0 = object ;
  const GALGAS_warningInstructionAST temp_1 = object ;
  const GALGAS_warningInstructionAST temp_2 = object ;
  const GALGAS_warningInstructionAST temp_3 = object ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_0.getter_mLocationExpression (HERE), temp_1.getter_mMessageExpression (HERE), temp_2.getter_mFixitListAST (HERE), temp_3.getter_mInstructionLocation (HERE), GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_2909, var_messageExpression_2936, var_fixitListForGeneration_2968, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 60)) ;
  }
  const GALGAS_warningInstructionAST temp_4 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (temp_4.getter_mInstructionLocation (HERE), var_locationExpression_2909, var_messageExpression_2936, var_fixitListForGeneration_2968  COMMA_SOURCE_FILE ("instruction-warning.galgas", 75))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 75)) ;
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
  GALGAS_string var_receiverCppVarName_4159 ;
  const GALGAS_warningInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_4159, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 105)) ;
  GALGAS_string var_messageCppVarName_4523 ;
  const GALGAS_warningInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mWarningExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_4523, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 107)) ;
  GALGAS_string var_fixItArrayCppName_4776 ;
  const GALGAS_warningInstructionForGeneration temp_2 = object ;
  extensionMethod_generateFixIt (temp_2.getter_mFixitListForGeneration (HERE), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_4776, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 115)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)) ;
  }
  const GALGAS_warningInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (var_receiverCppVarName_4159, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (var_messageCppVarName_4523, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)).add_operation (var_fixItArrayCppName_4776, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 128)).add_operation (extensionGetter_commaSourceFile (temp_3.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 128)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_8301 ;
  const GALGAS_readAccessWithInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 224)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_8301, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 221)) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_8324 = var_receiverExpression_8301.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 229)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readAccessWithInstructionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool var_found_8463 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_8521 (var_receiverType_8324.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 233)), kENUMERATION_UP) ;
      bool bool_3 = var_found_8463.operator_not (SOURCE_FILE ("instruction-with.galgas", 233)).isValidAndTrue () ;
      if (enumerator_8521.hasCurrentObject () && bool_3) {
        while (enumerator_8521.hasCurrentObject () && bool_3) {
          const GALGAS_readAccessWithInstructionAST temp_4 = object ;
          var_found_8463 = GALGAS_bool (kIsEqual, enumerator_8521.current_mSearchMethodName (HERE).getter_string (HERE).objectCompare (temp_4.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE))) ;
          enumerator_8521.gotoNextObject () ;
          if (enumerator_8521.hasCurrentObject ()) {
            bool_3 = var_found_8463.operator_not (SOURCE_FILE ("instruction-with.galgas", 233)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_found_8463.operator_not (SOURCE_FILE ("instruction-with.galgas", 236)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_readAccessWithInstructionAST temp_6 = object ;
          const GALGAS_readAccessWithInstructionAST temp_7 = object ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_6.getter_mSearchMethodNameForErrorSignaling (HERE).getter_location (SOURCE_FILE ("instruction-with.galgas", 237)), GALGAS_string ("there is no '").add_operation (temp_7.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 237)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 237)).add_operation (var_receiverType_8324.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 238)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 238)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 237)) ;
        }
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression_9135 ;
  const GALGAS_readAccessWithInstructionAST temp_9 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_9.getter_mKeyExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 245)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_9135, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 242)) ;
  const GALGAS_readAccessWithInstructionAST temp_10 = object ;
  GALGAS_string var_objectArrayCppName_9191 = GALGAS_string ("objectArray_").add_operation (temp_10.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 251)).getter_string (SOURCE_FILE ("instruction-with.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 251)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_receiverType_8324.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 253)).getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 253)).operator_not (SOURCE_FILE ("instruction-with.galgas", 253)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_readAccessWithInstructionAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.getter_mEndOfReceiverExpression (HERE), GALGAS_string ("the '@").add_operation (var_receiverType_8324.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 254)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 254)), fixItArray13  COMMA_SOURCE_FILE ("instruction-with.galgas", 254)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 257)) ;
  }
  GALGAS_localConstantList var_localConstantList_9642 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 259)) ;
  cEnumerator_typedPropertyList enumerator_9719 (var_receiverType_8324.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 260)), kENUMERATION_UP) ;
  while (enumerator_9719.hasCurrentObject ()) {
    const GALGAS_readAccessWithInstructionAST temp_14 = object ;
    const GALGAS_readAccessWithInstructionAST temp_15 = object ;
    var_localConstantList_9642.addAssign_operation (enumerator_9719.current_mPropertyTypeEntry (HERE), GALGAS_lstring::constructor_new (temp_14.getter_mPrefix (HERE).getter_string (HERE).add_operation (enumerator_9719.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 263)), temp_15.getter_mEndOfReceiverExpression (HERE)  COMMA_SOURCE_FILE ("instruction-with.galgas", 263)), GALGAS_bool (true), var_objectArrayCppName_9191.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 265)).add_operation (enumerator_9719.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 265))  COMMA_SOURCE_FILE ("instruction-with.galgas", 261)) ;
    enumerator_9719.gotoNextObject () ;
  }
  const GALGAS_readAccessWithInstructionAST temp_16 = object ;
  const GALGAS_readAccessWithInstructionAST temp_17 = object ;
  var_localConstantList_9642.addAssign_operation (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 269)), GALGAS_lstring::constructor_new (temp_16.getter_mPrefix (HERE).getter_string (HERE).add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 270)), temp_17.getter_mEndOfReceiverExpression (HERE)  COMMA_SOURCE_FILE ("instruction-with.galgas", 270)), GALGAS_bool (true), var_objectArrayCppName_9191.add_operation (GALGAS_string ("->mPropertylkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 272))  COMMA_SOURCE_FILE ("instruction-with.galgas", 268)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_10616 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_18 = object ;
  const GALGAS_readAccessWithInstructionAST temp_19 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_9642, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 278)), temp_18.getter_mDoBranchInstructions (HERE), temp_19.getter_mEndOf_5F_do_5F_instructions (HERE), ioArgument_ioVariableMap, var_do_5F_instructionList_10616, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 273)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_10930 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_20 = object ;
  const GALGAS_readAccessWithInstructionAST temp_21 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 289)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 290)), temp_20.getter_mElseBranchInstructions (HERE), temp_21.getter_mEndOf_5F_else_5F_instructions (HERE), ioArgument_ioVariableMap, var_else_5F_instructionList_10930, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 285)) ;
  }
  {
  const GALGAS_readAccessWithInstructionAST temp_22 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_22.getter_mEndOf_5F_else_5F_instructions (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 296)) ;
  }
  const GALGAS_readAccessWithInstructionAST temp_23 = object ;
  const GALGAS_readAccessWithInstructionAST temp_24 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (temp_23.getter_mInstructionLocation (HERE), var_receiverExpression_8301, var_objectArrayCppName_9191, var_keyExpression_9135, temp_24.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE), var_do_5F_instructionList_10616, var_else_5F_instructionList_10930  COMMA_SOURCE_FILE ("instruction-with.galgas", 298))  COMMA_SOURCE_FILE ("instruction-with.galgas", 298)) ;
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
  GALGAS_semanticExpressionForGeneration var_keyExpression_12027 ;
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mKeyExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 321)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_12027, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 318)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readWriteAccessWithInstructionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_keyExpression_12027.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 328)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 328)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_readWriteAccessWithInstructionAST temp_4 = object ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.getter_mEndOfKeyExpression (HERE), GALGAS_string ("the key type is '@").add_operation (var_keyExpression_12027.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 329)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 329)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 329)), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 329)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, var_keyExpression_12027.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 331)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 331)).objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_readWriteAccessWithInstructionAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.getter_mEndOfKeyExpression (HERE), GALGAS_string ("the key type is '@").add_operation (var_keyExpression_12027.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 332)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 332)).add_operation (GALGAS_string ("', it should be '@lstring'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 332)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 332)) ;
      }
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_9 = object ;
  GALGAS_string var_objectArrayCppName_12577 = GALGAS_string ("objectArray_").add_operation (temp_9.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 335)).getter_string (SOURCE_FILE ("instruction-with.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 335)) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_12721 ;
  GALGAS_string var_receiverVariableCppName_12759 ;
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
          var_targetType_12721.drop () ; // Release error dropped variable
          var_receiverVariableCppName_12759.drop () ; // Release error dropped variable
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
            var_targetType_12721.drop () ; // Release error dropped variable
            var_receiverVariableCppName_12759.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_15) {
          GALGAS_propertyMap var_propertyMap_13220 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 348)) ;
          const GALGAS_readWriteAccessWithInstructionAST temp_18 = object ;
          GALGAS_bool joker_13321 ; // Joker input parameter
          var_propertyMap_13220.method_searchKey (temp_18.getter_mReceiverName (HERE), joker_13321, var_targetType_12721, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 349)) ;
          const GALGAS_readWriteAccessWithInstructionAST temp_19 = object ;
          var_receiverVariableCppName_12759 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 351)).add_operation (temp_19.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 352)).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 352)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_10) {
    {
    const GALGAS_readWriteAccessWithInstructionAST temp_20 = object ;
    GALGAS_string joker_13730 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_20.getter_mReceiverName (HERE), var_targetType_12721, var_receiverVariableCppName_12759, joker_13730, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 355)) ;
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_21 = object ;
  cEnumerator_lstringlist enumerator_13977 (temp_21.getter_mFieldList (HERE), kENUMERATION_UP) ;
  while (enumerator_13977.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_14000 = var_targetType_12721.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 369)) ;
    GALGAS_bool var_isPublic_14077 ;
    var_propertyMap_14000.method_searchKey (enumerator_13977.current_mValue (HERE), var_isPublic_14077, var_targetType_12721, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 370)) ;
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = var_isPublic_14077.operator_not (SOURCE_FILE ("instruction-with.galgas", 371)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (enumerator_13977.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-with.galgas", 372)), GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray23  COMMA_SOURCE_FILE ("instruction-with.galgas", 372)) ;
      }
    }
    enumerator_13977.gotoNextObject () ;
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = var_targetType_12721.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 376)).getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 376)).operator_not (SOURCE_FILE ("instruction-with.galgas", 376)).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_readWriteAccessWithInstructionAST temp_25 = object ;
      TC_Array <C_FixItDescription> fixItArray26 ;
      inCompiler->emitSemanticError (temp_25.getter_mEndOfReceiverExpression (HERE), GALGAS_string ("the '@").add_operation (var_targetType_12721.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 377)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 377)), fixItArray26  COMMA_SOURCE_FILE ("instruction-with.galgas", 377)) ;
    }
  }
  enumGalgasBool test_27 = kBoolTrue ;
  if (kBoolTrue == test_27) {
    const GALGAS_readWriteAccessWithInstructionAST temp_28 = object ;
    test_27 = GALGAS_bool (kIsNotEqual, temp_28.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_27) {
      GALGAS_bool var_found_14547 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_14603 (var_targetType_12721.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 382)), kENUMERATION_UP) ;
      bool bool_29 = var_found_14547.operator_not (SOURCE_FILE ("instruction-with.galgas", 382)).isValidAndTrue () ;
      if (enumerator_14603.hasCurrentObject () && bool_29) {
        while (enumerator_14603.hasCurrentObject () && bool_29) {
          const GALGAS_readWriteAccessWithInstructionAST temp_30 = object ;
          var_found_14547 = GALGAS_bool (kIsEqual, enumerator_14603.current_mSearchMethodName (HERE).getter_string (HERE).objectCompare (temp_30.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE))) ;
          enumerator_14603.gotoNextObject () ;
          if (enumerator_14603.hasCurrentObject ()) {
            bool_29 = var_found_14547.operator_not (SOURCE_FILE ("instruction-with.galgas", 382)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        test_31 = var_found_14547.operator_not (SOURCE_FILE ("instruction-with.galgas", 385)).boolEnum () ;
        if (kBoolTrue == test_31) {
          const GALGAS_readWriteAccessWithInstructionAST temp_32 = object ;
          const GALGAS_readWriteAccessWithInstructionAST temp_33 = object ;
          TC_Array <C_FixItDescription> fixItArray34 ;
          inCompiler->emitSemanticError (temp_32.getter_mSearchMethodNameForErrorSignaling (HERE).getter_location (SOURCE_FILE ("instruction-with.galgas", 386)), GALGAS_string ("there is no '").add_operation (temp_33.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 386)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 386)).add_operation (var_targetType_12721.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 386)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 386)), fixItArray34  COMMA_SOURCE_FILE ("instruction-with.galgas", 386)) ;
        }
      }
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 390)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList_15089 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 392)) ;
  cEnumerator_typedPropertyList enumerator_15146 (var_targetType_12721.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 393)), kENUMERATION_UP) ;
  while (enumerator_15146.hasCurrentObject ()) {
    const GALGAS_readWriteAccessWithInstructionAST temp_35 = object ;
    const GALGAS_readWriteAccessWithInstructionAST temp_36 = object ;
    var_localInitializedVariableList_15089.addAssign_operation (enumerator_15146.current_mPropertyTypeEntry (HERE), GALGAS_lstring::constructor_new (temp_35.getter_mPrefix (HERE).getter_string (HERE).add_operation (enumerator_15146.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 396)), temp_36.getter_mEndOfReceiverExpression (HERE)  COMMA_SOURCE_FILE ("instruction-with.galgas", 396)), var_objectArrayCppName_12577.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 397)).add_operation (enumerator_15146.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 397))  COMMA_SOURCE_FILE ("instruction-with.galgas", 394)) ;
    enumerator_15146.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_37 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 403)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_38 = object ;
  const GALGAS_readWriteAccessWithInstructionAST temp_39 = object ;
  temp_37.addAssign_operation (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 400)), GALGAS_lstring::constructor_new (temp_38.getter_mPrefix (HERE).getter_string (HERE).add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 401)), temp_39.getter_mEndOfReceiverExpression (HERE)  COMMA_SOURCE_FILE ("instruction-with.galgas", 401)), GALGAS_bool (true), var_objectArrayCppName_12577.add_operation (GALGAS_string ("->mProperty_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 403))  COMMA_SOURCE_FILE ("instruction-with.galgas", 403)) ;
  GALGAS_localConstantList var_localConstantList_15417 = temp_37 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_16034 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_40 = object ;
  const GALGAS_readWriteAccessWithInstructionAST temp_41 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_15417, var_localInitializedVariableList_15089, temp_40.getter_m_5F_do_5F_Instructions (HERE), temp_41.getter_mEndOf_5F_do_5F_instructions (HERE), ioArgument_ioVariableMap, var_do_5F_instructionList_16034, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 405)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_16116 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_42 = object ;
  const GALGAS_readWriteAccessWithInstructionAST temp_43 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 422)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 423)), temp_42.getter_m_5F_else_5F_Instructions (HERE), temp_43.getter_mEndOf_5F_else_5F_instructions (HERE), ioArgument_ioVariableMap, var_else_5F_instructionList_16116, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 418)) ;
  }
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_44 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_44.getter_mEndOf_5F_else_5F_instructions (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)) ;
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_45 = object ;
  const GALGAS_readWriteAccessWithInstructionAST temp_46 = object ;
  const GALGAS_readWriteAccessWithInstructionAST temp_47 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (temp_45.getter_mInstructionLocation (HERE), var_receiverVariableCppName_12759, var_targetType_12721, temp_46.getter_mFieldList (HERE), var_objectArrayCppName_12577, var_keyExpression_12027, temp_47.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE), var_do_5F_instructionList_16034, var_else_5F_instructionList_16116  COMMA_SOURCE_FILE ("instruction-with.galgas", 431))  COMMA_SOURCE_FILE ("instruction-with.galgas", 431)) ;
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
  GALGAS_string var_receiverVarCppName_18807 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName_18807, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 482)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_18827 = temp_1.getter_mReceiverExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 483)) ;
  GALGAS_string var_keyVarCppName_19048 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mKeyExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_19048, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 485)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const cMapElement_").add_operation (var_receiverType_18827.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)).add_operation (temp_3.getter_mObjectArrayCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 488)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 488)).add_operation (var_receiverType_18827.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 488)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 488)).add_operation (var_receiverVarCppName_18807, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 489)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 487)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_5 = object ;
    test_4 = GALGAS_bool (kIsEqual, temp_5.getter_mSearchMethodNameForErrorSignaling (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName_19048, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 491)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 491)) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_6 = object ;
    const GALGAS_readOnlyWithInstructionForGeneration temp_7 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("performSearch (").add_operation (var_keyVarCppName_19048, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 493)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 493)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 494)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 494)).add_operation (var_receiverType_18827.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)).add_operation (temp_6.getter_mSearchMethodNameForErrorSignaling (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 495)).add_operation (extensionGetter_commaSourceFile (temp_7.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 496)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 493)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 497)) COMMA_SOURCE_FILE ("instruction-with.galgas", 497)) ;
    }
  }
  const GALGAS_readOnlyWithInstructionForGeneration temp_8 = object ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_9 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != ").add_operation (temp_8.getter_mObjectArrayCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 499)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 499)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 499)).add_operation (temp_9.getter_mObjectArrayCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 500)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 500)).add_operation (var_receiverType_18827.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 500)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 500)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 499)) ;
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
  GALGAS_string var_receiverCppName_21069 = temp_0.getter_mReceiverVariableCppName (HERE) ;
  const GALGAS_readWriteWithInstructionForGeneration temp_1 = object ;
  cEnumerator_lstringlist enumerator_21139 (temp_1.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_21139.hasCurrentObject ()) {
    var_receiverCppName_21069.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_21139.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 534)).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 534)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 534)) ;
    enumerator_21139.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName_21430 ;
  const GALGAS_readWriteWithInstructionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mKeyExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_21430, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 537)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cMapElement_").add_operation (temp_5.getter_mReceiverType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 548)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 548)).add_operation (temp_6.getter_mObjectArrayCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 549)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 549)).add_operation (temp_7.getter_mReceiverType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 549)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 549)).add_operation (var_receiverCppName_21069, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 550)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 548)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_readWriteWithInstructionForGeneration temp_9 = object ;
    test_8 = GALGAS_bool (kIsEqual, temp_9.getter_mSearchMethodNameForErrorSignaling (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 552)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 552)).add_operation (var_keyVarCppName_21430, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 552)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 552)) ;
    }
  }
  if (kBoolFalse == test_8) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 554)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 554)).add_operation (var_keyVarCppName_21430, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 554)) ;
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
  GALGAS_uint var_nonTerminalSymbolIndex_2890 ;
  const GALGAS_nonterminalCallInstruction temp_0 = object ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_2975 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (temp_0.getter_mNonterminalName (HERE), var_nonTerminalSymbolIndex_2890, joker_2975, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 64)) ;
  const GALGAS_nonterminalCallInstruction temp_1 = object ;
  const GALGAS_nonterminalCallInstruction temp_2 = object ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (temp_1.getter_mInstructionLocation (HERE), temp_2.getter_mNonterminalName (HERE), var_nonTerminalSymbolIndex_2890  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65)) ;
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
  GALGAS_nonterminalLabelMap var_labelMap_4074 ;
  const GALGAS_nonterminalCallInstruction temp_0 = object ;
  constinArgument_inNonterminalMap.method_searchKey (temp_0.getter_mNonterminalName (HERE), var_labelMap_4074, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 90)) ;
  GALGAS_formalParameterSignature var_signature_4113 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_nonterminalCallInstruction temp_2 = object ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.getter_mLabelName (HERE).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 92)).objectCompare (GALGAS_string ("parse"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_signature_4113 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 93)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_nonterminalCallInstruction temp_3 = object ;
    GALGAS_formalParameterListForGeneration joker_4228 ; // Joker input parameter
    GALGAS_location joker_4242 ; // Joker input parameter
    var_labelMap_4074.method_searchKey (temp_3.getter_mLabelName (HERE), joker_4228, var_signature_4113, joker_4242, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 95)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4654 ;
  {
  const GALGAS_nonterminalCallInstruction temp_4 = object ;
  const GALGAS_nonterminalCallInstruction temp_5 = object ;
  const GALGAS_nonterminalCallInstruction temp_6 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_4.getter_mNonterminalName (HERE), GALGAS_string ("'<").add_operation (temp_5.getter_mNonterminalName (HERE).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 103)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 103)), var_signature_4113, temp_6.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4654, inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 98)) ;
  }
  const GALGAS_nonterminalCallInstruction temp_7 = object ;
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_7.getter_mGrammarInstructionSyntaxDirectedTranslationResult (HERE).ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 111)) ;
  const GALGAS_nonterminalCallInstruction temp_8 = object ;
  const GALGAS_nonterminalCallInstruction temp_9 = object ;
  const GALGAS_nonterminalCallInstruction temp_10 = object ;
  const GALGAS_nonterminalCallInstruction temp_11 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), temp_9.getter_mNonterminalName (HERE).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 119)), temp_10.getter_mLabelName (HERE).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 120)), var_actualParameterListForGeneration_4654, temp_11.getter_mGrammarInstructionSyntaxDirectedTranslationResult (HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 117))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 117)) ;
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
      GALGAS_nonterminalInstructionForGeneration cast_6962_si ((cPtr_nonterminalInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      const GALGAS_nonterminalInstructionForGeneration temp_0 = object ;
      result_outOk = GALGAS_bool (kIsEqual, temp_0.getter_mNonterminalName (HERE).objectCompare (cast_6962_si.getter_mNonterminalName (SOURCE_FILE ("instruction-non-terminal.galgas", 163)))) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = result_outOk.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 164)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_nonterminalInstructionForGeneration temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (cast_6962_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-non-terminal.galgas", 165)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_2.getter_mNonterminalName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 166)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 166)), fixItArray3  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 165)) ;
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_7270_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      const GALGAS_nonterminalInstructionForGeneration temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (cast_7270_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-non-terminal.galgas", 169)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_4.getter_mNonterminalName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 170)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 170)), fixItArray5  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 169)) ;
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
  GALGAS_stringlist var_parameterCppNameList_8227 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 194)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_8278 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 195)) ;
  GALGAS_stringlist var_inputVariableList_8318 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 196)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_0 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_8372 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_8372.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_8635 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_8372.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_8278, var_inputVariableList_8318, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8635, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 198)) ;
    var_parameterCppNameList_8227.addAssign_operation (var_parameterCppName_8635  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 207)) ;
    enumerator_8372.gotoNextObject () ;
  }
  const GALGAS_nonterminalInstructionForGeneration temp_1 = object ;
  GALGAS_string var_sdtResultVarName_8742 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_1.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 210)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 210)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (var_sdtResultVarName_8742, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)) ;
    }
  }
  const GALGAS_nonterminalInstructionForGeneration temp_3 = object ;
  const GALGAS_nonterminalInstructionForGeneration temp_4 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("nt_").add_operation (temp_3.getter_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)).add_operation (temp_4.getter_mLabelName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)) ;
  cEnumerator_stringlist enumerator_9113 (var_parameterCppNameList_8227, kENUMERATION_UP) ;
  while (enumerator_9113.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_9113.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 216)) ;
    enumerator_9113.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_sdtResultVarName_8742.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)) ;
    }
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 221)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 221)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 222)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 222)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_6 = object ;
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_6.getter_mGrammarInstructionSyntaxDirectedTranslationResult (HERE).ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_8742, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 223)) ;
  cEnumerator_stringlist enumerator_9652 (var_jokerParametersToReleaseList_8278, kENUMERATION_UP) ;
  while (enumerator_9652.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_9652.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 231)) ;
    enumerator_9652.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_nonterminalInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                            extensionMethod_nonterminalInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_generateInstruction (defineExtensionMethod_nonterminalInstructionForGeneration_generateInstruction, NULL) ;

