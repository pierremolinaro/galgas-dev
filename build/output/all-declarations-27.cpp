#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_8616 ;
    GALGAS_bool var_unused_0_8628 ;
    GALGAS_bool var_mutableProperties_8670 ;
    const bool optionalResult8596 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_8616, var_unused_0_8628, var_mutableProperties_8670) ;
    if (!optionalResult8596) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_mutableProperties_8670.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 250)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' property not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 251)) ;
        }
      }
      GALGAS_propertyMap var_propertyMap_8824 = extensionGetter_definition (var_selfType_8616, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 253)).readProperty_mPropertyMap () ;
      GALGAS_bool var_isConstant_8937 ;
      GALGAS_unifiedTypeMapEntry var_targetType_8953 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_4 = this ;
      GALGAS_AccessControl joker_8920 ; // Joker input parameter
      var_propertyMap_8824.method_searchKey (temp_4.readProperty_mTargetSelfPropertyName (), joker_8920, var_isConstant_8937, var_targetType_8953, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 254)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isConstant_8937.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetSelfPropertyName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 256)) ;
        }
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_8 = this ;
      GALGAS_string var_targetVariableCppName_9099 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 258)).add_operation (temp_8.readProperty_mTargetSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 259)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_selfPropertyAssignmentInstructionAST temp_10 = this ;
        test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_propertyMap var_propertyMap_9346 = extensionGetter_definition (var_targetType_8953, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 262)).readProperty_mPropertyMap () ;
          GALGAS_AccessControl var_accessControl_9457 ;
          GALGAS_bool var_isConstant_9473 ;
          const GALGAS_selfPropertyAssignmentInstructionAST temp_11 = this ;
          var_propertyMap_9346.method_searchKey (temp_11.readProperty_mOptionalProperty (), var_accessControl_9457, var_isConstant_9473, var_targetType_8953, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 263)) ;
          const GALGAS_selfPropertyAssignmentInstructionAST temp_12 = this ;
          extensionMethod_checkSetAccess (var_accessControl_9457, constinArgument_inAnalysisContext.readProperty_selfType (), temp_12.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 264)) ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = var_isConstant_9473.boolEnum () ;
            if (kBoolTrue == test_13) {
              const GALGAS_selfPropertyAssignmentInstructionAST temp_14 = this ;
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 269)) ;
            }
          }
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_10147 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_16 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_16.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_8953, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10147, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 273)) ;
      {
      const GALGAS_selfPropertyAssignmentInstructionAST temp_17 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_8953, var_expression_10147.readProperty_mResultType (), temp_17.readProperty_mInstructionLocation (), var_expression_10147, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 283)) ;
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_18 = this ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_19 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_8953, var_targetVariableCppName_9099, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), temp_18.readProperty_mOptionalProperty ().readProperty_string (), var_expression_10147, temp_19.readProperty_mTargetSelfPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 285))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 285)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPropertyAssignmentInstructionAST temp_20 = this ;
    TC_Array <C_FixItDescription> fixItArray21 ;
    inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray21  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 294)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceVar_12053 ;
  const GALGAS_assignmentInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_12053, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 322)) ;
  {
  const GALGAS_assignmentInstructionForGeneration temp_1 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 329)) ;
  }
  const GALGAS_assignmentInstructionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 331)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (kIsEqual, temp_4.readProperty_mOptionalProperty ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_assignmentInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_5.readProperty_mTargetCppName ().add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 333)).add_operation (var_sourceVar_12053, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 333)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 333)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_6 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_6.readProperty_mTargetCppName ().add_operation (GALGAS_string (".setter_set"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 335)) ;
    const GALGAS_assignmentInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_7.readProperty_mOptionalProperty ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("instruction-assignment.galgas", 336)).getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 336)) ;
    const GALGAS_assignmentInstructionForGeneration temp_8 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (").add_operation (var_sourceVar_12053, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 337)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 337)).add_operation (extensionGetter_sourceFile (temp_8.readProperty_mSourceLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 337)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 337)) ;
  }
  {
  const GALGAS_assignmentInstructionForGeneration temp_9 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_9.readProperty_mTargetCppName () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 339)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structuredCastInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 221)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mElseInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 222)) ;
  const GALGAS_structuredCastInstructionAST temp_2 = this ;
  cEnumerator_castInstructionBranchListAST enumerator_7839 (temp_2.readProperty_mCastInstructionBranchList (), kENUMERATION_UP) ;
  while (enumerator_7839.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_7839.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 224)) ;
    enumerator_7839.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_castExpression_8850 ;
  const GALGAS_structuredCastInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-cast.galgas", 243)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_castExpression_8850, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 240)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 250)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList_8990 = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 252)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = this ;
  cEnumerator_castInstructionBranchListAST enumerator_9125 (temp_1.readProperty_mCastInstructionBranchList (), kENUMERATION_UP) ;
  while (enumerator_9125.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_9199 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_9125.current_mTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 255)) ;
    GALGAS_unifiedTypeMapEntry var_t_9322 = var_type_9199 ;
    GALGAS_bool var_found_9349 = GALGAS_bool (kIsEqual, var_t_9322.objectCompare (var_castExpression_8850.readProperty_mResultType ())) ;
    if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-cast.galgas", 259)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)).isValid ()) {
      uint32_t variant_9392 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-cast.galgas", 259)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)).uintValue () ;
      bool loop_9392 = true ;
      while (loop_9392) {
        loop_9392 = var_found_9349.operator_not (SOURCE_FILE ("instruction-cast.galgas", 260)).operator_and (extensionGetter_definition (var_t_9322, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 260)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 260)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 260)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 260)).isValid () ;
        if (loop_9392) {
          loop_9392 = var_found_9349.operator_not (SOURCE_FILE ("instruction-cast.galgas", 260)).operator_and (extensionGetter_definition (var_t_9322, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 260)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 260)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 260)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 260)).boolValue () ;
        }
        if (loop_9392 && (0 == variant_9392)) {
          loop_9392 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 259)) ;
        }
        if (loop_9392) {
          variant_9392 -- ;
          var_t_9322 = extensionGetter_definition (var_t_9322, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 261)).readProperty_mSuperType () ;
          var_found_9349 = GALGAS_bool (kIsEqual, var_t_9322.objectCompare (var_castExpression_8850.readProperty_mResultType ())) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_found_9349.operator_not (SOURCE_FILE ("instruction-cast.galgas", 264)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_9125.current_mTypeName (HERE).readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_9125.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 266)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 266)).add_operation (extensionGetter_definition (var_castExpression_8850.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 266)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 266)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 266)), fixItArray3  COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)) ;
      }
    }
    GALGAS_string var_localConstantName_9849 ;
    GALGAS_localConstantList var_localConstantList_9875 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 270)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_9125.current_mConstantVarName (HERE).readProperty_string ().getter_length (SOURCE_FILE ("instruction-cast.galgas", 271)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_localConstantName_9849 = GALGAS_string ("cast_").add_operation (enumerator_9125.current_mConstantVarName (HERE).readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 272)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 272)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 272)).add_operation (enumerator_9125.current_mConstantVarName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 272)) ;
        var_localConstantList_9875.addAssign_operation (var_type_9199, enumerator_9125.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName_9849  COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_localConstantName_9849 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_10667 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_9875, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 288)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 289)), enumerator_9125.current_mInstructionList (HERE), enumerator_9125.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_10667, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)) ;
    }
    var_castBranchList_8990.addAssign_operation (enumerator_9125.current_mTypeComparisonKind (HERE), var_type_9199, var_localConstantName_9849, var_instructionList_10667  COMMA_SOURCE_FILE ("instruction-cast.galgas", 295)) ;
    enumerator_9125.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_11180 ;
  {
  const GALGAS_structuredCastInstructionAST temp_5 = this ;
  const GALGAS_structuredCastInstructionAST temp_6 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 303)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 304)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 305)), temp_5.readProperty_mElseInstructionList (), temp_6.readProperty_mEndOfCastInstruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_11180, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)) ;
  }
  {
  const GALGAS_structuredCastInstructionAST temp_7 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_7.readProperty_mEndOfCastInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 312)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::constructor_new (var_castExpression_8850, var_castBranchList_8990, var_else_5F_instructionList_11180  COMMA_SOURCE_FILE ("instruction-cast.galgas", 314))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 314)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_castCppVarName_13130 ;
  const GALGAS_structuredCastInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_13130, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 350)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_13130, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 358)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 358)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 359)) ;
  }
  const GALGAS_structuredCastInstructionForGeneration temp_1 = this ;
  cEnumerator_castInstructionBranchListForGeneration enumerator_13313 (temp_1.readProperty_mCastBranchList (), kENUMERATION_UP) ;
  while (enumerator_13313.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13313.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 361)) ;
    switch (enumerator_13313.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_13130, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 364)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 364)).add_operation (extensionGetter_identifierRepresentation (enumerator_13313.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 365)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 364)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (extensionGetter_identifierRepresentation (enumerator_13313.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 368)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 369)).add_operation (var_castCppVarName_13130, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 370)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 368)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((").add_operation (var_castCppVarName_13130, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 372)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 372)).add_operation (extensionGetter_identifierRepresentation (enumerator_13313.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 373)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 374)).add_operation (extensionGetter_identifierRepresentation (enumerator_13313.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 374)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 375)).add_operation (var_castCppVarName_13130, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 376)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 372)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, enumerator_13313.current_mCastedVarCppName (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 378)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_13313.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 380)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 380)).add_operation (enumerator_13313.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 381)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 381)).add_operation (extensionGetter_identifierRepresentation (enumerator_13313.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 381)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 381)).add_operation (var_castCppVarName_13130, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 382)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 379)) ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_13313.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 384)) ;
    }
    if (enumerator_13313.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 392)) ;
    }
    enumerator_13313.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_structuredCastInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("instruction-cast.galgas", 395)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 396)) ;
      {
      const GALGAS_structuredCastInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 397)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 407)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 408)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 409)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_plusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_plusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 255)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@minusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_minusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_minusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 261)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 267)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_divEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 273)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_plusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 279)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_plusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_10899 ;
  GALGAS_string var_targetVariableCppName_10935 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_10985 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_11085 ;
        GALGAS_bool var_unused_0_11089 ;
        GALGAS_bool var_mutableProperties_11131 ;
        const bool optionalResult11065 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_11085, var_unused_0_11089, var_mutableProperties_11131) ;
        if (!optionalResult11065) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_mutableProperties_11131.operator_not (SOURCE_FILE ("instruction-concat.galgas", 300)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("property not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 301)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_11286 = extensionGetter_definition (var_selfType_11085, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 303)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_11391 ;
          const GALGAS_plusEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_11374 ; // Joker input parameter
          var_propertyMap_11286.method_searchKey (temp_6.readProperty_mReceiverName (), joker_11374, var_isConstant_11391, var_targetType_10899, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 304)) ;
          var_nameForCheckingFormalParameterUsing_10985 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_plusEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_10935 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 306)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 307)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_11391.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 309)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_11131.operator_not (SOURCE_FILE ("instruction-concat.galgas", 311)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 312)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 315)) ;
        var_targetType_10899.drop () ; // Release error dropped variable
        var_targetVariableCppName_10935.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_10985.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_10899, var_targetVariableCppName_10935, var_nameForCheckingFormalParameterUsing_10985, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 319)) ;
    }
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_12258 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_12258.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_12311 = extensionGetter_definition (var_targetType_10899, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 327)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_12403 ;
    GALGAS_bool var_isConstant_12419 ;
    var_propertyMap_12311.method_searchKey (enumerator_12258.current_mValue (HERE), var_accessControl_12403, var_isConstant_12419, var_targetType_10899, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 328)) ;
    extensionMethod_checkSetAccess (var_accessControl_12403, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_12258.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 329)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_12419.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_12258.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 334)) ;
      }
    }
    enumerator_12258.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_10899, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 338)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 338)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 338)).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_plusEqualExpressionInstructionAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_10899, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 340)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 340)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 340)), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 339)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_13337 ;
  const GALGAS_plusEqualExpressionInstructionAST temp_23 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_23.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10899, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_13337, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 343)) ;
  {
  const GALGAS_plusEqualExpressionInstructionAST temp_24 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_10899, var_expression_13337.readProperty_mResultType (), temp_24.readProperty_mInstructionLocation (), var_expression_13337, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 353)) ;
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_25 = this ;
  const GALGAS_plusEqualExpressionInstructionAST temp_26 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_25.readProperty_mInstructionLocation (), var_targetType_10899, var_targetVariableCppName_10935, var_nameForCheckingFormalParameterUsing_10985, temp_26.readProperty_mStructAttributeList (), var_expression_13337, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 355))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 355)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@minusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_minusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_14400 ;
  GALGAS_string var_targetVariableCppName_14436 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_14486 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_minusEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_14586 ;
        GALGAS_bool var_selfIsMutable_14614 ;
        GALGAS_bool var_mutableProperties_14656 ;
        const bool optionalResult14566 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14586, var_selfIsMutable_14614, var_mutableProperties_14656) ;
        if (!optionalResult14566) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_14614.operator_not (SOURCE_FILE ("instruction-concat.galgas", 382)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_minusEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 383)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_14805 = extensionGetter_definition (var_selfType_14586, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 385)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_14910 ;
          const GALGAS_minusEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_14893 ; // Joker input parameter
          var_propertyMap_14805.method_searchKey (temp_6.readProperty_mReceiverName (), joker_14893, var_isConstant_14910, var_targetType_14400, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 386)) ;
          var_nameForCheckingFormalParameterUsing_14486 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_minusEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_14436 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 388)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 389)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_14910.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_minusEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 391)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_14656.operator_not (SOURCE_FILE ("instruction-concat.galgas", 393)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_minusEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 394)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_minusEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 397)) ;
        var_targetType_14400.drop () ; // Release error dropped variable
        var_targetVariableCppName_14436.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_14486.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_minusEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_14400, var_targetVariableCppName_14436, var_nameForCheckingFormalParameterUsing_14486, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 401)) ;
    }
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_15777 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_15777.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_15830 = extensionGetter_definition (var_targetType_14400, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 409)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_15922 ;
    GALGAS_bool var_isConstant_15938 ;
    var_propertyMap_15830.method_searchKey (enumerator_15777.current_mValue (HERE), var_accessControl_15922, var_isConstant_15938, var_targetType_14400, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 410)) ;
    extensionMethod_checkSetAccess (var_accessControl_15922, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_15777.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 411)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_15938.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_15777.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 416)) ;
      }
    }
    enumerator_15777.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_14400, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 420)).readProperty_mHandledOperatorFlags ().getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 420)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 420)).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_minusEqualExpressionInstructionAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_14400, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 422)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 422)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 422)), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 421)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_16857 ;
  const GALGAS_minusEqualExpressionInstructionAST temp_23 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_23.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_14400, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_16857, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 425)) ;
  {
  const GALGAS_minusEqualExpressionInstructionAST temp_24 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_14400, var_expression_16857.readProperty_mResultType (), temp_24.readProperty_mInstructionLocation (), var_expression_16857, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 435)) ;
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_25 = this ;
  const GALGAS_minusEqualExpressionInstructionAST temp_26 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_25.readProperty_mInstructionLocation (), var_targetType_14400, var_targetVariableCppName_14436, var_nameForCheckingFormalParameterUsing_14486, temp_26.readProperty_mStructAttributeList (), var_expression_16857, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 437))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 437)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mulEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mulEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_17919 ;
  GALGAS_string var_targetVariableCppName_17955 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_18005 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mulEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_18105 ;
        GALGAS_bool var_selfIsMutable_18133 ;
        GALGAS_bool var_mutableProperties_18175 ;
        const bool optionalResult18085 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_18105, var_selfIsMutable_18133, var_mutableProperties_18175) ;
        if (!optionalResult18085) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_18133.operator_not (SOURCE_FILE ("instruction-concat.galgas", 464)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_mulEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 465)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_18324 = extensionGetter_definition (var_selfType_18105, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 467)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_18429 ;
          const GALGAS_mulEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_18412 ; // Joker input parameter
          var_propertyMap_18324.method_searchKey (temp_6.readProperty_mReceiverName (), joker_18412, var_isConstant_18429, var_targetType_17919, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 468)) ;
          var_nameForCheckingFormalParameterUsing_18005 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_mulEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_17955 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 470)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 471)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_18429.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_mulEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 473)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_18175.operator_not (SOURCE_FILE ("instruction-concat.galgas", 475)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_mulEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 476)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_mulEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 479)) ;
        var_targetType_17919.drop () ; // Release error dropped variable
        var_targetVariableCppName_17955.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_18005.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_mulEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_17919, var_targetVariableCppName_17955, var_nameForCheckingFormalParameterUsing_18005, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 483)) ;
    }
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_19323 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_19323.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_19376 = extensionGetter_definition (var_targetType_17919, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 492)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_19468 ;
    GALGAS_bool var_isConstant_19484 ;
    var_propertyMap_19376.method_searchKey (enumerator_19323.current_mValue (HERE), var_accessControl_19468, var_isConstant_19484, var_targetType_17919, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 493)) ;
    extensionMethod_checkSetAccess (var_accessControl_19468, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_19323.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 494)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_19484.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_19323.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 499)) ;
      }
    }
    enumerator_19323.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_17919, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 503)).readProperty_mHandledOperatorFlags ().getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 503)).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_mulEqualExpressionInstructionAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_17919, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 505)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 505)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 505)), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 504)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_20397 ;
  const GALGAS_mulEqualExpressionInstructionAST temp_23 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_23.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_17919, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_20397, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 508)) ;
  {
  const GALGAS_mulEqualExpressionInstructionAST temp_24 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_17919, var_expression_20397.readProperty_mResultType (), temp_24.readProperty_mInstructionLocation (), var_expression_20397, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 518)) ;
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_25 = this ;
  const GALGAS_mulEqualExpressionInstructionAST temp_26 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_25.readProperty_mInstructionLocation (), var_targetType_17919, var_targetVariableCppName_17955, var_nameForCheckingFormalParameterUsing_18005, temp_26.readProperty_mStructAttributeList (), var_expression_20397, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 520))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 520)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_21457 ;
  GALGAS_string var_targetVariableCppName_21493 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_21543 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_divEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_21643 ;
        GALGAS_bool var_selfIsMutable_21671 ;
        GALGAS_bool var_mutableProperties_21713 ;
        const bool optionalResult21623 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_21643, var_selfIsMutable_21671, var_mutableProperties_21713) ;
        if (!optionalResult21623) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_21671.operator_not (SOURCE_FILE ("instruction-concat.galgas", 547)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_divEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 548)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_21862 = extensionGetter_definition (var_selfType_21643, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 550)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_21967 ;
          const GALGAS_divEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_21950 ; // Joker input parameter
          var_propertyMap_21862.method_searchKey (temp_6.readProperty_mReceiverName (), joker_21950, var_isConstant_21967, var_targetType_21457, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 551)) ;
          var_nameForCheckingFormalParameterUsing_21543 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_divEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_21493 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 553)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 554)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_21967.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_divEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 556)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_21713.operator_not (SOURCE_FILE ("instruction-concat.galgas", 558)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_divEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 559)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_divEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 562)) ;
        var_targetType_21457.drop () ; // Release error dropped variable
        var_targetVariableCppName_21493.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_21543.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_divEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_21457, var_targetVariableCppName_21493, var_nameForCheckingFormalParameterUsing_21543, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 566)) ;
    }
  }
  const GALGAS_divEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_22861 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_22861.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_22914 = extensionGetter_definition (var_targetType_21457, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 575)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_23006 ;
    GALGAS_bool var_isConstant_23022 ;
    var_propertyMap_22914.method_searchKey (enumerator_22861.current_mValue (HERE), var_accessControl_23006, var_isConstant_23022, var_targetType_21457, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 576)) ;
    extensionMethod_checkSetAccess (var_accessControl_23006, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_22861.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 577)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_23022.boolEnum () ;
      if (kBoolTrue == test_18) {
        const GALGAS_divEqualExpressionInstructionAST temp_19 = this ;
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray20  COMMA_SOURCE_FILE ("instruction-concat.galgas", 582)) ;
      }
    }
    enumerator_22861.gotoNextObject () ;
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = extensionGetter_definition (var_targetType_21457, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 586)).readProperty_mHandledOperatorFlags ().getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 586)).boolEnum () ;
    if (kBoolTrue == test_21) {
      const GALGAS_divEqualExpressionInstructionAST temp_22 = this ;
      TC_Array <C_FixItDescription> fixItArray23 ;
      inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_21457, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 588)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 588)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 588)), fixItArray23  COMMA_SOURCE_FILE ("instruction-concat.galgas", 587)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_23948 ;
  const GALGAS_divEqualExpressionInstructionAST temp_24 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_24.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_21457, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_23948, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 591)) ;
  {
  const GALGAS_divEqualExpressionInstructionAST temp_25 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_21457, var_expression_23948.readProperty_mResultType (), temp_25.readProperty_mInstructionLocation (), var_expression_23948, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 601)) ;
  }
  const GALGAS_divEqualExpressionInstructionAST temp_26 = this ;
  const GALGAS_divEqualExpressionInstructionAST temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_26.readProperty_mInstructionLocation (), var_targetType_21457, var_targetVariableCppName_21493, var_nameForCheckingFormalParameterUsing_21543, temp_27.readProperty_mStructAttributeList (), var_expression_23948, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 603))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 603)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_24997 ;
  GALGAS_string var_targetVariableCppName_25033 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_25083 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualElementsInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_25183 ;
        GALGAS_bool var_unused_0_25195 ;
        GALGAS_bool var_mutableProperties_25237 ;
        const bool optionalResult25163 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_25183, var_unused_0_25195, var_mutableProperties_25237) ;
        if (!optionalResult25163) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_mutableProperties_25237.operator_not (SOURCE_FILE ("instruction-concat.galgas", 630)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualElementsInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 631)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_25390 = extensionGetter_definition (var_selfType_25183, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 633)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_25495 ;
          const GALGAS_plusEqualElementsInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_25478 ; // Joker input parameter
          var_propertyMap_25390.method_searchKey (temp_6.readProperty_mReceiverName (), joker_25478, var_isConstant_25495, var_targetType_24997, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 634)) ;
          var_nameForCheckingFormalParameterUsing_25083 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_plusEqualElementsInstructionAST temp_7 = this ;
          var_targetVariableCppName_25033 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 636)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 637)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_25495.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualElementsInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 639)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_25237.operator_not (SOURCE_FILE ("instruction-concat.galgas", 641)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualElementsInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 642)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualElementsInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 645)) ;
        var_targetType_24997.drop () ; // Release error dropped variable
        var_targetVariableCppName_25033.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_25083.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualElementsInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_24997, var_targetVariableCppName_25033, var_nameForCheckingFormalParameterUsing_25083, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 649)) ;
    }
  }
  const GALGAS_plusEqualElementsInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_26392 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_26392.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_26445 = extensionGetter_definition (var_targetType_24997, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 658)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_26578 ;
    GALGAS_bool var_isConstant_26594 ;
    var_propertyMap_26445.method_searchKey (enumerator_26392.current_mValue (HERE), var_accessControl_26578, var_isConstant_26594, var_targetType_24997, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 660)) ;
    extensionMethod_checkSetAccess (var_accessControl_26578, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_26392.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 661)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_26594.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_26392.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 673)) ;
      }
    }
    enumerator_26392.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_27232 = extensionGetter_definition (var_targetType_24997, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 677)).readProperty_mAddAssignOperatorArguments () ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_27232.getter_length (SOURCE_FILE ("instruction-concat.galgas", 678)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_plusEqualElementsInstructionAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_24997, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 680)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 680)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 680)), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 679)) ;
    }
  }
  if (kBoolFalse == test_20) {
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      const GALGAS_plusEqualElementsInstructionAST temp_24 = this ;
      test_23 = GALGAS_bool (kIsNotEqual, temp_24.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-concat.galgas", 682)).objectCompare (var_addAssignOperatorArguments_27232.getter_length (SOURCE_FILE ("instruction-concat.galgas", 682)))).boolEnum () ;
      if (kBoolTrue == test_23) {
        const GALGAS_plusEqualElementsInstructionAST temp_25 = this ;
        const GALGAS_plusEqualElementsInstructionAST temp_26 = this ;
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_25.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_targetType_24997, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 684)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 684)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 684)).add_operation (var_addAssignOperatorArguments_27232.getter_length (SOURCE_FILE ("instruction-concat.galgas", 685)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 684)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 685)).add_operation (temp_26.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-concat.galgas", 686)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 686)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 685)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 686)), fixItArray27  COMMA_SOURCE_FILE ("instruction-concat.galgas", 683)) ;
      }
    }
    if (kBoolFalse == test_23) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_28045 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 688)) ;
      const GALGAS_plusEqualElementsInstructionAST temp_28 = this ;
      cEnumerator_actualOutputExpressionList enumerator_28112 (temp_28.readProperty_mExpressions (), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_28174 (var_addAssignOperatorArguments_27232, kENUMERATION_UP) ;
      while (enumerator_28112.hasCurrentObject () && enumerator_28174.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_28491 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_28112.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_28174.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_28491, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 690)) ;
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          test_29 = GALGAS_bool (kIsNotEqual, enumerator_28174.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_28112.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_29) {
            GALGAS_string temp_30 ;
            const enumGalgasBool test_31 = GALGAS_bool (kIsNotEqual, enumerator_28174.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_31) {
              temp_30 = enumerator_28174.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 700)) ;
            }else if (kBoolFalse == test_31) {
              temp_30 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_28584 = GALGAS_string ("!").add_operation (temp_30, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 700)) ;
            TC_Array <C_FixItDescription> fixItArray32 ;
            appendFixItActions (fixItArray32, kFixItReplace, var_s_28584) ;
            inCompiler->emitSemanticError (enumerator_28112.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_28584, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 701)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 701)), fixItArray32  COMMA_SOURCE_FILE ("instruction-concat.galgas", 701)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_28174.current_mFormalArgumentType (HERE), var_expression_28491.readProperty_mResultType (), enumerator_28112.current_mEndOfExpressionLocation (HERE), var_expression_28491, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 705)) ;
        }
        var_effectiveParameterList_28045.addAssign_operation (var_expression_28491  COMMA_SOURCE_FILE ("instruction-concat.galgas", 706)) ;
        enumerator_28112.gotoNextObject () ;
        enumerator_28174.gotoNextObject () ;
      }
      const GALGAS_plusEqualElementsInstructionAST temp_33 = this ;
      const GALGAS_plusEqualElementsInstructionAST temp_34 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_targetVariableCppName_25033, var_targetType_24997, var_nameForCheckingFormalParameterUsing_25083, temp_33.readProperty_mInstructionLocation (), temp_34.readProperty_mStructAttributeList (), var_effectiveParameterList_28045  COMMA_SOURCE_FILE ("instruction-concat.galgas", 709))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 709)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualnstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_plusEqualnstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_plusEqualnstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 741)) ;
  GALGAS_stringlist var_parameterList_30537 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 742)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_30573 (temp_1.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_30573.hasCurrentObject ()) {
    GALGAS_string var_parameter_30781 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_30573.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_30781, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 744)) ;
    var_parameterList_30537.addAssign_operation (var_parameter_30781  COMMA_SOURCE_FILE ("instruction-concat.galgas", 751)) ;
    enumerator_30573.gotoNextObject () ;
  }
  {
  const GALGAS_plusEqualnstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 754)) ;
  }
  const GALGAS_plusEqualnstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mReceiverCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 755)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_30984 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_30984.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_30984.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 757)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 757)) ;
    enumerator_30984.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 760)) ;
  {
  const GALGAS_plusEqualnstructionForGeneration temp_5 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 761)) ;
  }
  cEnumerator_stringlist enumerator_31264 (var_parameterList_30537, kENUMERATION_UP) ;
  while (enumerator_31264.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_31264.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)) ;
    if (enumerator_31264.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 764)) ;
    }
    enumerator_31264.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_plusEqualnstructionForGeneration temp_7 = this ;
    test_6 = extensionGetter_definition (temp_7.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 766)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 766)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 767)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 767)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 768)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 768)) ;
      }
    }
  }
  const GALGAS_plusEqualnstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 770)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 770)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@opEqualInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_opEqualInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_opEqualInstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 793)) ;
  GALGAS_string var_sourceVar_32849 ;
  const GALGAS_opEqualInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_32849, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 794)) ;
  {
  const GALGAS_opEqualInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 801)) ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)) ;
  const GALGAS_opEqualInstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_33002 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_33002.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_33002.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 804)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 804)) ;
    enumerator_33002.gotoNextObject () ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (temp_5.readProperty_mGeneratedMethod (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 806)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 806)).add_operation (var_sourceVar_32849, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 806)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 806)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 807)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 807)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 807)) ;
  const GALGAS_opEqualInstructionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 808)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 808)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 808)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 808)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 809)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 809)) ;
  }
  {
  const GALGAS_opEqualInstructionForGeneration temp_7 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 810)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dropInstructionAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_3145 (temp_0.readProperty_mDropList (), kENUMERATION_UP) ;
  while (enumerator_3145.hasCurrentObject ()) {
    {
    extensionSetter_searchForDropAccess (ioArgument_ioVariableMap, enumerator_3145.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 76)) ;
    }
    enumerator_3145.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_errorInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 189)) ;
  const GALGAS_errorInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 190)) ;
  const GALGAS_errorInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 191)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
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
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 245)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), outArgument_outLocationExpression.readProperty_mResultType (), constinArgument_inErrorLocation, outArgument_outLocationExpression, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 255)) ;
  }
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-error.galgas", 265)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 262)) ;
  outArgument_outFixitListForGeneration = GALGAS_fixitListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 272)) ;
  cEnumerator_fixitListAST enumerator_9549 (constinArgument_inFixitListAST, kENUMERATION_UP) ;
  while (enumerator_9549.hasCurrentObject ()) {
    switch (enumerator_9549.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 276))  COMMA_SOURCE_FILE ("instruction-error.galgas", 276)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_10614 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_9549.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_9690_exp = extractPtr_10614->mAssociatedValue0 ;
        const GALGAS_location extractedValue_9704_errorLocation = extractPtr_10614->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_9984 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_9690_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_9984, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 278)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_bool test_1 = GALGAS_bool (kIsNotEqual, var_expression_9984.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_1.boolEnum ()) {
            test_1 = GALGAS_bool (kIsNotEqual, var_expression_9984.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_2 = test_1 ;
          if (kBoolTrue == test_2.boolEnum ()) {
            test_2 = GALGAS_bool (kIsNotEqual, var_expression_9984.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_3 = test_2 ;
          if (kBoolTrue == test_3.boolEnum ()) {
            test_3 = GALGAS_bool (kIsNotEqual, var_expression_9984.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_0 = test_3.boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_9704_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_9984.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 291)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 291)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 291)), fixItArray4  COMMA_SOURCE_FILE ("instruction-error.galgas", 291)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItReplace (var_expression_9984  COMMA_SOURCE_FILE ("instruction-error.galgas", 294))  COMMA_SOURCE_FILE ("instruction-error.galgas", 294)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_11575 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_9549.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_10646_exp = extractPtr_11575->mAssociatedValue0 ;
        const GALGAS_location extractedValue_10660_errorLocation = extractPtr_11575->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_10940 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_10646_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10940, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 296)) ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = GALGAS_bool (kIsNotEqual, var_expression_10940.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = GALGAS_bool (kIsNotEqual, var_expression_10940.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_7 = test_6 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (kIsNotEqual, var_expression_10940.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_8 = test_7 ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (kIsNotEqual, var_expression_10940.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_5 = test_8.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_10660_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_10940.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 309)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 309)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 309)), fixItArray9  COMMA_SOURCE_FILE ("instruction-error.galgas", 309)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertBefore (var_expression_10940  COMMA_SOURCE_FILE ("instruction-error.galgas", 312))  COMMA_SOURCE_FILE ("instruction-error.galgas", 312)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_12534 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_9549.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_11606_exp = extractPtr_12534->mAssociatedValue0 ;
        const GALGAS_location extractedValue_11620_errorLocation = extractPtr_12534->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_11900 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_11606_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11900, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 314)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          GALGAS_bool test_11 = GALGAS_bool (kIsNotEqual, var_expression_11900.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_11.boolEnum ()) {
            test_11 = GALGAS_bool (kIsNotEqual, var_expression_11900.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_12 = test_11 ;
          if (kBoolTrue == test_12.boolEnum ()) {
            test_12 = GALGAS_bool (kIsNotEqual, var_expression_11900.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_13 = test_12 ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = GALGAS_bool (kIsNotEqual, var_expression_11900.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_10 = test_13.boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_11620_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_11900.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 327)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 327)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 327)), fixItArray14  COMMA_SOURCE_FILE ("instruction-error.galgas", 327)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertAfter (var_expression_11900  COMMA_SOURCE_FILE ("instruction-error.galgas", 330))  COMMA_SOURCE_FILE ("instruction-error.galgas", 330)) ;
      }
      break ;
    }
    enumerator_9549.gotoNextObject () ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, outArgument_outMessageExpression.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 336)).add_operation (GALGAS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 336)).add_operation (extensionGetter_definition (outArgument_outMessageExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 336)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 336)).add_operation (GALGAS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 336)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 335)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_locationExpression_13713 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_13740 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_13772 ;
  {
  const GALGAS_errorInstructionAST temp_0 = this ;
  const GALGAS_errorInstructionAST temp_1 = this ;
  const GALGAS_errorInstructionAST temp_2 = this ;
  const GALGAS_errorInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_13713, var_messageExpression_13740, var_fixitListForGeneration_13772, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 352)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_13837 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 368)) ;
  const GALGAS_errorInstructionAST temp_4 = this ;
  cEnumerator_lstringlist enumerator_13868 (temp_4.readProperty_mBuiltVariableList (), kENUMERATION_UP) ;
  while (enumerator_13868.hasCurrentObject ()) {
    GALGAS_string var_varCppName_13968 ;
    {
    GALGAS_unifiedTypeMapEntry joker_13951 ; // Joker input parameter
    GALGAS_string joker_13970 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_13868.current_mValue (HERE), joker_13951, var_varCppName_13968, joker_13970, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 370)) ;
    }
    var_builtVariableCppNameList_13837.addAssign_operation (var_varCppName_13968  COMMA_SOURCE_FILE ("instruction-error.galgas", 371)) ;
    enumerator_13868.gotoNextObject () ;
  }
  const GALGAS_errorInstructionAST temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::constructor_new (temp_5.readProperty_mInstructionLocation (), var_locationExpression_13713, var_messageExpression_13740, var_builtVariableCppNameList_13837, var_fixitListForGeneration_13772  COMMA_SOURCE_FILE ("instruction-error.galgas", 374))  COMMA_SOURCE_FILE ("instruction-error.galgas", 374)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverCppVarName_17417 ;
  const GALGAS_errorInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_17417, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 453)) ;
  GALGAS_string var_messageCppVarName_17624 ;
  const GALGAS_errorInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mErrorExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_17624, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 461)) ;
  GALGAS_string var_fixItArrayCppName_17881 ;
  const GALGAS_errorInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_17881, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 469)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 478)) COMMA_SOURCE_FILE ("instruction-error.galgas", 478)) ;
  }
  const GALGAS_errorInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 479)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 479)).add_operation (var_receiverCppVarName_17417, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 479)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 480)).add_operation (var_messageCppVarName_17624, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 480)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 481)).add_operation (var_fixItArrayCppName_17881, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 481)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 482)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 482)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 479)) ;
  const GALGAS_errorInstructionForGeneration temp_4 = this ;
  cEnumerator_stringlist enumerator_18244 (temp_4.readProperty_mBuiltVariableCppNameList (), kENUMERATION_UP) ;
  while (enumerator_18244.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_18244.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 486)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_18244.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 487)) ;
    enumerator_18244.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_forInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhileExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 498)) ;
  const GALGAS_forInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mBeforeInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 499)) ;
  const GALGAS_forInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mBetweenInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 500)) ;
  const GALGAS_forInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mDoInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 501)) ;
  const GALGAS_forInstructionAST temp_4 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.readProperty_mAfterInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 502)) ;
  const GALGAS_forInstructionAST temp_5 = this ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_16588 (temp_5.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_16588.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((cPtr_abstractEnumeratedCollectionAST *) enumerator_16588.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 504)) ;
    enumerator_16588.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionImplicitVarInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 515)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionCstListInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 521)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionVarInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 527)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionImplicitVarInExpAST::method_analyzeEnumeration (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                              GALGAS_string & outArgument_outEnumeratorCppName,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 560)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 557)) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfAnonymousEnumeration ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 567)).getter_string (SOURCE_FILE ("instruction-for.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 567)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_19525 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 568)).readProperty_mEnumerationDescriptor () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_19525.getter_length (SOURCE_FILE ("instruction-for.galgas", 569)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 570)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 570)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 570)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 570)) ;
    }
  }
  GALGAS_string var_suggestion_19860 = GALGAS_string ("(") ;
  cEnumerator_enumerationDescriptorList enumerator_19906 (var_enumerationDescriptorList_19525, kENUMERATION_UP) ;
  while (enumerator_19906.hasCurrentObject ()) {
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_5 = this ;
    var_suggestion_19860.plusAssign_operation(temp_5.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_19906.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 576)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 576)) ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_6 = this ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_7 = this ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_19906.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (temp_6.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_19906.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 579)), temp_7.readProperty_mEndOfAnonymousEnumeration ()  COMMA_SOURCE_FILE ("instruction-for.galgas", 579)), GALGAS_bool (true), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 581)).add_operation (enumerator_19906.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 581)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 581))  COMMA_SOURCE_FILE ("instruction-for.galgas", 577)) ;
    if (enumerator_19906.hasNextObject ()) {
      var_suggestion_19860.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 583)) ;
    }
    enumerator_19906.gotoNextObject () ;
  }
  var_suggestion_19860.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 585)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, kFixItReplace, var_suggestion_19860) ;
      inCompiler->emitSemanticError (temp_9.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for.galgas", 587)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionCstListInExpAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_analyzeEnumeration (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                          GALGAS_string & outArgument_outEnumeratorCppName,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 608)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 605)) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 615)).getter_string (SOURCE_FILE ("instruction-for.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 615)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_21600 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 616)).readProperty_mEnumerationDescriptor () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_21600.getter_length (SOURCE_FILE ("instruction-for.galgas", 617)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 618)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 618)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 618)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 618)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_6 = this ;
      const GALGAS_enumeratedCollectionCstListInExpAST temp_7 = this ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 621)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (temp_7.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 621)) COMMA_SOURCE_FILE ("instruction-for.galgas", 621)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList_22014 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 622)).readProperty_mEnumerationDescriptor () ;
        cEnumerator_enumerationDescriptorList enumerator_22133 (var_currentTypedAttributeList_22014, kENUMERATION_UP) ;
        while (enumerator_22133.hasCurrentObject ()) {
          {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_8 = this ;
          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, GALGAS_lstring::constructor_new (enumerator_22133.current_mEnumerationName (HERE), temp_8.readProperty_mEndOfEnumerationExpression ()  COMMA_SOURCE_FILE ("instruction-for.galgas", 625)), enumerator_22133.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 627)).add_operation (enumerator_22133.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 627)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 627)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 627)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).add_operation (enumerator_22133.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 624)) ;
          }
          enumerator_22133.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_enumeratedCollectionCstListInExpAST temp_10 = this ;
        const GALGAS_enumeratedCollectionCstListInExpAST temp_11 = this ;
        test_9 = temp_10.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 631)).operator_and (GALGAS_bool (kIsNotEqual, temp_11.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 631)).objectCompare (var_enumerationDescriptorList_21600.getter_length (SOURCE_FILE ("instruction-for.galgas", 631)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 631)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_12 = this ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21600.getter_length (SOURCE_FILE ("instruction-for.galgas", 635)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_15 = this ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 633)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 633)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 633)).add_operation (var_enumerationDescriptorList_21600.getter_length (SOURCE_FILE ("instruction-for.galgas", 634)).getter_string (SOURCE_FILE ("instruction-for.galgas", 634)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 633)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)).add_operation (temp_15.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 637)).getter_string (SOURCE_FILE ("instruction-for.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 636)), fixItArray16  COMMA_SOURCE_FILE ("instruction-for.galgas", 632)) ;
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_18 = this ;
          const GALGAS_enumeratedCollectionCstListInExpAST temp_19 = this ;
          test_17 = temp_18.readProperty_mEndsWithEllipsis ().operator_and (GALGAS_bool (kIsStrictSup, temp_19.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 638)).objectCompare (var_enumerationDescriptorList_21600.getter_length (SOURCE_FILE ("instruction-for.galgas", 638)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 638)).boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_enumeratedCollectionCstListInExpAST temp_20 = this ;
            GALGAS_string temp_21 ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21600.getter_length (SOURCE_FILE ("instruction-for.galgas", 642)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
            if (kBoolTrue == test_22) {
              temp_21 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_22) {
              temp_21 = GALGAS_string::makeEmptyString () ;
            }
            const GALGAS_enumeratedCollectionCstListInExpAST temp_23 = this ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 640)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 640)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 640)).add_operation (var_enumerationDescriptorList_21600.getter_length (SOURCE_FILE ("instruction-for.galgas", 641)).getter_string (SOURCE_FILE ("instruction-for.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 640)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 641)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 641)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 642)).add_operation (temp_23.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 644)).getter_string (SOURCE_FILE ("instruction-for.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 643)), fixItArray24  COMMA_SOURCE_FILE ("instruction-for.galgas", 639)) ;
          }
        }
        if (kBoolFalse == test_17) {
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            GALGAS_bool test_26 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject.readProperty_value ()) ;
            if (kBoolTrue == test_26.boolEnum ()) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_27 = this ;
              test_26 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21600.getter_length (SOURCE_FILE ("instruction-for.galgas", 646)).objectCompare (temp_27.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 646)))) ;
            }
            test_25 = test_26.boolEnum () ;
            if (kBoolTrue == test_25) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_28 = this ;
              GALGAS_uint var_missingArgumentCount_23725 = var_enumerationDescriptorList_21600.getter_length (SOURCE_FILE ("instruction-for.galgas", 647)).substract_operation (temp_28.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 647)) ;
              const GALGAS_enumeratedCollectionCstListInExpAST temp_29 = this ;
              TC_Array <C_FixItDescription> fixItArray30 ;
              GALGAS_string temp_31 ;
              const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, var_missingArgumentCount_23725.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_32) {
                temp_31 = GALGAS_string ("*") ;
              }else if (kBoolFalse == test_32) {
                temp_31 = GALGAS_string (" ").add_operation (var_missingArgumentCount_23725.getter_string (SOURCE_FILE ("instruction-for.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 650)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 650)) ;
              }
              appendFixItActions (fixItArray30, kFixItReplace, temp_31) ;
              inCompiler->emitSemanticError (temp_29.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("enumerated object ends with '...' (due to '--error-ellipsis-in-for-instruction' option)"), fixItArray30  COMMA_SOURCE_FILE ("instruction-for.galgas", 648)) ;
            }
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_33 = this ;
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_24123 (temp_33.readProperty_mElementList (), kENUMERATION_UP) ;
          cEnumerator_enumerationDescriptorList enumerator_24180 (var_enumerationDescriptorList_21600, kENUMERATION_UP) ;
          while (enumerator_24123.hasCurrentObject () && enumerator_24180.hasCurrentObject ()) {
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = GALGAS_bool (kIsNotEqual, enumerator_24123.current_mOptionalConstantName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_34) {
                enumGalgasBool test_35 = kBoolTrue ;
                if (kBoolTrue == test_35) {
                  test_35 = GALGAS_bool (kIsNotEqual, enumerator_24123.current_mOptionalTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_35) {
                    GALGAS_unifiedTypeMapEntry var_foundType_24363 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_24123.current_mOptionalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 655)) ;
                    enumGalgasBool test_36 = kBoolTrue ;
                    if (kBoolTrue == test_36) {
                      test_36 = GALGAS_bool (kIsNotEqual, var_foundType_24363.objectCompare (enumerator_24180.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_36) {
                        TC_Array <C_FixItDescription> fixItArray37 ;
                        inCompiler->emitSemanticError (enumerator_24123.current_mOptionalTypeName (HERE).readProperty_location (), GALGAS_string ("incorrect '@").add_operation (extensionGetter_definition (var_foundType_24363, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).add_operation (extensionGetter_definition (enumerator_24180.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)), fixItArray37  COMMA_SOURCE_FILE ("instruction-for.galgas", 657)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_24180.current_mEnumeratedType (HERE), enumerator_24123.current_mOptionalConstantName (HERE), enumerator_24123.current_mDeclaredAsUnused (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (enumerator_24180.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664))  COMMA_SOURCE_FILE ("instruction-for.galgas", 660)) ;
              }
            }
            enumerator_24123.gotoNextObject () ;
            enumerator_24180.gotoNextObject () ;
          }
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionVarInExpAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_analyzeEnumeration (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                      GALGAS_string & outArgument_outEnumeratorCppName,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 686)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 683)) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 693)).getter_string (SOURCE_FILE ("instruction-for.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 693)) ;
  GALGAS_unifiedTypeMapEntry var_enumeratedElementType_25955 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 694)).readProperty_mTypeForEnumeratedElement () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_enumeratedElementType_25955.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 695)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 696)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 696)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 696)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 696)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_6 = this ;
      test_5 = GALGAS_bool (kIsNotEqual, temp_6.readProperty_mEnumerationVariable ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_enumeratedCollectionVarInExpAST temp_7 = this ;
        ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_25955, temp_7.readProperty_mEnumerationVariable (), GALGAS_bool (false), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 698))  COMMA_SOURCE_FILE ("instruction-for.galgas", 698)) ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mEnumerationOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_10 = this ;
      GALGAS_unifiedTypeMapEntry var_explicitType_26531 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_10.readProperty_mEnumerationOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 702)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_enumeratedElementType_25955, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 703)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (var_explicitType_26531, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 703)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_enumeratedCollectionVarInExpAST temp_12 = this ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEnumerationOptionalTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_enumeratedElementType_25955, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 704)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 704)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 704)), fixItArray13  COMMA_SOURCE_FILE ("instruction-for.galgas", 704)) ;
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 721)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 722)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 724)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_27934 ;
  {
  const GALGAS_forInstructionAST temp_0 = this ;
  const GALGAS_forInstructionAST temp_1 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 730)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 731)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 732)), temp_0.readProperty_mBeforeInstructionList (), temp_1.readProperty_mEndOf_5F_before_5F_branch (), ioArgument_ioVariableMap, var_before_5F_instructionList_27934, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 725)) ;
  }
  {
  const GALGAS_forInstructionAST temp_2 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_2.readProperty_mEndOf_5F_before_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 738)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 740)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_28462 ;
  {
  const GALGAS_forInstructionAST temp_3 = this ;
  const GALGAS_forInstructionAST temp_4 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 746)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 747)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 748)), temp_3.readProperty_mBetweenInstructionList (), temp_4.readProperty_mEndOf_5F_between_5F_branch (), ioArgument_ioVariableMap, var_between_5F_instructionList_28462, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 741)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_between_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 754)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 756)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_29021 ;
  {
  const GALGAS_forInstructionAST temp_6 = this ;
  const GALGAS_forInstructionAST temp_7 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 762)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 763)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 764)), temp_6.readProperty_mAfterInstructionList (), temp_7.readProperty_mEndOf_5F_after_5F_branch (), ioArgument_ioVariableMap, var_after_5F_instructionList_29021, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 757)) ;
  }
  {
  const GALGAS_forInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_after_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 770)) ;
  }
  GALGAS_localConstantList var_localConstantListForDoBranch_29171 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 772)) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_29247 = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 773)) ;
  const GALGAS_forInstructionAST temp_9 = this ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_29292 (temp_9.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_29292.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_29577 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_29643 ;
    callExtensionMethod_analyzeEnumeration ((cPtr_abstractEnumeratedCollectionAST *) enumerator_29292.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_localConstantListForDoBranch_29171, var_enumeratorCppName_29577, var_enumerationExpression_29643, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 775)) ;
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = enumerator_29292.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("UP") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string ("DOWN") ;
    }
    var_enumerationList_29247.addAssign_operation (temp_10, var_enumerationExpression_29643, var_enumeratorCppName_29577  COMMA_SOURCE_FILE ("instruction-for.galgas", 786)) ;
    enumerator_29292.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 792)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 793)) ;
  }
  cEnumerator_localConstantList enumerator_29967 (var_localConstantListForDoBranch_29171, kENUMERATION_UP) ;
  while (enumerator_29967.hasCurrentObject ()) {
    {
    extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_29967.current (HERE).readProperty_mName (), enumerator_29967.current (HERE).readProperty_mType (), enumerator_29967.current (HERE).readProperty_mCppName (), enumerator_29967.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 796)) ;
    }
    enumerator_29967.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_30425 ;
  const GALGAS_forInstructionAST temp_12 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_12.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 807)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_uncheckedWhileExpression_30425, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 804)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_30603 ;
  {
  const GALGAS_forInstructionAST temp_13 = this ;
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_13.readProperty_mEndOf_5F_while_5F_expression (), var_uncheckedWhileExpression_30425, var_whileExpression_30603, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 813)) ;
  }
  {
  const GALGAS_forInstructionAST temp_14 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_14.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 820)) ;
  }
  {
  const GALGAS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_15.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 821)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 823)) ;
  }
  GALGAS_string var_indexCppName_30830 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_forInstructionAST temp_17 = this ;
    test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_forInstructionAST temp_18 = this ;
      var_indexCppName_30830 = GALGAS_string ("index_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 826)).getter_string (SOURCE_FILE ("instruction-for.galgas", 826)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 826)) ;
      const GALGAS_forInstructionAST temp_19 = this ;
      var_localConstantListForDoBranch_29171.addAssign_operation (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), temp_19.readProperty_mIndexVariableName (), GALGAS_bool (false), var_indexCppName_30830  COMMA_SOURCE_FILE ("instruction-for.galgas", 827)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_31571 ;
  {
  const GALGAS_forInstructionAST temp_20 = this ;
  const GALGAS_forInstructionAST temp_21 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantListForDoBranch_29171, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 840)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 841)), temp_20.readProperty_mDoInstructionList (), temp_21.readProperty_mEndOf_5F_do_5F_branch (), ioArgument_ioVariableMap, var_do_5F_instructionList_31571, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 834)) ;
  }
  {
  const GALGAS_forInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 848)) ;
  }
  {
  const GALGAS_forInstructionAST temp_23 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 850)) ;
  }
  {
  const GALGAS_forInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 851)) ;
  }
  const GALGAS_forInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::constructor_new (temp_25.readProperty_mInstructionLocation (), var_enumerationList_29247, var_indexCppName_30830, var_whileExpression_30603, var_before_5F_instructionList_27934, var_between_5F_instructionList_28462, var_do_5F_instructionList_31571, var_after_5F_instructionList_29021  COMMA_SOURCE_FILE ("instruction-for.galgas", 853))  COMMA_SOURCE_FILE ("instruction-for.galgas", 853)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_enumerationVarCppNameList_33938 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 899)) ;
  const GALGAS_forInstructionForGeneration temp_0 = this ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_33976 (temp_0.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_33976.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar_34197 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_33976.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_34197, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 901)) ;
    var_enumerationVarCppNameList_33938.addAssign_operation (var_enumerationVar_34197  COMMA_SOURCE_FILE ("instruction-for.galgas", 908)) ;
    enumerator_33976.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_1 = this ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_34324 (temp_1.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  cEnumerator_stringlist enumerator_34364 (var_enumerationVarCppNameList_33938, kENUMERATION_UP) ;
  while (enumerator_34324.hasCurrentObject () && enumerator_34364.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (extensionGetter_identifierRepresentation (enumerator_34324.current_mEnumeratedExpression (HERE).readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 911)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 911)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 911)).add_operation (enumerator_34324.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 912)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 912)).add_operation (enumerator_34364.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 912)).add_operation (GALGAS_string (", kENUMERATION_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 912)).add_operation (enumerator_34324.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 913)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 913)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 911)) ;
    enumerator_34324.gotoNextObject () ;
    enumerator_34364.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_2 = this ;
  GALGAS_bool var_whileExpressionIsAllwaysTrue_34676 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mWhileExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 916)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_forInstructionForGeneration temp_4 = this ;
    const GALGAS_forInstructionForGeneration temp_5 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 918)).add_operation (temp_5.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 918)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 918)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_or (var_whileExpressionIsAllwaysTrue_34676.operator_not (SOURCE_FILE ("instruction-for.galgas", 918)) COMMA_SOURCE_FILE ("instruction-for.galgas", 918)).boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_forInstructionForGeneration temp_7 = this ;
        test_6 = GALGAS_bool (kIsNotEqual, temp_7.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_forInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_8.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 921)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 921)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 921)) ;
        }
      }
      GALGAS_string var_boolVarCppName_35111 = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 923)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 923)) ;
      ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 924)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_34676.boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolVarCppName_35111, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 926)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 926)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 926)) ;
        }
      }
      if (kBoolFalse == test_9) {
        GALGAS_string var_whileVar_35466 ;
        const GALGAS_forInstructionForGeneration temp_10 = this ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_10.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_35466, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_boolVarCppName_35111, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 929)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 929)).add_operation (var_whileVar_35466, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 929)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 929)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 929)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 931)) ;
      const GALGAS_forInstructionForGeneration temp_11 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35633 (temp_11.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_35633.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_35633.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 933)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 933)) ;
        enumerator_35633.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_35111.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 935)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 935)) ;
      {
      const GALGAS_forInstructionForGeneration temp_12 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_12.readProperty_mBeforeInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 936)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 944)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 945)) ;
      const GALGAS_forInstructionForGeneration temp_13 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_36138 (temp_13.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_36138.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_36138.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 947)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 947)) ;
        enumerator_36138.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_35111.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 949)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 949)) ;
      {
      const GALGAS_forInstructionForGeneration temp_14 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_14.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 951)) ;
      }
      const GALGAS_forInstructionForGeneration temp_15 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_36621 (temp_15.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_36621.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_36621.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 961)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 961)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 961)) ;
        enumerator_36621.gotoNextObject () ;
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_forInstructionForGeneration temp_17 = this ;
        test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_forInstructionForGeneration temp_18 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_18.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 964)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 964)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 964)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_34676.operator_not (SOURCE_FILE ("instruction-for.galgas", 967)).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 968)) ;
          const GALGAS_forInstructionForGeneration temp_20 = this ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37022 (temp_20.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_37022.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_37022.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 970)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 970)) ;
            if (enumerator_37022.hasNextObject ()) {
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 971)) ;
            }
            enumerator_37022.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 973)) ;
          GALGAS_string var_whileVar_37402 ;
          const GALGAS_forInstructionForGeneration temp_21 = this ;
          callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_21.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_37402, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 974)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    ").add_operation (var_boolVarCppName_35111, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 981)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 981)).add_operation (var_whileVar_37402, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 981)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 981)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 981)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 982)) ;
        }
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_forInstructionForGeneration temp_23 = this ;
        test_22 = GALGAS_bool (kIsStrictSup, temp_23.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 985)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 986)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 987)) ;
          const GALGAS_forInstructionForGeneration temp_24 = this ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37748 (temp_24.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_37748.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_37748.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 989)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 989)) ;
            enumerator_37748.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_35111.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 991)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 991)) ;
          {
          const GALGAS_forInstructionForGeneration temp_25 = this ;
          routine_generateInstructionList (ioArgument_ioInclusionSet, temp_25.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 992)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1000)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1001)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1004)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1006)) ;
      }
      {
      const GALGAS_forInstructionForGeneration temp_26 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_26.readProperty_mAfterInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1007)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1015)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_forInstructionForGeneration temp_28 = this ;
      test_27 = GALGAS_bool (kIsNotEqual, temp_28.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_forInstructionForGeneration temp_29 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_29.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1018)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1018)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1018)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1020)) ;
    const GALGAS_forInstructionForGeneration temp_30 = this ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_38945 (temp_30.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_38945.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_38945.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1022)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1022)) ;
      if (enumerator_38945.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1023)) ;
      }
      enumerator_38945.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1025)) ;
    {
    const GALGAS_forInstructionForGeneration temp_31 = this ;
    routine_generateInstructionList (ioArgument_ioInclusionSet, temp_31.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1027)) ;
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_forInstructionForGeneration temp_33 = this ;
      test_32 = GALGAS_bool (kIsStrictSup, temp_33.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 1036)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1037)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1038)) ;
        const GALGAS_forInstructionForGeneration temp_34 = this ;
        cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_39593 (temp_34.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
        while (enumerator_39593.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_39593.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1040)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1040)) ;
          if (enumerator_39593.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1041)) ;
          }
          enumerator_39593.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1043)) ;
        {
        const GALGAS_forInstructionForGeneration temp_35 = this ;
        routine_generateInstructionList (ioArgument_ioInclusionSet, temp_35.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1044)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1053)) ;
        }
      }
    }
    const GALGAS_forInstructionForGeneration temp_36 = this ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_40181 (temp_36.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_40181.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_40181.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1057)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1057)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1057)) ;
      enumerator_40181.gotoNextObject () ;
    }
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      const GALGAS_forInstructionForGeneration temp_38 = this ;
      test_37 = GALGAS_bool (kIsNotEqual, temp_38.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1060)) COMMA_SOURCE_FILE ("instruction-for.galgas", 1060)) ;
        }
        const GALGAS_forInstructionForGeneration temp_39 = this ;
        const GALGAS_forInstructionForGeneration temp_40 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_39.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1061)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1061)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1061)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1061)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1061)).add_operation (extensionGetter_commaSourceFile (temp_40.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1062)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1062)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1062)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1061)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1064)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInFileInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInFileInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)) ;
  const GALGAS_grammarInFileInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_15375 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_15375.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_15375.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 345)) ;
    enumerator_15375.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInStringInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 354)) ;
  const GALGAS_grammarInStringInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_15831 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_15831.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_15831.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 356)) ;
    enumerator_15831.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInFileInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInFileInstructionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_16599 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 372)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_16599 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 373)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_16916 ;
  GALGAS_bool var_hasTranslateFeature_16958 ;
  const GALGAS_grammarInFileInstructionAST temp_1 = this ;
  GALGAS_bool joker_16922 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_16916, joker_16922, var_hasTranslateFeature_16958, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 375)) ;
  GALGAS_formalParameterSignature var_labelSignature_17080 ;
  const GALGAS_grammarInFileInstructionAST temp_2 = this ;
  var_grammarLabelMap_16916.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_17080, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 382)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_17546 ;
  {
  const GALGAS_grammarInFileInstructionAST temp_3 = this ;
  const GALGAS_grammarInFileInstructionAST temp_4 = this ;
  const GALGAS_grammarInFileInstructionAST temp_5 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_4.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 393)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 393)), var_labelSignature_17080, temp_5.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_17546, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 387)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_17857 ;
  const GALGAS_grammarInFileInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 404)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_17857, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 401)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_17857.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInFileInstructionAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_17857.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 414)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 413)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 414)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 412)) ;
    }
  }
  const GALGAS_grammarInFileInstructionAST temp_10 = this ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_18350 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.readProperty_mGrammarComponentName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 417)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 417)) ;
  GALGAS_stringlist var_assignementList_18463 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 418)) ;
  const GALGAS_grammarInFileInstructionAST temp_11 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_16958, var_syntaxDirectedTranslationResultVarName_18350, var_assignementList_18463, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)) ;
  const GALGAS_grammarInFileInstructionAST temp_12 = this ;
  const GALGAS_grammarInFileInstructionAST temp_13 = this ;
  const GALGAS_grammarInFileInstructionAST temp_14 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mGrammarComponentName ().readProperty_string (), temp_14.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_17857, var_actualParameterListForGeneration_17546, var_hasTranslateFeature_16958, var_assignementList_18463, var_syntaxDirectedTranslationResultVarName_18350  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 428))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 428)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInStringInstructionAST temp_0 = this ;
  GALGAS_lstring var_grammarUsefulnessName_19629 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 450)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_19629 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 451)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_19953 ;
  GALGAS_bool var_hasTranslateFeature_19995 ;
  const GALGAS_grammarInStringInstructionAST temp_1 = this ;
  GALGAS_bool joker_19959 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_19953, joker_19959, var_hasTranslateFeature_19995, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 453)) ;
  GALGAS_formalParameterSignature var_labelSignature_20117 ;
  const GALGAS_grammarInStringInstructionAST temp_2 = this ;
  var_grammarLabelMap_19953.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_20117, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 460)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_20583 ;
  {
  const GALGAS_grammarInStringInstructionAST temp_3 = this ;
  const GALGAS_grammarInStringInstructionAST temp_4 = this ;
  const GALGAS_grammarInStringInstructionAST temp_5 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_4.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 471)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 471)), var_labelSignature_20117, temp_5.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_20583, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 465)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_20894 ;
  const GALGAS_grammarInStringInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 482)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_20894, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 479)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_20894.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInStringInstructionAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_20894.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 492)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 491)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 492)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 490)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_21538 ;
  const GALGAS_grammarInStringInstructionAST temp_10 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_10.readProperty_mNameExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 498)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_nameExpression_21538, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 495)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_nameExpression_21538.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_grammarInStringInstructionAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfNameExpression (), GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_20894.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 508)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 508)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 506)) ;
    }
  }
  const GALGAS_grammarInStringInstructionAST temp_14 = this ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_21974 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.readProperty_mGrammarComponentName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 511)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 511)) ;
  GALGAS_stringlist var_assignementList_22087 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 512)) ;
  const GALGAS_grammarInStringInstructionAST temp_15 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_19995, var_syntaxDirectedTranslationResultVarName_21974, var_assignementList_22087, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 513)) ;
  const GALGAS_grammarInStringInstructionAST temp_16 = this ;
  const GALGAS_grammarInStringInstructionAST temp_17 = this ;
  const GALGAS_grammarInStringInstructionAST temp_18 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mGrammarComponentName ().readProperty_string (), temp_18.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_20894, var_nameExpression_21538, var_actualParameterListForGeneration_20583, var_hasTranslateFeature_19995, var_assignementList_22087, var_syntaxDirectedTranslationResultVarName_21974  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 522))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 522)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionWithSourceFileForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 559))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 559)) ;
  GALGAS_string var_sourceVar_24257 ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceFileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_24257, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 561)) ;
  GALGAS_stringlist var_parameterCppNameList_24310 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 569)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_24364 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 570)) ;
  GALGAS_stringlist var_inputVariableList_24407 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 571)) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_2 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_24450 (temp_2.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_24450.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_24759 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_24450.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_24364, var_inputVariableList_24407, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_24759, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 573)) ;
    var_parameterCppNameList_24310.addAssign_operation (var_parameterCppName_24759  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 582)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_24450.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_24759.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 584)) ;
      }
    }
    enumerator_24450.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionWithSourceFileForGeneration temp_6 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_6.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 588)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 588)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_7 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_9 = this ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = temp_9.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_11) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_12 = this ;
    temp_10 = temp_12.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 594)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_7.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 590)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 590)).add_operation (temp_8.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 591)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 591)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 592)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 593)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 593)).add_operation (var_sourceVar_24257, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 594)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 590)) ;
  cEnumerator_stringlist enumerator_25542 (var_parameterCppNameList_24310, kENUMERATION_UP) ;
  while (enumerator_25542.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_25542.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 597)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 597)) ;
    enumerator_25542.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_13 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 599)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 599)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 599)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 600)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 600)) ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_14 = this ;
  cEnumerator_stringlist enumerator_25800 (temp_14.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_25800.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_25800.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 602)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 602)) ;
    enumerator_25800.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionWithSourceExpressionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 630)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 630))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 630)) ;
  GALGAS_string var_sourceVar_27449 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_27449, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 632)) ;
  GALGAS_string var_nameVar_27667 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mNameStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_27667, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 640)) ;
  GALGAS_stringlist var_parameterCppNameList_27720 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 648)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_27774 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 649)) ;
  GALGAS_stringlist var_inputVariableList_27817 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 650)) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_27860 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_27860.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_28176 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_27860.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_27774, var_inputVariableList_27817, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_28176, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 652)) ;
    var_parameterCppNameList_27720.addAssign_operation (var_parameterCppName_28176  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 661)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_27860.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_28176.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 663)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 663)) ;
      }
    }
    enumerator_27860.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_7 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_7.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 667)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 667)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 667)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_9 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_10 = this ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_12) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_13 = this ;
    temp_11 = temp_13.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 672)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_8.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 669)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 669)).add_operation (temp_9.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 670)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 670)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 671)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 671)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 671)).add_operation (var_sourceVar_27449, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 672)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 673)).add_operation (var_nameVar_27667, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 674)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 669)) ;
  cEnumerator_stringlist enumerator_28978 (var_parameterCppNameList_27720, kENUMERATION_UP) ;
  while (enumerator_28978.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_28978.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 676)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 676)) ;
    enumerator_28978.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_14 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 678)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 678)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 678)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 679)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 679)) ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_15 = this ;
  cEnumerator_stringlist enumerator_29236 (temp_15.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_29236.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_29236.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 681)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 681)) ;
    enumerator_29236.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_6328 ;
  GALGAS_string var_targetVariableCppName_6364 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_incDecInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_6515 ;
        GALGAS_bool var_selfIsMutable_6543 ;
        GALGAS_bool var_mutableProperties_6585 ;
        const bool optionalResult6495 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_6515, var_selfIsMutable_6543, var_mutableProperties_6585) ;
        if (!optionalResult6495) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_6543.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 187)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_incDecInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 188)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_6734 = extensionGetter_definition (var_selfType_6515, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 190)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_6839 ;
          const GALGAS_incDecInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_6822 ; // Joker input parameter
          var_propertyMap_6734.method_searchKey (temp_6.readProperty_mReceiverName (), joker_6822, var_isConstant_6839, var_targetType_6328, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 191)) ;
          const GALGAS_incDecInstructionAST temp_7 = this ;
          var_targetVariableCppName_6364 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 193)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 194)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_6839.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_incDecInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 196)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_6585.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 198)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_incDecInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this constant"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 199)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_incDecInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 202)) ;
        var_targetType_6328.drop () ; // Release error dropped variable
        var_targetVariableCppName_6364.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_incDecInstructionAST temp_16 = this ;
    GALGAS_string joker_7656 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_6328, var_targetVariableCppName_6364, joker_7656, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 206)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_7727 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_7727.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_7780 = extensionGetter_definition (var_targetType_6328, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 215)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_7872 ;
    GALGAS_bool var_isConstant_7888 ;
    var_propertyMap_7780.method_searchKey (enumerator_7727.current_mValue (HERE), var_accessControl_7872, var_isConstant_7888, var_targetType_6328, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 216)) ;
    extensionMethod_checkSetAccess (var_accessControl_7872, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_7727.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 217)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_7888.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_7727.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 222)) ;
      }
    }
    enumerator_7727.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_6328, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 226)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 226)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 226)).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_incDecInstructionAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_6328, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 228)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 228)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 228)), fixItArray22  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 227)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_23 = this ;
  const GALGAS_incDecInstructionAST temp_24 = this ;
  const GALGAS_incDecInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_23.readProperty_mInstructionLocation (), var_targetVariableCppName_6364, var_targetType_6328, temp_24.readProperty_mStructAttributeList (), temp_25.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 231))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 231)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_9315 ;
  GALGAS_string var_targetVariableCppName_9418 ;
  {
  const GALGAS_incDecNoOVFInstructionAST temp_0 = this ;
  GALGAS_string joker_9420 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mReceiverName (), var_targetType_9315, var_targetVariableCppName_9418, joker_9420, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 252)) ;
  }
  const GALGAS_incDecNoOVFInstructionAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_9435 (temp_1.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_9435.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_9488 = extensionGetter_definition (var_targetType_9315, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 254)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_9580 ;
    GALGAS_bool var_isConstant_9596 ;
    var_propertyMap_9488.method_searchKey (enumerator_9435.current_mValue (HERE), var_accessControl_9580, var_isConstant_9596, var_targetType_9315, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 255)) ;
    extensionMethod_checkSetAccess (var_accessControl_9580, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_9435.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 256)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_isConstant_9596.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_9435.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 261)) ;
      }
    }
    enumerator_9435.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_targetType_9315, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 265)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 265)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 265)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_incDecNoOVFInstructionAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_9315, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 267)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 267)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 267)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 266)) ;
    }
  }
  const GALGAS_incDecNoOVFInstructionAST temp_7 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_8 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), var_targetVariableCppName_9418, var_targetType_9315, temp_8.readProperty_mStructAttributeList (), temp_9.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 270))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 270)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_11043 ;
    GALGAS_bool var_selfIsMutable_11071 ;
    GALGAS_bool var_unused_0_11093 ;
    const bool optionalResult11023 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_11043, var_selfIsMutable_11071, var_unused_0_11093) ;
    if (!optionalResult11023) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_11071.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 290)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 291)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_11043, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 294)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 294)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 294)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_11043, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 296)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 296)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 296)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 295)) ;
        }
      }
      const GALGAS_selfIncDecNoOVFInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecNoOVFInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_11043, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 303)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 299))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 299)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecNoOVFInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 307)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                       GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_12457 ;
    GALGAS_bool var_selfIsMutable_12485 ;
    GALGAS_bool var_unused_0_12507 ;
    const bool optionalResult12437 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_12457, var_selfIsMutable_12485, var_unused_0_12507) ;
    if (!optionalResult12437) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_12485.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 322)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 323)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_12457, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 326)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 326)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 326)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_12457, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)) ;
        }
      }
      const GALGAS_selfIncDecInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_12457, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 335)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 339)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionForGeneration::method_generateInstruction (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_incDecInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 375)) ;
  }
  const GALGAS_incDecInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_14751 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_14789 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_14789.hasCurrentObject ()) {
    var_receiverCppName_14751.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_14789.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 378)) ;
    enumerator_14789.gotoNextObject () ;
  }
  const GALGAS_incDecInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      const GALGAS_incDecInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14751.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 383)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 383)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 383)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 384)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 383)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 385)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 385)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      const GALGAS_incDecInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14751.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 387)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 387)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 387)).add_operation (extensionGetter_commaSourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 388)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 387)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 389)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 389)) ;
      }
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionForGeneration::method_generateInstruction (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_incDecNoOVFInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 403)) ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_15987 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecNoOVFInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_16025 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_16025.hasCurrentObject ()) {
    var_receiverCppName_15987.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_16025.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)) ;
    enumerator_16025.gotoNextObject () ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15987.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 411)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15987.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 413)) ;
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ifInstructionAST temp_0 = this ;
  cEnumerator_ifExpressionList enumerator_12882 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_12882.hasCurrentObject ()) {
    switch (enumerator_12882.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_13014 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_12882.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12954_exp = extractPtr_13014->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_12954_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 367)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_13160 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_12882.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_13037_exp = extractPtr_13160->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_13057_typeName = extractPtr_13160->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_13037_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 369)) ;
        {
        GALGAS_unifiedTypeMapEntry joker_13158 ; // Joker input parameter
        extensionSetter_makeEntry (ioArgument_ioTypeMap, extractedValue_13057_typeName, joker_13158, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 370)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_13602 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_12882.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_13208_receiverExpression = extractPtr_13602->mAssociatedValue0 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_13221_parameters = extractPtr_13602->mAssociatedValue2 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_13208_receiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 372)) ;
        cEnumerator_optionalMethodActualArgumentList enumerator_13319 (extractedValue_13221_parameters, kENUMERATION_UP) ;
        while (enumerator_13319.hasCurrentObject ()) {
          switch (enumerator_13319.current_mActualArgument (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgument::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_13473 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_13319.current_mActualArgument (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionAST extractedValue_13400_expression = extractPtr_13473->mAssociatedValue0 ;
              callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_13400_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 376)) ;
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
          enumerator_13319.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_12882.gotoNextObject () ;
  }
  const GALGAS_ifInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 384)) ;
  const GALGAS_ifInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 385)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifTestListForGeneration var_testListForGeneration_15127 = GALGAS_ifTestListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 423)) ;
  const GALGAS_ifInstructionAST temp_0 = this ;
  cEnumerator_ifExpressionList enumerator_15150 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_15150.hasCurrentObject ()) {
    switch (enumerator_15150.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_15789 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_15150.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_15222_exp = extractPtr_15789->mAssociatedValue0 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_15469 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_15222_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 430)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_15469, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 427)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_15632 ;
        {
        const GALGAS_ifInstructionAST temp_1 = this ;
        routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_1.readProperty_mEndOf_5F_if_5F_instruction (), var_analyzed_5F_if_5F_expression_15469, var_if_5F_expression_15632, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 436)) ;
        }
        var_testListForGeneration_15127.addAssign_operation (GALGAS_ifTestForGeneration::constructor_regular (var_if_5F_expression_15632  COMMA_SOURCE_FILE ("instruction-if.galgas", 442))  COMMA_SOURCE_FILE ("instruction-if.galgas", 442)) ;
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 443)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 444)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_19350 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_15150.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_15819_constantName = extractPtr_19350->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_15823_exp = extractPtr_19350->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_15843_typeName = extractPtr_19350->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_16086 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_15823_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 449)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzedExpression_16086, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 446)) ;
        GALGAS_unifiedTypeMapEntry var_castType_16143 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 456)) ;
        GALGAS_unifiedTypeMapEntry var_testType_16190 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 457)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = extensionGetter_definition (var_analyzedExpression_16086.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 459)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 459)).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, extractedValue_15843_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (extractedValue_15843_typeName.readProperty_location (), GALGAS_string ("on a class object, the 'as' clause is required"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 461)) ;
                var_castType_16143.drop () ; // Release error dropped variable
                var_testType_16190.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_3) {
              var_castType_16143 = extensionGetter_searchKey (ioArgument_ioTypeMap, extractedValue_15843_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 463)) ;
              var_testType_16190 = var_castType_16143 ;
              GALGAS_unifiedTypeMapEntry var_t_16677 = var_castType_16143 ;
              GALGAS_bool var_found_16714 = GALGAS_bool (kIsEqual, var_t_16677.objectCompare (var_analyzedExpression_16086.readProperty_mResultType ())) ;
              if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 468)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 468)).isValid ()) {
                uint32_t variant_16767 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 468)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 468)).uintValue () ;
                bool loop_16767 = true ;
                while (loop_16767) {
                  loop_16767 = var_found_16714.operator_not (SOURCE_FILE ("instruction-if.galgas", 469)).operator_and (extensionGetter_definition (var_t_16677, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 469)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 469)).operator_not (SOURCE_FILE ("instruction-if.galgas", 469)) COMMA_SOURCE_FILE ("instruction-if.galgas", 469)).isValid () ;
                  if (loop_16767) {
                    loop_16767 = var_found_16714.operator_not (SOURCE_FILE ("instruction-if.galgas", 469)).operator_and (extensionGetter_definition (var_t_16677, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 469)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 469)).operator_not (SOURCE_FILE ("instruction-if.galgas", 469)) COMMA_SOURCE_FILE ("instruction-if.galgas", 469)).boolValue () ;
                  }
                  if (loop_16767 && (0 == variant_16767)) {
                    loop_16767 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 468)) ;
                  }
                  if (loop_16767) {
                    variant_16767 -- ;
                    var_t_16677 = extensionGetter_definition (var_t_16677, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 470)).readProperty_mSuperType () ;
                    var_found_16714 = GALGAS_bool (kIsEqual, var_t_16677.objectCompare (var_analyzedExpression_16086.readProperty_mResultType ())) ;
                  }
                }
              }
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_found_16714.operator_not (SOURCE_FILE ("instruction-if.galgas", 473)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (extractedValue_15843_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extractedValue_15843_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 475)).add_operation (GALGAS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 475)).add_operation (extensionGetter_definition (var_analyzedExpression_16086.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 475)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 475)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 475)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 474)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_unifiedTypeMapEntry var_classType_17365 ;
            const bool optionalResult17335 = extensionGetter_definition (var_analyzedExpression_16086.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 479)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_classType_17365) ;
            if (!optionalResult17335) {
              test_7 = kBoolFalse ;
            }
            if (kBoolTrue == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsEqual, extractedValue_15843_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_castType_16143 = var_classType_17365 ;
                }
              }
              if (kBoolFalse == test_8) {
                var_castType_16143 = extensionGetter_searchKey (ioArgument_ioTypeMap, extractedValue_15843_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 483)) ;
              }
              var_testType_16190 = var_castType_16143 ;
              GALGAS_unifiedTypeMapEntry var_t_17581 = var_castType_16143 ;
              GALGAS_bool var_found_17616 = GALGAS_bool (kIsEqual, var_t_17581.objectCompare (var_analyzedExpression_16086.readProperty_mResultType ())) ;
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_found_17616.boolEnum () ;
                if (kBoolTrue == test_9) {
                  extensionGetter_definition (var_castType_16143, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 489)).readProperty_mTypeKindEnum ().method_weakReferenceType (var_testType_16190, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 489)) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_10 = kBoolTrue ;
                if (kBoolTrue == test_10) {
                  test_10 = GALGAS_bool (kIsEqual, var_t_17581.objectCompare (var_classType_17365)).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    var_found_17616 = GALGAS_bool (true) ;
                  }
                }
              }
              if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 493)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 493)).isValid ()) {
                uint32_t variant_17849 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 493)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 493)).uintValue () ;
                bool loop_17849 = true ;
                while (loop_17849) {
                  loop_17849 = var_found_17616.operator_not (SOURCE_FILE ("instruction-if.galgas", 494)).operator_and (extensionGetter_definition (var_t_17581, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 494)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 494)).operator_not (SOURCE_FILE ("instruction-if.galgas", 494)) COMMA_SOURCE_FILE ("instruction-if.galgas", 494)).isValid () ;
                  if (loop_17849) {
                    loop_17849 = var_found_17616.operator_not (SOURCE_FILE ("instruction-if.galgas", 494)).operator_and (extensionGetter_definition (var_t_17581, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 494)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 494)).operator_not (SOURCE_FILE ("instruction-if.galgas", 494)) COMMA_SOURCE_FILE ("instruction-if.galgas", 494)).boolValue () ;
                  }
                  if (loop_17849 && (0 == variant_17849)) {
                    loop_17849 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 493)) ;
                  }
                  if (loop_17849) {
                    variant_17849 -- ;
                    var_t_17581 = extensionGetter_definition (var_t_17581, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 495)).readProperty_mSuperType () ;
                    enumGalgasBool test_11 = kBoolTrue ;
                    if (kBoolTrue == test_11) {
                      test_11 = GALGAS_bool (kIsEqual, var_t_17581.objectCompare (var_analyzedExpression_16086.readProperty_mResultType ())).boolEnum () ;
                      if (kBoolTrue == test_11) {
                        var_found_17616 = GALGAS_bool (true) ;
                        extensionGetter_definition (var_castType_16143, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 498)).readProperty_mTypeKindEnum ().method_weakReferenceType (var_testType_16190, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 498)) ;
                      }
                    }
                    if (kBoolFalse == test_11) {
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = GALGAS_bool (kIsEqual, var_t_17581.objectCompare (var_classType_17365)).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          var_found_17616 = GALGAS_bool (true) ;
                        }
                      }
                    }
                  }
                }
              }
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = var_found_17616.operator_not (SOURCE_FILE ("instruction-if.galgas", 503)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_15843_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_castType_16143, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 505)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 505)).add_operation (GALGAS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 505)).add_operation (extensionGetter_definition (var_analyzedExpression_16086.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 505)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 505)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 505)), fixItArray14  COMMA_SOURCE_FILE ("instruction-if.galgas", 504)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_analyzedExpression_16086.readProperty_mLocation (), GALGAS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (extensionGetter_definition (var_analyzedExpression_16086.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 509)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 508)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 509)), fixItArray15  COMMA_SOURCE_FILE ("instruction-if.galgas", 508)) ;
          }
        }
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 511)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 512)) ;
        }
        GALGAS_string var_targetVariableCppName_18825 = GALGAS_string ("var_").add_operation (extractedValue_15819_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 513)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 513)).add_operation (extractedValue_15819_constantName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 514)).getter_string (SOURCE_FILE ("instruction-if.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 514)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (kIsNotEqual, extractedValue_15819_constantName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_15819_constantName, var_castType_16143, var_targetVariableCppName_18825, var_targetVariableCppName_18825, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 516)) ;
            }
          }
        }
        var_testListForGeneration_15127.addAssign_operation (GALGAS_ifTestForGeneration::constructor_letExp (var_targetVariableCppName_18825, var_analyzedExpression_16086, var_castType_16143, var_testType_16190  COMMA_SOURCE_FILE ("instruction-if.galgas", 523))  COMMA_SOURCE_FILE ("instruction-if.galgas", 523)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_19767 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_15150.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_19398_receiverExpression = extractPtr_19767->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_19417_optionalMethodName = extractPtr_19767->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_19428_parameters = extractPtr_19767->mAssociatedValue2 ;
        {
        routine_analyzeOptionalMethodCall (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, extractedValue_19398_receiverExpression, extractedValue_19417_optionalMethodName, extractedValue_19428_parameters, var_testListForGeneration_15127, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 530)) ;
        }
      }
      break ;
    }
    enumerator_15150.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_20169 ;
  {
  const GALGAS_ifInstructionAST temp_17 = this ;
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 549)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 550)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 551)), temp_17.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioVariableMap, var_then_5F_instructionList_20169, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 544)) ;
  }
  const GALGAS_ifInstructionAST temp_18 = this ;
  GALGAS_ifExpressionList var_expressions_20191 = temp_18.readProperty_mExpressions () ;
  {
  GALGAS_ifExpressionKind joker_20238 ; // Joker input parameter
  var_expressions_20191.setter_popLast (joker_20238, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 557)) ;
  }
  cEnumerator_ifExpressionList enumerator_20249 (var_expressions_20191, kENUMERATION_UP) ;
  while (enumerator_20249.hasCurrentObject ()) {
    {
    const GALGAS_ifInstructionAST temp_19 = this ;
    extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_19.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 559)) ;
    }
    {
    const GALGAS_ifInstructionAST temp_20 = this ;
    extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 560)) ;
    }
    enumerator_20249.gotoNextObject () ;
  }
  {
  const GALGAS_ifInstructionAST temp_21 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_21.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 562)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_20858 ;
  {
  const GALGAS_ifInstructionAST temp_22 = this ;
  const GALGAS_ifInstructionAST temp_23 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 569)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 570)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 571)), temp_22.readProperty_m_5F_else_5F_instructionList (), temp_23.readProperty_mEndOf_5F_if_5F_instruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_20858, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 564)) ;
  }
  {
  const GALGAS_ifInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 577)) ;
  }
  const GALGAS_ifInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (temp_25.readProperty_mEndOf_5F_then_5F_branch (), var_testListForGeneration_15127, var_then_5F_instructionList_20169, var_else_5F_instructionList_20858  COMMA_SOURCE_FILE ("instruction-if.galgas", 579))  COMMA_SOURCE_FILE ("instruction-if.galgas", 579)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOptionalMethodCall'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeOptionalMethodCall (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                        const GALGAS_semanticExpressionAST constinArgument_inReceiverExpression,
                                        const GALGAS_lstring constinArgument_inOptionalMethodName,
                                        const GALGAS_optionalMethodActualArgumentList constinArgument_inActualParameters,
                                        GALGAS_ifTestListForGeneration & ioArgument_ioTestListForGeneration,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_22494 ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 604)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_22494, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 601)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 610)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 611)) ;
  }
  GALGAS_unifiedTypeMapEntry var_receiverType_22645 = var_receiverExpression_22494.readProperty_mResultType () ;
  GALGAS_optionalMethodMap var_optionalMethodMap_22721 = extensionGetter_definition (var_receiverType_22645, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 614)).readProperty_mOptionalMethodMap () ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_22851 ;
  const cMapElement_optionalMethodMap * objectArray_22858 = (const cMapElement_optionalMethodMap *) var_optionalMethodMap_22721.readAccessForWithInstruction (constinArgument_inOptionalMethodName.readProperty_string ()) ;
  if (NULL != objectArray_22858) {
      macroValidSharedObject (objectArray_22858, cMapElement_optionalMethodMap) ;
    var_optionalMethodSignature_22851 = objectArray_22858->mProperty_mArgumentTypeList ;
  }else{
    GALGAS_string var_s_22975 = GALGAS_string ("this optional method is not defined; available optional methods:") ;
    cEnumerator_optionalMethodMap enumerator_23060 (var_optionalMethodMap_22721, kENUMERATION_UP) ;
    while (enumerator_23060.hasCurrentObject ()) {
      var_s_22975.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_23060.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 622)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 622)) ;
      enumerator_23060.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), var_s_22975, fixItArray0  COMMA_SOURCE_FILE ("instruction-if.galgas", 624)) ;
    var_optionalMethodSignature_22851.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 627)).objectCompare (var_optionalMethodSignature_22851.getter_length (SOURCE_FILE ("instruction-if.galgas", 627)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 629)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 629)).add_operation (extensionGetter_definition (var_receiverType_22645, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 629)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 629)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 629)).add_operation (var_optionalMethodSignature_22851.getter_length (SOURCE_FILE ("instruction-if.galgas", 630)).getter_string (SOURCE_FILE ("instruction-if.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 629)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 630)).add_operation (constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 631)).getter_string (SOURCE_FILE ("instruction-if.galgas", 630)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 630)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 631)), fixItArray2  COMMA_SOURCE_FILE ("instruction-if.galgas", 628)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_23707 = GALGAS_optionalMethodActualArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 633)) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_23752 (constinArgument_inActualParameters, kENUMERATION_UP) ;
    cEnumerator_optionalMethodSignature enumerator_23815 (var_optionalMethodSignature_22851, kENUMERATION_UP) ;
    while (enumerator_23752.hasCurrentObject () && enumerator_23815.hasCurrentObject ()) {
      switch (enumerator_23752.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_24650 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_23752.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_23911_expression = extractPtr_24650->mAssociatedValue0 ;
          const GALGAS_location extractedValue_23920_location = extractPtr_24650->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_24205 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_23911_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_23815.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_24205, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 638)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsNotEqual, enumerator_23815.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23752.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_string temp_4 ;
              const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_23815.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                temp_4 = enumerator_23815.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 648)) ;
              }else if (kBoolFalse == test_5) {
                temp_4 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_24302 = GALGAS_string ("!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 648)) ;
              TC_Array <C_FixItDescription> fixItArray6 ;
              appendFixItActions (fixItArray6, kFixItReplace, var_s_24302) ;
              inCompiler->emitSemanticError (enumerator_23752.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_24302, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 649)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 649)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 649)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_23815.current_mFormalArgumentType (HERE), var_exp_24205.readProperty_mResultType (), extractedValue_23920_location, var_exp_24205, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 651)) ;
          }
          var_actualParameterList_23707.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualOutput (var_exp_24205  COMMA_SOURCE_FILE ("instruction-if.galgas", 652))  COMMA_SOURCE_FILE ("instruction-if.galgas", 652)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_25790 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_23752.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_24701_actualTypeName = extractPtr_25790->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_24723_constantName = extractPtr_25790->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, extractedValue_24701_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_8.boolEnum ()) {
              test_8 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_23815.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 654)).readProperty_mTypeName ().readProperty_string ().objectCompare (extractedValue_24701_actualTypeName.readProperty_string ())) ;
            }
            test_7 = test_8.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_23815.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 657)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 657))) ;
              inCompiler->emitSemanticError (extractedValue_24701_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_23815.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 656)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 656)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 656)), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 655)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_25094 = GALGAS_string ("var_").add_operation (extractedValue_24723_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 659)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 659)).add_operation (extractedValue_24723_constantName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 660)).getter_string (SOURCE_FILE ("instruction-if.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 660)) ;
          {
          extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_24723_constantName, enumerator_23815.current_mFormalArgumentType (HERE), var_targetVariableCppName_25094, var_targetVariableCppName_25094, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)) ;
          }
          var_actualParameterList_23707.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualLetInput (extensionGetter_definition (enumerator_23815.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 667)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_25094  COMMA_SOURCE_FILE ("instruction-if.galgas", 667))  COMMA_SOURCE_FILE ("instruction-if.galgas", 667)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, enumerator_23815.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23752.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string temp_11 ;
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_23815.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                temp_11 = enumerator_23815.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)) ;
              }else if (kBoolFalse == test_12) {
                temp_11 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_25604 = GALGAS_string ("\?").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)) ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, kFixItReplace, var_s_25604) ;
              inCompiler->emitSemanticError (enumerator_23752.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_25604, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 670)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 670)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 670)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_26966 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_23752.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_25841_actualTypeName = extractPtr_26966->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_25863_variableName = extractPtr_26966->mAssociatedValue1 ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, extractedValue_25841_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_23815.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 673)).readProperty_mTypeName ().readProperty_string ().objectCompare (extractedValue_25841_actualTypeName.readProperty_string ())) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_23815.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 676)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 676))) ;
              inCompiler->emitSemanticError (extractedValue_25841_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_23815.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 675)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 675)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 675)), fixItArray16  COMMA_SOURCE_FILE ("instruction-if.galgas", 674)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_26235 = GALGAS_string ("var_").add_operation (extractedValue_25863_variableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 678)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 678)).add_operation (extractedValue_25863_variableName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).getter_string (SOURCE_FILE ("instruction-if.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)) ;
          {
          extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_25863_variableName, GALGAS_bool (true), enumerator_23815.current_mFormalArgumentType (HERE), var_targetVariableCppName_26235, var_targetVariableCppName_26235, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 680)) ;
          }
          var_actualParameterList_23707.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (extensionGetter_definition (enumerator_23815.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 687)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_26235  COMMA_SOURCE_FILE ("instruction-if.galgas", 687))  COMMA_SOURCE_FILE ("instruction-if.galgas", 687)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsNotEqual, enumerator_23815.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23752.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_string temp_18 ;
              const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_23815.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                temp_18 = enumerator_23815.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 689)) ;
              }else if (kBoolFalse == test_19) {
                temp_18 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_26780 = GALGAS_string ("\?").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 689)) ;
              TC_Array <C_FixItDescription> fixItArray20 ;
              appendFixItActions (fixItArray20, kFixItReplace, var_s_26780) ;
              inCompiler->emitSemanticError (enumerator_23752.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_26780, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 690)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 690)), fixItArray20  COMMA_SOURCE_FILE ("instruction-if.galgas", 690)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_27545 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_23752.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_27009_checkSelector = extractPtr_27545->mAssociatedValue0 ;
          const GALGAS_location extractedValue_27018_location = extractPtr_27545->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_27022_idx = extractPtr_27545->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_27059 = GALGAS_string ("var_unused_").add_operation (extractedValue_27022_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 693)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 693)).add_operation (extractedValue_27018_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 693)).getter_string (SOURCE_FILE ("instruction-if.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 693)) ;
          var_actualParameterList_23707.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (extensionGetter_definition (enumerator_23815.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 694)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_27059  COMMA_SOURCE_FILE ("instruction-if.galgas", 694))  COMMA_SOURCE_FILE ("instruction-if.galgas", 694)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = extractedValue_27009_checkSelector ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = GALGAS_bool (kIsNotEqual, enumerator_23815.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23752.current_mSelector (HERE).readProperty_string ())) ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, enumerator_23815.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = enumerator_23815.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 696)) ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_27359 = GALGAS_string ("\?").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 696)) ;
              TC_Array <C_FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, kFixItReplace, var_s_27359) ;
              inCompiler->emitSemanticError (enumerator_23752.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_27359, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 697)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 697)), fixItArray25  COMMA_SOURCE_FILE ("instruction-if.galgas", 697)) ;
            }
          }
        }
        break ;
      }
      enumerator_23752.gotoNextObject () ;
      enumerator_23815.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::constructor_optionalMethodCall (var_receiverExpression_22494, constinArgument_inOptionalMethodName, var_actualParameterList_23707  COMMA_SOURCE_FILE ("instruction-if.galgas", 701))  COMMA_SOURCE_FILE ("instruction-if.galgas", 701)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_testVar_30638 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 781)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 781)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 782)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_30638, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 783)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 783)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 783)) ;
  const GALGAS_ifInstructionForGeneration temp_0 = this ;
  cEnumerator_ifTestListForGeneration enumerator_30804 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_30804.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_30638, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 785)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 785)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 785)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 786)) ;
    }
    switch (enumerator_30804.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_31241 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_30804.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_30978_exp = extractPtr_31241->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_31158 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_30978_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_31158, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 789)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_30638.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 796)).add_operation (var_cppVarName_31158, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 796)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 796)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_31970 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_30804.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_31275_targetVarCppName = extractPtr_31970->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_31279_exp = extractPtr_31970->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_31290_targetType = extractPtr_31970->mAssociatedValue2 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_31299_testType = extractPtr_31970->mAssociatedValue3 ;
        GALGAS_string var_targetTypeName_31327 = extensionGetter_identifierRepresentation (extractedValue_31290_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 798)) ;
        GALGAS_string var_testTypeName_31390 = extensionGetter_identifierRepresentation (extractedValue_31299_testType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 799)) ;
        GALGAS_string var_cppVarName_31605 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_31279_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_31605, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 800)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_targetTypeName_31327, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 807)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 807)).add_operation (extractedValue_31275_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 807)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 807)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (dynamic_cast <const cPtr_").add_operation (var_testTypeName_31390, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 808)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 808)).add_operation (var_cppVarName_31605, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 808)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 808)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 808)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL == ").add_operation (extractedValue_31275_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 809)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 809)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 809)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_30638, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 810)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 810)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 810)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 811)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * extractPtr_33701 = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) (enumerator_30804.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_32018_receiverExpression = extractPtr_33701->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_32037_optionalMethodName = extractPtr_33701->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentListForGeneration extractedValue_32048_parameters = extractPtr_33701->mAssociatedValue2 ;
        GALGAS_string var_cppVarName_32243 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_32018_receiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_32243, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 813)) ;
        GALGAS_stringlist var_actualParameterNameList_32297 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 820)) ;
        cEnumerator_optionalMethodActualArgumentListForGeneration enumerator_32323 (extractedValue_32048_parameters, kENUMERATION_UP) ;
        while (enumerator_32323.hasCurrentObject ()) {
          switch (enumerator_32323.current_mParameter (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgumentForGeneration::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * extractPtr_32686 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) (enumerator_32323.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionForGeneration extractedValue_32404_expression = extractPtr_32686->mAssociatedValue0 ;
              GALGAS_string var_argumentCppName_32620 ;
              callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_32404_expression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_32620, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 824)) ;
              var_actualParameterNameList_32297.addAssign_operation (var_argumentCppName_32620  COMMA_SOURCE_FILE ("instruction-if.galgas", 831)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualLetInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * extractPtr_32898 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) (enumerator_32323.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_32724_typeName = extractPtr_32898->mAssociatedValue0 ;
              const GALGAS_string extractedValue_32737_constantName = extractPtr_32898->mAssociatedValue1 ;
              var_actualParameterNameList_32297.addAssign_operation (extractedValue_32737_constantName  COMMA_SOURCE_FILE ("instruction-if.galgas", 833)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_32724_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 834)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 834)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 834)).add_operation (extractedValue_32737_constantName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 834)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 834)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 834)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualVarInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * extractPtr_33110 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) (enumerator_32323.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_32936_typeName = extractPtr_33110->mAssociatedValue0 ;
              const GALGAS_string extractedValue_32949_variableName = extractPtr_33110->mAssociatedValue1 ;
              var_actualParameterNameList_32297.addAssign_operation (extractedValue_32949_variableName  COMMA_SOURCE_FILE ("instruction-if.galgas", 836)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_32936_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 837)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 837)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 837)).add_operation (extractedValue_32949_variableName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 837)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 837)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 837)) ;
            }
            break ;
          }
          enumerator_32323.gotoNextObject () ;
        }
        GALGAS_string var_boolResultName_33157 = GALGAS_string ("optionalResult").add_operation (extractedValue_32037_optionalMethodName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 840)).getter_string (SOURCE_FILE ("instruction-if.galgas", 840)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 840)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolResultName_33157, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 841)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 841)).add_operation (var_cppVarName_32243, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 841)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 841)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".optional_").add_operation (extractedValue_32037_optionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 842)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 842)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 842)) ;
        cEnumerator_stringlist enumerator_33381 (var_actualParameterNameList_32297, kENUMERATION_UP) ;
        while (enumerator_33381.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_33381.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 845)) ;
          if (enumerator_33381.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 847)) ;
          }
          enumerator_33381.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 849)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (!").add_operation (var_boolResultName_33157, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 850)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 850)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 850)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_30638, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 851)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 851)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 851)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 852)) ;
      }
      break ;
    }
    enumerator_30804.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_30638, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 856)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 856)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 856)) ;
  {
  const GALGAS_ifInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 857)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 865)) ;
  const GALGAS_ifInstructionForGeneration temp_2 = this ;
  cEnumerator_ifTestListForGeneration enumerator_34048 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_34048.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 867)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 868)) ;
    enumerator_34048.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ifInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_m_5F_else_5F_instructionList ().getter_length (SOURCE_FILE ("instruction-if.galgas", 871)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_30638, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 872)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 872)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 872)) ;
      {
      const GALGAS_ifInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 873)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 881)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 143)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_5674 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mOptionalTypeName (), joker_5674, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)) ;
      }
    }
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 153)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_6636 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mConstantTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 167)) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_6712 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 168)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 168)).add_operation (temp_2.readProperty_mConstantName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 169)).getter_string (SOURCE_FILE ("instruction-let.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 169)) ;
  {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mConstantName (), var_targetType_6636, var_targetVariableCppName_6712, var_targetVariableCppName_6712, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 170)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (var_targetType_6636, var_targetVariableCppName_6712  COMMA_SOURCE_FILE ("instruction-let.galgas", 177))  COMMA_SOURCE_FILE ("instruction-let.galgas", 177)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_8081 ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-let.galgas", 196)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8081, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 193)) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_8140 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 203)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 203)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 204)).getter_string (SOURCE_FILE ("instruction-let.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 204)) ;
  {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_expression_8081.readProperty_mResultType (), var_targetVariableCppName_8140, var_targetVariableCppName_8140, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 205)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_8081.readProperty_mResultType (), GALGAS_bool (true), var_targetVariableCppName_8140, var_expression_8081  COMMA_SOURCE_FILE ("instruction-let.galgas", 212))  COMMA_SOURCE_FILE ("instruction-let.galgas", 212)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_9337 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 228)) ;
  GALGAS_semanticExpressionForGeneration var_expression_9669 ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_9337, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_9669, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 230)) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  GALGAS_string var_targetVariableCppName_9728 = GALGAS_string ("var_").add_operation (temp_2.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 240)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 240)).add_operation (temp_3.readProperty_mVariableName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 241)).getter_string (SOURCE_FILE ("instruction-let.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 241)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsConstant ().boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = this ;
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mVariableName (), var_targetType_9337, var_targetVariableCppName_9728, var_targetVariableCppName_9728, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 243)) ;
      }
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = this ;
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_7.readProperty_mVariableName (), GALGAS_bool (true), var_targetType_9337, var_targetVariableCppName_9728, var_targetVariableCppName_9728, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 250)) ;
    }
  }
  {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_9337, var_expression_9669.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_9669, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 259)) ;
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType_9337, temp_9.readProperty_mIsConstant (), var_targetVariableCppName_9728, var_expression_9669  COMMA_SOURCE_FILE ("instruction-let.galgas", 261))  COMMA_SOURCE_FILE ("instruction-let.galgas", 261)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 296)) ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 297)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 297)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 297)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 297)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithSourceExpressionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 308)) ;
  GALGAS_string var_sourceVar_13017 ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13017, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)) ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)).add_operation (temp_3.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)).add_operation (var_sourceVar_13017, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 316)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_logInstructionAST temp_0 = this ;
  cEnumerator_logListAST enumerator_3622 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_3622.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3622.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 107)) ;
    enumerator_3622.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_logInstructionAST temp_0 = this ;
  cEnumerator_logListAST enumerator_4375 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_4375.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_4676 ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_4375.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-log.galgas", 127)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4676, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 124)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_4375.current_mLogMessage (HERE), var_expression_4676  COMMA_SOURCE_FILE ("instruction-log.galgas", 134))  COMMA_SOURCE_FILE ("instruction-log.galgas", 134)) ;
    enumerator_4375.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_logInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_logVar_5828 ;
  const GALGAS_logInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mLogExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_5828, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 159)) ;
  const GALGAS_logInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_5828.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 166)).add_operation (temp_1.readProperty_mLogMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-log.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 166)) ;
  const GALGAS_logInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLogMessage ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 167)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 167)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 126)) ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 127)) ;
  const GALGAS_loopInstructionWithVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 128)) ;
  const GALGAS_loopInstructionWithVariantAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 129)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_variantExpression_5921 ;
  const GALGAS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 147)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variantExpression_5921, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 144)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_variantExpression_5921.readProperty_mResultType (), var_variantExpression_5921.readProperty_mLocation (), var_variantExpression_5921, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 154)) ;
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_6780 ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 168)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_6780, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 165)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_loopExpression_6780.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_loopInstructionWithVariantAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)).add_operation (extensionGetter_definition (var_loopExpression_6780.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)), fixItArray4  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 176)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 180)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_7674 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_5 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_6 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 187)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 188)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 189)), temp_5.readProperty_mFirstInstructions (), temp_6.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_7674, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 182)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_8089 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_7 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_8 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 201)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 202)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 203)), temp_7.readProperty_mSecondInstructions (), temp_8.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_8089, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 196)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantAST temp_9 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_9.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 210)) ;
  }
  const GALGAS_loopInstructionWithVariantAST temp_10 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithVariantForGeneration::constructor_new (temp_10.readProperty_mInstructionLocation (), var_variantExpression_5921, var_first_5F_instructionList_7674, var_loopExpression_6780, var_second_5F_instructionList_8089  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 212))  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 212)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_variantCppVarName_9679 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_9679, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 242)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_9679, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 249)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 249)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_1 = this ;
  GALGAS_string var_variantVar_9817 = GALGAS_string ("variant_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_9817, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)).add_operation (var_variantCppVarName_9679, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)) ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_2 = this ;
  GALGAS_string var_loopVar_10001 = GALGAS_string ("loop_").add_operation (temp_2.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_10001, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).add_operation (var_loopVar_10001, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_3 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)) ;
  }
  GALGAS_string var_loopExpressionVar_10581 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_4 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_4.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_10581, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 265)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_10001.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (var_loopExpressionVar_10581, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (var_loopVar_10001, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (var_loopVar_10001, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (var_loopExpressionVar_10581, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 270)) COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 270)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_10001, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (var_variantVar_9817, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (GALGAS_string (")) {\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (var_loopVar_10001, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (GALGAS_string (" = false ;\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (extensionGetter_sourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GALGAS_string (") ;\n}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (var_loopVar_10001, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 275)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_9817, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)) ;
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_6 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_6.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 285)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 286)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 287)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 288)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 289)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 108)) ;
  const GALGAS_loopInstructionWithoutVariantAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 109)) ;
  const GALGAS_loopInstructionWithoutVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 110)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_loopExpression_5339 ;
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-loop-without-variant.galgas", 128)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_5339, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 125)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_loopExpression_5339.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_loopInstructionWithoutVariantAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 137)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 137)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 137)).add_operation (extensionGetter_definition (var_loopExpression_5339.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 137)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 137)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 137)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 136)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 140)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_6233 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_4 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_5 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 147)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 148)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 149)), temp_4.readProperty_mFirstInstructions (), temp_5.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_6233, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_6648 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_6 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_7 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 161)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 162)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 163)), temp_6.readProperty_mSecondInstructions (), temp_7.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_6648, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 156)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 170)) ;
  }
  const GALGAS_loopInstructionWithoutVariantAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithoutVariantForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_first_5F_instructionList_6233, var_loopExpression_5339, var_second_5F_instructionList_6648  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 172))  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 172)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_0 = this ;
  GALGAS_string var_loopVar_8281 = GALGAS_string ("loop_").add_operation (temp_0.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 198)).getter_string (SOURCE_FILE ("instruction-loop-without-variant.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 198)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_8281, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 199)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 199)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_8281, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 200)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 200)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 201)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_1 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 202)) ;
  }
  GALGAS_string var_loopExpressionVar_8887 ;
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_8887, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 210)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_8281.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)).add_operation (var_loopExpressionVar_8887, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)).add_operation (var_loopVar_8281, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)).add_operation (var_loopVar_8281, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 219)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 219)).add_operation (var_loopExpressionVar_8887, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 219)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 219)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_8281, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 221)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 221)) ;
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_3 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 230)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 231)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 232)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 54)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_3354 ;
  const GALGAS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-message.galgas", 72)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3354, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 69)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_3354.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_messageInstructionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("the expression has the '@").add_operation (extensionGetter_definition (var_expression_3354.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 81)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 81)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 81)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 80)) ;
    }
  }
  const GALGAS_messageInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression_3354, temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-message.galgas", 84))  COMMA_SOURCE_FILE ("instruction-message.galgas", 84)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_messageInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_messageCppVarName_4872 ;
  const GALGAS_messageInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_4872, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 108)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 116)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 116)).add_operation (var_messageCppVarName_4872, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 116)) ;
  const GALGAS_messageInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 117)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 117)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 118)) COMMA_SOURCE_FILE ("instruction-message.galgas", 118)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)) ;
  const GALGAS_methodCallInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_3462 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_3462.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3462.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 88)) ;
    enumerator_3462.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_4495 ;
  const GALGAS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 108)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_4495, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 105)) ;
  GALGAS_methodKind var_kind_4642 ;
  GALGAS_formalParameterSignature var_routineSignature_4668 ;
  GALGAS_bool var_hasCompilerArgument_4704 ;
  GALGAS_string var_errorMessage_4733 ;
  const GALGAS_methodCallInstructionAST temp_1 = this ;
  GALGAS_location joker_4674 ; // Joker input parameter
  GALGAS_methodQualifier joker_4710 ; // Joker input parameter
  extensionGetter_definition (var_receiverExpression_4495.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 115)).readProperty_mInstanceMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_kind_4642, var_routineSignature_4668, joker_4674, var_hasCompilerArgument_4704, joker_4710, var_errorMessage_4733, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 115)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_errorMessage_4733.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_methodCallInstructionAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mMethodName ().readProperty_location (), var_errorMessage_4733, fixItArray4  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 125)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_5276 ;
  {
  const GALGAS_methodCallInstructionAST temp_5 = this ;
  const GALGAS_methodCallInstructionAST temp_6 = this ;
  const GALGAS_methodCallInstructionAST temp_7 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_6.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 134)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 134)), var_routineSignature_4668, temp_7.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5276, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 128)) ;
  }
  GALGAS_unifiedTypeMapEntry var_baseType_5342 = var_receiverExpression_4495.readProperty_mResultType () ;
  GALGAS_bool var_searching_5391 = GALGAS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 144)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 145)).isValid ()) {
        uint32_t variant_5439 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 145)).uintValue () ;
        bool loop_5439 = true ;
        while (loop_5439) {
          loop_5439 = var_searching_5391.isValid () ;
          if (loop_5439) {
            loop_5439 = var_searching_5391.boolValue () ;
          }
          if (loop_5439 && (0 == variant_5439)) {
            loop_5439 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 145)) ;
          }
          if (loop_5439) {
            variant_5439 -- ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = extensionGetter_definition (var_baseType_5342, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 146)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 146)).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_searching_5391 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                const GALGAS_methodCallInstructionAST temp_11 = this ;
                test_10 = extensionGetter_definition (extensionGetter_definition (var_baseType_5342, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 149)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 149)).readProperty_mInstanceMethodMap ().getter_hasKey (temp_11.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-method-call.galgas", 149)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_baseType_5342 = extensionGetter_definition (var_baseType_5342, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 150)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_10) {
                var_searching_5391 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_methodCallInstructionAST temp_12 = this ;
  const GALGAS_methodCallInstructionAST temp_13 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (temp_12.readProperty_mInstructionLocation (), var_receiverExpression_4495.readProperty_mResultType (), var_receiverExpression_4495, temp_13.readProperty_mMethodName ().readProperty_string (), var_kind_4642, var_actualParameterListForGeneration_5276, var_hasCompilerArgument_4704, var_baseType_5342  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 158))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 158)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverCppName_7446 ;
  const GALGAS_methodCallInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_7446, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_7446 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 195)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_7539 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 197)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_7591 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 198)) ;
  GALGAS_stringlist var_inputVariableList_7632 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 199)) ;
  const GALGAS_methodCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_7673 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_7673.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_7916 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_7673.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_7591, var_inputVariableList_7632, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_7916, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 201)) ;
    var_parameterCppNameList_7539.addAssign_operation (var_parameterCppName_7916  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 202)) ;
    enumerator_7673.gotoNextObject () ;
  }
  const GALGAS_methodCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_methodCallInstructionForGeneration temp_3 = this ;
      const GALGAS_methodCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_3.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 207)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 207)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 207)).add_operation (temp_4.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 207))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 207)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 208)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 208)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_methodCallInstructionForGeneration temp_7 = this ;
          const GALGAS_methodCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (temp_7.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 209)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 209)).add_operation (extensionGetter_identifierRepresentation (temp_8.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 210)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 210)).add_operation (var_receiverCppName_7446, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 211)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 209)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_9 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (temp_9.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 213)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 213)).add_operation (var_receiverCppName_7446, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 214)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 213)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_methodCallInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_7446.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 217)).add_operation (temp_10.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 217)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 217)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_8845 (var_parameterCppNameList_7539, kENUMERATION_UP) ;
  while (enumerator_8845.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_8845.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 220)) ;
    if (enumerator_8845.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 221)) ;
    }
    enumerator_8845.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_parameterCppNameList_7539.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 223)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_methodCallInstructionForGeneration temp_13 = this ;
        test_12 = temp_13.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_11) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      const GALGAS_methodCallInstructionForGeneration temp_15 = this ;
      test_14 = temp_15.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (kBoolTrue == test_14) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 232)) ;
      }
    }
    if (kBoolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)) ;
    }
  }
  const GALGAS_methodCallInstructionForGeneration temp_16 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 236)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 236)) ;
  const GALGAS_methodCallInstructionForGeneration temp_17 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_9540 (temp_17.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_9540.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_9540.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 239)) ;
    enumerator_9540.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_2483 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_2483.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_2483.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 60)) ;
    enumerator_2483.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procCallInstructionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3240 = function_procedureNameForUsefulEntitiesGraph (temp_0.readProperty_mRoutineName (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3240 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 77)) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_3545 ;
  GALGAS_bool var_isInternal_3572 ;
  const GALGAS_procCallInstructionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap ().method_searchKey (temp_1.readProperty_mRoutineName (), var_routineSignature_3545, var_isInternal_3572, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 79)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_3572.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_procCallInstructionAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_3650 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap ().getter_locationForKey (temp_3.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 86)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_procCallInstructionAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mRoutineName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)).objectCompare (var_procDeclarationLocation_3650.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_procCallInstructionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_3650.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)) ;
        }
      }
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4397 ;
  {
  const GALGAS_procCallInstructionAST temp_8 = this ;
  const GALGAS_procCallInstructionAST temp_9 = this ;
  const GALGAS_procCallInstructionAST temp_10 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_8.readProperty_mRoutineName (), GALGAS_string ("'").add_operation (temp_9.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 98)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 98)), var_routineSignature_3545, temp_10.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4397, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 92)) ;
  }
  const GALGAS_procCallInstructionAST temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (temp_11.readProperty_mRoutineName (), var_actualParameterListForGeneration_4397  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 129))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 129)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)) ;
  GALGAS_stringlist var_parameterCppNameList_5564 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 132)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5616 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 133)) ;
  GALGAS_stringlist var_inputVariableList_5657 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 134)) ;
  const GALGAS_procCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_5685 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_5685.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5969 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_5685.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5616, var_inputVariableList_5657, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5969, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 136)) ;
    var_parameterCppNameList_5564.addAssign_operation (var_parameterCppName_5969  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145)) ;
    enumerator_5685.gotoNextObject () ;
  }
  const GALGAS_procCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (temp_2.readProperty_mRoutineName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)) ;
  cEnumerator_stringlist enumerator_6160 (var_parameterCppNameList_5564, kENUMERATION_UP) ;
  while (enumerator_6160.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6160.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 150)) ;
    enumerator_6160.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)) ;
  }
  const GALGAS_procCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mRoutineName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 154)) ;
  const GALGAS_procCallInstructionForGeneration temp_4 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_6481 (temp_4.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_6481.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_6481.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 157)) ;
    enumerator_6481.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 61)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_3125 ;
    GALGAS_bool var_selfIsMutable_3153 ;
    GALGAS_bool var_unused_0_3175 ;
    const bool optionalResult3105 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_3125, var_selfIsMutable_3153, var_unused_0_3175) ;
    if (!optionalResult3105) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_3153.operator_not (SOURCE_FILE ("instruction-self-assignment.galgas", 77)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfAssignmentInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 78)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_3596 ;
      const GALGAS_selfAssignmentInstructionAST temp_4 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_3125, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3596, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 81)) ;
      {
      const GALGAS_selfAssignmentInstructionAST temp_5 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_3125, var_expression_3596.readProperty_mResultType (), temp_5.readProperty_mInstructionLocation (), var_expression_3596, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 91)) ;
      }
      const GALGAS_selfAssignmentInstructionAST temp_6 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_selfType_3125, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 97)).readProperty_string (), var_expression_3596, temp_6.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 93))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 93)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfAssignmentInstructionAST temp_7 = this ;
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 102)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 186)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 192)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfMulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 198)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfDivEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 204)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfPlusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 210)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_9108 ;
    GALGAS_bool var_selfIsMutable_9142 ;
    GALGAS_bool var_unused_0_9170 ;
    const bool optionalResult9082 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_9108, var_selfIsMutable_9142, var_unused_0_9170) ;
    if (!optionalResult9082) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_9142.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 231)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 232)) ;
        }
      }
      GALGAS_functionSignature var_addAssignOperatorArguments_9689 = extensionGetter_definition (var_selfType_9108, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 242)).readProperty_mAddAssignOperatorArguments () ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_9689.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 243)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_9108, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 245)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 245)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 245)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 244)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 247)).objectCompare (var_addAssignOperatorArguments_9689.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 247)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const GALGAS_selfPlusEqualElementsInstructionAST temp_9 = this ;
            const GALGAS_selfPlusEqualElementsInstructionAST temp_10 = this ;
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_selfType_9108, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 249)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 249)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 249)).add_operation (var_addAssignOperatorArguments_9689.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 250)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 249)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 250)).add_operation (temp_10.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 251)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 250)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 251)), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 248)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_10481 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 253)) ;
          const GALGAS_selfPlusEqualElementsInstructionAST temp_12 = this ;
          cEnumerator_actualOutputExpressionList enumerator_10587 (temp_12.readProperty_mExpressions (), kENUMERATION_UP) ;
          cEnumerator_functionSignature enumerator_10649 (var_addAssignOperatorArguments_9689, kENUMERATION_UP) ;
          while (enumerator_10587.hasCurrentObject () && enumerator_10649.hasCurrentObject ()) {
            GALGAS_semanticExpressionForGeneration var_expression_10982 ;
            callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10587.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10649.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10982, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 255)) ;
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsNotEqual, enumerator_10649.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_10587.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                GALGAS_string temp_14 ;
                const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_10649.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_15) {
                  temp_14 = enumerator_10649.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 265)) ;
                }else if (kBoolFalse == test_15) {
                  temp_14 = GALGAS_string::makeEmptyString () ;
                }
                GALGAS_string var_s_11081 = GALGAS_string ("!").add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 265)) ;
                TC_Array <C_FixItDescription> fixItArray16 ;
                appendFixItActions (fixItArray16, kFixItReplace, var_s_11081) ;
                inCompiler->emitSemanticError (enumerator_10587.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11081, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 266)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 266)), fixItArray16  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 266)) ;
              }
            }
            {
            routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_10649.current_mFormalArgumentType (HERE), var_expression_10982.readProperty_mResultType (), enumerator_10587.current_mEndOfExpressionLocation (HERE), var_expression_10982, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 268)) ;
            }
            var_effectiveParameterList_10481.addAssign_operation (var_expression_10982  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 269)) ;
            enumerator_10587.gotoNextObject () ;
            enumerator_10649.gotoNextObject () ;
          }
          const GALGAS_selfPlusEqualElementsInstructionAST temp_17 = this ;
          ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_9108, GALGAS_string::makeEmptyString (), temp_17.readProperty_mInstructionLocation (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 277)), var_effectiveParameterList_10481  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 272))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 272)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualElementsInstructionAST temp_18 = this ;
    TC_Array <C_FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 282)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_12549 ;
    GALGAS_bool var_selfIsMutable_12583 ;
    GALGAS_bool var_unused_0_12611 ;
    const bool optionalResult12523 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_12549, var_selfIsMutable_12583, var_unused_0_12611) ;
    if (!optionalResult12523) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_12583.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 302)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 303)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_12549, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 313)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 313)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 313)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_12549, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 315)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 315)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 315)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 314)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_13673 ;
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_12549, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_13673, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 318)) ;
      {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_12549, var_expression_13673.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_13673, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 328)) ;
      }
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_12549, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 335)), var_expression_13673, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 330))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 330)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 340)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMinusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_14910 ;
    GALGAS_bool var_selfIsMutable_14944 ;
    GALGAS_bool var_unused_0_14972 ;
    const bool optionalResult14884 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14910, var_selfIsMutable_14944, var_unused_0_14972) ;
    if (!optionalResult14884) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_14944.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 360)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 361)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_14910, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 371)).readProperty_mHandledOperatorFlags ().getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 371)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 371)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_14910, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 373)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 373)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 373)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 372)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_16035 ;
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_14910, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_16035, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 376)) ;
      {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_14910, var_expression_16035.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_16035, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 386)) ;
      }
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_14910, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 393)), var_expression_16035, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 388))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 388)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMinusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 398)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMulEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_17271 ;
    GALGAS_bool var_selfIsMutable_17305 ;
    GALGAS_bool var_unused_0_17333 ;
    const bool optionalResult17245 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_17271, var_selfIsMutable_17305, var_unused_0_17333) ;
    if (!optionalResult17245) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_17305.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 418)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 419)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_17271, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 429)).readProperty_mHandledOperatorFlags ().getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 429)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_17271, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 431)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 431)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 431)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 430)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_18390 ;
      const GALGAS_selfMulEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_17271, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_18390, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 434)) ;
      {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_17271, var_expression_18390.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_18390, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 444)) ;
      }
      const GALGAS_selfMulEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_17271, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 451)), var_expression_18390, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 446))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 446)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMulEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 456)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfDivEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_19624 ;
    GALGAS_bool var_selfIsMutable_19658 ;
    GALGAS_bool var_unused_0_19686 ;
    const bool optionalResult19598 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_19624, var_selfIsMutable_19658, var_unused_0_19686) ;
    if (!optionalResult19598) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_19658.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 476)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 477)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_19624, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 487)).readProperty_mHandledOperatorFlags ().getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 487)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_19624, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 489)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 489)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 489)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 488)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_20743 ;
      const GALGAS_selfDivEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_19624, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_20743, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 492)) ;
      {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_19624, var_expression_20743.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_20743, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 502)) ;
      }
      const GALGAS_selfDivEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_19624, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 509)), var_expression_20743, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 504))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 504)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfDivEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 514)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_setterCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_6572 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_6572.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_6572.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 202)) ;
    enumerator_6572.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfSetterCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_6938 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_6938.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_6938.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 212)) ;
    enumerator_6938.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_receiverType_7938 ;
  GALGAS_string var_targetVariableCppName_7974 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_8024 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_setterCallInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_8144 ;
        GALGAS_bool var_selfIsMutable_8192 ;
        GALGAS_bool var_unused_0_8234 ;
        const bool optionalResult8104 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_8144, var_selfIsMutable_8192, var_unused_0_8234) ;
        if (!optionalResult8104) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            GALGAS_bool var_isReference_8330 ;
            const bool optionalResult8300 = extensionGetter_definition (var_selfType_8144, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 234)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_8330) ;
            if (!optionalResult8300) {
              test_3 = kBoolFalse ;
            }
            if (kBoolTrue == test_3) {
              test_3 = var_isReference_8330.boolEnum () ;
              if (kBoolTrue == test_3) {
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = var_selfIsMutable_8192.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 235)).boolEnum () ;
              if (kBoolTrue == test_4) {
                const GALGAS_setterCallInstructionAST temp_5 = this ;
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (temp_5.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 236)) ;
              }
            }
          }
          GALGAS_propertyMap var_propertyMap_8486 = extensionGetter_definition (var_selfType_8144, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 238)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_8591 ;
          const GALGAS_setterCallInstructionAST temp_7 = this ;
          GALGAS_AccessControl joker_8574 ; // Joker input parameter
          var_propertyMap_8486.method_searchKey (temp_7.readProperty_mReceiverName (), joker_8574, var_isConstant_8591, var_receiverType_7938, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 239)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_8591.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_setterCallInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 241)) ;
            }
          }
          var_nameForCheckingFormalParameterUsing_8024 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_setterCallInstructionAST temp_11 = this ;
          var_targetVariableCppName_7974 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 244)).add_operation (temp_11.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 245)) ;
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_setterCallInstructionAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 247)) ;
        var_receiverType_7938.drop () ; // Release error dropped variable
        var_targetVariableCppName_7974.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_8024.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_setterCallInstructionAST temp_14 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_14.readProperty_mReceiverName (), var_receiverType_7938, var_targetVariableCppName_7974, var_nameForCheckingFormalParameterUsing_8024, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 252)) ;
    }
  }
  GALGAS_bool var_ok_9365 = GALGAS_bool (true) ;
  const GALGAS_setterCallInstructionAST temp_15 = this ;
  GALGAS_location var_errorLocation_9392 = temp_15.readProperty_mReceiverName ().readProperty_location () ;
  const GALGAS_setterCallInstructionAST temp_16 = this ;
  cEnumerator_lstringlist enumerator_9435 (temp_16.readProperty_mReceiverStructProperties (), kENUMERATION_UP) ;
  bool bool_17 = var_ok_9365.isValidAndTrue () ;
  if (enumerator_9435.hasCurrentObject () && bool_17) {
    while (enumerator_9435.hasCurrentObject () && bool_17) {
      var_ok_9365 = extensionGetter_definition (var_receiverType_7938, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 263)).readProperty_mTypeKindEnum ().getter_isStructType (SOURCE_FILE ("instruction-setter-call.galgas", 263)) ;
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_ok_9365.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 264)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (var_errorLocation_9392, GALGAS_string ("a structure is required for '.' access"), fixItArray19  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 265)) ;
        }
      }
      if (kBoolFalse == test_18) {
        GALGAS_propertyMap var_propertyMap_9665 = extensionGetter_definition (var_receiverType_7938, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 267)).readProperty_mPropertyMap () ;
        GALGAS_AccessControl var_accessControl_9761 ;
        GALGAS_bool var_isConstant_9777 ;
        var_propertyMap_9665.method_searchKey (enumerator_9435.current_mValue (HERE), var_accessControl_9761, var_isConstant_9777, var_receiverType_7938, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 268)) ;
        extensionMethod_checkSetAccess (var_accessControl_9761, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_9435.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 269)) ;
        var_errorLocation_9392 = enumerator_9435.current_mValue (HERE).readProperty_location () ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_isConstant_9777.boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_9435.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 275)) ;
          }
        }
      }
      enumerator_9435.gotoNextObject () ;
      if (enumerator_9435.hasCurrentObject ()) {
        bool_17 = var_ok_9365.isValidAndTrue () ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_castType_10195 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    const GALGAS_setterCallInstructionAST temp_23 = this ;
    test_22 = GALGAS_bool (kIsNotEqual, temp_23.readProperty_mTypeNameForCasting ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_setterCallInstructionAST temp_24 = this ;
      var_castType_10195 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_24.readProperty_mTypeNameForCasting (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 282)) ;
      {
      const GALGAS_setterCallInstructionAST temp_25 = this ;
      routine_checkAssignmentTypes (var_receiverType_7938, var_castType_10195, temp_25.readProperty_mTypeNameForCasting ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 283)) ;
      }
    }
  }
  if (kBoolFalse == test_22) {
    var_castType_10195 = var_receiverType_7938 ;
  }
  GALGAS_methodKind var_kind_10542 ;
  GALGAS_formalParameterSignature var_routineSignature_10568 ;
  GALGAS_bool var_hasCompilerArgument_10597 ;
  GALGAS_string var_setterErrorMessage_10632 ;
  const GALGAS_setterCallInstructionAST temp_26 = this ;
  GALGAS_methodQualifier joker_10603 ; // Joker input parameter
  extensionGetter_definition (var_castType_10195, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 288)).readProperty_mSetterMap ().method_searchKey (temp_26.readProperty_mSetterName (), var_kind_10542, var_routineSignature_10568, var_hasCompilerArgument_10597, joker_10603, var_setterErrorMessage_10632, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 288)) ;
  enumGalgasBool test_27 = kBoolTrue ;
  if (kBoolTrue == test_27) {
    test_27 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_10632.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_27) {
      const GALGAS_setterCallInstructionAST temp_28 = this ;
      TC_Array <C_FixItDescription> fixItArray29 ;
      inCompiler->emitSemanticError (temp_28.readProperty_mSetterName ().readProperty_location (), var_setterErrorMessage_10632, fixItArray29  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 297)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_11178 ;
  {
  const GALGAS_setterCallInstructionAST temp_30 = this ;
  const GALGAS_setterCallInstructionAST temp_31 = this ;
  const GALGAS_setterCallInstructionAST temp_32 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_30.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_31.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 306)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 306)), var_routineSignature_10568, temp_32.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_11178, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 300)) ;
  }
  GALGAS_unifiedTypeMapEntry var_baseType_11244 = var_castType_10195 ;
  GALGAS_bool var_searching_11271 = GALGAS_bool (true) ;
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    test_33 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 316)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_33) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 317)).isValid ()) {
        uint32_t variant_11319 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 317)).uintValue () ;
        bool loop_11319 = true ;
        while (loop_11319) {
          loop_11319 = var_searching_11271.isValid () ;
          if (loop_11319) {
            loop_11319 = var_searching_11271.boolValue () ;
          }
          if (loop_11319 && (0 == variant_11319)) {
            loop_11319 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 317)) ;
          }
          if (loop_11319) {
            variant_11319 -- ;
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = extensionGetter_definition (var_baseType_11244, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 318)).boolEnum () ;
              if (kBoolTrue == test_34) {
                var_searching_11271 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_34) {
              enumGalgasBool test_35 = kBoolTrue ;
              if (kBoolTrue == test_35) {
                const GALGAS_setterCallInstructionAST temp_36 = this ;
                test_35 = extensionGetter_definition (extensionGetter_definition (var_baseType_11244, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 321)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 321)).readProperty_mSetterMap ().getter_hasKey (temp_36.readProperty_mSetterName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 321)).boolEnum () ;
                if (kBoolTrue == test_35) {
                  var_baseType_11244 = extensionGetter_definition (var_baseType_11244, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 322)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_35) {
                var_searching_11271 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_setterCallInstructionAST temp_37 = this ;
  const GALGAS_setterCallInstructionAST temp_38 = this ;
  const GALGAS_setterCallInstructionAST temp_39 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (temp_37.readProperty_mReceiverName ().readProperty_location (), var_targetVariableCppName_7974, var_nameForCheckingFormalParameterUsing_8024, temp_38.readProperty_mReceiverStructProperties (), var_castType_10195, var_receiverType_7938, temp_39.readProperty_mSetterName (), var_kind_10542, var_actualParameterListForGeneration_11178, var_hasCompilerArgument_10597, var_baseType_11244  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_12689 ;
    GALGAS_bool var_selfIsMutable_12723 ;
    GALGAS_bool var_unused_0_12751 ;
    const bool optionalResult12663 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_12689, var_selfIsMutable_12723, var_unused_0_12751) ;
    if (!optionalResult12663) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_12723.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 359)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfSetterCallInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 360)) ;
        }
      }
      GALGAS_methodKind var_kind_12967 ;
      GALGAS_formalParameterSignature var_routineSignature_12989 ;
      GALGAS_bool var_hasCompilerArgument_13014 ;
      const GALGAS_selfSetterCallInstructionAST temp_4 = this ;
      GALGAS_methodQualifier joker_13016 ; // Joker input parameter
      GALGAS_string joker_13019 ; // Joker input parameter
      extensionGetter_definition (var_selfType_12689, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 363)).readProperty_mSetterMap ().method_searchKey (temp_4.readProperty_mSetterName (), var_kind_12967, var_routineSignature_12989, var_hasCompilerArgument_13014, joker_13016, joker_13019, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 363)) ;
      GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_13500 ;
      {
      const GALGAS_selfSetterCallInstructionAST temp_5 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_6 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_7 = this ;
      routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_6.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 371)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 371)), var_routineSignature_12989, temp_7.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_13500, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)) ;
      }
      const GALGAS_selfSetterCallInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_12689, temp_8.readProperty_mSetterName (), var_kind_12967, var_actualParameterListForGeneration_13500, var_hasCompilerArgument_13014  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 379))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 379)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfSetterCallInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 388)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)) ;
  const GALGAS_setterCallInstructionForGeneration temp_0 = this ;
  GALGAS_string var_receiverCppName_15628 = temp_0.readProperty_mReceiverCppName () ;
  const GALGAS_setterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_lstringlist enumerator_15666 (temp_1.readProperty_mReceiverStructAttributes (), kENUMERATION_UP) ;
  while (enumerator_15666.hasCurrentObject ()) {
    var_receiverCppName_15628.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_15666.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 432)) ;
    enumerator_15666.gotoNextObject () ;
  }
  {
  const GALGAS_setterCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mReceiverBaseName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_15912 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 436)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_15964 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 437)) ;
  GALGAS_stringlist var_inputVariableList_16005 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 438)) ;
  const GALGAS_setterCallInstructionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_16034 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_16034.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_16319 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_16034.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_15964, var_inputVariableList_16005, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_16319, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 440)) ;
    var_parameterCppNameList_15912.addAssign_operation (var_parameterCppName_16319  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 449)) ;
    enumerator_16034.gotoNextObject () ;
  }
  const GALGAS_setterCallInstructionForGeneration temp_4 = this ;
  switch (temp_4.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_setterCallInstructionForGeneration temp_5 = this ;
      const GALGAS_setterCallInstructionForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)).add_operation (temp_6.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_8 = this ;
        test_7 = extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 455)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 455)).boolEnum () ;
        if (kBoolTrue == test_7) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            const GALGAS_setterCallInstructionForGeneration temp_10 = this ;
            test_9 = GALGAS_bool (kIsStrictSup, extensionGetter_definition (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 456)).readProperty_mAllTypedPropertyList ().getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 456)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15628.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 457)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_11 = this ;
          GALGAS_string var_pointerUniqueName_16911 = GALGAS_string ("ptr_").add_operation (temp_11.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 459)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 459)) ;
          const GALGAS_setterCallInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 460)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 460)).add_operation (var_pointerUniqueName_16911, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 460)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 460)) ;
          const GALGAS_setterCallInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_13.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)).add_operation (var_receiverCppName_15628, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            const GALGAS_setterCallInstructionForGeneration temp_15 = this ;
            const GALGAS_setterCallInstructionForGeneration temp_16 = this ;
            test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_15.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              const GALGAS_setterCallInstructionForGeneration temp_17 = this ;
              ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (extensionGetter_definition (temp_17.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 463)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 463))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 463)) ;
              const GALGAS_setterCallInstructionForGeneration temp_18 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName_16911, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 464)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 464)).add_operation (extensionGetter_identifierRepresentation (temp_18.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)).add_operation (var_pointerUniqueName_16911, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 464)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 467)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 467)) ;
              }
              const GALGAS_setterCallInstructionForGeneration temp_19 = this ;
              const GALGAS_setterCallInstructionForGeneration temp_20 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468)).add_operation (extensionGetter_definition (temp_19.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)).add_operation (extensionGetter_commaSourceFile (temp_20.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_16911, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_21 = this ;
          const GALGAS_setterCallInstructionForGeneration temp_22 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_21.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 473)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 473)).add_operation (extensionGetter_identifierRepresentation (temp_22.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)).add_operation (var_pointerUniqueName_16911, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 473)) ;
        }
      }
      if (kBoolFalse == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_23 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_23.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)).add_operation (var_receiverCppName_15628, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_setterCallInstructionForGeneration temp_24 = this ;
      extensionMethod_addHeaderFileName (temp_24.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)) ;
      const GALGAS_setterCallInstructionForGeneration temp_25 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15628.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)).add_operation (temp_25.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_18638 (var_parameterCppNameList_15912, kENUMERATION_UP) ;
  while (enumerator_18638.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_18638.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 483)) ;
    if (enumerator_18638.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)) ;
    }
    enumerator_18638.gotoNextObject () ;
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    const GALGAS_setterCallInstructionForGeneration temp_27 = this ;
    test_26 = temp_27.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_26) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_15912.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 487)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_28) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 488)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 492)) ;
    }
  }
  if (kBoolFalse == test_26) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_15912.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 493)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_29) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 494)) ;
      }
    }
  }
  const GALGAS_setterCallInstructionForGeneration temp_30 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_30.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 509)) ;
  {
  const GALGAS_selfSetterCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 510)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_19776 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 512)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_19828 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 513)) ;
  GALGAS_stringlist var_inputVariableList_19869 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 514)) ;
  const GALGAS_selfSetterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_19910 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_19910.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_20203 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_19910.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_19828, var_inputVariableList_19869, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_20203, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 516)) ;
    var_parameterCppNameList_19776.addAssign_operation (var_parameterCppName_20203  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 524)) ;
    enumerator_19910.gotoNextObject () ;
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_selfSetterCallInstructionForGeneration temp_3 = this ;
      const GALGAS_selfSetterCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_3.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 529)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 529)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 529)).add_operation (temp_4.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 529))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 529)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 530)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 530)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_7 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_7.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 531)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 531)).add_operation (temp_8.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 531)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 531)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 531)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_9 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_10 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_9.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)).add_operation (temp_10.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_12 = this ;
        test_11 = extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 536)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 536)).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_13 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_14 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(temp_13.readProperty_mSelfCppName ().add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 537)).add_operation (temp_14.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 537)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 537)) ;
        }
      }
      if (kBoolFalse == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_15 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_16 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(temp_15.readProperty_mSelfCppName ().add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 539)).add_operation (temp_16.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 539)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 539)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_21183 (var_parameterCppNameList_19776, kENUMERATION_UP) ;
  while (enumerator_21183.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_21183.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 543)) ;
    if (enumerator_21183.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 544)) ;
    }
    enumerator_21183.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_selfSetterCallInstructionForGeneration temp_18 = this ;
    test_17 = temp_18.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_17) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_19776.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 547)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 550)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 550)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 551)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 551)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 552)) ;
    }
  }
  if (kBoolFalse == test_17) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_19776.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 553)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 554)) ;
      }
    }
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_21 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_21.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 556)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 556)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 556)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 557)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 224)) ;
  const GALGAS_switchInstructionAST temp_1 = this ;
  cEnumerator_switchBranchesAST enumerator_7397 (temp_1.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_7397.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_7397.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 226)) ;
    enumerator_7397.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_switchExpression_8399 ;
  const GALGAS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 246)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_switchExpression_8399, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 243)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_switchExpression_8399.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 253)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-switch.galgas", 253)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_switchInstructionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfSwitchExpression (), GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (extensionGetter_definition (var_switchExpression_8399.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 256)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 255)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 256)), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 254)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_8834 = extensionGetter_definition (var_switchExpression_8399.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 259)).readProperty_mEnumConstantMap () ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_8946 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 260)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 262)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_9083 = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 263)) ;
  const GALGAS_switchInstructionAST temp_4 = this ;
  cEnumerator_switchBranchesAST enumerator_9170 (temp_4.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_9170.hasCurrentObject ()) {
    {
    extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 265)) ;
    }
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_9312 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 266)) ;
    GALGAS_bool var_firstConstant_9345 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_9368 (enumerator_9170.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_9368.hasCurrentObject ()) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_enumConstantMap_8834.getter_hasKey (enumerator_9368.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_constantsNamedInSwitchInstruction_8946.getter_hasKey (enumerator_9368.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_9368.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9368.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 272)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 272)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 271)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_8946.addAssign_operation (enumerator_9368.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_9800 ;
          GALGAS_uint joker_9750 ; // Joker input parameter
          var_enumConstantMap_8834.method_searchKey (enumerator_9368.current_mValue (HERE), joker_9750, var_associatedTypeList_9800, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_9800.getter_length (SOURCE_FILE ("instruction-switch.galgas", 276)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsEqual, enumerator_9170.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 276)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 276)).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_9368.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_9368.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)) ;
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_9800.getter_length (SOURCE_FILE ("instruction-switch.galgas", 279)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_9170.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 279)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_9368.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9368.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)), fixItArray11  COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)) ;
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_9800.getter_length (SOURCE_FILE ("instruction-switch.galgas", 282)).objectCompare (enumerator_9170.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 282)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  GALGAS_string temp_13 ;
                  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_9800.getter_length (SOURCE_FILE ("instruction-switch.galgas", 285)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    temp_13 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_14) {
                    temp_13 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_9368.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9368.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (var_associatedTypeList_9800.getter_length (SOURCE_FILE ("instruction-switch.galgas", 284)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)) ;
                }
              }
              if (kBoolFalse == test_12) {
                GALGAS_bigint var_associatedValueIndex_10534 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_10559 (var_associatedTypeList_9800, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_10644 (enumerator_9170.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_10559.hasCurrentObject () && enumerator_10644.hasCurrentObject ()) {
                  enumGalgasBool test_16 = kBoolTrue ;
                  if (kBoolTrue == test_16) {
                    test_16 = GALGAS_bool (kIsNotEqual, enumerator_10644.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_16) {
                      enumGalgasBool test_17 = kBoolTrue ;
                      if (kBoolTrue == test_17) {
                        test_17 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_10559.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).readProperty_mTypeName ().readProperty_string ().objectCompare (enumerator_10644.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_17) {
                          TC_Array <C_FixItDescription> fixItArray18 ;
                          inCompiler->emitSemanticError (enumerator_10644.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_10559.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 291)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 291)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 291)), fixItArray18  COMMA_SOURCE_FILE ("instruction-switch.galgas", 291)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = var_firstConstant_9345.operator_and (GALGAS_bool (kIsNotEqual, enumerator_10644.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      GALGAS_string var_cppName_11095 = GALGAS_string ("extractedValue_").add_operation (enumerator_10644.current_mExtractedValueName (HERE).readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)).add_operation (enumerator_10644.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)) ;
                      var_extractedAssociatedValuesForGeneration_9312.addAssign_operation (enumerator_10559.current_mEntry (HERE), var_cppName_11095, var_associatedValueIndex_10534.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 296))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 296)) ;
                      enumGalgasBool test_20 = kBoolTrue ;
                      if (kBoolTrue == test_20) {
                        test_20 = enumerator_10644.current_mMarkedAsUnused (HERE).boolEnum () ;
                        if (kBoolTrue == test_20) {
                          {
                          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_10644.current_mExtractedValueName (HERE), enumerator_10559.current_mEntry (HERE), var_cppName_11095, var_cppName_11095, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)) ;
                          }
                        }
                      }
                      if (kBoolFalse == test_20) {
                        {
                        extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_10644.current_mExtractedValueName (HERE), enumerator_10559.current_mEntry (HERE), var_cppName_11095, var_cppName_11095, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 300)) ;
                        }
                      }
                    }
                  }
                  var_associatedValueIndex_10534.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)) ;
                  enumerator_10559.gotoNextObject () ;
                  enumerator_10644.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_9368.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_9368.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (extensionGetter_definition (var_switchExpression_8399.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)), fixItArray21  COMMA_SOURCE_FILE ("instruction-switch.galgas", 307)) ;
      }
      var_firstConstant_9345 = GALGAS_bool (false) ;
      enumerator_9368.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_12284 ;
    {
    routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 317)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 318)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 319)), enumerator_9170.current_mInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_12284, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 312)) ;
    }
    {
    extensionSetter_closeBranch (ioArgument_ioVariableMap, enumerator_9170.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 324)) ;
    }
    var_switchBranchesForGeneration_9083.addAssign_operation (enumerator_9170.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_9312, enumerator_9170.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 325)), var_instructionList_12284  COMMA_SOURCE_FILE ("instruction-switch.galgas", 325)) ;
    enumerator_9170.gotoNextObject () ;
  }
  {
  const GALGAS_switchInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 327)) ;
  }
  GALGAS_stringset var_forgottenConstants_12619 = var_enumConstantMap_8834.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 329)).substract_operation (var_constantsNamedInSwitchInstruction_8946, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 329)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_12619.getter_count (SOURCE_FILE ("instruction-switch.galgas", 330)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_string var_s_12741 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_12759 (var_forgottenConstants_12619, kENUMERATION_UP) ;
      while (enumerator_12759.hasCurrentObject ()) {
        var_s_12741.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_12759.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 333)) ;
        enumerator_12759.gotoNextObject () ;
      }
      const GALGAS_switchInstructionAST temp_24 = this ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.readProperty_mEndOf_5F_switch_5F_instruction (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_12741, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 336)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas", 335)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression_8399.readProperty_mResultType (), var_switchExpression_8399, var_switchBranchesForGeneration_9083  COMMA_SOURCE_FILE ("instruction-switch.galgas", 339))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 339)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_switchVar_14921 ;
  const GALGAS_switchInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_14921, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 382)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_14921, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 389)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 389)) ;
  const GALGAS_switchInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 390)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 390)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)) ;
  const GALGAS_switchInstructionForGeneration temp_2 = this ;
  cEnumerator_switchBranchesForGeneration enumerator_15253 (temp_2.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_15253.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_15291 (enumerator_15253.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_15291.hasCurrentObject ()) {
      const GALGAS_switchInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 394)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 394)).add_operation (enumerator_15291.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 394)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 394)) ;
      enumerator_15291.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 396)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 397)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_15253.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 398)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_switchInstructionForGeneration temp_5 = this ;
        GALGAS_string var_type_15645 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mEnumType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)).add_operation (enumerator_15253.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 400)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 400)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 400)) ;
        GALGAS_string var_varPtr_15807 = GALGAS_string ("extractPtr_").add_operation (enumerator_15253.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_15645, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)).add_operation (var_varPtr_15807, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)).add_operation (var_type_15645, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)).add_operation (var_switchVar_14921, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_15999 (enumerator_15253.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_15999.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_15999.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 404)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 404)).add_operation (enumerator_15999.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 404)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 404)).add_operation (var_varPtr_15807, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 405)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 405)).add_operation (enumerator_15999.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 405)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 404)) ;
          enumerator_15999.gotoNextObject () ;
        }
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_15253.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 416)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 417)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 418)) ;
    }
    enumerator_15253.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 420)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typeMethodCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_2769 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_2769.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_2769.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 66)) ;
    enumerator_2769.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typeMethodCallInstructionAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_type_3566 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 82)) ;
  GALGAS_formalParameterSignature var_routineSignature_3724 ;
  GALGAS_bool var_hasCompilerArgument_3749 ;
  const GALGAS_typeMethodCallInstructionAST temp_1 = this ;
  extensionGetter_definition (var_type_3566, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 84)).readProperty_mClassMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_routineSignature_3724, var_hasCompilerArgument_3749, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 84)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4206 ;
  {
  const GALGAS_typeMethodCallInstructionAST temp_2 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_3 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_4 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_2.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_3.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 92)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 92)), var_routineSignature_3724, temp_4.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4206, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 86)) ;
  }
  const GALGAS_typeMethodCallInstructionAST temp_5 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::constructor_new (temp_5.readProperty_mTypeName (), temp_6.readProperty_mMethodName (), var_actualParameterListForGeneration_4206, var_hasCompilerArgument_3749  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 100))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 100)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 126)) ;
  GALGAS_stringlist var_parameterCppNameList_5420 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 128)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5472 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 129)) ;
  GALGAS_stringlist var_inputVariableList_5513 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 130)) ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_0 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_5554 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_5554.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5847 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_5554.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5472, var_inputVariableList_5513, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5847, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 132)) ;
    var_parameterCppNameList_5420.addAssign_operation (var_parameterCppName_5847  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 140)) ;
    enumerator_5554.gotoNextObject () ;
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_1 = this ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 143)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 143)).add_operation (temp_2.readProperty_mMethodName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 144)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 143)) ;
  cEnumerator_stringlist enumerator_6120 (var_parameterCppNameList_5420, kENUMERATION_UP) ;
  while (enumerator_6120.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6120.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 146)) ;
    if (enumerator_6120.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 147)) ;
    }
    enumerator_6120.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 150)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 150)) ;
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList_5420.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 151)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 152)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 154)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_7 = this ;
    test_6 = temp_7.readProperty_mHasCompilerArgument ().operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList_5420.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 156)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 157)) ;
    }
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_8.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 159)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 159)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 160)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_localVariableDeclarationAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry joker_2974 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), joker_2974, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableDeclarationAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_3708 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 79)) ;
  const GALGAS_localVariableDeclarationAST temp_1 = this ;
  const GALGAS_localVariableDeclarationAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_3776 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)) ;
  {
  const GALGAS_localVariableDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_targetType_3708, var_targetVariableCppName_3776, var_targetVariableCppName_3776, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 81)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (var_targetType_3708, var_targetVariableCppName_3776  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 88))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 88)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                             const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mVariableType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 112)) ;
  const GALGAS_localVariableDeclarationForGeneration temp_1 = this ;
  const GALGAS_localVariableDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mVariableType (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 113)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 113)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 113)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 113)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 117)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_5313 ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 136)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5313, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 133)) ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_5372 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 143)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 143)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 143)).getter_string (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 143)) ;
  {
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), GALGAS_bool (true), var_expression_5313.readProperty_mResultType (), var_targetVariableCppName_5372, var_targetVariableCppName_5372, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 144)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_5313.readProperty_mResultType (), GALGAS_bool (false), var_targetVariableCppName_5372, var_expression_5313  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 152))  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 152)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_warningInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 69)) ;
  const GALGAS_warningInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 70)) ;
  const GALGAS_warningInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 71)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_locationExpression_3927 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_3954 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_3986 ;
  {
  const GALGAS_warningInstructionAST temp_0 = this ;
  const GALGAS_warningInstructionAST temp_1 = this ;
  const GALGAS_warningInstructionAST temp_2 = this ;
  const GALGAS_warningInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_3927, var_messageExpression_3954, var_fixitListForGeneration_3986, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 86)) ;
  }
  const GALGAS_warningInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (temp_4.readProperty_mInstructionLocation (), var_locationExpression_3927, var_messageExpression_3954, var_fixitListForGeneration_3986  COMMA_SOURCE_FILE ("instruction-warning.galgas", 102))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 102)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_warningInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverCppVarName_5351 ;
  const GALGAS_warningInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_5351, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 131)) ;
  GALGAS_string var_messageCppVarName_5557 ;
  const GALGAS_warningInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWarningExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_5557, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 133)) ;
  GALGAS_string var_fixItArrayCppName_5806 ;
  const GALGAS_warningInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_5806, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 141)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 150)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 150)) ;
  }
  const GALGAS_warningInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 151)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 151)).add_operation (var_receiverCppVarName_5351, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 151)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 152)).add_operation (var_messageCppVarName_5557, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 152)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 153)).add_operation (var_fixItArrayCppName_5806, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 153)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 154)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 154)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 151)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readAccessWithInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_readAccessWithInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_readAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 368)) ;
  const GALGAS_readAccessWithInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mKeyExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 369)) ;
  const GALGAS_readAccessWithInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mDoBranchInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 370)) ;
  const GALGAS_readAccessWithInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mElseBranchInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 371)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteAccessWithInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteAccessWithInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mKeyExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 379)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_do_5F_Instructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 380)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_Instructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 381)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readAccessWithInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_readAccessWithInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_14146 ;
  const GALGAS_readAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 399)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_14146, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 396)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_14169 = var_receiverExpression_14146.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readAccessWithInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool var_found_14310 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_14349 (extensionGetter_definition (var_receiverType_14169, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 409)).readProperty_mMapSearchMethodList (), kENUMERATION_UP) ;
      bool bool_3 = var_found_14310.operator_not (SOURCE_FILE ("instruction-with.galgas", 409)).isValidAndTrue () ;
      if (enumerator_14349.hasCurrentObject () && bool_3) {
        while (enumerator_14349.hasCurrentObject () && bool_3) {
          const GALGAS_readAccessWithInstructionAST temp_4 = this ;
          var_found_14310 = GALGAS_bool (kIsEqual, enumerator_14349.current_mSearchMethodName (HERE).readProperty_string ().objectCompare (temp_4.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ())) ;
          enumerator_14349.gotoNextObject () ;
          if (enumerator_14349.hasCurrentObject ()) {
            bool_3 = var_found_14310.operator_not (SOURCE_FILE ("instruction-with.galgas", 409)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_found_14310.operator_not (SOURCE_FILE ("instruction-with.galgas", 412)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_readAccessWithInstructionAST temp_6 = this ;
          const GALGAS_readAccessWithInstructionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_location (), GALGAS_string ("there is no '").add_operation (temp_7.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 413)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 413)).add_operation (extensionGetter_definition (var_receiverType_14169, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 414)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 414)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 414)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 413)) ;
        }
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression_15068 ;
  const GALGAS_readAccessWithInstructionAST temp_9 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mKeyExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 421)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_keyExpression_15068, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 418)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readAccessWithInstructionAST temp_11 = this ;
    test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_15068.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_readAccessWithInstructionAST temp_13 = this ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_15068.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 431)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 431)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 431)), fixItArray14  COMMA_SOURCE_FILE ("instruction-with.galgas", 430)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_10) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_15068.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_15) {
        const GALGAS_readAccessWithInstructionAST temp_16 = this ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_15068.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 435)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 435)).add_operation (GALGAS_string ("', it should be @lstring"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 435)), fixItArray17  COMMA_SOURCE_FILE ("instruction-with.galgas", 434)) ;
      }
    }
  }
  const GALGAS_readAccessWithInstructionAST temp_18 = this ;
  GALGAS_string var_objectArrayCppName_15714 = GALGAS_string ("objectArray_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 438)).getter_string (SOURCE_FILE ("instruction-with.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 438)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = extensionGetter_definition (var_receiverType_14169, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 440)).readProperty_mHandledOperatorFlags ().getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 440)).operator_not (SOURCE_FILE ("instruction-with.galgas", 440)).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_readAccessWithInstructionAST temp_20 = this ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mEndOfReceiverExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_14169, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 441)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 441)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 441)), fixItArray21  COMMA_SOURCE_FILE ("instruction-with.galgas", 441)) ;
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 444)) ;
  }
  GALGAS_localConstantList var_localConstantList_16200 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 446)) ;
  cEnumerator_typedPropertyList enumerator_16267 (extensionGetter_definition (var_receiverType_14169, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 447)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_16267.hasCurrentObject ()) {
    const GALGAS_readAccessWithInstructionAST temp_22 = this ;
    const GALGAS_readAccessWithInstructionAST temp_23 = this ;
    var_localConstantList_16200.addAssign_operation (enumerator_16267.current_mPropertyTypeEntry (HERE), GALGAS_lstring::constructor_new (temp_22.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_16267.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 450)), temp_23.readProperty_mEndOfReceiverExpression ()  COMMA_SOURCE_FILE ("instruction-with.galgas", 450)), GALGAS_bool (true), var_objectArrayCppName_15714.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 452)).add_operation (enumerator_16267.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 452))  COMMA_SOURCE_FILE ("instruction-with.galgas", 448)) ;
    enumerator_16267.gotoNextObject () ;
  }
  const GALGAS_readAccessWithInstructionAST temp_24 = this ;
  const GALGAS_readAccessWithInstructionAST temp_25 = this ;
  var_localConstantList_16200.addAssign_operation (extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 456)), GALGAS_lstring::constructor_new (temp_24.readProperty_mPrefix ().readProperty_string ().add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 457)), temp_25.readProperty_mEndOfReceiverExpression ()  COMMA_SOURCE_FILE ("instruction-with.galgas", 457)), GALGAS_bool (true), var_objectArrayCppName_15714.add_operation (GALGAS_string ("->mPropertylkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 459))  COMMA_SOURCE_FILE ("instruction-with.galgas", 455)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_17301 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_26 = this ;
  const GALGAS_readAccessWithInstructionAST temp_27 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_16200, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 466)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 467)), temp_26.readProperty_mDoBranchInstructions (), temp_27.readProperty_mEndOf_5F_do_5F_instructions (), ioArgument_ioVariableMap, var_do_5F_instructionList_17301, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 460)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_17754 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_28 = this ;
  const GALGAS_readAccessWithInstructionAST temp_29 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 479)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 480)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 481)), temp_28.readProperty_mElseBranchInstructions (), temp_29.readProperty_mEndOf_5F_else_5F_instructions (), ioArgument_ioVariableMap, var_else_5F_instructionList_17754, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 474)) ;
  }
  {
  const GALGAS_readAccessWithInstructionAST temp_30 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_30.readProperty_mEndOf_5F_else_5F_instructions (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)) ;
  }
  const GALGAS_readAccessWithInstructionAST temp_31 = this ;
  const GALGAS_readAccessWithInstructionAST temp_32 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (temp_31.readProperty_mInstructionLocation (), var_receiverExpression_14146, var_objectArrayCppName_15714, var_keyExpression_15068, temp_32.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), var_do_5F_instructionList_17301, var_else_5F_instructionList_17754  COMMA_SOURCE_FILE ("instruction-with.galgas", 489))  COMMA_SOURCE_FILE ("instruction-with.galgas", 489)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteAccessWithInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteAccessWithInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_keyExpression_19093 ;
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mKeyExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 513)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_keyExpression_19093, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 510)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readWriteAccessWithInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_19093.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 521)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_readWriteAccessWithInstructionAST temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_19093.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 523)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 523)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 523)), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 522)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_19093.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 525)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_readWriteAccessWithInstructionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_19093.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 527)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 527)).add_operation (GALGAS_string ("', it should be @lstring"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 527)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 526)) ;
      }
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_9 = this ;
  GALGAS_string var_objectArrayCppName_19739 = GALGAS_string ("objectArray_").add_operation (temp_9.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 530)).getter_string (SOURCE_FILE ("instruction-with.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 530)) ;
  GALGAS_unifiedTypeMapEntry var_targetType_19882 ;
  GALGAS_string var_receiverVariableCppName_19920 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readWriteAccessWithInstructionAST temp_11 = this ;
    test_10 = temp_11.readProperty_mReceiverIsPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        GALGAS_unifiedTypeMapEntry var_selfType_20055 ;
        GALGAS_bool var_unused_0_20091 ;
        GALGAS_bool var_propertiesAreMutable_20160 ;
        const bool optionalResult20010 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_20055, var_unused_0_20091, var_propertiesAreMutable_20160) ;
        if (!optionalResult20010) {
          test_12 = kBoolFalse ;
        }
        if (kBoolTrue == test_12) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            const GALGAS_readWriteAccessWithInstructionAST temp_14 = this ;
            test_13 = GALGAS_bool (kIsEqual, temp_14.readProperty_mReceiverName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_13) {
              var_receiverVariableCppName_19920 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
              var_targetType_19882 = var_selfType_20055 ;
            }
          }
          if (kBoolFalse == test_13) {
            GALGAS_propertyMap var_propertyMap_20348 = extensionGetter_definition (var_selfType_20055, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 543)).readProperty_mPropertyMap () ;
            GALGAS_bool var_isConstant_20455 ;
            const GALGAS_readWriteAccessWithInstructionAST temp_15 = this ;
            GALGAS_AccessControl joker_20438 ; // Joker input parameter
            var_propertyMap_20348.method_searchKey (temp_15.readProperty_mReceiverName (), joker_20438, var_isConstant_20455, var_targetType_19882, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 544)) ;
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = var_isConstant_20455.boolEnum () ;
              if (kBoolTrue == test_16) {
                const GALGAS_readWriteAccessWithInstructionAST temp_17 = this ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray18  COMMA_SOURCE_FILE ("instruction-with.galgas", 546)) ;
              }
            }
            if (kBoolFalse == test_16) {
              enumGalgasBool test_19 = kBoolTrue ;
              if (kBoolTrue == test_19) {
                test_19 = var_propertiesAreMutable_20160.operator_not (SOURCE_FILE ("instruction-with.galgas", 547)).boolEnum () ;
                if (kBoolTrue == test_19) {
                  const GALGAS_readWriteAccessWithInstructionAST temp_20 = this ;
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (temp_20.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be modified in this context"), fixItArray21  COMMA_SOURCE_FILE ("instruction-with.galgas", 548)) ;
                }
              }
            }
            const GALGAS_readWriteAccessWithInstructionAST temp_22 = this ;
            var_receiverVariableCppName_19920 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 550)).add_operation (temp_22.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 551)) ;
          }
        }
      }
      if (kBoolFalse == test_12) {
        const GALGAS_readWriteAccessWithInstructionAST temp_23 = this ;
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_23.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("'self' cannot be used in this context"), fixItArray24  COMMA_SOURCE_FILE ("instruction-with.galgas", 554)) ;
        var_targetType_19882.drop () ; // Release error dropped variable
        var_receiverVariableCppName_19920.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_10) {
    {
    const GALGAS_readWriteAccessWithInstructionAST temp_25 = this ;
    GALGAS_string joker_21159 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_25.readProperty_mReceiverName (), var_targetType_19882, var_receiverVariableCppName_19920, joker_21159, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 557)) ;
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_26 = this ;
  cEnumerator_lstringlist enumerator_21185 (temp_26.readProperty_mFieldList (), kENUMERATION_UP) ;
  while (enumerator_21185.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_21228 = extensionGetter_definition (var_targetType_19882, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 565)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_21320 ;
    GALGAS_bool var_isConstant_21336 ;
    var_propertyMap_21228.method_searchKey (enumerator_21185.current_mValue (HERE), var_accessControl_21320, var_isConstant_21336, var_targetType_19882, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 566)) ;
    extensionMethod_checkSetAccess (var_accessControl_21320, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_21185.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 567)) ;
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = var_isConstant_21336.boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <C_FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (enumerator_21185.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray28  COMMA_SOURCE_FILE ("instruction-with.galgas", 572)) ;
      }
    }
    enumerator_21185.gotoNextObject () ;
  }
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    test_29 = extensionGetter_definition (var_targetType_19882, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 576)).readProperty_mHandledOperatorFlags ().getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 576)).operator_not (SOURCE_FILE ("instruction-with.galgas", 576)).boolEnum () ;
    if (kBoolTrue == test_29) {
      const GALGAS_readWriteAccessWithInstructionAST temp_30 = this ;
      TC_Array <C_FixItDescription> fixItArray31 ;
      inCompiler->emitSemanticError (temp_30.readProperty_mEndOfReceiverExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_targetType_19882, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 577)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 577)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 577)), fixItArray31  COMMA_SOURCE_FILE ("instruction-with.galgas", 577)) ;
    }
  }
  enumGalgasBool test_32 = kBoolTrue ;
  if (kBoolTrue == test_32) {
    const GALGAS_readWriteAccessWithInstructionAST temp_33 = this ;
    test_32 = GALGAS_bool (kIsNotEqual, temp_33.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_32) {
      GALGAS_bool var_found_22017 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_22056 (extensionGetter_definition (var_targetType_19882, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 582)).readProperty_mMapSearchMethodList (), kENUMERATION_UP) ;
      bool bool_34 = var_found_22017.operator_not (SOURCE_FILE ("instruction-with.galgas", 582)).isValidAndTrue () ;
      if (enumerator_22056.hasCurrentObject () && bool_34) {
        while (enumerator_22056.hasCurrentObject () && bool_34) {
          const GALGAS_readWriteAccessWithInstructionAST temp_35 = this ;
          var_found_22017 = GALGAS_bool (kIsEqual, enumerator_22056.current_mSearchMethodName (HERE).readProperty_string ().objectCompare (temp_35.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ())) ;
          enumerator_22056.gotoNextObject () ;
          if (enumerator_22056.hasCurrentObject ()) {
            bool_34 = var_found_22017.operator_not (SOURCE_FILE ("instruction-with.galgas", 582)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_36 = kBoolTrue ;
      if (kBoolTrue == test_36) {
        test_36 = var_found_22017.operator_not (SOURCE_FILE ("instruction-with.galgas", 585)).boolEnum () ;
        if (kBoolTrue == test_36) {
          const GALGAS_readWriteAccessWithInstructionAST temp_37 = this ;
          const GALGAS_readWriteAccessWithInstructionAST temp_38 = this ;
          TC_Array <C_FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_location (), GALGAS_string ("there is no '").add_operation (temp_38.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 586)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 586)).add_operation (extensionGetter_definition (var_targetType_19882, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 586)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 586)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 586)), fixItArray39  COMMA_SOURCE_FILE ("instruction-with.galgas", 586)) ;
        }
      }
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 590)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList_22619 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 592)) ;
  cEnumerator_typedPropertyList enumerator_22667 (extensionGetter_definition (var_targetType_19882, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 593)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_22667.hasCurrentObject ()) {
    const GALGAS_readWriteAccessWithInstructionAST temp_40 = this ;
    const GALGAS_readWriteAccessWithInstructionAST temp_41 = this ;
    var_localInitializedVariableList_22619.addAssign_operation (enumerator_22667.current_mPropertyTypeEntry (HERE), GALGAS_lstring::constructor_new (temp_40.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_22667.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 596)), temp_41.readProperty_mEndOfReceiverExpression ()  COMMA_SOURCE_FILE ("instruction-with.galgas", 596)), var_objectArrayCppName_19739.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 597)).add_operation (enumerator_22667.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 597))  COMMA_SOURCE_FILE ("instruction-with.galgas", 594)) ;
    enumerator_22667.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_42 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 603)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_43 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_44 = this ;
  temp_42.addAssign_operation (extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 600)), GALGAS_lstring::constructor_new (temp_43.readProperty_mPrefix ().readProperty_string ().add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 601)), temp_44.readProperty_mEndOfReceiverExpression ()  COMMA_SOURCE_FILE ("instruction-with.galgas", 601)), GALGAS_bool (true), var_objectArrayCppName_19739.add_operation (GALGAS_string ("->mProperty_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 603))  COMMA_SOURCE_FILE ("instruction-with.galgas", 603)) ;
  GALGAS_localConstantList var_localConstantList_22992 = temp_42 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_23690 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_45 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_46 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_22992, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 611)), var_localInitializedVariableList_22619, temp_45.readProperty_m_5F_do_5F_Instructions (), temp_46.readProperty_mEndOf_5F_do_5F_instructions (), ioArgument_ioVariableMap, var_do_5F_instructionList_23690, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 605)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_24101 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_47 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_48 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 624)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 625)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 626)), temp_47.readProperty_m_5F_else_5F_Instructions (), temp_48.readProperty_mEndOf_5F_else_5F_instructions (), ioArgument_ioVariableMap, var_else_5F_instructionList_24101, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 619)) ;
  }
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_49 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_49.readProperty_mEndOf_5F_else_5F_instructions (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 632)) ;
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_50 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_51 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_52 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (temp_50.readProperty_mInstructionLocation (), var_receiverVariableCppName_19920, var_targetType_19882, temp_51.readProperty_mFieldList (), var_objectArrayCppName_19739, var_keyExpression_19093, temp_52.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), var_do_5F_instructionList_23690, var_else_5F_instructionList_24101  COMMA_SOURCE_FILE ("instruction-with.galgas", 634))  COMMA_SOURCE_FILE ("instruction-with.galgas", 634)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readOnlyWithInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_readOnlyWithInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverVarCppName_26738 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName_26738, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 686)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_receiverType_26761 = temp_1.readProperty_mReceiverExpression ().readProperty_mResultType () ;
  GALGAS_string var_keyVarCppName_27001 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mKeyExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_27001, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 695)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const cMapElement_").add_operation (extensionGetter_identifierRepresentation (var_receiverType_26761, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 703)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 703)).add_operation (temp_3.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 704)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 704)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_26761, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 705)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 705)).add_operation (var_receiverVarCppName_26738, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 706)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 706)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 703)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_5 = this ;
    test_4 = GALGAS_bool (kIsEqual, temp_5.readProperty_mSearchMethodNameForErrorSignaling ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName_27001, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 708)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 708)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 708)) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_6 = this ;
    const GALGAS_readOnlyWithInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("performSearch (").add_operation (var_keyVarCppName_27001, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 710)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 710)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 711)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 711)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 711)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_26761, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 712)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 713)).add_operation (temp_6.readProperty_mSearchMethodNameForErrorSignaling (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 713)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 713)).add_operation (extensionGetter_commaSourceFile (temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 714)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 714)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 710)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 715)) COMMA_SOURCE_FILE ("instruction-with.galgas", 715)) ;
    }
  }
  const GALGAS_readOnlyWithInstructionForGeneration temp_8 = this ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_9 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != ").add_operation (temp_8.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 717)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 717)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 717)).add_operation (temp_9.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 718)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 718)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_26761, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 719)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 719)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 719)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 717)) ;
  {
  const GALGAS_readOnlyWithInstructionForGeneration temp_10 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_10.readProperty_mDoBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 720)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_12 = this ;
    test_11 = GALGAS_bool (kIsStrictSup, temp_12.readProperty_mElseBranchInstructions ().getter_length (SOURCE_FILE ("instruction-with.galgas", 728)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 729)) ;
      {
      const GALGAS_readOnlyWithInstructionForGeneration temp_13 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_13.readProperty_mElseBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 730)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 739)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteWithInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteWithInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_readWriteWithInstructionForGeneration temp_0 = this ;
  GALGAS_string var_receiverCppName_29084 = temp_0.readProperty_mReceiverVariableCppName () ;
  const GALGAS_readWriteWithInstructionForGeneration temp_1 = this ;
  cEnumerator_lstringlist enumerator_29130 (temp_1.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_29130.hasCurrentObject ()) {
    var_receiverCppName_29084.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_29130.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 753)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 753)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 753)) ;
    enumerator_29130.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName_29449 ;
  const GALGAS_readWriteWithInstructionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mKeyExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_29449, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 756)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 764)) COMMA_SOURCE_FILE ("instruction-with.galgas", 764)) ;
  }
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_3 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mReceiverVariableCppName () COMMA_SOURCE_FILE ("instruction-with.galgas", 765)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_4 = this ;
  extensionMethod_addHeaderFileName (temp_4.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 766)) ;
  const GALGAS_readWriteWithInstructionForGeneration temp_5 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_6 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cMapElement_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 767)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 767)).add_operation (temp_6.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 768)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 768)).add_operation (extensionGetter_identifierRepresentation (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 768)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 768)).add_operation (var_receiverCppName_29084, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 769)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 769)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 767)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_readWriteWithInstructionForGeneration temp_9 = this ;
    test_8 = GALGAS_bool (kIsEqual, temp_9.readProperty_mSearchMethodNameForErrorSignaling ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 771)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 771)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 771)).add_operation (var_keyVarCppName_29449, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 771)) ;
    }
  }
  if (kBoolFalse == test_8) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 773)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 773)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 773)).add_operation (var_keyVarCppName_29449, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 773)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 773)) ;
    const GALGAS_readWriteWithInstructionForGeneration temp_10 = this ;
    const GALGAS_readWriteWithInstructionForGeneration temp_11 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", kSearchErrorMessage_").add_operation (extensionGetter_identifierRepresentation (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)).add_operation (temp_11.readProperty_mSearchMethodNameForErrorSignaling (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 774)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_12 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_13 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_14 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_15 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_12.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 776)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 776)).add_operation (GALGAS_string ("if (NULL != "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 776)).add_operation (temp_13.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 777)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 777)).add_operation (GALGAS_string ("  macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 777)).add_operation (temp_14.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 778)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 778)).add_operation (extensionGetter_identifierRepresentation (temp_15.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 778)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 778)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 778)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 776)) ;
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_16 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_16.readProperty_mDoBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 779)) ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_readWriteWithInstructionForGeneration temp_18 = this ;
    test_17 = GALGAS_bool (kIsStrictSup, temp_18.readProperty_mElseBranchInstructions ().getter_length (SOURCE_FILE ("instruction-with.galgas", 787)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_17) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 788)) ;
      {
      const GALGAS_readWriteWithInstructionForGeneration temp_19 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_19.readProperty_mElseBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 789)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 798)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalCallInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                   const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                   GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_nonTerminalSymbolIndex_4570 ;
  const GALGAS_nonterminalCallInstruction temp_0 = this ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_4572 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_4570, joker_4572, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 103)) ;
  const GALGAS_nonterminalCallInstruction temp_1 = this ;
  const GALGAS_nonterminalCallInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_4570  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 104))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 104)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalCallInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
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
  GALGAS_nonterminalLabelMap var_labelMap_5731 ;
  const GALGAS_nonterminalCallInstruction temp_0 = this ;
  constinArgument_inNonterminalMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_labelMap_5731, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 130)) ;
  GALGAS_formalParameterSignature var_signature_5774 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_nonterminalCallInstruction temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mLabelName ().readProperty_string ().objectCompare (GALGAS_string ("parse"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_signature_5774 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 133)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_nonterminalCallInstruction temp_3 = this ;
    GALGAS_formalParameterListForGeneration joker_5887 ; // Joker input parameter
    GALGAS_location joker_5901 ; // Joker input parameter
    var_labelMap_5731.method_searchKey (temp_3.readProperty_mLabelName (), joker_5887, var_signature_5774, joker_5901, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 135)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_6365 ;
  {
  const GALGAS_nonterminalCallInstruction temp_4 = this ;
  const GALGAS_nonterminalCallInstruction temp_5 = this ;
  const GALGAS_nonterminalCallInstruction temp_6 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mNonterminalName (), GALGAS_string ("'<").add_operation (temp_5.readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 144)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 144)), var_signature_5774, temp_6.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_6365, inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 138)) ;
  }
  const GALGAS_nonterminalCallInstruction temp_7 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_7.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 152)) ;
  const GALGAS_nonterminalCallInstruction temp_8 = this ;
  const GALGAS_nonterminalCallInstruction temp_9 = this ;
  const GALGAS_nonterminalCallInstruction temp_10 = this ;
  const GALGAS_nonterminalCallInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mNonterminalName ().readProperty_string (), temp_10.readProperty_mLabelName ().readProperty_string (), var_actualParameterListForGeneration_6365, temp_11.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ()  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 159))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 159)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_nonterminalInstructionForGeneration temp_0 = this ;
  const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mNonterminalName (), constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 191)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-non-terminal.galgas", 192))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 187))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 187)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@nonterminalInstructionForGeneration compareInstructionSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_nonterminalInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_nonterminalInstructionForGeneration var_si_8653 (dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (NULL == var_si_8653.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
      result_result = GALGAS_bool (kIsEqual, temp_1.readProperty_mNonterminalName ().objectCompare (var_si_8653.readProperty_mNonterminalName ())) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 205)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_nonterminalInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_8653.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_3.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 207)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 207)), fixItArray4  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 206)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_syntaxInstructionForGeneration var_si_8994 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (NULL == var_si_8994.ptr ()) {
        test_5 = kBoolFalse ;
      }
      if (kBoolTrue == test_5) {
        const GALGAS_nonterminalInstructionForGeneration temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_8994.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_6.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 211)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 211)), fixItArray7  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 210)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_nonterminalInstructionForGeneration temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 217)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_nonterminalInstructionForGeneration temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 218)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_parameterCppNameList_10012 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 235)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_10064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 236)) ;
  GALGAS_stringlist var_inputVariableList_10105 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 237)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_0 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_10146 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_10146.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_10439 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_10146.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_10064, var_inputVariableList_10105, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_10439, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 239)) ;
    var_parameterCppNameList_10012.addAssign_operation (var_parameterCppName_10439  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 248)) ;
    enumerator_10146.gotoNextObject () ;
  }
  const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
  GALGAS_string var_sdtResultVarName_10546 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 251)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 251)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (var_sdtResultVarName_10546, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 253)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 253)) ;
    }
  }
  const GALGAS_nonterminalInstructionForGeneration temp_3 = this ;
  const GALGAS_nonterminalInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("nt_").add_operation (temp_3.readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 255)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 255)).add_operation (temp_4.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 255)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 255)) ;
  cEnumerator_stringlist enumerator_10898 (var_parameterCppNameList_10012, kENUMERATION_UP) ;
  while (enumerator_10898.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_10898.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 257)) ;
    enumerator_10898.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_sdtResultVarName_10546.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 260)) ;
    }
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 262)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 262)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 263)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 263)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_6 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_6.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_10546, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 264)) ;
  cEnumerator_stringlist enumerator_11435 (var_jokerParametersToReleaseList_10064, kENUMERATION_UP) ;
  while (enumerator_11435.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_11435.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 272)) ;
    enumerator_11435.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                          GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                          GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_addedNonTerminalIndex_4199 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 105)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList_4287 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 107)) ;
  {
  const GALGAS_repeatInstruction temp_0 = this ;
  routine_transformInstructionList (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_4287, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 108)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList_4606 = GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (var_repeatedInstructionList_4287  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 115)) ;
  const GALGAS_repeatInstruction temp_1 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_4711 (temp_1.readProperty_mRepeatBranchList (), kENUMERATION_UP) ;
  while (enumerator_4711.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_4771 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 118)) ;
    {
    routine_transformInstructionList (enumerator_4711.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_4771, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 119)) ;
    }
    var_repeatBranchList_4606.addAssign_operation (var_syntaxInstructionList_4771  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 126)) ;
    enumerator_4711.gotoNextObject () ;
  }
  const GALGAS_repeatInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (temp_2.readProperty_mInstructionLocation (), var_repeatBranchList_4606, var_addedNonTerminalIndex_4199  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 129))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 129)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                              const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                              const GALGAS_string constinArgument_inLexiqueName,
                                                              const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                              const GALGAS_string constinArgument_inComponentName,
                                                              const GALGAS_stringset constinArgument_inIndexNameSet,
                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_choiceIndex_6164 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 156)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 158)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_6727 ;
  {
  const GALGAS_repeatInstruction temp_0 = this ;
  const GALGAS_repeatInstruction temp_1 = this ;
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_0.readProperty_mRepeatedInstructionList (), temp_1.readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_6727, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_6844 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 178)) ;
  const GALGAS_repeatInstruction temp_2 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_6899 (temp_2.readProperty_mRepeatBranchList (), kENUMERATION_UP) ;
  while (enumerator_6899.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_7347 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_6899.current_mSyntaxInstructionList (HERE), enumerator_6899.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_7347, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 180)) ;
    }
    var_listOfSemanticInstructionListForGeneration_6844.addAssign_operation (var_instructionList_7347, enumerator_6899.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 197)) ;
    enumerator_6899.gotoNextObject () ;
  }
  {
  const GALGAS_repeatInstruction temp_3 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_repeat_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 200)) ;
  }
  const GALGAS_repeatInstruction temp_4 = this ;
  const GALGAS_repeatInstruction temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (temp_4.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_6164, var_repeated_5F_instructionList_6727, temp_5.readProperty_mEndOf_5F_repeat_5F_instruction (), var_listOfSemanticInstructionListForGeneration_6844  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 202))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 202)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_repeatInstructionForGeneration temp_0 = this ;
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_8913 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_m_5F_repeated_5F_instructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 232)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_9042 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 233)) ;
  const GALGAS_repeatInstructionForGeneration temp_1 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9137 (temp_1.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_9137.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_9042.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_9137.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 236)), enumerator_9137.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 235)) ;
    enumerator_9137.gotoNextObject () ;
  }
  const GALGAS_repeatInstructionForGeneration temp_2 = this ;
  const GALGAS_repeatInstructionForGeneration temp_3 = this ;
  const GALGAS_repeatInstructionForGeneration temp_4 = this ;
  const GALGAS_repeatInstructionForGeneration temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mChoiceIndex (), var_repeated_5F_instructionList_8913, temp_5.readProperty_mEndOfRepeatedInstructions (), var_listOfSemanticInstructionListForGeneration_9042  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 240))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 240)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@repeatInstructionForGeneration compareInstructionSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_repeatInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_repeatInstructionForGeneration var_si_10071 (dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (NULL == var_si_10071.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_repeatInstructionForGeneration temp_1 = this ;
      result_result = function_compareSyntaxSignature (temp_1.readProperty_m_5F_repeated_5F_instructionList (), var_si_10071.readProperty_m_5F_repeated_5F_instructionList (), var_si_10071.readProperty_mEndOfRepeatedInstructions (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 259)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_repeatInstructionForGeneration temp_3 = this ;
        test_2 = result_result.operator_and (GALGAS_bool (kIsNotEqual, temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-repeat.galgas", 260)).objectCompare (var_si_10071.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-repeat.galgas", 260)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas", 260)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_repeatInstructionForGeneration temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_si_10071.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (temp_4.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-repeat.galgas", 263)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 262)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 263)).add_operation (var_si_10071.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-repeat.galgas", 265)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 264)), fixItArray5  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 261)) ;
          result_result = GALGAS_bool (false) ;
        }
      }
      const GALGAS_repeatInstructionForGeneration temp_6 = this ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_10865 (temp_6.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_10969 (var_si_10071.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      bool bool_7 = result_result.isValidAndTrue () ;
      if (enumerator_10865.hasCurrentObject () && enumerator_10969.hasCurrentObject () && bool_7) {
        while (enumerator_10865.hasCurrentObject () && enumerator_10969.hasCurrentObject () && bool_7) {
          result_result = function_compareSyntaxSignature (enumerator_10865.current_mInstructionList (HERE), enumerator_10969.current_mInstructionList (HERE), enumerator_10969.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 269)) ;
          enumerator_10865.gotoNextObject () ;
          enumerator_10969.gotoNextObject () ;
          if (enumerator_10865.hasCurrentObject () && enumerator_10969.hasCurrentObject ()) {
            bool_7 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_syntaxInstructionForGeneration var_si_11176 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (NULL == var_si_11176.ptr ()) {
        test_8 = kBoolFalse ;
      }
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_si_11176.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray9  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 273)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_8) {
      const GALGAS_repeatInstructionForGeneration temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray11  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 277)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = result_result.operator_not (SOURCE_FILE ("instruction-repeat.galgas", 280)).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_repeatInstructionForGeneration temp_13 = this ;
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 281)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_repeatFlagCppName_12188 = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 297)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 298)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_repeatFlagCppName_12188, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 299)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 299)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_repeatFlagCppName_12188, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 300)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 300)) ;
  {
  const GALGAS_repeatInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_0.readProperty_m_5F_repeated_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 301)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 309)) ;
  }
  const GALGAS_repeatInstructionForGeneration temp_1 = this ;
  const GALGAS_repeatInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (temp_1.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)).add_operation (temp_2.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)) ;
  const GALGAS_repeatInstructionForGeneration temp_3 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_12855 (temp_3.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  GALGAS_uint index_12835 ((uint32_t) 0) ;
  while (enumerator_12855.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_12835.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 312)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 312)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 312)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_12855.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 313)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 321)) ;
    enumerator_12855.gotoNextObject () ;
    index_12835.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 311)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 323)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_12188, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 324)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 324)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 325)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 326)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 327)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 328)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                          GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                          GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_addedNonTerminalIndex_3873 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 100)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList_3954 = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 102)) ;
  const GALGAS_selectInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_4021 (temp_0.readProperty_mSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_4021.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_4081 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 104)) ;
    {
    routine_transformInstructionList (enumerator_4021.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_4081, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 105)) ;
    }
    var_selectBranchList_3954.addAssign_operation (var_syntaxInstructionList_4081  COMMA_SOURCE_FILE ("instruction-select.galgas", 112)) ;
    enumerator_4021.gotoNextObject () ;
  }
  const GALGAS_selectInstruction temp_1 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::constructor_new (temp_1.readProperty_mInstructionLocation (), var_selectBranchList_3954, var_addedNonTerminalIndex_3873  COMMA_SOURCE_FILE ("instruction-select.galgas", 115))  COMMA_SOURCE_FILE ("instruction-select.galgas", 115)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                              const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                              const GALGAS_string constinArgument_inLexiqueName,
                                                              const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                              const GALGAS_string constinArgument_inComponentName,
                                                              const GALGAS_stringset constinArgument_inIndexNameSet,
                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_choiceIndex_5475 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 141)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 143)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_5654 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 145)) ;
  const GALGAS_selectInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_5753 (temp_0.readProperty_mSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_5753.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_6201 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_5753.current_mSyntaxInstructionList (HERE), enumerator_5753.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_6201, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 147)) ;
    }
    var_listOfSemanticInstructionListForGeneration_5654.addAssign_operation (var_instructionList_6201, enumerator_5753.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 164)) ;
    enumerator_5753.gotoNextObject () ;
  }
  {
  const GALGAS_selectInstruction temp_1 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_1.readProperty_mEndOf_5F_select_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 167)) ;
  }
  const GALGAS_selectInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (temp_2.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_5475, var_listOfSemanticInstructionListForGeneration_5654  COMMA_SOURCE_FILE ("instruction-select.galgas", 168))  COMMA_SOURCE_FILE ("instruction-select.galgas", 168)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7580 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 193)) ;
  const GALGAS_selectInstructionForGeneration temp_0 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7675 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_7675.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_7580.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_7675.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 196)), enumerator_7675.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 195)) ;
    enumerator_7675.gotoNextObject () ;
  }
  const GALGAS_selectInstructionForGeneration temp_1 = this ;
  const GALGAS_selectInstructionForGeneration temp_2 = this ;
  const GALGAS_selectInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mSyntaxComponentName (), temp_3.readProperty_mChoiceIndex (), var_listOfSemanticInstructionListForGeneration_7580  COMMA_SOURCE_FILE ("instruction-select.galgas", 199))  COMMA_SOURCE_FILE ("instruction-select.galgas", 199)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectInstructionForGeneration compareInstructionSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_selectInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_selectInstructionForGeneration var_si_8539 (dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (NULL == var_si_8539.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bool (true) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        const GALGAS_selectInstructionForGeneration temp_2 = this ;
        test_1 = result_result.operator_and (GALGAS_bool (kIsNotEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-select.galgas", 219)).objectCompare (var_si_8539.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-select.galgas", 219)))) COMMA_SOURCE_FILE ("instruction-select.galgas", 219)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selectInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_8539.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-select.galgas", 222)).getter_string (SOURCE_FILE ("instruction-select.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 221)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 222)).add_operation (var_si_8539.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-select.galgas", 224)).getter_string (SOURCE_FILE ("instruction-select.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 223)), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas", 220)) ;
          result_result = GALGAS_bool (false) ;
        }
      }
      const GALGAS_selectInstructionForGeneration temp_5 = this ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9218 (temp_5.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9330 (var_si_8539.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      bool bool_6 = result_result.isValidAndTrue () ;
      if (enumerator_9218.hasCurrentObject () && enumerator_9330.hasCurrentObject () && bool_6) {
        while (enumerator_9218.hasCurrentObject () && enumerator_9330.hasCurrentObject () && bool_6) {
          result_result = function_compareSyntaxSignature (enumerator_9218.current_mInstructionList (HERE), enumerator_9330.current_mInstructionList (HERE), enumerator_9330.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 229)) ;
          enumerator_9218.gotoNextObject () ;
          enumerator_9330.gotoNextObject () ;
          if (enumerator_9218.hasCurrentObject () && enumerator_9330.hasCurrentObject ()) {
            bool_6 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      GALGAS_syntaxInstructionForGeneration var_si_9537 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (NULL == var_si_9537.ptr ()) {
        test_7 = kBoolFalse ;
      }
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_si_9537.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray8  COMMA_SOURCE_FILE ("instruction-select.galgas", 233)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      const GALGAS_selectInstructionForGeneration temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray10  COMMA_SOURCE_FILE ("instruction-select.galgas", 237)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = result_result.operator_not (SOURCE_FILE ("instruction-select.galgas", 240)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_selectInstructionForGeneration temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray13  COMMA_SOURCE_FILE ("instruction-select.galgas", 241)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)) COMMA_SOURCE_FILE ("instruction-select.galgas", 257)) ;
  }
  const GALGAS_selectInstructionForGeneration temp_0 = this ;
  const GALGAS_selectInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (temp_1.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 258)) ;
  const GALGAS_selectInstructionForGeneration temp_2 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_10845 (temp_2.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  GALGAS_uint index_10825 ((uint32_t) 0) ;
  while (enumerator_10845.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_10825.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)).getter_string (SOURCE_FILE ("instruction-select.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 260)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_10845.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 261)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 269)) ;
    enumerator_10845.gotoNextObject () ;
    index_10825.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 259)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 271)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 272)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 273)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                 const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                 GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                 GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_terminalSymbolIndex_6486 ;
  const GALGAS_terminalCheckInstruction temp_0 = this ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_6493 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (temp_0.readProperty_mTerminalName ().readProperty_string ()) ;
  if (NULL != objectArray_6493) {
      macroValidSharedObject (objectArray_6493, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex_6486 = objectArray_6493->mProperty_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex_6486 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 149)) ;
    {
    const GALGAS_terminalCheckInstruction temp_1 = this ;
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (temp_1.readProperty_mTerminalName (), var_terminalSymbolIndex_6486, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 150)) ;
    }
  }
  const GALGAS_terminalCheckInstruction temp_2 = this ;
  const GALGAS_terminalCheckInstruction temp_3 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mTerminalName (), var_terminalSymbolIndex_6486  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 152))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 152)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                     const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                     const GALGAS_string constinArgument_inLexiqueName,
                                                                     const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                     const GALGAS_string /* constinArgument_inComponentName */,
                                                                     const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList var_sentAttributeList_7919 ;
  const GALGAS_terminalCheckInstruction temp_0 = this ;
  constinArgument_inTerminalMap.method_searchKey (temp_0.readProperty_mTerminalName (), var_sentAttributeList_7919, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 177)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_terminalCheckInstruction temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mActualInputParameterList ().getter_length (SOURCE_FILE ("instruction-terminal.galgas", 179)).objectCompare (var_sentAttributeList_7919.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 179)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_terminalCheckInstruction temp_3 = this ;
      const GALGAS_terminalCheckInstruction temp_4 = this ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_sentAttributeList_7919.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 182)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      const GALGAS_terminalCheckInstruction temp_7 = this ;
      const GALGAS_terminalCheckInstruction temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, temp_8.readProperty_mActualInputParameterList ().getter_length (SOURCE_FILE ("instruction-terminal.galgas", 185)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTerminalName ().readProperty_location (), GALGAS_string ("naming the '$").add_operation (temp_4.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 181)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 181)).add_operation (var_sentAttributeList_7919.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 181)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 181)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 181)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 182)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 182)).add_operation (temp_7.readProperty_mActualInputParameterList ().getter_length (SOURCE_FILE ("instruction-terminal.galgas", 184)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 183)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 184)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 184)), fixItArray11  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 180)) ;
    }
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList_8458 = GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 188)) ;
  const GALGAS_terminalCheckInstruction temp_12 = this ;
  cEnumerator_actualInputParameterListAST enumerator_8532 (temp_12.readProperty_mActualInputParameterList (), kENUMERATION_UP) ;
  cEnumerator_lexicalSentValueList enumerator_8627 (var_sentAttributeList_7919, kENUMERATION_UP) ;
  while (enumerator_8532.hasCurrentObject () && enumerator_8627.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((cPtr_abstractInputParameter *) enumerator_8532.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_8627.current_mLexicalType (HERE), enumerator_8627.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList_8458, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 190)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsNotEqual, enumerator_8627.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8532.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_string temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_8627.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_15) {
          temp_14 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_8532.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_8627.current_mLexicalFormalSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 199)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 199)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 199)), fixItArray16  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 199)) ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticWarning (enumerator_8627.current_mLexicalFormalSelector (HERE).readProperty_location (), GALGAS_string ("the formal selector is declared here"), fixItArray17  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 200)) ;
      }
    }
    enumerator_8532.gotoNextObject () ;
    enumerator_8627.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstruction temp_18 = this ;
  cEnumerator__32_lstringlist enumerator_9192 (temp_18.readProperty_mIndexingKeyList (), kENUMERATION_UP) ;
  while (enumerator_9192.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_9192.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-terminal.galgas", 205)).operator_not (SOURCE_FILE ("instruction-terminal.galgas", 205)).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        appendFixItActions (fixItArray20, kFixItReplace, constinArgument_inIndexNameSet) ;
        inCompiler->emitSemanticError (enumerator_9192.current_mValue_30_ (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9192.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)), fixItArray20  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)) ;
      }
    }
    enumerator_9192.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstruction temp_21 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_21.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 210)) ;
  const GALGAS_terminalCheckInstruction temp_22 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_22.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 216)) ;
  const GALGAS_terminalCheckInstruction temp_23 = this ;
  const GALGAS_terminalCheckInstruction temp_24 = this ;
  const GALGAS_terminalCheckInstruction temp_25 = this ;
  const GALGAS_terminalCheckInstruction temp_26 = this ;
  const GALGAS_terminalCheckInstruction temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (temp_23.readProperty_mInstructionLocation (), temp_24.readProperty_mTerminalName (), constinArgument_inLexiqueName, var_terminalCheckAssignementList_8458, temp_25.readProperty_mIndexingKeyList (), temp_26.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (), temp_27.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ()  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 223))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 223)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string /* constinArgument_inPosfix */,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_terminalCheckInstructionForGeneration temp_0 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_1 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_2 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTerminalName (), temp_2.readProperty_mLexiqueIdentifier (), GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 259)), temp_3.readProperty_mIndexingKeyList (), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 261)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 262))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 255))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 255)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@terminalCheckInstructionForGeneration compareInstructionSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_terminalCheckInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_terminalCheckInstructionForGeneration var_si_12234 (dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (NULL == var_si_12234.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_terminalCheckInstructionForGeneration temp_1 = this ;
      result_result = GALGAS_bool (kIsEqual, temp_1.readProperty_mTerminalName ().readProperty_string ().objectCompare (var_si_12234.readProperty_mTerminalName ().readProperty_string ())) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 274)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_12234.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 276)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 276)), fixItArray4  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 275)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_syntaxInstructionForGeneration var_si_12574 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (NULL == var_si_12574.ptr ()) {
        test_5 = kBoolFalse ;
      }
      if (kBoolTrue == test_5) {
        const GALGAS_terminalCheckInstructionForGeneration temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_12574.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_6.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 280)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 280)), fixItArray7  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 279)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_terminalCheckInstructionForGeneration temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 283)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 286)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_terminalCheckInstructionForGeneration temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 287)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_generateInstruction (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_terminalCheckInstructionForGeneration temp_0 = this ;
  cEnumerator_terminalCheckAssignementList enumerator_13649 (temp_0.readProperty_mTerminalCheckAssignementList (), kENUMERATION_UP) ;
  while (enumerator_13649.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_13649.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_13649.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_13649.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 308)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 308)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 308)).add_operation (enumerator_13649.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 308)).add_operation (GALGAS_string (" () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 308)) ;
    enumerator_13649.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionForGeneration temp_2 = this ;
  cEnumerator__32_lstringlist enumerator_14066 (temp_2.readProperty_mIndexingKeyList (), kENUMERATION_UP) ;
  while (enumerator_14066.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 314)) ;
    const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("->enterIndexing (C_Lexique_").add_operation (temp_3.readProperty_mLexiqueIdentifier (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 315)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 315)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_14066.current_mValue_30_ (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 316)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_14066.current_mValue_31_ (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-terminal.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 317)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 317)) ;
    enumerator_14066.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionForGeneration temp_4 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_4.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->separatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 320)) ;
  const GALGAS_terminalCheckInstructionForGeneration temp_5 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_5.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 326)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 333)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 333)) ;
  }
  const GALGAS_terminalCheckInstructionForGeneration temp_6 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_7 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 334)).add_operation (GALGAS_string ("->acceptTerminal (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 334)).add_operation (temp_6.readProperty_mLexiqueIdentifier (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 334)).add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 335)).add_operation (temp_7.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 335)).add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 335)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 334)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                             GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                             GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_parseLoopInstruction temp_0 = this ;
  routine_transformInstructionList (temp_0.readProperty_mDoInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 107)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                 const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                 const GALGAS_string constinArgument_inLexiqueName,
                                                                 const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                 const GALGAS_string constinArgument_inComponentName,
                                                                 const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_variant_5F_expression_5539 ;
  const GALGAS_parseLoopInstruction temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 138)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variant_5F_expression_5539, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 135)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression_5539.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_parseLoopInstruction temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfVariantExpression (), GALGAS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_5539.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 146)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 146)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 146)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 147)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 147)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 147)), fixItArray3  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 145)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression_6166 ;
  const GALGAS_parseLoopInstruction temp_4 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 153)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_while_5F_expression_6166, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 150)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_while_5F_expression_6166.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_parseLoopInstruction temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mEndOfWhileExpression (), GALGAS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_5539.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 161)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 161)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 161)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 162)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 162)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 162)), fixItArray7  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 160)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList_7021 ;
  {
  const GALGAS_parseLoopInstruction temp_8 = this ;
  const GALGAS_parseLoopInstruction temp_9 = this ;
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_8.readProperty_mDoInstructionList (), temp_9.readProperty_mEndOfInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_7021, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 168)) ;
  }
  {
  const GALGAS_parseLoopInstruction temp_10 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_10.readProperty_mEndOfInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 186)) ;
  }
  const GALGAS_parseLoopInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::constructor_new (temp_11.readProperty_mInstructionLocation (), var_variant_5F_expression_5539, var_while_5F_expression_6166, var_instructionList_7021  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 188))  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 188)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_parseLoopInstructionForGeneration temp_0 = this ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 213)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 227)) COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 227)) ;
  }
  GALGAS_string var_variantVarCppName_9159 ;
  const GALGAS_parseLoopInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName_9159, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 229)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantVarCppName_9159, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 231)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 231)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 232)) ;
  }
  GALGAS_string var_variantVar_9313 = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 233)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 234)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_9313, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)).add_operation (var_variantVarCppName_9159, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)) ;
  GALGAS_string var_loopVar_9522 = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 238)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_9522, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_9522, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 240)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 240)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 241)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_9522.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 242)) ;
  GALGAS_string var_whileVarCppName_9948 ;
  const GALGAS_parseLoopInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName_9948, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_whileVarCppName_9948, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 245)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_9522.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_variantVar_9313.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 247)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)) ;
  {
  const GALGAS_parseLoopInstructionForGeneration temp_2 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_2.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 249)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 257)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 257)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 258)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 259)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 260)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 262)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 263)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("//--- 'parse'\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 265)) ;
  {
  const GALGAS_parseLoopInstructionForGeneration temp_3 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), temp_3.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 268)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 266)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 274)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 274)) ;
}
