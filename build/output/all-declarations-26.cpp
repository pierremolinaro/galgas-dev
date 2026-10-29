#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateBlockInstructionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_indendationVarCppName_4127 ;
  const GGS_templateBlockInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_4127, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 85)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_4127, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 86)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 86)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 86)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (int32_t (").add_operation (var_indendationVarCppName_4127, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 87)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 87)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 87)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 88)) ;
  {
  const GGS_templateBlockInstructionForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 89)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_4127, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 97)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 97)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 97)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (- int32_t (").add_operation (var_indendationVarCppName_4127, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 98)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 98)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 98)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 99)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                            GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                            GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                            GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                            GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                             GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                             GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                             GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 123)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionIfForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionIfForGeneration temp_0 = this ;
  UpEnumerator_templateInstructionIfBranchListForGeneration enumerator_6386 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_6386.hasCurrentObject ()) {
    GGS_string var_ifVarCppName_6637 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_6386.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_6637, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 136)) ;
    GGS_string var_testVar_6664 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas3", 143)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 143)) ;
    ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 144)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GalgasBool ").add_operation (var_testVar_6664, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 145)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 145)).add_operation (var_ifVarCppName_6637, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 145)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 145)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 145)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_testVar_6664, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 146)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 146)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 146)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolTrue : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 147)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 148)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_6386.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 149)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 157)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 158)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolFalse : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 159)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 160)) ;
    }
    enumerator_6386.gotoNextObject () ;
  }
  {
  const GGS_templateInstructionIfForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 163)) ;
  }
  const GGS_templateInstructionIfForGeneration temp_2 = this ;
  UpEnumerator_templateInstructionIfBranchListForGeneration enumerator_7657 (temp_2.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_7657.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 172)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  } break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 173)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolNotValid :\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 174)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 175)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 176)) ;
    enumerator_7657.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionForeachAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_6931 ;
  const GGS_templateInstructionForeachAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_6931, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 198)) ;
  GGS_enumerationDescriptorList var_enumerationDescriptor_7053 = extensionGetter_definition (var_expression_6931.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 206)).readProperty_enumerationDescriptorList () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_enumerationDescriptor_7053.getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 207)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_6931.readProperty_mLocation (), GGS_string ("expression of '@").add_operation (extensionGetter_definition (var_expression_6931.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 208)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 208)).add_operation (GGS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 208)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 208)) ;
    }
  }
  GGS_templateInstructionListForGeneration var_beforeInstructionList_7351 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_7351, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 212)) ;
  }
  const GGS_templateInstructionForeachAST temp_4 = this ;
  GGS_string var_enumeratorCppName_7651 = GGS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 221)).getter_string (SOURCE_FILE ("template-for-instruction.galgas3", 221)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 221)) ;
  GGS_templateVariableMap var_doVariableMap_7750 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GGS_templateInstructionForeachAST temp_5 = this ;
  const GGS_templateInstructionForeachAST temp_6 = this ;
  GGS_string var_cppIndexVarName_7811 = GGS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 223)).getter_string (SOURCE_FILE ("template-for-instruction.galgas3", 223)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 223)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 223)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas3", 224)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 224)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_templateInstructionForeachAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      {
      const GGS_templateInstructionForeachAST temp_9 = this ;
      var_doVariableMap_7750.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_7811, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 226)) ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_templateInstructionForeachAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 228)).objectCompare (var_enumerationDescriptor_7053.getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 228)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_templateInstructionForeachAST temp_12 = this ;
      const GGS_templateInstructionForeachAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfProperties (), var_enumerationDescriptor_7053.getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 230)).getter_string (SOURCE_FILE ("template-for-instruction.galgas3", 230)).add_operation (GGS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 230)).add_operation (temp_13.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 231)).getter_string (SOURCE_FILE ("template-for-instruction.galgas3", 230)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 230)).add_operation (GGS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 231)), fixItArray14  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 229)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    const GGS_templateInstructionForeachAST temp_15 = this ;
    UpEnumerator_enumerationDescriptorList enumerator_8386 (var_enumerationDescriptor_7053) ;
    UpEnumerator_lstringlist enumerator_8439 (temp_15.readProperty_mEnumeration ()) ;
    while (enumerator_8386.hasCurrentObject () && enumerator_8439.hasCurrentObject ()) {
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::notEqual, enumerator_8439.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          {
          var_doVariableMap_7750.setter_insertKey (enumerator_8439.current_mValue (HERE), enumerator_8386.current_mEnumeratedType (HERE), var_enumeratorCppName_7651.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 239)).add_operation (enumerator_8386.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas3", 239)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 239)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 239)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 236)) ;
          }
        }
      }
      enumerator_8386.gotoNextObject () ;
      enumerator_8439.gotoNextObject () ;
    }
  }
  GGS_templateAnalysisContext var_doAnalysisContext_8751 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_7750, inCompiler COMMA_HERE) ;
  GGS_templateInstructionListForGeneration var_doInstructionList_8904 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_17 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_8751, ioArgument_ioTypeMap, temp_17.readProperty_mDoInstructionList (), var_doInstructionList_8904, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 249)) ;
  }
  GGS_templateInstructionListForGeneration var_betweenInstructionList_9197 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_18 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_18.readProperty_mBetweenInstructionList (), var_betweenInstructionList_9197, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 259)) ;
  }
  GGS_templateInstructionListForGeneration var_afterInstructionList_9503 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_19 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_19.readProperty_mAfterInstructionList (), var_afterInstructionList_9503, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 269)) ;
  }
  const GGS_templateInstructionForeachAST temp_20 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionForeachForGeneration::init_21__21__21__21__21__21__21__21_ (temp_20.readProperty_mIsAscending (), var_expression_6931, var_enumeratorCppName_7651, var_beforeInstructionList_7351, var_doInstructionList_8904, var_cppIndexVarName_7811, var_betweenInstructionList_9197, var_afterInstructionList_9503, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 278)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionForeachForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_foreachVarCppName_11320 ;
  const GGS_templateInstructionForeachForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_11320, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 314)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateInstructionForeachForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 316)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionForeachForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 317)).add_operation (GGS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 317)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 317)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_foreachVarCppName_11320, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 320)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 320)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 320)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 321)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_mIsAscending ().boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string ("Up") ;
  }else if (GalgasBool::boolFalse == test_6) {
    temp_5 = GGS_string ("Down") ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_5, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 322)) ;
  const GGS_templateInstructionForeachForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("Enumerator_").add_operation (extensionGetter_identifierRepresentation (temp_7.readProperty_mExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 323)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 323)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 323)) ;
  const GGS_templateInstructionForeachForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (temp_8.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 324)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 324)).add_operation (var_foreachVarCppName_11320, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 324)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 324)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 324)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_templateInstructionForeachForGeneration temp_10 = this ;
    const GGS_templateInstructionForeachForGeneration temp_11 = this ;
    test_9 = GGS_bool (ComparisonKind::greaterThan, temp_10.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 326)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 326)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 326)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_templateInstructionForeachForGeneration temp_12 = this ;
      const GGS_templateInstructionForeachForGeneration temp_13 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 327)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 327)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 327)).add_operation (GGS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 327)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 327)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_templateInstructionForeachForGeneration temp_15 = this ;
    test_14 = GGS_bool (ComparisonKind::greaterThan, temp_15.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 329)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_templateInstructionForeachForGeneration temp_16 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 330)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 330)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 330)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 331)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_17 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 332)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 340)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 341)) ;
    }
  }
  const GGS_templateInstructionForeachForGeneration temp_18 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 343)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 343)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 343)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 344)) ;
  }
  {
  const GGS_templateInstructionForeachForGeneration temp_19 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 346)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_20 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_20.readProperty_mEnumeratorCppName ().add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 355)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 355)) ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_templateInstructionForeachForGeneration temp_22 = this ;
    test_21 = GGS_bool (ComparisonKind::greaterThan, temp_22.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 357)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_templateInstructionForeachForGeneration temp_23 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (temp_23.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 358)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 358)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 358)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 359)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_24 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_24.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 360)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 368)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 369)) ;
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    const GGS_templateInstructionForeachForGeneration temp_26 = this ;
    test_25 = GGS_bool (ComparisonKind::greaterThan, temp_26.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 372)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_templateInstructionForeachForGeneration temp_27 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_27.readProperty_mIndexCppName ().add_operation (GGS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 373)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 373)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 375)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 376)) ;
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    const GGS_templateInstructionForeachForGeneration temp_29 = this ;
    test_28 = GGS_bool (ComparisonKind::greaterThan, temp_29.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 378)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      const GGS_templateInstructionForeachForGeneration temp_30 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 379)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 379)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 379)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 380)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_31 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 381)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 389)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 390)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 393)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 394)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateString_26_ (GGS_templateInstructionListAST & ioArgument_outResultingInstructionList,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_21835 = GGS_string::class_func_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas3", 593)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_s_21835.getter_count (SOURCE_FILE ("templateSyntax.galgas3", 594)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_outResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionStringAST::init_21_ (var_s_21835, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas3", 595)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateGetterCallInExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_receiverExpression_3863 ;
  const GGS_templateGetterCallInExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_receiverExpression_3863, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 77)) ;
  GGS_unifiedTypeMapEntry var_receiverType_3913 = var_receiverExpression_3863.readProperty_mResultType () ;
  GGS_string var_receiverTypeName_3965 = extensionGetter_definition (var_receiverType_3913, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 85)).readProperty_typeName ().readProperty_string () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_bool test_2 = extensionGetter_definition (var_receiverType_3913, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 87)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas3", 87)) ;
    if (GalgasBool::boolTrue != test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_receiverType_3913, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 87)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas3", 87)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateGetterCallInExpressionAST temp_3 = this ;
      test_1 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 88)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_templateGetterCallInExpressionAST temp_4 = this ;
        test_1 = extensionGetter_definition (var_receiverType_3913, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 89)).readProperty_propertyMap ().getter_hasKey (temp_4.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 89)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_templateGetterCallInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead of func call"), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 90)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_getterMap var_getterMap_4436 = extensionGetter_definition (var_receiverType_3913, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 93)).readProperty_getterMap () ;
    GGS_functionSignature var_getterFormalArgumentTypeList_4535 ;
    GGS_methodKind var_kind_4584 ;
    GGS_bool var_hasCompilerArgument_4603 ;
    GGS_unifiedTypeMapEntry var_returnedType_4652 ;
    GGS_stringlist var_fieldList_4673 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
    const GGS_templateGetterCallInExpressionAST temp_7 = this ;
    GGS_string var_actualGetterName_4708 = temp_7.readProperty_mGetterName ().readProperty_string () ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_templateGetterCallInExpressionAST temp_9 = this ;
      test_8 = var_getterMap_4436.getter_hasKey (temp_9.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 101)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GGS_string var_actualGetterNameString_4997 ;
        const GGS_templateGetterCallInExpressionAST temp_10 = this ;
        GGS_location joker_4915 ; // Joker input parameter
        GGS_methodQualifier joker_4980 ; // Joker input parameter
        var_getterMap_4436.method_searchKey (temp_10.readProperty_mGetterName (), var_kind_4584, var_getterFormalArgumentTypeList_4535, joker_4915, var_hasCompilerArgument_4603, var_returnedType_4652, joker_4980, var_actualGetterNameString_4997, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 102)) ;
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, var_actualGetterNameString_4997.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_templateGetterCallInExpressionAST temp_12 = this ;
            GenericArray <FixItDescription> fixItArray13 ;
            appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, var_actualGetterName_4708) ;
            inCompiler->emitSemanticError (temp_12.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 112)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GGS_uint var_matchingReaderCount_5188 = GGS_uint (uint32_t (0U)) ;
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3913, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 116)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas3", 116)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          var_getterFormalArgumentTypeList_4535 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
          var_hasCompilerArgument_4603 = GGS_bool (true) ;
          var_returnedType_4652 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("templateAnalysis.galgas3", 119)) ;
          var_kind_4584 = GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas3", 120)) ;
          UpEnumerator_typedPropertyList enumerator_5487 (extensionGetter_definition (var_receiverType_3913, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 121)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_5487.hasCurrentObject ()) {
            GGS_getterMap var_aMap_5570 = extensionGetter_definition (enumerator_5487.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 122)).readProperty_getterMap () ;
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              const GGS_templateGetterCallInExpressionAST temp_16 = this ;
              const GGS_getterMap_2E_element var_entry_5625 = var_aMap_5570.readSubscript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
              if (!var_aMap_5570.readSubscript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
                test_15 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_15) {
                var_matchingReaderCount_5188.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 124)) ;
                var_getterFormalArgumentTypeList_4535 = var_entry_5625.readProperty_mArgumentTypeList () ;
                var_hasCompilerArgument_4603 = var_entry_5625.readProperty_mHasCompilerArgument () ;
                var_returnedType_4652 = var_entry_5625.readProperty_mReturnedType () ;
                var_kind_4584 = var_entry_5625.readProperty_mKind () ;
                GalgasBool test_17 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_17) {
                  test_17 = GGS_bool (ComparisonKind::notEqual, var_entry_5625.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_17) {
                    var_actualGetterName_4708 = var_entry_5625.readProperty_mGetterNameThatObsoletesInvokationName () ;
                  }
                }
                var_fieldList_4673.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (enumerator_5487.current_name (HERE).readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 132)) ;
              }
            }
            enumerator_5487.gotoNextObject () ;
          }
          GalgasBool test_18 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_18) {
            test_18 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_5188.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
              const GGS_templateGetterCallInExpressionAST temp_19 = this ;
              const GGS_templateGetterCallInExpressionAST temp_20 = this ;
              GenericArray <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_19.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3965, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 137)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 137)).add_operation (temp_20.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 137)).add_operation (GGS_string ("' func, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 137)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 136)) ;
              var_getterFormalArgumentTypeList_4535.drop () ; // Release error dropped variable
              var_hasCompilerArgument_4603.drop () ; // Release error dropped variable
              var_returnedType_4652.drop () ; // Release error dropped variable
              var_kind_4584.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_18) {
            GalgasBool test_22 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_22) {
              test_22 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_5188.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_22) {
                GGS_string var_s_6533 = GGS_string::makeEmptyString () ;
                UpEnumerator_stringlist enumerator_6555 (var_fieldList_4673) ;
                while (enumerator_6555.hasCurrentObject ()) {
                  var_s_6533.plusAssignOperation(enumerator_6555.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 143)) ;
                  enumerator_6555.gotoNextObject () ;
                  if (enumerator_6555.hasCurrentObject ()) {
                    var_s_6533.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 144)) ;
                  }
                }
                const GGS_templateGetterCallInExpressionAST temp_23 = this ;
                const GGS_templateGetterCallInExpressionAST temp_24 = this ;
                GenericArray <FixItDescription> fixItArray25 ;
                inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3965, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 147)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 147)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 147)).add_operation (GGS_string ("' func, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 147)).add_operation (var_s_6533, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 148)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 148)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 146)) ;
                var_getterFormalArgumentTypeList_4535.drop () ; // Release error dropped variable
                var_hasCompilerArgument_4603.drop () ; // Release error dropped variable
                var_returnedType_4652.drop () ; // Release error dropped variable
                var_kind_4584.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        GalgasBool test_26 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_26) {
          test_26 = GGS_bool (ComparisonKind::equal, var_getterMap_4436.getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 151)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_26) {
            const GGS_templateGetterCallInExpressionAST temp_27 = this ;
            GenericArray <FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3965, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 153)).add_operation (GGS_string ("' type does not define any func"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 153)), fixItArray28  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 152)) ;
            var_getterFormalArgumentTypeList_4535.drop () ; // Release error dropped variable
            var_hasCompilerArgument_4603.drop () ; // Release error dropped variable
            var_returnedType_4652.drop () ; // Release error dropped variable
            var_kind_4584.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_26) {
          const GGS_templateGetterCallInExpressionAST temp_29 = this ;
          const GGS_templateGetterCallInExpressionAST temp_30 = this ;
          GenericArray <FixItDescription> fixItArray31 ;
          appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, var_getterMap_4436.getter_keyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 159))) ;
          inCompiler->emitSemanticError (temp_29.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3965, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 157)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 157)).add_operation (temp_30.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 157)).add_operation (GGS_string ("' func"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 157)), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 156)) ;
          var_getterFormalArgumentTypeList_4535.drop () ; // Release error dropped variable
          var_hasCompilerArgument_4603.drop () ; // Release error dropped variable
          var_returnedType_4652.drop () ; // Release error dropped variable
          var_kind_4584.drop () ; // Release error dropped variable
        }
      }
    }
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      const GGS_templateGetterCallInExpressionAST temp_33 = this ;
      test_32 = GGS_bool (ComparisonKind::notEqual, temp_33.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 163)).objectCompare (var_getterFormalArgumentTypeList_4535.getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 163)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        const GGS_templateGetterCallInExpressionAST temp_34 = this ;
        const GGS_templateGetterCallInExpressionAST temp_35 = this ;
        const GGS_templateGetterCallInExpressionAST temp_36 = this ;
        GenericArray <FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (temp_34.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_35.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 164)).add_operation (GGS_string ("' func of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 164)).add_operation (var_receiverTypeName_3965, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 164)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 164)).add_operation (var_getterFormalArgumentTypeList_4535.getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 165)).getter_string (SOURCE_FILE ("templateAnalysis.galgas3", 165)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 164)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 165)).add_operation (temp_36.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 166)).getter_string (SOURCE_FILE ("templateAnalysis.galgas3", 166)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 165)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 166)), fixItArray37  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 164)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_32) {
      GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_7954 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_templateGetterCallInExpressionAST temp_38 = this ;
      UpEnumerator_templateExpressionListAST enumerator_8033 (temp_38.readProperty_mExpressionList ()) ;
      UpEnumerator_functionSignature enumerator_8132 (var_getterFormalArgumentTypeList_4535) ;
      while (enumerator_8033.hasCurrentObject () && enumerator_8132.hasCurrentObject ()) {
        GalgasBool test_39 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_39) {
          test_39 = GGS_bool (ComparisonKind::notEqual, enumerator_8132.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8033.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_39) {
            GGS_string temp_40 ;
            const GalgasBool test_41 = GGS_bool (ComparisonKind::notEqual, enumerator_8132.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_41) {
              temp_40 = enumerator_8132.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 172)) ;
            }else if (GalgasBool::boolFalse == test_41) {
              temp_40 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_8257 = GGS_string ("!").add_operation (temp_40, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 172)) ;
            GenericArray <FixItDescription> fixItArray42 ;
            appendFixItActions (fixItArray42, EnumFixItKind::fixItReplace, var_s_8257) ;
            inCompiler->emitSemanticError (enumerator_8033.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_8257, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 173)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 173)), fixItArray42  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 173)) ;
          }
        }
        GGS_semanticExpressionForGeneration var_exp_8667 ;
        callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_8033.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_8667, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 175)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8132.current_mFormalArgumentType (HERE), var_exp_8667.readProperty_mResultType (), enumerator_8033.current_mEndOfExpressionLocation (HERE), var_exp_8667, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 182)) ;
        }
        var_constructorEffectiveParameterList_7954.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_exp_8667, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 183)) ;
        enumerator_8033.gotoNextObject () ;
        enumerator_8132.gotoNextObject () ;
      }
      GalgasBool test_43 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_43) {
        const GGS_templateGetterCallInExpressionAST temp_44 = this ;
        test_43 = GGS_bool (ComparisonKind::notEqual, var_actualGetterName_4708.objectCompare (temp_44.readProperty_mGetterName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_43) {
          const GGS_templateGetterCallInExpressionAST temp_45 = this ;
          GenericArray <FixItDescription> fixItArray46 ;
          appendFixItActions (fixItArray46, EnumFixItKind::fixItReplace, var_actualGetterName_4708) ;
          inCompiler->emitSemanticError (temp_45.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray46  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 186)) ;
        }
      }
      const GGS_templateGetterCallInExpressionAST temp_47 = this ;
      outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_4652, temp_47.readProperty_mGetterName ().readProperty_location (), var_kind_4584, var_receiverExpression_3863, var_fieldList_4673, var_actualGetterName_4708, var_constructorEffectiveParameterList_7954, var_hasCompilerArgument_4603, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateClassFunctionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateClassFunctionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateClassFunctionAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_constructorType_9875 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 213)) ;
  GGS_classFunctionMap var_classFunctionMap_10008 = extensionGetter_definition (var_constructorType_9875, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 215)).readProperty_classFunctionMap () ;
  GGS_unifiedTypeMapEntry var_returnedType_10126 ;
  GGS_bool var_hasCompilerArgument_10151 ;
  GGS_functionSignature var_classFuncFormalArgumentTypeList_10196 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateClassFunctionAST temp_2 = this ;
    const GGS_classFunctionMap_2E_element var_entry_10237 = var_classFunctionMap_10008.readSubscript__3F_ (temp_2.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_classFunctionMap_10008.readSubscript__3F_ (temp_2.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      var_classFuncFormalArgumentTypeList_10196 = var_entry_10237.readProperty_mArgumentTypeList () ;
      var_hasCompilerArgument_10151 = var_entry_10237.readProperty_mHasCompilerArgument () ;
      var_returnedType_10126 = var_entry_10237.readProperty_mReturnedType () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_10008.getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 225)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_templateClassFunctionAST temp_4 = this ;
        const GGS_templateClassFunctionAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 227)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 227)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 226)) ;
        var_classFuncFormalArgumentTypeList_10196.drop () ; // Release error dropped variable
        var_hasCompilerArgument_10151.drop () ; // Release error dropped variable
        var_returnedType_10126.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_templateClassFunctionAST temp_7 = this ;
      const GGS_templateClassFunctionAST temp_8 = this ;
      const GGS_templateClassFunctionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, EnumFixItKind::fixItReplace, var_classFunctionMap_10008.getter_keyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 233))) ;
      inCompiler->emitSemanticError (temp_7.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_8.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 231)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 231)).add_operation (temp_9.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 231)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 231)), fixItArray10  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 230)) ;
      var_classFuncFormalArgumentTypeList_10196.drop () ; // Release error dropped variable
      var_hasCompilerArgument_10151.drop () ; // Release error dropped variable
      var_returnedType_10126.drop () ; // Release error dropped variable
    }
  }
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_11044 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GGS_semanticExpressionListForGeneration var_classFunctionEffectiveParameterList_11107 ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_templateClassFunctionAST temp_12 = this ;
    test_11 = GGS_bool (ComparisonKind::notEqual, temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 239)).objectCompare (var_classFuncFormalArgumentTypeList_10196.getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 239)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_templateClassFunctionAST temp_13 = this ;
      const GGS_templateClassFunctionAST temp_14 = this ;
      const GGS_templateClassFunctionAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_14.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 241)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 241)).add_operation (extensionGetter_definition (var_constructorType_9875, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 241)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 241)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 241)).add_operation (var_classFuncFormalArgumentTypeList_10196.getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 242)).getter_string (SOURCE_FILE ("templateAnalysis.galgas3", 242)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 241)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 242)).add_operation (temp_15.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 243)).getter_string (SOURCE_FILE ("templateAnalysis.galgas3", 243)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 242)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 243)), fixItArray16  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 240)) ;
      var_classFunctionEffectiveParameterList_11107.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_11) {
    var_classFunctionEffectiveParameterList_11107 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_templateClassFunctionAST temp_17 = this ;
    UpEnumerator_templateExpressionListAST enumerator_11711 (temp_17.readProperty_mExpressionList ()) ;
    UpEnumerator_functionSignature enumerator_11800 (var_classFuncFormalArgumentTypeList_10196) ;
    while (enumerator_11711.hasCurrentObject () && enumerator_11800.hasCurrentObject ()) {
      {
      var_requiredTypes_11044.setter_append (enumerator_11800.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 248)) ;
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::notEqual, enumerator_11800.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_11711.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GGS_string temp_19 ;
          const GalgasBool test_20 = GGS_bool (ComparisonKind::notEqual, enumerator_11800.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            temp_19 = enumerator_11800.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 250)) ;
          }else if (GalgasBool::boolFalse == test_20) {
            temp_19 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_11976 = GGS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 250)) ;
          GenericArray <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, EnumFixItKind::fixItReplace, var_s_11976) ;
          inCompiler->emitSemanticError (enumerator_11711.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11976, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 251)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 251)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 251)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_exp_12370 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_11711.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_12370, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 253)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11800.current_mFormalArgumentType (HERE), var_exp_12370.readProperty_mResultType (), enumerator_11711.current_mEndOfExpressionLocation (HERE), var_exp_12370, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 260)) ;
      }
      var_classFunctionEffectiveParameterList_11107.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_exp_12370, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 261)) ;
      enumerator_11711.gotoNextObject () ;
      enumerator_11800.gotoNextObject () ;
    }
  }
  const GGS_templateClassFunctionAST temp_22 = this ;
  const GGS_templateClassFunctionAST temp_23 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_10126, temp_22.readProperty_mClassFunctionName ().readProperty_location (), var_constructorType_9875, temp_23.readProperty_mClassFunctionName ().readProperty_string (), var_classFunctionEffectiveParameterList_11107, var_hasCompilerArgument_10151, var_requiredTypes_11044, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFileWrapperTemplateCallAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mFileWrapperName ().readProperty_location (), GGS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 287)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateAndOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateAndOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14336 ;
  const GGS_templateAndOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_14336, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 302)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14582 ;
  const GGS_templateAndOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_14582, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 310)) ;
  {
  const GGS_templateAndOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14336.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 319)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas3", 319)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 319)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14336, var_rightExpression_14582, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 318)) ;
  }
  const GGS_templateAndOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14336.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14336, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas3", 330)), var_rightExpression_14582, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateOrOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateOrOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_15689 ;
  const GGS_templateOrOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_15689, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 345)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_15935 ;
  const GGS_templateOrOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_15935, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 353)) ;
  {
  const GGS_templateOrOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_15689.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 362)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas3", 362)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 362)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_15689, var_rightExpression_15935, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 361)) ;
  }
  const GGS_templateOrOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_15689.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_15689, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas3", 373)), var_rightExpression_15935, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateXorOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateXorOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_17041 ;
  const GGS_templateXorOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_17041, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 388)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_17287 ;
  const GGS_templateXorOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_17287, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 396)) ;
  {
  const GGS_templateXorOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_17041.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 405)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas3", 405)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 405)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_17041, var_rightExpression_17287, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 404)) ;
  }
  const GGS_templateXorOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_17041.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_17041, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas3", 416)), var_rightExpression_17287, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateTrueBoolAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateTrueBoolAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                  GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                  const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                  GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateTrueBoolAST temp_0 = this ;
  outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateFalseBoolAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFalseBoolAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                   GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                   const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFalseBoolAST temp_0 = this ;
  outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralStringExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralStringExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_19274 = GGS_string::makeEmptyString () ;
  const GGS_templateLiteralStringExpressionAST temp_0 = this ;
  UpEnumerator_stringlist enumerator_19288 (temp_0.readProperty_mLiteralStringList ()) ;
  while (enumerator_19288.hasCurrentObject ()) {
    var_s_19274.plusAssignOperation(enumerator_19288.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 456)) ;
    enumerator_19288.gotoNextObject () ;
  }
  const GGS_templateLiteralStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_19274, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralUIntExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralUIntExpressionAST temp_0 = this ;
  const GGS_templateLiteralUIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralCharExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralCharExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralCharExpressionAST temp_0 = this ;
  const GGS_templateLiteralCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mLiteralChar ().readProperty_location (), temp_1.readProperty_mLiteralChar ().readProperty_char (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralDoubleExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralDoubleExpressionAST temp_0 = this ;
  const GGS_templateLiteralDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalDoubleExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mLiteralDouble ().readProperty_location (), temp_1.readProperty_mLiteralDouble ().readProperty_double (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateNotOperatorAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateNotOperatorAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_21880 ;
  const GGS_templateNotOperatorAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_21880, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 517)) ;
  GGS_unifiedTypeMapEntry var_type_21956 = var_expression_21880.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_21956, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 526)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas3", 526)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 526)).operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 526)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateNotOperatorAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_21956, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 528)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 528)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 528)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 527)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateNotOperatorAST temp_4 = this ;
    outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_21956, temp_4.readProperty_mOperatorLocation (), var_expression_21880, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLogicalNegateAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLogicalNegateAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_22969 ;
  const GGS_templateLogicalNegateAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_22969, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 550)) ;
  GGS_unifiedTypeMapEntry var_type_23045 = var_expression_22969.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_23045, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 559)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas3", 559)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 559)).operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 559)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateLogicalNegateAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_23045, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 561)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 561)).add_operation (GGS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 561)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 560)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateLogicalNegateAST temp_4 = this ;
    outArgument_outExpression = GGS_tildeExpressionForGeneration::init_21__21__21_ (var_type_23045, temp_4.readProperty_mOperatorLocation (), var_expression_22969, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateTestDynamicClassAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_24105 ;
  const GGS_templateTestDynamicClassAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_24105, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 582)) ;
  const GGS_templateTestDynamicClassAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_castType_24154 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 590)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_24105.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 592)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas3", 592)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_24401 = var_castType_24154 ;
      GGS_bool var_found_24428 = GGS_bool (ComparisonKind::equal, var_t_24401.objectCompare (var_expression_24105.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 596)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 596)).isValid ()) {
        uint32_t variant_24468 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 596)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 596)).uintValue () ;
        bool loop_24468 = true ;
        while (loop_24468) {
          loop_24468 = var_found_24428.operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 597)).operator_and (extensionGetter_definition (var_t_24401, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 597)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas3", 597)).operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 597)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 597)).isValid () ;
          if (loop_24468) {
            loop_24468 = var_found_24428.operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 597)).operator_and (extensionGetter_definition (var_t_24401, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 597)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas3", 597)).operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 597)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 597)).boolValue () ;
          }
          if (loop_24468 && (0 == variant_24468)) {
            loop_24468 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas3", 596)) ;
          }
          if (loop_24468) {
            variant_24468 -= 1 ;
            var_t_24401 = extensionGetter_definition (var_t_24401, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 598)).readProperty_superType () ;
            var_found_24428 = GGS_bool (ComparisonKind::equal, var_t_24401.objectCompare (var_expression_24105.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_24428.operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 601)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_templateTestDynamicClassAST temp_4 = this ;
          const GGS_templateTestDynamicClassAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 603)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 603)).add_operation (extensionGetter_definition (var_expression_24105.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 603)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 603)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 603)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 602)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GenericArray <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_24105.readProperty_mLocation (), GGS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_24105.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 607)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 606)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 607)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 606)) ;
  }
  const GGS_templateTestDynamicClassAST temp_8 = this ;
  outArgument_outExpression = GGS_testDynamicClassInExpressionForGeneration::init_21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_24105, var_castType_24154, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateOptionAccessAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateOptionAccessAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateOptionAccessAST temp_0 = this ;
  GGS_lstring var_usefulnessName_25641 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 627)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_25641 COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 628)) ;
  }
  GGS_bool var_optionComponentIsPredefined_25947 ;
  GGS_commandLineOptionMap var_boolOptionMap_26007 ;
  GGS_commandLineOptionMap var_uintOptionMap_26053 ;
  GGS_commandLineOptionMap var_stringOptionMap_26099 ;
  GGS_commandLineOptionMap var_stringListOptionMap_26147 ;
  const GGS_templateOptionAccessAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_25947, var_boolOptionMap_26007, var_uintOptionMap_26053, var_stringOptionMap_26099, var_stringListOptionMap_26147, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 629)) ;
  const GGS_templateOptionAccessAST temp_2 = this ;
  GGS_bool var_found_26177 = var_boolOptionMap_26007.getter_hasKey (temp_2.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 637)) ;
  GGS_unifiedTypeMapEntry var_returnedType_26260 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_26177.operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 639)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_templateOptionAccessAST temp_4 = this ;
      var_found_26177 = var_uintOptionMap_26053.getter_hasKey (temp_4.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 640)) ;
      var_returnedType_26260 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_found_26177.operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 643)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_templateOptionAccessAST temp_6 = this ;
      var_found_26177 = var_stringOptionMap_26099.getter_hasKey (temp_6.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 644)) ;
      var_returnedType_26260 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_found_26177.operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 647)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_templateOptionAccessAST temp_8 = this ;
      var_found_26177 = var_stringListOptionMap_26147.getter_hasKey (temp_8.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 648)) ;
      var_returnedType_26260 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_found_26177.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_templateOptionAccessAST temp_11 = this ;
        test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("value"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_templateOptionAccessAST temp_12 = this ;
          const GGS_templateOptionAccessAST temp_13 = this ;
          const GGS_templateOptionAccessAST temp_14 = this ;
          outArgument_outExpression = GGS_optionValueExpressionForGeneration::init_21__21__21__21__21_ (var_returnedType_26260, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_25947, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_templateOptionAccessAST temp_16 = this ;
          test_15 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("char"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_templateOptionAccessAST temp_17 = this ;
            const GGS_templateOptionAccessAST temp_18 = this ;
            const GGS_templateOptionAccessAST temp_19 = this ;
            outArgument_outExpression = GGS_optionCharExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_25947, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
          }
        }
        if (GalgasBool::boolFalse == test_15) {
          GalgasBool test_20 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_20) {
            const GGS_templateOptionAccessAST temp_21 = this ;
            test_20 = GGS_bool (ComparisonKind::equal, temp_21.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_20) {
              const GGS_templateOptionAccessAST temp_22 = this ;
              const GGS_templateOptionAccessAST temp_23 = this ;
              const GGS_templateOptionAccessAST temp_24 = this ;
              outArgument_outExpression = GGS_optionStringExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_25947, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
            }
          }
          if (GalgasBool::boolFalse == test_20) {
            GalgasBool test_25 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_25) {
              const GGS_templateOptionAccessAST temp_26 = this ;
              test_25 = GGS_bool (ComparisonKind::equal, temp_26.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("comment"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_25) {
                const GGS_templateOptionAccessAST temp_27 = this ;
                const GGS_templateOptionAccessAST temp_28 = this ;
                const GGS_templateOptionAccessAST temp_29 = this ;
                outArgument_outExpression = GGS_optionCommentExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_25947, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
              }
            }
            if (GalgasBool::boolFalse == test_25) {
              const GGS_templateOptionAccessAST temp_30 = this ;
              GenericArray <FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mGetterName ().readProperty_location (), GGS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 685)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_stringset var_s_28266 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    UpEnumerator_commandLineOptionMap enumerator_28294 (var_boolOptionMap_26007) ;
    while (enumerator_28294.hasCurrentObject ()) {
      var_s_28266.plusPlusAssignOperation (enumerator_28294.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 690)) ;
      enumerator_28294.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_28362 (var_uintOptionMap_26053) ;
    while (enumerator_28362.hasCurrentObject ()) {
      var_s_28266.plusPlusAssignOperation (enumerator_28362.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 693)) ;
      enumerator_28362.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_28430 (var_stringOptionMap_26099) ;
    while (enumerator_28430.hasCurrentObject ()) {
      var_s_28266.plusPlusAssignOperation (enumerator_28430.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 696)) ;
      enumerator_28430.gotoNextObject () ;
    }
    const GGS_templateOptionAccessAST temp_32 = this ;
    const GGS_templateOptionAccessAST temp_33 = this ;
    const GGS_templateOptionAccessAST temp_34 = this ;
    GenericArray <FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, EnumFixItKind::fixItReplace, var_s_28266) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 699)).add_operation (GGS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 699)).add_operation (temp_34.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 699)).add_operation (GGS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 699)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 698)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateFunctionCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFunctionCallAST temp_0 = this ;
  GGS_lstring var_usefulnessName_29219 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 716)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_29219 COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 717)) ;
  }
  GGS_functionSignature var_functionSignature_29533 ;
  GGS_unifiedTypeMapEntry var_resultType_29582 ;
  GGS_bool var_isInternal_29609 ;
  const GGS_templateFunctionCallAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_29533, var_resultType_29582, var_isInternal_29609, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 719)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_29609.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateFunctionCallAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_29674 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 727)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_templateFunctionCallAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 728)).objectCompare (var_procDeclarationLocation_29674.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 728)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_templateFunctionCallAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_29674.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 729)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 729)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 729)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 729)) ;
        }
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_templateFunctionCallAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_29533.getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 733)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 733)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_templateFunctionCallAST temp_10 = this ;
      const GGS_templateFunctionCallAST temp_11 = this ;
      const GGS_templateFunctionCallAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 735)).add_operation (GGS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 735)).add_operation (var_functionSignature_29533.getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 735)).getter_string (SOURCE_FILE ("templateAnalysis.galgas3", 735)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 735)).add_operation (GGS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 735)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 736)).getter_string (SOURCE_FILE ("templateAnalysis.galgas3", 736)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 736)).add_operation (GGS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 736)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 734)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GGS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_30388 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_templateFunctionCallAST temp_14 = this ;
    UpEnumerator_functionSignature enumerator_30512 (var_functionSignature_29533) ;
    UpEnumerator_templateExpressionListAST enumerator_30566 (temp_14.readProperty_mExpressionList ()) ;
    while (enumerator_30512.hasCurrentObject () && enumerator_30566.hasCurrentObject ()) {
      GGS_semanticExpressionForGeneration var_expression_30828 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_30566.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_30828, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 742)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_30512.current_mFormalArgumentType (HERE), var_expression_30828.readProperty_mResultType (), enumerator_30566.current_mEndOfExpressionLocation (HERE), var_expression_30828, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 749)) ;
      }
      var_semanticExpressionListForGeneration_30388.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_expression_30828, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 750)) ;
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_30512.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_30566.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_30512.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = enumerator_30512.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 752)) ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_31128 = GGS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 752)) ;
          GenericArray <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, EnumFixItKind::fixItReplace, var_s_31128) ;
          inCompiler->emitSemanticError (enumerator_30566.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_31128, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 753)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 753)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 753)) ;
        }
      }
      enumerator_30512.gotoNextObject () ;
      enumerator_30566.gotoNextObject () ;
    }
    const GGS_templateFunctionCallAST temp_19 = this ;
    const GGS_templateFunctionCallAST temp_20 = this ;
    outArgument_outExpression = GGS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_29582, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_30388, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateExtensionTemplateCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                               GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateExtensionTemplateCallAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mTemplateName ().readProperty_location (), GGS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 775)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateVarInExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_32887 ;
  GGS_string var_sourceVariableCppName_32898 ;
  const GGS_templateVarInExpressionAST temp_0 = this ;
  constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_0.readProperty_mVarName (), var_type_32887, var_sourceVariableCppName_32898, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 791)) ;
  const GGS_templateVarInExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_32887, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_32898, var_sourceVariableCppName_32898, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateAddOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateAddOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_33838 ;
  const GGS_templateAddOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_33838, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 811)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_34084 ;
  const GGS_templateAddOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_34084, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 819)) ;
  {
  const GGS_templateAddOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_33838.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 828)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas3", 828)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 828)), GGS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_33838, var_rightExpression_34084, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 827)) ;
  }
  const GGS_templateAddOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_33838.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_33838, GGS_binaryOperator::class_func_add (SOURCE_FILE ("templateAnalysis.galgas3", 839)), var_rightExpression_34084, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateSubOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSubOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_35334 ;
  const GGS_templateSubOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_35334, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 856)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_35580 ;
  const GGS_templateSubOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_35580, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 864)) ;
  {
  const GGS_templateSubOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_35334.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 873)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas3", 873)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 873)), GGS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_35334, var_rightExpression_35580, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 872)) ;
  }
  const GGS_templateSubOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_35334.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_35334, GGS_binaryOperator::class_func_sub (SOURCE_FILE ("templateAnalysis.galgas3", 884)), var_rightExpression_35580, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateMultiplyOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateMultiplyOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_36839 ;
  const GGS_templateMultiplyOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_36839, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 901)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_37085 ;
  const GGS_templateMultiplyOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_37085, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 909)) ;
  {
  const GGS_templateMultiplyOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_36839.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 918)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas3", 918)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 918)), GGS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_36839, var_rightExpression_37085, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 917)) ;
  }
  const GGS_templateMultiplyOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_36839.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_36839, GGS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas3", 929)), var_rightExpression_37085, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateDivideOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateDivideOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_38345 ;
  const GGS_templateDivideOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_38345, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 946)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_38591 ;
  const GGS_templateDivideOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_38591, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 954)) ;
  {
  const GGS_templateDivideOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_38345.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 963)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas3", 963)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 963)), GGS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_38345, var_rightExpression_38591, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 962)) ;
  }
  const GGS_templateDivideOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_38345.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_38345, GGS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas3", 974)), var_rightExpression_38591, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateModuloOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateModuloOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_39845 ;
  const GGS_templateModuloOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_39845, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 991)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_40091 ;
  const GGS_templateModuloOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_40091, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 999)) ;
  {
  const GGS_templateModuloOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_39845.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1008)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas3", 1008)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1008)), GGS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_39845, var_rightExpression_40091, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1007)) ;
  }
  const GGS_templateModuloOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_39845.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_39845, GGS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas3", 1019)), var_rightExpression_40091, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateUnaryMinusOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateUnaryMinusOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_41311 ;
  const GGS_templateUnaryMinusOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_41311, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1036)) ;
  GGS_unifiedTypeMapEntry var_type_41387 = var_expression_41311.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_41387, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1045)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas3", 1045)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1045)).operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 1045)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateUnaryMinusOperationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_41387, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1047)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1047)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1047)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1046)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateUnaryMinusOperationAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_41387, temp_4.readProperty_mOperatorLocation (), var_expression_41311, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_42625 ;
  const GGS_structFieldAccessTemplateExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_42625, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1070)) ;
  GGS_unifiedTypeMapEntry var_type_42705 = var_expression_42625.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_bool test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_type_42705, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1079)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas3", 1079)))) ;
    if (GalgasBool::boolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_type_42705, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1079)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas3", 1079)).operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 1079)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_structFieldAccessTemplateExpressionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GGS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1080)) ;
    }
  }
  GGS_propertyMap var_propertyMap_42944 = extensionGetter_definition (var_type_42705, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1082)).readProperty_propertyMap () ;
  GGS_AccessControl var_accessControl_43040 ;
  const GGS_structFieldAccessTemplateExpressionAST temp_5 = this ;
  GGS_bool joker_43055 ; // Joker input parameter
  var_propertyMap_42944.method_searchKey (temp_5.readProperty_mStructFieldName (), var_accessControl_43040, joker_43055, var_type_42705, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1083)) ;
  const GGS_structFieldAccessTemplateExpressionAST temp_6 = this ;
  extensionMethod_checkSetAccess (var_accessControl_43040, GGS_selfAvailability::class_func_none (SOURCE_FILE ("templateAnalysis.galgas3", 1084)), temp_6.readProperty_mStructFieldName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1084)) ;
  const GGS_structFieldAccessTemplateExpressionAST temp_7 = this ;
  const GGS_structFieldAccessTemplateExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_type_42705, temp_7.readProperty_mOperatorLocation (), var_expression_42625, temp_8.readProperty_mStructFieldName ().readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_44064 ;
  const GGS_templateEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_44064, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1106)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_44314 ;
  const GGS_templateEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_44314, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1114)) ;
  {
  const GGS_templateEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_44064.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1123)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("templateAnalysis.galgas3", 1123)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1123)).operator_or (extensionGetter_definition (var_leftExpression_44064.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1123)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas3", 1123)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1123)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1123)), GGS_string ("=="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_44064, var_rightExpression_44314, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1122)) ;
  }
  const GGS_templateEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_44064, GGS_comparison::class_func_equal (SOURCE_FILE ("templateAnalysis.galgas3", 1134)), var_rightExpression_44314, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateNonEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_45496 ;
  const GGS_templateNonEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_45496, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1149)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_45746 ;
  const GGS_templateNonEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_45746, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1157)) ;
  {
  const GGS_templateNonEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_45496.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1166)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("templateAnalysis.galgas3", 1166)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1166)).operator_or (extensionGetter_definition (var_leftExpression_45496.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1166)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas3", 1166)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1166)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1166)), GGS_string ("!="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_45496, var_rightExpression_45746, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1165)) ;
  }
  const GGS_templateNonEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_45496, GGS_comparison::class_func_notEqual (SOURCE_FILE ("templateAnalysis.galgas3", 1177)), var_rightExpression_45746, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateStrictInfTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_46932 ;
  const GGS_templateStrictInfTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_46932, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1192)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_47182 ;
  const GGS_templateStrictInfTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_47182, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1200)) ;
  {
  const GGS_templateStrictInfTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_46932.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1209)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas3", 1209)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1209)), GGS_string ("<"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_46932, var_rightExpression_47182, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1208)) ;
  }
  const GGS_templateStrictInfTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_46932, GGS_comparison::class_func_lowerThan (SOURCE_FILE ("templateAnalysis.galgas3", 1220)), var_rightExpression_47182, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInfOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_48297 ;
  const GGS_templateInfOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_48297, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1235)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_48547 ;
  const GGS_templateInfOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_48547, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1243)) ;
  {
  const GGS_templateInfOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_48297.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1252)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas3", 1252)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1252)), GGS_string ("<="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_48297, var_rightExpression_48547, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1251)) ;
  }
  const GGS_templateInfOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_48297, GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas3", 1263)), var_rightExpression_48547, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateStrictSupTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_49665 ;
  const GGS_templateStrictSupTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_49665, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1278)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_49915 ;
  const GGS_templateStrictSupTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_49915, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1286)) ;
  {
  const GGS_templateStrictSupTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_49665.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1295)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas3", 1295)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1295)), GGS_string (">"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_49665, var_rightExpression_49915, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1294)) ;
  }
  const GGS_templateStrictSupTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_49665, GGS_comparison::class_func_greaterThan (SOURCE_FILE ("templateAnalysis.galgas3", 1306)), var_rightExpression_49915, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateSupOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_51032 ;
  const GGS_templateSupOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_51032, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1321)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_51282 ;
  const GGS_templateSupOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_51282, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1329)) ;
  {
  const GGS_templateSupOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_51032.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1338)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas3", 1338)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1338)), GGS_string (">="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_51032, var_rightExpression_51282, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1337)) ;
  }
  const GGS_templateSupOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_51032, GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas3", 1349)), var_rightExpression_51282, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLeftShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_52407 ;
  const GGS_templateLeftShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_52407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1364)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_52657 ;
  const GGS_templateLeftShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_52657, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1372)) ;
  GGS_unifiedTypeMapEntry var_leftType_52739 = var_leftExpression_52407.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_52804 = var_rightExpression_52657.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_52739, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1382)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas3", 1382)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1382)).operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 1382)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateLeftShiftOperationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_52739, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1384)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1384)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1384)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1383)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_52804, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1386)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateLeftShiftOperationAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_52804, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1388)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1388)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1388)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1387)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateLeftShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_52739, temp_8.readProperty_mOperatorLocation (), var_leftExpression_52407, GGS_binaryOperator::class_func_leftShift (SOURCE_FILE ("templateAnalysis.galgas3", 1396)), var_rightExpression_52657, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateRightShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_54188 ;
  const GGS_templateRightShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_54188, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1412)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_54438 ;
  const GGS_templateRightShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_54438, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1420)) ;
  GGS_unifiedTypeMapEntry var_leftType_54520 = var_leftExpression_54188.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_54585 = var_rightExpression_54438.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_54520, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1430)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas3", 1430)) COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1430)).operator_not (SOURCE_FILE ("templateAnalysis.galgas3", 1430)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateRightShiftOperationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_54520, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1432)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1432)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1432)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1431)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_54585, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1434)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateRightShiftOperationAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_54585, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1436)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1436)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1436)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1435)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateRightShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_54520, temp_8.readProperty_mOperatorLocation (), var_leftExpression_54188, GGS_binaryOperator::class_func_rightShift (SOURCE_FILE ("templateAnalysis.galgas3", 1444)), var_rightExpression_54438, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      const GGS_templateInstructionListAST constinArgument_inInstructionList,
                                                                      GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_templateInstructionListAST enumerator_56320 (constinArgument_inInstructionList) ;
  while (enumerator_56320.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((cPtr_templateInstructionAST *) enumerator_56320.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1474)) ;
    enumerator_56320.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionStringAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                            GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringAST temp_0 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionStringForGeneration::init_21_ (temp_0.readProperty_mTemplateString (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1493)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionExpressionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_57676 ;
  const GGS_templateInstructionExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_57676, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1505)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_57676.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1512)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GGS_string ("expression type should be '@string' (it is '@").add_operation (extensionGetter_definition (var_expression_57676.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1513)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1513)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1513)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1513)) ;
    }
  }
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionExpressionForGeneration::init_21_ (var_expression_57676, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1515)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateBlockInstructionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_58567 ;
  const GGS_templateBlockInstructionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_58567, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1527)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_58567.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1534)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bigint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_getterCallExpressionForGeneration var_conversionExpression_58662 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_expression_58567.readProperty_mResultType (), var_expression_58567.readProperty_mLocation (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas3", 1538)), var_expression_58567, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_string ("uint"), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE) ;
      var_expression_58567 = var_conversionExpression_58662 ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_58567.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1546)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_templateBlockInstructionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mLocation (), GGS_string ("expression type should be '@uint' (it is '@").add_operation (extensionGetter_definition (var_expression_58567.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1547)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1547)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1547)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1547)) ;
      }
    }
  }
  GGS_templateInstructionListForGeneration var_blockInstructionList_59131 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateBlockInstructionAST temp_5 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mBlockInstructionList (), var_blockInstructionList_59131, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1550)) ;
  }
  const GGS_templateBlockInstructionAST temp_6 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateBlockInstructionForGeneration::init_21__21__21_ (var_expression_58567, temp_6.readProperty_mLocation (), var_blockInstructionList_59131, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1558)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                       GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                       const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                       GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionGetColumnLocationForGeneration::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1570)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                        const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionGotoColumnLocationForGeneration::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1582)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionIfAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_61020 = GGS_templateInstructionIfBranchListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_templateInstructionIfAST temp_0 = this ;
  UpEnumerator_templateInstructionIfBranchListAST enumerator_61122 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_61122.hasCurrentObject ()) {
    GGS_semanticExpressionForGeneration var_expression_61352 ;
    callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_61122.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_61352, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1597)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_61352.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1604)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_61352.readProperty_mLocation (), GGS_string ("'if' expression type should be '@bool' (it is '@").add_operation (extensionGetter_definition (var_expression_61352.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1605)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1605)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1605)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1605)) ;
      }
    }
    GGS_templateInstructionListForGeneration var_instructionList_61604 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
    {
    routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_61122.current_mInstructionList (HERE), var_instructionList_61604, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1608)) ;
    }
    var_templateInstructionIfBranchList_61020.plusPlusAssignOperation (GGS_templateInstructionIfBranchListForGeneration_2E_element::init_21__21_ (var_expression_61352, var_instructionList_61604, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1616)) ;
    enumerator_61122.gotoNextObject () ;
  }
  GGS_templateInstructionListForGeneration var_elseInstructionList_61960 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionIfAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_61960, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1620)) ;
  }
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionIfForGeneration::init_21__21_ (var_templateInstructionIfBranchList_61020, var_elseInstructionList_61960, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 1629)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionSwitchAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_switchExpression_5609 ;
  const GGS_templateInstructionSwitchAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_switchExpression_5609, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 140)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_enumType var_enumType_5639 = extensionGetter_definition (var_switchExpression_5609.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 147)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas3", 147)).unwrappedValue () ;
    if (!extensionGetter_definition (var_switchExpression_5609.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 147)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas3", 147)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GGS_stringset var_constantsNamedInSwitchInstruction_5735 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      GGS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_5858 = GGS_templateInstructionSwitchBranchListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_templateInstructionSwitchAST temp_2 = this ;
      UpEnumerator_templateInstructionSwitchBranchListAST enumerator_5965 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
      while (enumerator_5965.hasCurrentObject ()) {
        GGS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_6075 = GGS_extractedAssociatedValuesForGeneration::init (inCompiler COMMA_HERE) ;
        GGS_templateAnalysisContext var_analysisContext_6130 = constinArgument_inAnalysisContext ;
        UpEnumerator__5B_lstring_5D_ enumerator_6192 (enumerator_5965.current_constantList (HERE)) ;
        while (enumerator_6192.hasCurrentObject ()) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_enumType_5639.readProperty_constantMap ().getter_hasKey (enumerator_6192.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 155)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = var_constantsNamedInSwitchInstruction_5735.getter_hasKey (enumerator_6192.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 156)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (enumerator_6192.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6192.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 158)).add_operation (GGS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 158)), fixItArray5  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 157)) ;
                }
              }
              var_constantsNamedInSwitchInstruction_5735.plusPlusAssignOperation (enumerator_6192.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 160)) ;
              GGS_associatedValueDescriptorList var_associatedTypeList_6664 ;
              GGS_uint joker_6624 ; // Joker input parameter
              var_enumType_5639.readProperty_constantMap ().method_searchKey (enumerator_6192.current (HERE), joker_6624, var_associatedTypeList_6664, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 161)) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6664.getter_count (SOURCE_FILE ("template-switch-instruction.galgas3", 162)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_5965.current_associatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas3", 162)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 162)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_6192.current (HERE).readProperty_location (), GGS_string ("the associated values of '").add_operation (enumerator_6192.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 164)).add_operation (GGS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 164)), fixItArray7  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 163)) ;
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_associatedTypeList_6664.getter_count (SOURCE_FILE ("template-switch-instruction.galgas3", 165)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_5965.current_associatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas3", 165)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 165)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (enumerator_6192.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6192.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 167)).add_operation (GGS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 167)), fixItArray9  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 166)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::notEqual, var_associatedTypeList_6664.getter_count (SOURCE_FILE ("template-switch-instruction.galgas3", 168)).objectCompare (enumerator_5965.current_associatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas3", 168)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GGS_string temp_11 ;
                      const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6664.getter_count (SOURCE_FILE ("template-switch-instruction.galgas3", 171)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_12) {
                        temp_11 = GGS_string ("s") ;
                      }else if (GalgasBool::boolFalse == test_12) {
                        temp_11 = GGS_string::makeEmptyString () ;
                      }
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_6192.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6192.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 170)).add_operation (GGS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 170)).add_operation (var_associatedTypeList_6664.getter_count (SOURCE_FILE ("template-switch-instruction.galgas3", 170)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas3", 170)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 170)).add_operation (GGS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 170)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 170)), fixItArray13  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 169)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    UpEnumerator_associatedValueDescriptorList enumerator_7449 (var_associatedTypeList_6664) ;
                    UpEnumerator_switchExtractedValuesListAST enumerator_7514 (enumerator_5965.current_associatedValuesExtraction (HERE)) ;
                    GGS_uint index_7431 (uint32_t (0)) ;
                    while (enumerator_7449.hasCurrentObject () && enumerator_7514.hasCurrentObject ()) {
                      GalgasBool test_14 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_14) {
                        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_7514.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_14) {
                          GalgasBool test_15 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_15) {
                            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_7449.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 175)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_7514.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                            if (GalgasBool::boolTrue == test_15) {
                              GenericArray <FixItDescription> fixItArray16 ;
                              inCompiler->emitSemanticError (enumerator_7514.current_mExtractedValueTypeName (HERE).readProperty_location (), GGS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_7449.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 176)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 176)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 176)), fixItArray16  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 176)) ;
                            }
                          }
                        }
                      }
                      GGS_string var_cppName_7920 = GGS_string ("extractedValue_").add_operation (enumerator_7514.current_mExtractedValueName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 179)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas3", 179)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 179)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 179)).add_operation (enumerator_7514.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 180)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 180)).add_operation (index_7431.getter_string (SOURCE_FILE ("template-switch-instruction.galgas3", 180)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 180)) ;
                      var_extractedAssociatedValuesForGeneration_6075.plusPlusAssignOperation (GGS_extractedAssociatedValuesForGeneration_2E_element::init_21__21__21_ (enumerator_7449.current (HERE).readProperty_type (), var_cppName_7920, enumerator_7449.current (HERE).readProperty_name (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 181)) ;
                      GalgasBool test_17 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_17) {
                        test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_7514.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_17) {
                          {
                          var_analysisContext_6130.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_7514.current_mExtractedValueName (HERE), enumerator_7449.current (HERE).readProperty_type (), var_cppName_7920, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 186)) ;
                          }
                        }
                      }
                      enumerator_7449.gotoNextObject () ;
                      enumerator_7514.gotoNextObject () ;
                      index_7431.increment_operation (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 173)) ;
                    }
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_6192.current (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_6192.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 196)).add_operation (GGS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 196)).add_operation (extensionGetter_definition (var_switchExpression_5609.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 197)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 196)).add_operation (GGS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 197)), fixItArray18  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 195)) ;
          }
          enumerator_6192.gotoNextObject () ;
        }
        GGS_templateInstructionListForGeneration var_templateInstructionList_8763 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
        {
        routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6130, ioArgument_ioTypeMap, enumerator_5965.current_instructionList (HERE), var_templateInstructionList_8763, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 201)) ;
        }
        var_templateInstructionSwitchBranchList_5858.plusPlusAssignOperation (GGS_templateInstructionSwitchBranchListForGeneration_2E_element::init_21__21__21__21_ (enumerator_5965.current_constantList (HERE), var_extractedAssociatedValuesForGeneration_6075, enumerator_5965.current_endOfBranch (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 212)), var_templateInstructionList_8763, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 209)) ;
        enumerator_5965.gotoNextObject () ;
      }
      GGS_stringset var_forgottenConstants_9283 = var_enumType_5639.readProperty_constantMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 217)).substract_operation (var_constantsNamedInSwitchInstruction_5735, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 217)) ;
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::greaterThan, var_forgottenConstants_9283.getter_count (SOURCE_FILE ("template-switch-instruction.galgas3", 218)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          GGS_string var_s_9427 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_9445 (var_forgottenConstants_9283) ;
          while (enumerator_9445.hasCurrentObject ()) {
            var_s_9427.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_9445.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 221)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 221)) ;
            enumerator_9445.gotoNextObject () ;
          }
          const GGS_templateInstructionSwitchAST temp_20 = this ;
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (temp_20.readProperty_switchExpressionEndLocation (), GGS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_9427, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 224)), fixItArray21  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 223)) ;
        }
      }
      ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionListForGeneration_2E_element::init_21_ (GGS_templateInstructionSwitchForGeneration::init_21__21__21_ (var_switchExpression_5609.readProperty_mResultType (), var_switchExpression_5609, var_templateInstructionSwitchBranchList_5858, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 227)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GenericArray <FixItDescription> fixItArray22 ;
    inCompiler->emitSemanticError (var_switchExpression_5609.readProperty_mLocation (), GGS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (extensionGetter_definition (var_switchExpression_5609.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 234)).readProperty_typeKind (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 233)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 233)).add_operation (GGS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 234)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 233)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionSwitchForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                                 GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_switchVarCppName_11502 ;
  const GGS_templateInstructionSwitchForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_switchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_11502, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 267)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_switchVarCppName_11502, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 275)).add_operation (GGS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 275)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 275)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 276)) ;
  const GGS_templateInstructionSwitchForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_1.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 277)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 277)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::invalid :\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 278)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 279)) ;
  const GGS_templateInstructionSwitchForGeneration temp_2 = this ;
  UpEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_11828 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
  while (enumerator_11828.hasCurrentObject ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_11898 (enumerator_11828.current (HERE).readProperty_mConstantList ()) ;
    while (enumerator_11898.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 283)) ;
      const GGS_templateInstructionSwitchForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_3.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 284)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 284)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::enum_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 285)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_11898.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas3", 286)).add_operation (GGS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 286)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 286)) ;
      enumerator_11898.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 288)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 289)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_11828.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas3", 290)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        UpEnumerator_extractedAssociatedValuesForGeneration enumerator_12347 (enumerator_11828.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12347.hasCurrentObject ()) {
          extensionMethod_addHeaderFileName (enumerator_12347.current (HERE).readProperty_mType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 292)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12347.current (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 293)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 293)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 293)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_12347.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 294)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 294)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 294)) ;
          enumerator_12347.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_switchVarCppName_11502, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 296)).add_operation (GGS_string (".getAssociatedValuesFor_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 296)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 296)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_11828.current (HERE).readProperty_mConstantList ().readSubscript__3F_ (GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas3", 297)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 297)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 297)) ;
        UpEnumerator_extractedAssociatedValuesForGeneration enumerator_12822 (enumerator_11828.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12822.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_12822.current (HERE).readProperty_mCppName (), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 299)) ;
          enumerator_12822.gotoNextObject () ;
          if (enumerator_12822.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 300)) ;
          }
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 302)) ;
      }
    }
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_11828.current (HERE).readProperty_mInstructionList ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas3", 304)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 305)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_11828.current (HERE).readProperty_mInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 306)) ;
        }
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 314)) ;
        }
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 316)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 317)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 318)) ;
    }
    enumerator_11828.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas3", 321)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@procDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_routineSignature_6950 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  UpEnumerator_formalParameterListAST enumerator_7023 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_7023.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_7118 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7023.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_7118, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 183)) ;
    }
    var_routineSignature_6950.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_7023.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_7118, enumerator_7023.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_7023.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 184)) ;
    enumerator_7023.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mRoutineInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 191)) ;
  {
  const GGS_procDeclarationAST temp_2 = this ;
  const GGS_procDeclarationAST temp_3 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_routineMap, temp_2.readProperty_mRoutineName (), var_routineSignature_6950, temp_3.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 193)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@procDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_routineSignature_8320 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  UpEnumerator_formalParameterListAST enumerator_8393 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_8393.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_8429 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8393.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 212)) ;
    var_routineSignature_8320.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_8393.current (HERE).readProperty_mFormalSelector (), var_parameterType_8429, enumerator_8393.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_8393.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 213)) ;
    enumerator_8393.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  GGS_lstring var_mangledName_8708 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_8320, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 219)) ;
  GGS_lstring var_nameForUsefulness_8819 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_8708, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 221)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8819, var_nameForUsefulness_8819, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 222)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_procDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_nameForUsefulness_8819, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 224)) ;
    }
  }
  GGS_analysisContext var_analysisContext_9099 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("procedure-declaration.galgas4", 231)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_instructionList_9557 ;
  GGS_formalParameterListForGeneration var_formalArgumentList_9585 ;
  {
  const GGS_procDeclarationAST temp_4 = this ;
  const GGS_procDeclarationAST temp_5 = this ;
  const GGS_procDeclarationAST temp_6 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_8819, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_9099, ioArgument_ioTypeMap, temp_4.readProperty_mFormalArgumentListAST (), temp_5.readProperty_mRoutineInstructionList (), temp_6.readProperty_mEndOfRoutineInstructionList (), var_instructionList_9557, var_formalArgumentList_9585, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 234)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_semanticDeclarationListForGeneration_2E_element::init_21_infoMessage_21_ (GGS_string ("proc ").add_operation (var_mangledName_8708.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 246)), GGS_routineImplementationForGeneration::init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_bool (true), GGS_string ("proc-").add_operation (var_mangledName_8708.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 249)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 249)), var_mangledName_8708.readProperty_string (), var_formalArgumentList_9585, GGS_bool (false), var_instructionList_9557, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 245)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@routineImplementationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_string & outArgument_outImplementation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_routineImplementationForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_generateHeader ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_routineImplementationForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (temp_2.readProperty_routineMangledName ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 279)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 279))  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 279)) ;
    }
  }
  GGS_string var_code_11437 ;
  {
  const GGS_routineImplementationForGeneration temp_3 = this ;
  const GGS_routineImplementationForGeneration temp_4 = this ;
  const GGS_routineImplementationForGeneration temp_5 = this ;
  const GGS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (temp_3.readProperty_mGenerateStatic (), GGS_string ("routine_").add_operation (temp_4.readProperty_routineMangledName ().getter_identifierRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 283)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 283)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_11437, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 281)) ;
  }
  const GGS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, temp_7.readProperty_routineMangledName (), var_code_11437 COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 294))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_classFuncExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_typeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_classFuncExpressionAST temp_2 = this ;
      GGS_unifiedTypeMapEntry joker_5235 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_typeName (), joker_5235, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 137)) ;
      }
    }
  }
  const GGS_classFuncExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_expressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 139)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedType_6311 ;
  GGS_unifiedTypeMapEntry var_classFuncType_6357 ;
  GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_6420 ;
  GGS_bool var_hasCompilerArgument_6472 ;
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_6527 ;
  {
  const GGS_classFuncExpressionAST temp_0 = this ;
  const GGS_classFuncExpressionAST temp_1 = this ;
  const GGS_classFuncExpressionAST temp_2 = this ;
  const GGS_classFuncExpressionAST temp_3 = this ;
  routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_typeName (), temp_1.readProperty_classFuncName (), temp_2.readProperty_expressions (), temp_3.readProperty_locationForOldStyleCollectionInitializerError (), var_returnedType_6311, var_classFuncType_6357, var_constructorEffectiveParameterList_6420, var_hasCompilerArgument_6472, var_requiredTypes_6527, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 152)) ;
  }
  const GGS_classFuncExpressionAST temp_4 = this ;
  GGS_lstring var_constructorTypeUsefulnessName_6555 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_classFuncType_6357, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 169)).readProperty_typeName ().readProperty_string (), temp_4.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 169)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_6555 COMMA_SOURCE_FILE ("expression-class-func.galgas4", 170)) ;
  }
  const GGS_classFuncExpressionAST temp_5 = this ;
  GGS_lstring var_returnedTypeUsefulnessName_6799 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_returnedType_6311, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 171)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 171)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_6799 COMMA_SOURCE_FILE ("expression-class-func.galgas4", 172)) ;
  }
  const GGS_classFuncExpressionAST temp_6 = this ;
  const GGS_classFuncExpressionAST temp_7 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_6311, temp_6.readProperty_classFuncName ().readProperty_location (), var_classFuncType_6357, temp_7.readProperty_classFuncName ().readProperty_string (), var_constructorEffectiveParameterList_6420, var_hasCompilerArgument_6472, var_requiredTypes_6527, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation?&??&&????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                       const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       const GGS_lstring constinArgument_inTypeName,
                                                                                                       const GGS_lstring constinArgument_inConstructorName,
                                                                                                       const GGS_actualOutputArgumentList constinArgument_inInitializerEffectiveParameterExpressions,
                                                                                                       const GGS_location /* constinArgument_inLocationForOldStyleCollectionInitializerError */,
                                                                                                       GGS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                                       GGS_unifiedTypeMapEntry & outArgument_outConstructorType,
                                                                                                       GGS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                                                                                       GGS_bool & outArgument_outHasCompilerArgument,
                                                                                                       GGS__5B_unifiedTypeMapEntry_5D_ & outArgument_outRequiredTypes,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outRequiredTypes.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  outArgument_outRequiredTypes = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outConstructorType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 209)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-class-func.galgas4", 211)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 212)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_classFunctionMap var_classFunctionMap_8957 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 217)).readProperty_classFunctionMap () ;
    GGS_functionSignature var_constructorFormalArgumentTypeList_9076 ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_classFunctionMap_2E_element var_entry_9121 = var_classFunctionMap_8957.readSubscript__3F_ (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_classFunctionMap_8957.readSubscript__3F_ (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        var_constructorFormalArgumentTypeList_9076 = var_entry_9121.readProperty_mArgumentTypeList () ;
        outArgument_outHasCompilerArgument = var_entry_9121.readProperty_mHasCompilerArgument () ;
        outArgument_outReturnedType = var_entry_9121.readProperty_mReturnedType () ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_8957.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 225)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 227)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 227)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 227)), fixItArray5  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 226)) ;
          var_constructorFormalArgumentTypeList_9076.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray6 ;
        appendFixItActions (fixItArray6, EnumFixItKind::fixItReplace, var_classFunctionMap_8957.getter_keyList (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 235))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 232)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 232)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 232)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 233)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 233)), fixItArray6  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 231)) ;
        var_constructorFormalArgumentTypeList_9076.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 239)).objectCompare (var_constructorFormalArgumentTypeList_9076.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 239)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 241)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 241)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 242)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 241)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 242)).add_operation (var_constructorFormalArgumentTypeList_9076.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 243)).getter_string (SOURCE_FILE ("expression-class-func.galgas4", 243)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 242)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 243)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 244)).getter_string (SOURCE_FILE ("expression-class-func.galgas4", 244)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 243)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 244)), fixItArray8  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 240)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    UpEnumerator_actualOutputArgumentList enumerator_10547 (constinArgument_inInitializerEffectiveParameterExpressions) ;
    UpEnumerator_functionSignature enumerator_10612 (var_constructorFormalArgumentTypeList_9076) ;
    while (enumerator_10547.hasCurrentObject () && enumerator_10612.hasCurrentObject ()) {
      {
      outArgument_outRequiredTypes.setter_append (enumerator_10612.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 249)) ;
      }
      GGS_semanticExpressionForGeneration var_exp_11049 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10547.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10612.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11049, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 250)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_10612.current (HERE).readProperty_mFormalArgumentType (), var_exp_11049.readProperty_mResultType (), enumerator_10547.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_11049, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 259)) ;
      }
      outArgument_outConstructorEffectiveParameterList.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_exp_11049, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 265)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::notEqual, enumerator_10612.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10547.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GGS_string temp_10 ;
          const GalgasBool test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_10612.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            temp_10 = enumerator_10612.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 268)) ;
          }else if (GalgasBool::boolFalse == test_11) {
            temp_10 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_11419 = GGS_string ("!").add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 267)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, EnumFixItKind::fixItReplace, var_s_11419) ;
          inCompiler->emitSemanticError (enumerator_10547.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11419, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 272)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 272)), fixItArray12  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 271)) ;
        }
      }
      enumerator_10547.gotoNextObject () ;
      enumerator_10612.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       GGS_string & outArgument_outCppExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classFuncExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 296)) ;
  const GGS_classFuncExpressionForGeneration temp_1 = this ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_12788 (temp_1.readProperty_requiredTypes ()) ;
  while (enumerator_12788.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12788.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 298)) ;
    enumerator_12788.gotoNextObject () ;
  }
  GGS_stringlist var_parameterList_12881 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_classFuncExpressionForGeneration temp_2 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_12910 (temp_2.readProperty_mEffectiveParameterList ()) ;
  while (enumerator_12910.hasCurrentObject ()) {
    GGS_string var_parameter_13144 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12910.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_13144, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 302)) ;
    var_parameterList_12881.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_parameter_13144, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 309)) ;
    enumerator_12910.gotoNextObject () ;
  }
  const GGS_classFuncExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_classFuncType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 311)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 311)) ;
  const GGS_classFuncExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string ("::class_func_").add_operation (temp_4.readProperty_classFuncName ().getter_identifierRepresentation (SOURCE_FILE ("expression-class-func.galgas4", 312)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 312)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 312)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 313)) ;
  UpEnumerator_stringlist enumerator_13409 (var_parameterList_12881) ;
  while (enumerator_13409.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_13409.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 315)) ;
    enumerator_13409.gotoNextObject () ;
    if (enumerator_13409.hasCurrentObject ()) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 316)) ;
    }
  }
  GGS_bool var_needsComma_13531 = GGS_bool (ComparisonKind::greaterThan, var_parameterList_12881.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 318)).objectCompare (GGS_uint (uint32_t (0U)))) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_classFuncExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_needsComma_13531.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 321)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 323)) COMMA_SOURCE_FILE ("expression-class-func.galgas4", 323)) ;
      }
      outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 324)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 324)) ;
      var_needsComma_13531 = GGS_bool (true) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_needsComma_13531.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_classFuncExpressionForGeneration temp_9 = this ;
      outArgument_outCppExpression.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_9.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 328)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 328)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 328)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 328)) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    const GGS_classFuncExpressionForGeneration temp_10 = this ;
    outArgument_outCppExpression.plusAssignOperation(extensionGetter_sourceFile (temp_10.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 330)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 330)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 330)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@collectionValueAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_collectionValueAST temp_0 = this ;
  UpEnumerator_collectionValueElementList enumerator_4273 (temp_0.readProperty_mExpressionList ()) ;
  while (enumerator_4273.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4273.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 112)) ;
    enumerator_4273.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@collectionValueAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_4947 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_collectionValueAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_targetType_4947 = constinArgument_inType ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_collectionValueAST temp_2 = this ;
    var_targetType_4947 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 131)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_targetType_4947.objectCompare (GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-primary-collection-value.galgas4", 134)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_collectionValueAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 135)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_4947, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 136)).readProperty_supportCollectionValue ().operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas4", 136)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_collectionValueAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GGS_string ("the @").add_operation (extensionGetter_definition (var_targetType_4947, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 138)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 138)).add_operation (GGS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 138)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 137)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GGS_initializerMap var_initializerMap_5457 = extensionGetter_definition (var_targetType_4947, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 141)).readProperty_initializerMap () ;
      GGS_functionSignature var_emptyArgumentList_5540 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_initializerMap_5457.getter_hasKey (extensionGetter_initializerSignature (var_emptyArgumentList_5540, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 143)) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 143)).operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas4", 143)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_collectionValueAST temp_10 = this ;
          const GGS_collectionValueAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 144)).add_operation (GGS_string (" has no @() initializer"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 144)), fixItArray12  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 144)) ;
        }
      }
      GGS_lstring var_nameForUsefulness_5783 = function_initializerNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4947, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 148)).readProperty_typeName (), extensionGetter_initializerSignature (var_emptyArgumentList_5540, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 149)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 147)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_5783 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 151)) ;
      }
      GGS_unifiedTypeMapEntry var_elementType_6060 = extensionGetter_definition (var_targetType_4947, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 153)).readProperty_typeForEnumeratedElement () ;
      GGS_collectionValueElementListForGeneration var_expressionListForGeneration_6172 = GGS_collectionValueElementListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_collectionValueAST temp_13 = this ;
      UpEnumerator_collectionValueElementList enumerator_6228 (temp_13.readProperty_mExpressionList ()) ;
      while (enumerator_6228.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expressionForGeneration_6536 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_6228.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_elementType_6060, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_6536, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 156)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_elementType_6060, var_expressionForGeneration_6536.readProperty_mResultType (), enumerator_6228.current (HERE).readProperty_location (), var_expressionForGeneration_6536, inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 166)) ;
        }
        var_expressionListForGeneration_6172.plusPlusAssignOperation (GGS_collectionValueElementListForGeneration_2E_element::init_21__21_ (var_expressionForGeneration_6536, enumerator_6228.current (HERE).readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 172)) ;
        enumerator_6228.gotoNextObject () ;
      }
      const GGS_collectionValueAST temp_14 = this ;
      outArgument_outExpression = GGS_expressionCollectionForGeneration::init_21__21__21_ (var_targetType_4947, temp_14.readProperty_mEndOfCollectionValue (), var_expressionListForGeneration_6172, inCompiler COMMA_HERE) ;
      GGS_lstring var_typeUsefulnessName_7105 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4947, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 180)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 180)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_7105 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 181)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@expressionCollectionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_expressionCollectionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 209)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-collection-value.galgas4", 211)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 211)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 212)) ;
  const GGS_expressionCollectionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 214)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 214)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 214)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 214)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 214)) ;
  const GGS_expressionCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 215)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 215)) ;
  const GGS_expressionCollectionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::init (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 216)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 216)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 216)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 216)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 216)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 217)) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 217)) ;
  }
  const GGS_expressionCollectionForGeneration temp_4 = this ;
  UpEnumerator_collectionValueElementListForGeneration enumerator_9001 (temp_4.readProperty_expressionList ()) ;
  while (enumerator_9001.hasCurrentObject ()) {
    GGS_string var_argumentCppName_9200 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_9001.current (HERE).readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_9200, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 220)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (".plusPlusAssignOperation ("), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 227)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 227)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(var_argumentCppName_9200.add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 228)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 228)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (enumerator_9001.current (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 229)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 229)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 229)) ;
    enumerator_9001.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_3392 ;
  GGS_string var_sourceVariableCppName_3417 ;
  GGS_string var_nameForCheckingFormalParameterUsing_3459 ;
  {
  const GGS_varInExpressionAST temp_0 = this ;
  extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, temp_0.readProperty_mVarName (), var_type_3392, var_sourceVariableCppName_3417, var_nameForCheckingFormalParameterUsing_3459, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 72)) ;
  }
  const GGS_varInExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_3392, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_3417, var_nameForCheckingFormalParameterUsing_3459, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_varInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 106)) ;
  const GGS_varInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = temp_1.readProperty_mCppVarName () ;
  {
  const GGS_varInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 108)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_4905 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 121)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4905 COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 122)) ;
  }
  GGS_bool var_optionComponentIsPredefined_5216 ;
  GGS_commandLineOptionMap var_boolOptionMap_5276 ;
  GGS_commandLineOptionMap var_uintOptionMap_5322 ;
  GGS_commandLineOptionMap var_stringOptionMap_5368 ;
  GGS_commandLineOptionMap var_stringListOptionMap_5416 ;
  const GGS_optionExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_5216, var_boolOptionMap_5276, var_uintOptionMap_5322, var_stringOptionMap_5368, var_stringListOptionMap_5416, inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 124)) ;
  const GGS_optionExpressionAST temp_2 = this ;
  GGS_bool var_found_5452 = var_boolOptionMap_5276.getter_hasKey (temp_2.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 132)) ;
  GGS_unifiedTypeMapEntry var_returnedType_5540 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_5452.operator_not (SOURCE_FILE ("expression-primary-option.galgas4", 134)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_optionExpressionAST temp_4 = this ;
      var_found_5452 = var_uintOptionMap_5322.getter_hasKey (temp_4.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 135)) ;
      var_returnedType_5540 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType () ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_found_5452.operator_not (SOURCE_FILE ("expression-primary-option.galgas4", 138)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_optionExpressionAST temp_6 = this ;
      var_found_5452 = var_stringOptionMap_5368.getter_hasKey (temp_6.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 139)) ;
      var_returnedType_5540 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_found_5452.operator_not (SOURCE_FILE ("expression-primary-option.galgas4", 142)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_optionExpressionAST temp_8 = this ;
      var_found_5452 = var_stringListOptionMap_5416.getter_hasKey (temp_8.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 143)) ;
      var_returnedType_5540 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType () ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_found_5452.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_optionExpressionAST temp_11 = this ;
        test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("value"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_optionExpressionAST temp_12 = this ;
          const GGS_optionExpressionAST temp_13 = this ;
          const GGS_optionExpressionAST temp_14 = this ;
          outArgument_outExpression = GGS_optionValueExpressionForGeneration::init_21__21__21__21__21_ (var_returnedType_5540, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5216, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_optionExpressionAST temp_16 = this ;
          test_15 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("char"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_optionExpressionAST temp_17 = this ;
            const GGS_optionExpressionAST temp_18 = this ;
            const GGS_optionExpressionAST temp_19 = this ;
            outArgument_outExpression = GGS_optionCharExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5216, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
          }
        }
        if (GalgasBool::boolFalse == test_15) {
          GalgasBool test_20 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_20) {
            const GGS_optionExpressionAST temp_21 = this ;
            test_20 = GGS_bool (ComparisonKind::equal, temp_21.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_20) {
              const GGS_optionExpressionAST temp_22 = this ;
              const GGS_optionExpressionAST temp_23 = this ;
              const GGS_optionExpressionAST temp_24 = this ;
              outArgument_outExpression = GGS_optionStringExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5216, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
            }
          }
          if (GalgasBool::boolFalse == test_20) {
            GalgasBool test_25 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_25) {
              const GGS_optionExpressionAST temp_26 = this ;
              test_25 = GGS_bool (ComparisonKind::equal, temp_26.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("comment"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_25) {
                const GGS_optionExpressionAST temp_27 = this ;
                const GGS_optionExpressionAST temp_28 = this ;
                const GGS_optionExpressionAST temp_29 = this ;
                outArgument_outExpression = GGS_optionCommentExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5216, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
              }
            }
            if (GalgasBool::boolFalse == test_25) {
              const GGS_optionExpressionAST temp_30 = this ;
              GenericArray <FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mOptionGetterName ().readProperty_location (), GGS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 176)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_stringlist var_s_7577 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
    UpEnumerator_commandLineOptionMap enumerator_7602 (var_boolOptionMap_5276) ;
    while (enumerator_7602.hasCurrentObject ()) {
      var_s_7577.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (enumerator_7602.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 181)) ;
      enumerator_7602.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_7670 (var_uintOptionMap_5322) ;
    while (enumerator_7670.hasCurrentObject ()) {
      var_s_7577.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (enumerator_7670.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 184)) ;
      enumerator_7670.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_7738 (var_stringOptionMap_5368) ;
    while (enumerator_7738.hasCurrentObject ()) {
      var_s_7577.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (enumerator_7738.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 187)) ;
      enumerator_7738.gotoNextObject () ;
    }
    const GGS_optionExpressionAST temp_32 = this ;
    const GGS_optionExpressionAST temp_33 = this ;
    const GGS_optionExpressionAST temp_34 = this ;
    GenericArray <FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, EnumFixItKind::fixItReplace, var_s_7577) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionEntryName ().readProperty_location (), GGS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 190)).add_operation (GGS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 190)).add_operation (temp_34.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 190)).add_operation (GGS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 190)), fixItArray35  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 189)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionValueExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_optionValueExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionValueExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-primary-option.galgas4", 214)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionValueExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 215)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 215))  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 215)) ;
    }
  }
  const GGS_optionValueExpressionForGeneration temp_3 = this ;
  const GGS_optionValueExpressionForGeneration temp_4 = this ;
  const GGS_optionValueExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 217)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 217)).add_operation (GGS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 217)).add_operation (temp_4.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 217)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 217)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 217)).add_operation (temp_5.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 218)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 218)).add_operation (GGS_string (".readProperty_value ())"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 218)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionCharExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_optionCharExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionCharExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-primary-option.galgas4", 237)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionCharExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 238)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 238))  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 238)) ;
    }
  }
  const GGS_optionCharExpressionForGeneration temp_3 = this ;
  const GGS_optionCharExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_char (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 240)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 240)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 240)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 241)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 241)).add_operation (GGS_string (".readProperty_char ())"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 241)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionStringExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                          GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionStringExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-primary-option.galgas4", 260)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionStringExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 261))  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 261)) ;
    }
  }
  const GGS_optionStringExpressionForGeneration temp_3 = this ;
  const GGS_optionStringExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_string (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 263)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 263)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 263)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 264)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 264)).add_operation (GGS_string (".readProperty_string ())"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 264)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionCommentExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionCommentExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-primary-option.galgas4", 275)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionCommentExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 276)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 276))  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 276)) ;
    }
  }
  const GGS_optionCommentExpressionForGeneration temp_3 = this ;
  const GGS_optionCommentExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 278)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 278)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 278)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas4", 279)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 279)).add_operation (GGS_string (".readProperty_comment ()"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 279)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                      GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionAST temp_0 = this ;
  const GGS_literalCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mCharacter ().readProperty_location (), temp_1.readProperty_mCharacter ().readProperty_char (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_char (utf32 (").add_operation (temp_0.readProperty_mCharacter ().getter_uint (SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)).getter_string (SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionAST temp_0 = this ;
  const GGS_literalBigIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalUIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_uint (uint32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 171)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 171)).add_operation (GGS_string ("U))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 171)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalUInt64ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_uint_36__34_ (uint64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 188)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 188)).add_operation (GGS_string ("ULL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 188)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalSIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_sint (int32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 205)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 205)).add_operation (GGS_string ("L))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 205)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalSInt64ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_sint_36__34_ (int64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 222)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 222)).add_operation (GGS_string ("LL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 222)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_bigint (\"").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 239)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 239)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 239)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 240)) COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 240)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 241)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 241)) ;
  const GGS_literalBigIntExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 242)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 242)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 242)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 242)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_3948 = GGS_string::makeEmptyString () ;
  const GGS_literalStringExpressionAST temp_0 = this ;
  UpEnumerator_stringlist enumerator_3962 (temp_0.readProperty_mStringSequence ()) ;
  while (enumerator_3962.hasCurrentObject ()) {
    var_s_3948.plusAssignOperation(enumerator_3962.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 93)) ;
    enumerator_3962.gotoNextObject () ;
  }
  const GGS_literalStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_3948, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_literalStringExpressionForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mString ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCppExpression = GGS_string ("GGS_string::makeEmptyString ()") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_literalStringExpressionForGeneration temp_2 = this ;
    outArgument_outCppExpression = GGS_string ("GGS_string (").add_operation (temp_2.readProperty_mString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("expression-primary-literal-string.galgas4", 117)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 117)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 117)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueIntrospectionExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_3836 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 91)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3836 COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 92)) ;
  }
  const GGS_lexiqueIntrospectionExpressionAST temp_1 = this ;
  GGS_bool joker_4167_7 ; // Joker input parameter
  GGS_terminalMap joker_4167_6 ; // Joker input parameter
  GGS_indexingListAST joker_4167_5 ; // Joker input parameter
  GGS_terminalDeclarationListAST joker_4167_4 ; // Joker input parameter
  GGS_lexicalAttributeListAST joker_4167_3 ; // Joker input parameter
  GGS_lexicalStyleListAST joker_4167_2 ; // Joker input parameter
  GGS_lexicalListDeclarationListAST joker_4167_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueComponentName (), joker_4167_7, joker_4167_6, joker_4167_5, joker_4167_4, joker_4167_3, joker_4167_2, joker_4167_1, inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 94)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_lexiqueIntrospectionExpressionAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mLexiqueGetterName ().readProperty_string ().objectCompare (GGS_string ("symbols"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_lexiqueIntrospectionExpressionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mLexiqueGetterName ().readProperty_location (), GGS_string ("unknown func"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 100)) ;
    }
  }
  const GGS_lexiqueIntrospectionExpressionAST temp_6 = this ;
  const GGS_lexiqueIntrospectionExpressionAST temp_7 = this ;
  const GGS_lexiqueIntrospectionExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_lexiqueIntrospectionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_string ("stringlist").getter_nowhere (SOURCE_FILE ("expression-primary-lexique.galgas4", 104)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 104)), temp_6.readProperty_mLexiqueComponentName ().readProperty_location (), temp_7.readProperty_mLexiqueComponentName ().readProperty_string (), temp_8.readProperty_mLexiqueGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueIntrospectionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueIntrospectionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-lexique.galgas4", 128)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 128))  COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 128)) ;
  const GGS_lexiqueIntrospectionForGeneration temp_1 = this ;
  const GGS_lexiqueIntrospectionForGeneration temp_2 = this ;
  const GGS_lexiqueIntrospectionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("Lexique_").add_operation (temp_1.readProperty_mLexiqueComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-lexique.galgas4", 129)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 129)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 129)).add_operation (temp_2.readProperty_mLexiqueGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-lexique.galgas4", 130)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 129)).add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 130)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 131)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 131)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas4", 131)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4104 ;
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-minus.galgas4", 90)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4104, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 87)) ;
  GGS_unifiedTypeMapEntry var_type_4180 = var_expression_4104.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_literalBigIntExpressionForGeneration var_exp_4219 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_4104.ptr ())) ;
    if (nullptr == var_exp_4219.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_4219.readProperty_mResultType (), var_exp_4219.readProperty_mLocation (), var_exp_4219.readProperty_mValue ().operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 101)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_4180, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 104)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("expression-unary-minus.galgas4", 104)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 104)).operator_not (SOURCE_FILE ("expression-unary-minus.galgas4", 104)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_unaryMinusExpressionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4180, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 106)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 106)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 106)), fixItArray4  COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 105)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      const GGS_unaryMinusExpressionAST temp_5 = this ;
      outArgument_outExpression = GGS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_4180, temp_5.readProperty_mOperatorLocation (), var_expression_4104, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 133)) ;
  GGS_string var_operand_6047 ;
  const GGS_unaryMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_6047, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 135)) ;
  const GGS_unaryMinusExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_6047.add_operation (GGS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 143)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 143)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 143)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 143)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 144)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 144)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4069 ;
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-not.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4069, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4145 = var_expression_4069.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (nullptr != dynamic_cast <const cPtr_trueExpressionForGeneration *> (var_expression_4069.ptr ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_notExpressionAST temp_2 = this ;
      outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_falseExpressionForGeneration *> (var_expression_4069.ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_notExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = extensionGetter_definition (var_type_4145, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 101)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("expression-not.galgas4", 101)) COMMA_SOURCE_FILE ("expression-not.galgas4", 101)).operator_not (SOURCE_FILE ("expression-not.galgas4", 101)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_notExpressionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4145, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas4", 102)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_notExpressionAST temp_8 = this ;
        outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_4145, temp_8.readProperty_mOperatorLocation (), var_expression_4069, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                 GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                 GGS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 131)) ;
  GGS_string var_operand_5841 ;
  const GGS_notExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5841, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 133)) ;
  const GGS_notExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5841.add_operation (GGS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4142 ;
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4142, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4218 = var_expression_4142.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4218, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)) COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unaryWrappingMinusExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4218, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_unaryWrappingMinusExpressionAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryWrappingMinusExpressionForGeneration::init_21__21__21_ (var_type_4218, temp_4.readProperty_mOperatorLocation (), var_expression_4142, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 126)) ;
  GGS_string var_operand_5647 ;
  const GGS_unaryWrappingMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5647, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 128)) ;
  outArgument_outCppExpression = var_operand_5647.add_operation (GGS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 136)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                           GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_5510 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 142)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5510 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 143)) ;
  }
  GGS_lstring var_filewrapperPath_5845 ;
  GGS_bool var_isInternal_5886 ;
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_1 = this ;
  GGS_lstringlist joker_5866_4 ; // Joker input parameter
  GGS_wrapperFileMap joker_5866_3 ; // Joker input parameter
  GGS_wrapperDirectoryMap joker_5866_2 ; // Joker input parameter
  GGS_filewrapperTemplateMap joker_5866_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), var_filewrapperPath_5845, joker_5866_4, joker_5866_3, joker_5866_2, joker_5866_1, var_isInternal_5886, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 145)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_5886.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_filewrapperObjectInstanciationInExpressionAST temp_3 = this ;
      GGS_location var_filewrapperDeclarationLocation_5951 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_3.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 153)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_filewrapperObjectInstanciationInExpressionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 154)).objectCompare (var_filewrapperDeclarationLocation_5951.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 154)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_filewrapperObjectInstanciationInExpressionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_5951.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 155)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 155)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 155)), fixItArray7  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 155)) ;
        }
      }
    }
  }
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_8 = this ;
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_9 = this ;
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_10 = this ;
  outArgument_outExpression = GGS_filewrapperInExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("filewrapper"), temp_8.readProperty_mFilewrapperName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 160)), temp_9.readProperty_mFilewrapperName ().readProperty_location (), temp_10.readProperty_mFilewrapperName ().readProperty_string (), var_filewrapperPath_5845.readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTemplateInExpressionAST temp_0 = this ;
  UpEnumerator_actualOutputArgumentList enumerator_6805 (temp_0.readProperty_mExpressions ()) ;
  while (enumerator_6805.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_6805.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 172)) ;
    enumerator_6805.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTemplateInExpressionAST temp_0 = this ;
  const GGS_filewrapperTemplateInExpressionAST temp_1 = this ;
  GGS_lstring var_usefulnessName_7454 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), temp_1.readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 187)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_7454 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 188)) ;
  }
  GGS_filewrapperTemplateMap var_filewrapperTemplateMap_7809 ;
  GGS_bool var_isInternal_7849 ;
  const GGS_filewrapperTemplateInExpressionAST temp_2 = this ;
  GGS_lstring joker_7770_4 ; // Joker input parameter
  GGS_lstringlist joker_7770_3 ; // Joker input parameter
  GGS_wrapperFileMap joker_7770_2 ; // Joker input parameter
  GGS_wrapperDirectoryMap joker_7770_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_2.readProperty_mFilewrapperName (), joker_7770_4, joker_7770_3, joker_7770_2, joker_7770_1, var_filewrapperTemplateMap_7809, var_isInternal_7849, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 190)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_isInternal_7849.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_filewrapperTemplateInExpressionAST temp_4 = this ;
      GGS_location var_filewrapperDeclarationLocation_7915 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_4.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 198)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_filewrapperTemplateInExpressionAST temp_6 = this ;
        test_5 = GGS_bool (ComparisonKind::notEqual, temp_6.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 199)).objectCompare (var_filewrapperDeclarationLocation_7915.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 199)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_filewrapperTemplateInExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_7915.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 200)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 200)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 200)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 200)) ;
        }
      }
    }
  }
  GGS_functionSignature var_templateSignature_8367 ;
  const GGS_filewrapperTemplateInExpressionAST temp_9 = this ;
  GGS_lstring joker_8386 ; // Joker input parameter
  var_filewrapperTemplateMap_7809.method_searchKey (temp_9.readProperty_mFilewrapperTemplateName (), var_templateSignature_8367, joker_8386, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 204)) ;
  GGS_semanticExpressionListForGeneration var_effectiveParameterList_8458 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_filewrapperTemplateInExpressionAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 207)).objectCompare (var_templateSignature_8367.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 207)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_filewrapperTemplateInExpressionAST temp_12 = this ;
      const GGS_filewrapperTemplateInExpressionAST temp_13 = this ;
      const GGS_filewrapperTemplateInExpressionAST temp_14 = this ;
      const GGS_filewrapperTemplateInExpressionAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mFilewrapperTemplateName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_13.readProperty_mFilewrapperTemplateName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 209)).add_operation (GGS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 209)).add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 209)).add_operation (GGS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 209)).add_operation (var_templateSignature_8367.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 210)).getter_string (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 210)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 209)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 210)).add_operation (temp_15.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 211)).getter_string (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 211)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 210)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 211)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 208)) ;
      var_effectiveParameterList_8458.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    var_effectiveParameterList_8458 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperTemplateInExpressionAST temp_17 = this ;
    UpEnumerator_actualOutputArgumentList enumerator_8938 (temp_17.readProperty_mExpressions ()) ;
    UpEnumerator_functionSignature enumerator_8962 (var_templateSignature_8367) ;
    while (enumerator_8938.hasCurrentObject () && enumerator_8962.hasCurrentObject ()) {
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::notEqual, enumerator_8962.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_8938.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GGS_string temp_19 ;
          const GalgasBool test_20 = GGS_bool (ComparisonKind::notEqual, enumerator_8962.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            temp_19 = enumerator_8962.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 217)) ;
          }else if (GalgasBool::boolFalse == test_20) {
            temp_19 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_9080 = GGS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 217)) ;
          GenericArray <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, EnumFixItKind::fixItReplace, var_s_9080) ;
          inCompiler->emitSemanticError (enumerator_8938.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_9080, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 218)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 218)), fixItArray21  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 218)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_exp_9609 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8938.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8962.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9609, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 220)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8962.current (HERE).readProperty_mFormalArgumentType (), var_exp_9609.readProperty_mResultType (), enumerator_8938.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_9609, inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 229)) ;
      }
      var_effectiveParameterList_8458.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_exp_9609, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 230)) ;
      enumerator_8938.gotoNextObject () ;
      enumerator_8962.gotoNextObject () ;
    }
  }
  const GGS_filewrapperTemplateInExpressionAST temp_22 = this ;
  const GGS_filewrapperTemplateInExpressionAST temp_23 = this ;
  const GGS_filewrapperTemplateInExpressionAST temp_24 = this ;
  outArgument_outExpression = GGS_filewrapperTemplateInExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mFilewrapperName ().readProperty_location (), temp_23.readProperty_mFilewrapperName ().readProperty_string (), temp_24.readProperty_mFilewrapperTemplateName ().readProperty_string (), var_effectiveParameterList_8458, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperInExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_10857 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 260)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_10857 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 261)) ;
  }
  GGS_stringlist var_directoryList_11077 ;
  GGS_string var_fileName_11105 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_filewrapperInExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mFilewrapperPath ().readProperty_string ().getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 265)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_filewrapperInExpressionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("path is empty"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 266)) ;
      var_directoryList_11077.drop () ; // Release error dropped variable
      var_fileName_11105.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_filewrapperInExpressionAST temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 267)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_filewrapperInExpressionAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the path should not begin with '/'"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 268)) ;
        var_directoryList_11077.drop () ; // Release error dropped variable
        var_fileName_11105.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_filewrapperInExpressionAST temp_9 = this ;
      var_directoryList_11077 = temp_9.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GGS_string ("/") COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 270)) ;
      {
      var_directoryList_11077.setter_popLast (var_fileName_11105, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 271)) ;
      }
    }
  }
  GGS_wrapperFileMap var_filewrapperFileMap_11706 ;
  GGS_wrapperDirectoryMap var_filewrapperDirectoryMap_11756 ;
  GGS_bool var_isInternal_11804 ;
  const GGS_filewrapperInExpressionAST temp_10 = this ;
  GGS_lstring joker_11669 ; // Joker input parameter
  GGS_lstringlist joker_11677 ; // Joker input parameter
  GGS_filewrapperTemplateMap joker_11785 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_10.readProperty_mFilewrapperName (), joker_11669, joker_11677, var_filewrapperFileMap_11706, var_filewrapperDirectoryMap_11756, joker_11785, var_isInternal_11804, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 274)) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = var_isInternal_11804.boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_filewrapperInExpressionAST temp_12 = this ;
      GGS_location var_filewrapperDeclarationLocation_11869 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_12.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 285)) ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_filewrapperInExpressionAST temp_14 = this ;
        test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 286)).objectCompare (var_filewrapperDeclarationLocation_11869.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 286)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_filewrapperInExpressionAST temp_15 = this ;
          GenericArray <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_11869.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 287)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 287)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 287)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 287)) ;
        }
      }
    }
  }
  GGS_string var_builtPath_12259 = GGS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_11756.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 292)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 292)).isValid ()) {
    uint32_t variant_12276 = var_filewrapperDirectoryMap_11756.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 292)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 292)).uintValue () ;
    bool loop_12276 = true ;
    while (loop_12276) {
      loop_12276 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_11077.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 293)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_12276) {
        loop_12276 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_11077.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 293)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_12276 && (0 == variant_12276)) {
        loop_12276 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 292)) ;
      }
      if (loop_12276) {
        variant_12276 -= 1 ;
        GGS_string var_directoryName_12387 ;
        {
        var_directoryList_11077.setter_popFirst (var_directoryName_12387, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 294)) ;
        }
        var_builtPath_12259.plusAssignOperation(var_directoryName_12387.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 295)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 295)) ;
        GalgasBool test_17 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_17) {
          test_17 = var_filewrapperDirectoryMap_11756.getter_hasKey (var_directoryName_12387 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 296)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            GGS_uint joker_12663 ; // Joker input parameter
            var_filewrapperDirectoryMap_11756.method_searchKey (GGS_lstring::init_21__21_ (var_directoryName_12387, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 298)), inCompiler COMMA_HERE), var_filewrapperFileMap_11706, var_filewrapperDirectoryMap_11756, joker_12663, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 297)) ;
          }
        }
        if (GalgasBool::boolFalse == test_17) {
          const GGS_filewrapperInExpressionAST temp_18 = this ;
          const GGS_filewrapperInExpressionAST temp_19 = this ;
          GenericArray <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_builtPath_12259, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 304)).add_operation (GGS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 304)).add_operation (temp_19.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 304)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 304)), fixItArray20  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 304)) ;
          var_filewrapperFileMap_11706.drop () ; // Release error dropped variable
          var_directoryList_11077 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
        }
      }
    }
  }
  GGS_uint var_fileIndex_12928 ;
  GGS_bool var_isTextFile_12950 ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    test_21 = var_filewrapperFileMap_11706.getter_hasKey (var_fileName_11105 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 310)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      GGS_string joker_13082 ; // Joker input parameter
      GGS_uint joker_13099 ; // Joker input parameter
      var_filewrapperFileMap_11706.method_searchKey (GGS_lstring::init_21__21_ (var_fileName_11105, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 311)), inCompiler COMMA_HERE), joker_13082, var_isTextFile_12950, joker_13099, var_fileIndex_12928, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 311)) ;
    }
  }
  if (GalgasBool::boolFalse == test_21) {
    const GGS_filewrapperInExpressionAST temp_22 = this ;
    const GGS_filewrapperInExpressionAST temp_23 = this ;
    GenericArray <FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_fileName_11105, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 314)).add_operation (GGS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 314)).add_operation (var_builtPath_12259, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 314)).add_operation (GGS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 314)).add_operation (temp_23.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 314)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 314)), fixItArray24  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 313)) ;
    var_fileIndex_12928.drop () ; // Release error dropped variable
    var_isTextFile_12950.drop () ; // Release error dropped variable
  }
  GGS_unifiedTypeMapEntry temp_25 ;
  const GalgasBool test_26 = var_isTextFile_12950.boolEnum () ;
  if (GalgasBool::boolTrue == test_26) {
    temp_25 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  }else if (GalgasBool::boolFalse == test_26) {
    temp_25 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("data"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 321)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 321)) ;
  }
  const GGS_filewrapperInExpressionAST temp_27 = this ;
  const GGS_filewrapperInExpressionAST temp_28 = this ;
  outArgument_outExpression = GGS_filewrapperStaticPathInExpressionForGeneration::init_21__21__21__21__21_ (temp_25, temp_27.readProperty_mFilewrapperName ().readProperty_location (), temp_28.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_12928, var_isTextFile_12950, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 346))  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 346)) ;
  const GGS_filewrapperInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_filewrapper (gWrapperDirectory_0_").add_operation (temp_1.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 347)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 347)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 347)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperTemplateInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GGS_string & outArgument_outCppExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTemplateInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 367))  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 367)) ;
  GGS_stringlist var_parameterList_15388 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperTemplateInExpressionForGeneration temp_1 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_15426 (temp_1.readProperty_mActualOutputParameterList ()) ;
  while (enumerator_15426.hasCurrentObject ()) {
    GGS_string var_parameter_15643 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_15426.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_15643, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 370)) ;
    var_parameterList_15388.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_parameter_15643, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 377)) ;
    enumerator_15426.gotoNextObject () ;
  }
  const GGS_filewrapperTemplateInExpressionForGeneration temp_2 = this ;
  const GGS_filewrapperTemplateInExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_string (filewrapperTemplate_").add_operation (temp_2.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 379)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 379)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 379)).add_operation (temp_3.readProperty_mFilewrapperTemplateName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 379)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 379)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 379)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 380)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 380)) ;
  UpEnumerator_stringlist enumerator_15921 (var_parameterList_15388) ;
  while (enumerator_15921.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(GGS_string (", ").add_operation (enumerator_15921.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 382)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 382)) ;
    enumerator_15921.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 384)) COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 384)) ;
  }
  const GGS_filewrapperTemplateInExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 385)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 385)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 385)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GGS_string & outArgument_outCppExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 405))  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 405)) ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_1 = this ;
  GGS_string temp_2 ;
  const GalgasBool test_3 = temp_1.readProperty_mIsTextFile ().boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_string ("GGS_string") ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_string ("GGS_data") ;
  }
  outArgument_outCppExpression = temp_2 ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_4 = this ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 407)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 407)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 407)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 407)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 407)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 407)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 407)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerCallAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_initializerCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_initializerCallAST temp_2 = this ;
      GGS_unifiedTypeMapEntry joker_7087 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_7087, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 175)) ;
      }
    }
  }
  const GGS_initializerCallAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 177)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerCallAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_instanciedType_8013 ;
  GGS_lstring var_initializerName_8049 ;
  GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8114 ;
  {
  const GGS_initializerCallAST temp_0 = this ;
  const GGS_initializerCallAST temp_1 = this ;
  const GGS_initializerCallAST temp_2 = this ;
  routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mExpressions (), temp_2.readProperty_mEndOfExpressions (), var_instanciedType_8013, var_initializerName_8049, var_constructorEffectiveParameterList_8114, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 190)) ;
  }
  GGS_lstring var_typeUsefulnessName_8191 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_instanciedType_8013, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 205)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 205)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_8191 COMMA_SOURCE_FILE ("expression-initializer.galgas4", 206)) ;
  }
  const GGS_initializerCallAST temp_3 = this ;
  outArgument_outExpression = GGS_initializerCallForGeneration::init_21__21__21__21_ (var_instanciedType_8013, temp_3.readProperty_mEndOfExpressions (), var_initializerName_8049.readProperty_string (), var_constructorEffectiveParameterList_8114, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerInvocation?&??&&???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                           const GGS_lstring constinArgument_inTypeName,
                                                                                           const GGS_actualOutputArgumentList constinArgument_inInvocationArguments,
                                                                                           const GGS_location constinArgument_inEndOfExpressions,
                                                                                           GGS_unifiedTypeMapEntry & outArgument_outInstanciedType,
                                                                                           GGS_lstring & outArgument_outInitializerName,
                                                                                           GGS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanciedType.drop () ; // Release 'out' argument
  outArgument_outInitializerName.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outInstanciedType = constinArgument_inType ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outInstanciedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 236)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outInstanciedType.getter_isNull (SOURCE_FILE ("expression-initializer.galgas4", 238)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 239)) ;
      outArgument_outInstanciedType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outInitializerName.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_unifiedTypeDefinition var_instanciedTypeDefinition_9880 = extensionGetter_definition (outArgument_outInstanciedType, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 243)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_instanciedTypeDefinition_9880.readProperty_isConcrete ().operator_not (SOURCE_FILE ("expression-initializer.galgas4", 244)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot instanciate an abstract class"), fixItArray4  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 245)) ;
        outArgument_outInstanciedType.drop () ; // Release error dropped variable
        outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
        outArgument_outInitializerName.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_lstring var_nameForUsefulness_10198 = function_initializerNameForUsefulEntitiesGraph (var_instanciedTypeDefinition_9880.readProperty_typeName (), extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 252)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 250)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_10198 COMMA_SOURCE_FILE ("expression-initializer.galgas4", 254)) ;
      }
      outArgument_outInitializerName = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 256)), constinArgument_inEndOfExpressions, inCompiler COMMA_HERE) ;
      GGS_initializerMap var_initializerMap_10595 = var_instanciedTypeDefinition_9880.readProperty_initializerMap () ;
      GGS_functionSignature var_formalSignature_10681 ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_initializerMap_10595.getter_hasKey (outArgument_outInitializerName.readProperty_string () COMMA_SOURCE_FILE ("expression-initializer.galgas4", 259)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          var_initializerMap_10595.method_searchKey (outArgument_outInitializerName, var_formalSignature_10681, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 260)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GGS_string var_s_10851 = GGS_string ("@").add_operation (var_instanciedTypeDefinition_9880.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 262)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 262)) ;
        UpEnumerator_actualOutputArgumentList enumerator_10927 (constinArgument_inInvocationArguments) ;
        while (enumerator_10927.hasCurrentObject ()) {
          var_s_10851.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 265)) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_10927.current (HERE).readProperty_mActualSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_s_10851.plusAssignOperation(enumerator_10927.current (HERE).readProperty_mActualSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 267)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 267)) ;
            }
          }
          enumerator_10927.gotoNextObject () ;
          if (enumerator_10927.hasCurrentObject ()) {
            var_s_10851.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 270)) ;
          }
        }
        var_s_10851.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 272)) ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (outArgument_outInitializerName.readProperty_location (), GGS_string ("the ").add_operation (var_s_10851, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 274)).add_operation (GGS_string (" initializer is not declared"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 274)), fixItArray7  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 273)) ;
        var_formalSignature_10681.drop () ; // Release error dropped variable
      }
      outArgument_outConstructorEffectiveParameterList = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      UpEnumerator_actualOutputArgumentList enumerator_11409 (constinArgument_inInvocationArguments) ;
      UpEnumerator_functionSignature enumerator_11455 (var_formalSignature_10681) ;
      while (enumerator_11409.hasCurrentObject () && enumerator_11455.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_exp_11826 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11409.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11455.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11826, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 281)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11455.current (HERE).readProperty_mFormalArgumentType (), var_exp_11826.readProperty_mResultType (), enumerator_11409.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_11826, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 290)) ;
        }
        outArgument_outConstructorEffectiveParameterList.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_exp_11826, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 296)) ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_11455.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_11409.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_string temp_9 ;
            const GalgasBool test_10 = GGS_bool (ComparisonKind::notEqual, enumerator_11455.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              temp_9 = enumerator_11455.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 299)) ;
            }else if (GalgasBool::boolFalse == test_10) {
              temp_9 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_12216 = GGS_string ("!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 298)) ;
            GenericArray <FixItDescription> fixItArray11 ;
            appendFixItActions (fixItArray11, EnumFixItKind::fixItReplace, var_s_12216) ;
            inCompiler->emitSemanticError (enumerator_11409.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_12216, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 303)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 303)), fixItArray11  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 302)) ;
          }
        }
        enumerator_11409.gotoNextObject () ;
        enumerator_11455.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerCallForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerCallForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 325)) ;
  GGS_stringlist var_parameterList_13456 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_initializerCallForGeneration temp_1 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_13485 (temp_1.readProperty_mEffectiveParameterList ()) ;
  while (enumerator_13485.hasCurrentObject ()) {
    GGS_string var_parameter_13719 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_13485.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_13719, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 328)) ;
    var_parameterList_13456.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_parameter_13719, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 335)) ;
    enumerator_13485.gotoNextObject () ;
  }
  const GGS_initializerCallForGeneration temp_2 = this ;
  const GGS_initializerCallForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 337)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 337)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 337)).add_operation (temp_3.readProperty_initializerName ().getter_identifierRepresentation (SOURCE_FILE ("expression-initializer.galgas4", 338)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 338)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 338)) ;
  UpEnumerator_stringlist enumerator_13970 (var_parameterList_13456) ;
  while (enumerator_13970.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_13970.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 341)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 341)) ;
    enumerator_13970.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 343)) COMMA_SOURCE_FILE ("expression-initializer.galgas4", 343)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 344)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 344)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" COMMA_HERE)"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 345)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 163)) ;
  const GGS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 164)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_7989 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7989, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 178)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8331 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7989.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8331, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 188)) ;
  {
  const GGS_multiplicationExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7989.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 199)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas4", 199)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 199)), GGS_string ("&*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7989, var_rightExpression_8331, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 198)) ;
  }
  const GGS_multiplicationExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_7989.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7989, GGS_binaryOperator::class_func_multiply_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas4", 210)), var_rightExpression_8331, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 221)) ;
  const GGS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 222)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                         const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_localVarManager & ioArgument_ioVariableMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_10048 ;
  const GGS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_10048, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 236)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10390 ;
  const GGS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_10048.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10390, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 246)) ;
  {
  const GGS_multiplicationExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_10048.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 257)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("expression-multiplicative.galgas4", 257)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 257)), GGS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_10048, var_rightExpression_10390, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 256)) ;
  }
  const GGS_multiplicationExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_10048.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_10048, GGS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas4", 268)), var_rightExpression_10390, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 278)) ;
  const GGS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 279)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_12100 ;
  const GGS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12100, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 293)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12442 ;
  const GGS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12100.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12442, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 303)) ;
  {
  const GGS_divisionExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_12100.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 314)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas4", 314)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 314)), GGS_string ("&/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_12100, var_rightExpression_12442, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 313)) ;
  }
  const GGS_divisionExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_12100.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_12100, GGS_binaryOperator::class_func_divide_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas4", 325)), var_rightExpression_12442, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 335)) ;
  const GGS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 336)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14143 ;
  const GGS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14143, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 350)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14485 ;
  const GGS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14143.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14485, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 360)) ;
  {
  const GGS_divisionExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14143.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 371)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("expression-multiplicative.galgas4", 371)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 371)), GGS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14143, var_rightExpression_14485, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 370)) ;
  }
  const GGS_divisionExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14143.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14143, GGS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas4", 382)), var_rightExpression_14485, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@moduloExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 392)) ;
  const GGS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 393)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@moduloExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16169 ;
  const GGS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16169, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 407)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16511 ;
  const GGS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16169.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16511, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 417)) ;
  {
  const GGS_moduloExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16169.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 428)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("expression-multiplicative.galgas4", 428)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 428)), GGS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16169, var_rightExpression_16511, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 427)) ;
  }
  const GGS_moduloExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16169.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16169, GGS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas4", 439)), var_rightExpression_16511, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_3528 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("expression-primary-self.galgas4", 80)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("expression-primary-self.galgas4", 80)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_selfCppName_3613 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      const GGS_selfInExpressionAST temp_1 = this ;
      outArgument_outExpression = GGS_selfInExpressionForGeneration::init_21__21__21_ (var_selfAvailable_3528.readProperty_type (), temp_1.readProperty_mSelfLocation (), var_selfCppName_3613, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfInExpressionAST temp_2 = this ;
    GenericArray <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (temp_2.readProperty_mSelfLocation (), GGS_string ("'self' not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 84)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                    GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                    GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GGS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-self.galgas4", 104)), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 104)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 105)) ;
  const GGS_selfInExpressionForGeneration temp_0 = this ;
  const GGS_selfInExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (temp_1.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)) ;
  {
  const GGS_selfInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 107)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@trueExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@trueExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                               GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                               GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_trueExpressionAST temp_0 = this ;
  outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@falseExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@falseExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_falseExpressionAST temp_0 = this ;
  outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@trueExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                  GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                  GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                  GGS_string & outArgument_outCppExpression,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("GGS_bool (true)") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@falseExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                   GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("GGS_bool (false)") ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@trueExpressionForGeneration isTrueExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_trueExpressionForGeneration::getter_isTrueExpression (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryPlusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryPlusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-plus.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4121 = outArgument_outExpression.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4121, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("expression-unary-plus.galgas4", 97)) COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 97)).operator_not (SOURCE_FILE ("expression-unary-plus.galgas4", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unaryPlusExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4121, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 99)).add_operation (GGS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bangExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 73)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bangExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4118 ;
  const GGS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-primary-bang.galgas4", 91)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4118, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 88)) ;
  GGS_unifiedTypeMapEntry var_type_4194 = var_expression_4118.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_weakReferenceType var_weakRef_4233 = extensionGetter_definition (var_type_4194, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 99)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("expression-primary-bang.galgas4", 99)).unwrappedValue () ;
    if (!extensionGetter_definition (var_type_4194, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 99)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("expression-primary-bang.galgas4", 99)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      const GGS_bangExpressionAST temp_2 = this ;
      outArgument_outExpression = GGS_bangExpressionForGeneration::init_21__21__21__21_ (var_weakRef_4233.readProperty_referenceType (), temp_2.readProperty_mOperatorLocation (), var_expression_4118, extensionGetter_definition (var_type_4194, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 104)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_bangExpressionAST temp_3 = this ;
    GenericArray <FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4194, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 108)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 108)).add_operation (GGS_string ("' and does not support the 'bang' operator"), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 108)), fixItArray4  COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 107)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bangExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  GGS_string & outArgument_outCppExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_bangExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 129)) ;
  GGS_string var_operand_5872 ;
  const GGS_bangExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5872, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 131)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 139)) COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 139)) ;
  }
  const GGS_bangExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5872.add_operation (GGS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 140)).add_operation (temp_2.readProperty_mReceiverTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-bang.galgas4", 140)), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 140)) ;
  const GGS_bangExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 141)), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 141)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 141)), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 141)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 141)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 141)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 115)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testDynamicClassInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_5233 ;
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas4", 133)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5233, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 130)) ;
  const GGS_testDynamicClassInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_castType_5282 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 140)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_5233.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 142)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas4", 142)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_5529 = var_castType_5282 ;
      GGS_bool var_found_5556 = GGS_bool (ComparisonKind::equal, var_t_5529.objectCompare (var_expression_5233.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 146)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 146)).isValid ()) {
        uint32_t variant_5596 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 146)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 146)).uintValue () ;
        bool loop_5596 = true ;
        while (loop_5596) {
          loop_5596 = var_found_5556.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_and (extensionGetter_definition (var_t_5529, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).isValid () ;
          if (loop_5596) {
            loop_5596 = var_found_5556.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_and (extensionGetter_definition (var_t_5529, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).boolValue () ;
          }
          if (loop_5596 && (0 == variant_5596)) {
            loop_5596 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas4", 146)) ;
          }
          if (loop_5596) {
            variant_5596 -= 1 ;
            var_t_5529 = extensionGetter_definition (var_t_5529, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 148)).readProperty_superType () ;
            var_found_5556 = GGS_bool (ComparisonKind::equal, var_t_5529.objectCompare (var_expression_5233.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_5556.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 151)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_testDynamicClassInExpressionAST temp_4 = this ;
          const GGS_testDynamicClassInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).add_operation (extensionGetter_definition (var_expression_5233.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 152)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GenericArray <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_5233.readProperty_mLocation (), GGS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_5233.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 157)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 156)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 157)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 156)) ;
  }
  const GGS_testDynamicClassInExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_testDynamicClassInExpressionForGeneration::init_21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_5233, var_castType_5282, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@castInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 173)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@castInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_7505 ;
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas4", 191)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7505, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 188)) ;
  const GGS_castInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_type_7555 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 198)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_7505.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 200)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas4", 200)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_7799 = var_type_7555 ;
      GGS_bool var_found_7822 = GGS_bool (ComparisonKind::equal, var_t_7799.objectCompare (var_expression_7505.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 204)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 204)).isValid ()) {
        uint32_t variant_7862 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 204)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 204)).uintValue () ;
        bool loop_7862 = true ;
        while (loop_7862) {
          loop_7862 = var_found_7822.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_and (extensionGetter_definition (var_t_7799, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).isValid () ;
          if (loop_7862) {
            loop_7862 = var_found_7822.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_and (extensionGetter_definition (var_t_7799, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).boolValue () ;
          }
          if (loop_7862 && (0 == variant_7862)) {
            loop_7862 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas4", 204)) ;
          }
          if (loop_7862) {
            variant_7862 -= 1 ;
            var_t_7799 = extensionGetter_definition (var_t_7799, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 206)).readProperty_superType () ;
            var_found_7822 = GGS_bool (ComparisonKind::equal, var_t_7799.objectCompare (var_expression_7505.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_7822.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 209)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_castInExpressionAST temp_4 = this ;
          const GGS_castInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 211)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 211)).add_operation (extensionGetter_definition (var_expression_7505.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 212)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 211)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 212)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 210)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_7505.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 214)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("object"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_expression_7505.readProperty_mLocation (), GGS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (extensionGetter_definition (var_expression_7505.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 217)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 216)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 217)), fixItArray8  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 215)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_7505.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 220)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("object"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_castInExpressionAST temp_10 = this ;
      const GGS_castInExpressionAST temp_11 = this ;
      outArgument_outExpression = GGS_extractObjectInExpressionForGeneration::init_21__21__21__21_ (var_type_7555, temp_10.readProperty_mEndOfReceiverExpression (), var_expression_7505, temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_castInExpressionAST temp_12 = this ;
    const GGS_castInExpressionAST temp_13 = this ;
    outArgument_outExpression = GGS_castInExpressionForGeneration::init_21__21__21__21__21_ (var_type_7555, temp_12.readProperty_mTypeName ().readProperty_location (), var_expression_7505, temp_13.readProperty_mTypeName ().readProperty_string (), var_type_7555, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testDynamicClassInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionForGeneration temp_0 = this ;
  GGS_string var_typeNameRepresentation_9743 = extensionGetter_definition (temp_0.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 254)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 254)) ;
  GGS_string var_receiverExpression_10036 ;
  const GGS_testDynamicClassInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_10036, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 256)) ;
  const GGS_testDynamicClassInExpressionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 264)) ;
  outArgument_outCppExpression = GGS_string ("GGS_bool (nullptr != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_9743, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 265)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 266)).add_operation (var_receiverExpression_10036, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 267)).add_operation (GGS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 267)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@castInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                    GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GGS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_castInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 279)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas4", 280)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 280)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 281)) ;
  GGS_string var_receiverExpression_10969 ;
  const GGS_castInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_10969, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 283)) ;
  const GGS_castInExpressionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (temp_2.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 291)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 291)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 291)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (var_receiverExpression_10969, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 293)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 293)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 291)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 294)) ;
  }
  const GGS_castInExpressionForGeneration temp_3 = this ;
  const GGS_castInExpressionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (temp_3.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 298)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 297)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 298)).add_operation (var_receiverExpression_10969, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 299)).add_operation (GGS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 299)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 299)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 300)).add_operation (GGS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 300)).add_operation (temp_4.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 300)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 300)).add_operation (var_receiverExpression_10969, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 300)).add_operation (GGS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 301)).add_operation (GGS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 301)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 296)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 303)) ;
  }
  const GGS_castInExpressionForGeneration temp_5 = this ;
  const GGS_castInExpressionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 305)).add_operation (GGS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 305)).add_operation (temp_5.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 306)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 305)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 306)).add_operation (var_receiverExpression_10969, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 307)).add_operation (GGS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 307)).add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 308)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 307)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 308)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 304)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 309)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 310)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 310)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 311)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 312)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 313)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extractObjectInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_extractObjectInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_string & outArgument_outCppExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas4", 331)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 331)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 332)) ;
  GGS_string var_receiverExpression_12904 ;
  const GGS_extractObjectInExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_12904, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 334)) ;
  const GGS_extractObjectInExpressionForGeneration temp_1 = this ;
  const GGS_extractObjectInExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 342)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 342)).add_operation (GGS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 342)).add_operation (var_receiverExpression_12904, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 343)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 343)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 344)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 344)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 345)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 344)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 345)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 346)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 346)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@rightShiftExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 183)) ;
  const GGS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 184)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@rightShiftExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_8641 ;
  const GGS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8641, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 199)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_9006 ;
  const GGS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9006, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 209)) ;
  GGS_unifiedTypeMapEntry var_leftType_9087 = var_leftExpression_8641.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_left_9134 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_8641.ptr ())) ;
    if (nullptr == var_left_9134.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS_literalUIntExpressionForGeneration var_right_9207 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_9006.ptr ())) ;
      if (nullptr == var_right_9207.ptr ()) {
        test_2 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_2) {
        const GGS_rightShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_9134.readProperty_mValue ().right_shift_operation (var_right_9207.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 225)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_literalBigIntExpressionForGeneration var_left_9476 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_8641.ptr ())) ;
      if (nullptr == var_left_9476.ptr ()) {
        test_4 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_4) {
        GGS_literalBigIntExpressionForGeneration var_right_9549 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_9006.ptr ())) ;
        if (nullptr == var_right_9549.ptr ()) {
          test_4 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_4) {
          const GGS_rightShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_9476.readProperty_mValue ().right_shift_operation (var_right_9549.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 232)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 232)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_9087, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 234)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas4", 234)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 234)).operator_not (SOURCE_FILE ("expression-additive.galgas4", 234)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_rightShiftExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_9087, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 236)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 236)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 236)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas4", 235)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_rightShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_9087, temp_9.readProperty_mOperatorLocation (), var_leftExpression_8641, GGS_binaryOperator::class_func_rightShift (SOURCE_FILE ("expression-additive.galgas4", 244)), var_rightExpression_9006, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@leftShiftExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 255)) ;
  const GGS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 256)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@leftShiftExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_11492 ;
  const GGS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11492, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 271)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_11857 ;
  const GGS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_11857, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 281)) ;
  GGS_unifiedTypeMapEntry var_leftType_11938 = var_leftExpression_11492.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_left_11985 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_11492.ptr ())) ;
    if (nullptr == var_left_11985.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS_literalUIntExpressionForGeneration var_right_12058 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_11857.ptr ())) ;
      if (nullptr == var_right_12058.ptr ()) {
        test_2 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_2) {
        const GGS_leftShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_11985.readProperty_mValue ().left_shift_operation (var_right_12058.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 297)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_literalBigIntExpressionForGeneration var_left_12327 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_11492.ptr ())) ;
      if (nullptr == var_left_12327.ptr ()) {
        test_4 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_4) {
        GGS_literalBigIntExpressionForGeneration var_right_12400 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_11857.ptr ())) ;
        if (nullptr == var_right_12400.ptr ()) {
          test_4 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_4) {
          const GGS_leftShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_12327.readProperty_mValue ().left_shift_operation (var_right_12400.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 304)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 304)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_11938, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 306)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas4", 306)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 306)).operator_not (SOURCE_FILE ("expression-additive.galgas4", 306)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_leftShiftExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_11938, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 308)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 308)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 308)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas4", 307)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_leftShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_11938, temp_9.readProperty_mOperatorLocation (), var_leftExpression_11492, GGS_binaryOperator::class_func_leftShift (SOURCE_FILE ("expression-additive.galgas4", 316)), var_rightExpression_11857, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 327)) ;
  const GGS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 328)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14350 ;
  const GGS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14350, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 343)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14692 ;
  const GGS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14350.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14692, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 353)) ;
  {
  const GGS_addExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14350.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 364)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas4", 364)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 364)), GGS_string ("&+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14350, var_rightExpression_14692, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 363)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_15000 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_14350.ptr ())) ;
    if (nullptr == var_leftBigint_15000.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_15080 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_14692.ptr ())) ;
      if (nullptr == var_rightBigint_15080.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_addExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_15000.readProperty_mValue ().add_operation (var_rightBigint_15080.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 376)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_addExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14350.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_14350, GGS_binaryOperator::class_func_addNoOverflow (SOURCE_FILE ("expression-additive.galgas4", 383)), var_rightExpression_14692, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 394)) ;
  const GGS_addExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 395)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16760 ;
  const GGS_addExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16760, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 409)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_17102 ;
  const GGS_addExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16760.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_17102, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 419)) ;
  {
  const GGS_addExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16760.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 430)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("expression-additive.galgas4", 430)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 430)), GGS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16760, var_rightExpression_17102, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 429)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_17404 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_16760.ptr ())) ;
    if (nullptr == var_leftBigint_17404.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_17484 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_17102.ptr ())) ;
      if (nullptr == var_rightBigint_17484.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_addExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_17404.readProperty_mValue ().add_operation (var_rightBigint_17484.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 442)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_addExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16760.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_16760, GGS_binaryOperator::class_func_add (SOURCE_FILE ("expression-additive.galgas4", 449)), var_rightExpression_17102, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 460)) ;
  const GGS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 461)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_19174 ;
  const GGS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_19174, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 476)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_19516 ;
  const GGS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_19174.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_19516, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 486)) ;
  {
  const GGS_subExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_19174.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 497)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas4", 497)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 497)), GGS_string ("&-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_19174, var_rightExpression_19516, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 496)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_19824 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_19174.ptr ())) ;
    if (nullptr == var_leftBigint_19824.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_19904 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_19516.ptr ())) ;
      if (nullptr == var_rightBigint_19904.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_subExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_19824.readProperty_mValue ().substract_operation (var_rightBigint_19904.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 509)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_subExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_19174.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_19174, GGS_binaryOperator::class_func_subNoOverflow (SOURCE_FILE ("expression-additive.galgas4", 516)), var_rightExpression_19516, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 527)) ;
  const GGS_subExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 528)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_21584 ;
  const GGS_subExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_21584, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 542)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_21926 ;
  const GGS_subExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_21584.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_21926, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 552)) ;
  {
  const GGS_subExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_21584.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 563)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("expression-additive.galgas4", 563)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 563)), GGS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_21584, var_rightExpression_21926, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 562)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_22228 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_21584.ptr ())) ;
    if (nullptr == var_leftBigint_22228.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_22308 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_21926.ptr ())) ;
      if (nullptr == var_rightBigint_22308.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_subExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_22228.readProperty_mValue ().substract_operation (var_rightBigint_22308.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 575)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_subExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_21584.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_21584, GGS_binaryOperator::class_func_sub (SOURCE_FILE ("expression-additive.galgas4", 582)), var_rightExpression_21926, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@binaryOperatorExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GGS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_binaryOperatorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 625)) ;
  GGS_string var_leftTemporaryOperand_24261 ;
  const GGS_binaryOperatorExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_24261, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 627)) ;
  GGS_string var_rightTemporaryOperand_24447 ;
  const GGS_binaryOperatorExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_24447, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 629)) ;
  GGS_string var_operatorString_24510 ;
  GGS_bool var_hasCompilerOption_24537 ;
  const GGS_binaryOperatorExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mOperator ().enumValue ()) {
  case GGS_binaryOperator::Enumeration::invalid:
    break ;
  case GGS_binaryOperator::Enumeration::enum_rightShift:
    {
      var_operatorString_24510 = GGS_string ("right_shift_operation") ;
      var_hasCompilerOption_24537 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_leftShift:
    {
      var_operatorString_24510 = GGS_string ("left_shift_operation") ;
      var_hasCompilerOption_24537 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_add:
    {
      var_operatorString_24510 = GGS_string ("add_operation") ;
      var_hasCompilerOption_24537 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_addNoOverflow:
    {
      var_operatorString_24510 = GGS_string ("add_operation_no_ovf") ;
      var_hasCompilerOption_24537 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_sub:
    {
      var_operatorString_24510 = GGS_string ("substract_operation") ;
      var_hasCompilerOption_24537 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_subNoOverflow:
    {
      var_operatorString_24510 = GGS_string ("substract_operation_no_ovf") ;
      var_hasCompilerOption_24537 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_and:
    {
      var_operatorString_24510 = GGS_string ("operator_and") ;
      var_hasCompilerOption_24537 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_or:
    {
      var_operatorString_24510 = GGS_string ("operator_or") ;
      var_hasCompilerOption_24537 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_xor:
    {
      var_operatorString_24510 = GGS_string ("operator_xor") ;
      var_hasCompilerOption_24537 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_multiply_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_24510 = GGS_string ("multiply_operation_no_ovf") ;
      var_hasCompilerOption_24537 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_multiply_5F_operation:
    {
      var_operatorString_24510 = GGS_string ("multiply_operation") ;
      var_hasCompilerOption_24537 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_divide_5F_operation:
    {
      var_operatorString_24510 = GGS_string ("divide_operation") ;
      var_hasCompilerOption_24537 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_divide_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_24510 = GGS_string ("divide_operation_no_ovf") ;
      var_hasCompilerOption_24537 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_modulo_5F_operation:
    {
      var_operatorString_24510 = GGS_string ("modulo_operation") ;
      var_hasCompilerOption_24537 = GGS_bool (true) ;
    }
    break ;
  }
  outArgument_outCppExpression = var_leftTemporaryOperand_24261.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 677)).add_operation (var_operatorString_24510, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 677)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 677)) ;
  outArgument_outCppExpression.plusAssignOperation(var_rightTemporaryOperand_24447, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 678)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_hasCompilerOption_24537.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 680)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 680)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 680)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 681)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 681)) ;
      }
    }
  }
  const GGS_binaryOperatorExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_commaSourceFile (temp_5.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 683)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 683)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 683)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 163)) ;
  const GGS_orExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 164)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_7897 ;
  const GGS_orExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7897, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 178)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8240 ;
  const GGS_orExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7897.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8240, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 188)) ;
  {
  const GGS_orExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7897.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 199)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas4", 199)) COMMA_SOURCE_FILE ("expression-or.galgas4", 199)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7897, var_rightExpression_8240, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 198)) ;
  }
  const GGS_orExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_7897.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7897, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("expression-or.galgas4", 209)), var_rightExpression_8240, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orShortExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 219)) ;
  const GGS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 220)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orShortExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                  GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_9895 ;
  const GGS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9895, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 234)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10238 ;
  const GGS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_9895.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10238, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 244)) ;
  {
  const GGS_orShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_9895.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 255)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas4", 255)) COMMA_SOURCE_FILE ("expression-or.galgas4", 255)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_9895, var_rightExpression_10238, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 254)) ;
  }
  const GGS_orShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_orShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_9895.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_9895, var_rightExpression_10238, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@xorExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 274)) ;
  const GGS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 275)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@xorExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_11883 ;
  const GGS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11883, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 289)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12226 ;
  const GGS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_11883.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12226, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 299)) ;
  {
  const GGS_xorExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_11883.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 310)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("expression-or.galgas4", 310)) COMMA_SOURCE_FILE ("expression-or.galgas4", 310)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_11883, var_rightExpression_12226, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 309)) ;
  }
  const GGS_xorExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_11883.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_11883, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("expression-or.galgas4", 321)), var_rightExpression_12226, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@closedSliceExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 331)) ;
  const GGS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 332)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@closedSliceExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_13952 ;
  const GGS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_13952, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 347)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14316 ;
  const GGS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14316, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 357)) ;
  GGS_unifiedTypeMapEntry var_leftType_14397 = var_leftExpression_13952.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_leftType_14397, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 368)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_13952.readProperty_mLocation (), GGS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas4", 369)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_rightType_14619 = var_rightExpression_14316.readProperty_mResultType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_14619, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 372)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_14316.readProperty_mLocation (), GGS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas4", 373)) ;
    }
  }
  const GGS_closedSliceExpressionAST temp_6 = this ;
  outArgument_outExpression = GGS_closedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_13952.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 377)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_13952, var_rightExpression_14316, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@openedSliceExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 389)) ;
  const GGS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 390)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@openedSliceExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16564 ;
  const GGS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16564, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 404)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16928 ;
  const GGS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16928, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 414)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_leftExpression_16564.readProperty_mResultType (), var_leftExpression_16564.readProperty_mLocation (), var_leftExpression_16564, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 424)) ;
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_rightExpression_16928.readProperty_mResultType (), var_rightExpression_16928.readProperty_mLocation (), var_rightExpression_16928, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 430)) ;
  }
  const GGS_openedSliceExpressionAST temp_2 = this ;
  outArgument_outExpression = GGS_openedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_16564.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 438)), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16564, var_rightExpression_16928, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orShortExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     GGS_string & outArgument_outCppExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 476)) ;
  GGS_string var_leftTemporaryOperand_19252 ;
  const GGS_orShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19252, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 478)) ;
  GGS_string var_testVar_19309 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas4", 486)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 487)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_bool ").add_operation (var_testVar_19309, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 488)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 488)).add_operation (var_leftTemporaryOperand_19252, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 488)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 488)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 488)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue != ").add_operation (var_testVar_19309, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 489)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 489)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 489)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 491)) ;
  }
  GGS_string var_rightTemporaryOperand_19792 ;
  const GGS_orShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_19792, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 492)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_testVar_19309.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 499)).add_operation (var_rightTemporaryOperand_19792, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 499)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 499)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 499)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 500)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 501)) ;
  outArgument_outCppExpression = var_testVar_19309 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@closedSliceExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_closedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 513)) ;
  GGS_string var_leftTemporaryOperand_20582 ;
  const GGS_closedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_20582, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 515)) ;
  GGS_string var_rightTemporaryOperand_20791 ;
  const GGS_closedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20791, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 523)) ;
  const GGS_closedSliceExpressionForGeneration temp_3 = this ;
  const GGS_closedSliceExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_20582, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 532)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 532)).add_operation (var_rightTemporaryOperand_20791, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 532)).add_operation (GGS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 533)).add_operation (var_leftTemporaryOperand_20582, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 533)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 533)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 533)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 533)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 533)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 533)).add_operation (GGS_string (").add_operation (GGS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 533)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 533)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 533)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 533)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 533)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 533)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@openedSliceExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_openedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 545)) ;
  GGS_string var_leftTemporaryOperand_21745 ;
  const GGS_openedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_21745, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 547)) ;
  GGS_string var_rightTemporaryOperand_21954 ;
  const GGS_openedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_21954, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 555)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 563)) COMMA_SOURCE_FILE ("expression-or.galgas4", 563)) ;
  }
  const GGS_openedSliceExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_21745, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 565)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 565)).add_operation (var_rightTemporaryOperand_21954, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 565)).add_operation (GGS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 566)).add_operation (var_leftTemporaryOperand_21745, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 566)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 566)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 566)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 566)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 567)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 566)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 567)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structPropertyAccessExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpressionGeneration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_exprGeneration_6360 ;
  const GGS_structPropertyAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 167)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exprGeneration_6360, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 164)) ;
  GGS_unifiedTypeMapEntry var_expressionType_6450 = var_exprGeneration_6360.readProperty_mResultType () ;
  GGS_propertyMap var_propertyMap_6502 = extensionGetter_definition (var_expressionType_6450, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 175)).readProperty_propertyMap () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_structPropertyAccessExpressionAST temp_2 = this ;
    const GGS_propertyMap_2E_element var_prop_6565 = var_propertyMap_6502.readSubscript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_propertyMap_6502.readSubscript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionForGeneration *> (var_exprGeneration_6360.ptr ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          {
          const GGS_structPropertyAccessExpressionAST temp_4 = this ;
          const GGS_structPropertyAccessExpressionAST temp_5 = this ;
          GGS_unifiedTypeMapEntry joker_6789_3 ; // Joker input parameter
          GGS_string joker_6789_2 ; // Joker input parameter
          GGS_string joker_6789_1 ; // Joker input parameter
          extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (temp_4.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 179)), temp_5.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_6789_3, joker_6789_2, joker_6789_1, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 178)) ;
          }
        }
      }
      const GGS_structPropertyAccessExpressionAST temp_6 = this ;
      extensionMethod_checkGetAccess (var_prop_6565.readProperty_mAccessControl (), constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_6.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 183)) ;
      const GGS_structPropertyAccessExpressionAST temp_7 = this ;
      const GGS_structPropertyAccessExpressionAST temp_8 = this ;
      outArgument_outExpressionGeneration = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_6565.readProperty_mPropertyType (), temp_7.readProperty_operatorLocation (), var_exprGeneration_6360, temp_8.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_getterMap var_getterMap_7159 = extensionGetter_definition (var_expressionType_6450, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 192)).readProperty_getterMap () ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_structPropertyAccessExpressionAST temp_10 = this ;
      const GGS_getterMap_2E_element var_theGetter_7220 = var_getterMap_7159.readSubscript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_getterMap_7159.readSubscript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_9 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_9) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, var_theGetter_7220.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 194)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_structPropertyAccessExpressionAST temp_12 = this ;
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_propertyName ().readProperty_location (), GGS_string ("for being called as a property read, the func should have no formal argument (has ").add_operation (var_theGetter_7220.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 197)).getter_string (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 196)), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 196)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 197)), fixItArray13  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 195)) ;
            outArgument_outExpressionGeneration.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_11) {
          const GGS_structPropertyAccessExpressionAST temp_14 = this ;
          GGS_string temp_15 ;
          const GalgasBool test_16 = GGS_bool (ComparisonKind::equal, var_theGetter_7220.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_structPropertyAccessExpressionAST temp_17 = this ;
            temp_15 = temp_17.readProperty_propertyName ().readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_16) {
            temp_15 = var_theGetter_7220.readProperty_mGetterNameThatObsoletesInvokationName () ;
          }
          outArgument_outExpressionGeneration = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_theGetter_7220.readProperty_mReturnedType (), temp_14.readProperty_propertyName ().readProperty_location (), var_theGetter_7220.readProperty_mKind (), var_exprGeneration_6360, GGS_stringlist::init (inCompiler COMMA_HERE), temp_15, GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_theGetter_7220.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      GGS_string var_s_8094 = GGS_string ("undefined property, undefined func") ;
      UpEnumerator_propertyMap enumerator_8159 (var_propertyMap_6502) ;
      while (enumerator_8159.hasCurrentObject ()) {
        var_s_8094.plusAssignOperation(GGS_string ("\n  -- property: ").add_operation (enumerator_8159.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 217)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 217)) ;
        enumerator_8159.gotoNextObject () ;
      }
      UpEnumerator_getterMap enumerator_8260 (var_getterMap_7159) ;
      while (enumerator_8260.hasCurrentObject ()) {
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, enumerator_8260.current (HERE).readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 220)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            var_s_8094.plusAssignOperation(GGS_string ("\n  -- func: ").add_operation (enumerator_8260.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 221)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 221)) ;
          }
        }
        enumerator_8260.gotoNextObject () ;
      }
      const GGS_structPropertyAccessExpressionAST temp_19 = this ;
      GenericArray <FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_propertyName ().readProperty_location (), var_s_8094, fixItArray20  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 224)) ;
      outArgument_outExpressionGeneration.drop () ; // Release error dropped variable
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@propertyAccessExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_propertyAccessExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GGS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_propertyAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 246)) ;
  GGS_string var_operand_9585 ;
  const GGS_propertyAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_9585, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 248)) ;
  outArgument_outCppExpression = var_operand_9585.add_operation (GGS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 256)) ;
  const GGS_propertyAccessExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression.plusAssignOperation(temp_2.readProperty_structFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 257)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 257)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 257)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subscriptReadAccessExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subscriptReadAccessExpressionAST temp_0 = this ;
  UpEnumerator_actualOutputArgumentList enumerator_10519 (temp_0.readProperty_actualArgumentList ()) ;
  while (enumerator_10519.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_10519.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 277)) ;
    enumerator_10519.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subscriptReadAccessExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_11654 ;
  const GGS_subscriptReadAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 295)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11654, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 292)) ;
  GGS_unifiedTypeMapEntry var_expressionType_11700 = var_expression_11654.readProperty_mResultType () ;
  const GGS_subscriptReadAccessExpressionAST temp_1 = this ;
  GGS_string var_invocationSignature_11787 = extensionGetter_subscriptSignature (temp_1.readProperty_actualArgumentList (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 303)) ;
  GGS_subscriptMap var_subscriptMap_11897 = extensionGetter_definition (var_expressionType_11700, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 305)).readProperty_readSubscriptMap () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_subscriptMap_2E_element var_aSubscript_11966 = var_subscriptMap_11897.readSubscript__3F_ (var_invocationSignature_11787, inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_subscriptMap_11897.readSubscript__3F_ (var_invocationSignature_11787, inCompiler COMMA_HERE).isValuated ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_12069 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_subscriptReadAccessExpressionAST temp_3 = this ;
      UpEnumerator_functionSignature enumerator_12181 (var_aSubscript_11966.readProperty_argumentTypeList ()) ;
      UpEnumerator_actualOutputArgumentList enumerator_12217 (temp_3.readProperty_actualArgumentList ()) ;
      while (enumerator_12181.hasCurrentObject () && enumerator_12217.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expression_12581 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_12217.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_12181.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12581, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 310)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_12181.current (HERE).readProperty_mFormalArgumentType (), var_expression_12581.readProperty_mResultType (), enumerator_12217.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_12581, inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 319)) ;
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_12181.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_12217.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GGS_string temp_5 ;
            const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_12181.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              temp_5 = enumerator_12181.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 327)) ;
            }else if (GalgasBool::boolFalse == test_6) {
              temp_5 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_12918 = GGS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 326)) ;
            GenericArray <FixItDescription> fixItArray7 ;
            appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, var_s_12918) ;
            inCompiler->emitSemanticError (enumerator_12217.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_12918, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 330)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 330)), fixItArray7  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 330)) ;
          }
        }
        var_semanticExpressionListForGeneration_12069.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_expression_12581, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 333)) ;
        enumerator_12181.gotoNextObject () ;
        enumerator_12217.gotoNextObject () ;
      }
      const GGS_subscriptReadAccessExpressionAST temp_8 = this ;
      outArgument_outExpression = GGS_subscriptReadAccessExpressionForGeneration::init_21__21__21__21__21_ (var_aSubscript_11966.readProperty_valueType (), temp_8.readProperty_endOfArgsLocation (), var_expression_11654, var_invocationSignature_11787, var_semanticExpressionListForGeneration_12069, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_subscriptReadAccessExpressionAST temp_9 = this ;
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_endOfArgsLocation (), GGS_string ("unknown subscript signature"), fixItArray10  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 344)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subscriptReadAccessExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                                 GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subscriptReadAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 366)) ;
  GGS_string var_operand_14839 ;
  const GGS_subscriptReadAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_14839, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 368)) ;
  GGS__5B_string_5D_ var_subscriptArgumentList_14897 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_subscriptReadAccessExpressionForGeneration temp_2 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_14951 (temp_2.readProperty_actualExpressionList ()) ;
  while (enumerator_14951.hasCurrentObject ()) {
    GGS_string var_actualArgOperand_15171 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14951.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_actualArgOperand_15171, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 378)) ;
    {
    var_subscriptArgumentList_14897.setter_append (var_actualArgOperand_15171, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 385)) ;
    }
    enumerator_14951.gotoNextObject () ;
  }
  outArgument_outCppExpression = var_operand_14839.add_operation (GGS_string (".readSubscript_"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 388)) ;
  const GGS_subscriptReadAccessExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssignOperation(temp_3.readProperty_subscriptInvocationName ().getter_identifierRepresentation (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 389)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 389)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 390)) ;
  UpEnumerator__5B_string_5D_ enumerator_15455 (var_subscriptArgumentList_14897) ;
  while (enumerator_15455.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_15455.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 392)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 392)) ;
    enumerator_15455.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 394)) COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 394)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 395)).add_operation (GGS_string (" COMMA_HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 395)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 395)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalTypeInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_literalTypeInExpressionAST temp_0 = this ;
  GGS_unifiedTypeMapEntry joker_3153 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mLiteralTypeName (), joker_3153, inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 69)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalTypeInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalTypeInExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_3723 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 83)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3723 COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 84)) ;
  }
  const GGS_literalTypeInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_type_3901 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 86)) ;
  const GGS_literalTypeInExpressionAST temp_2 = this ;
  outArgument_outExpression = GGS_literalTypeInExpressionForGeneration::init_21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("type"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 88)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 88)), temp_2.readProperty_mLiteralTypeName ().readProperty_location (), var_type_3901, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalTypeInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalTypeInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLiteralType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 111)) ;
  const GGS_literalTypeInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_type (& kTypeDescriptor_GALGAS_").add_operation (extensionGetter_definition (temp_1.readProperty_mLiteralType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 113)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-literal-type.galgas4", 113)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 112)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas4", 113)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@tildeExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 66)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@tildeExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_3859 ;
  const GGS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3859, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 81)) ;
  GGS_unifiedTypeMapEntry var_type_3941 = var_expression_3859.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_literalBigIntExpressionForGeneration var_exp_3982 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_3859.ptr ())) ;
    if (nullptr == var_exp_3982.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_3982.readProperty_mResultType (), var_exp_3982.readProperty_mLocation (), var_exp_3982.readProperty_mValue ().operator_tilde (SOURCE_FILE ("expression-tilde.galgas4", 95)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3941, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 98)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas4", 98)) COMMA_SOURCE_FILE ("expression-tilde.galgas4", 98)).operator_not (SOURCE_FILE ("expression-tilde.galgas4", 98)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_tildeExpressionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3941, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 100)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 100)).add_operation (GGS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 100)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas4", 99)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      const GGS_tildeExpressionAST temp_5 = this ;
      outArgument_outExpression = GGS_tildeExpressionForGeneration::init_21__21__21_ (var_type_3941, temp_5.readProperty_mOperatorLocation (), var_expression_3859, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@tildeExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tildeExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 133)) ;
  GGS_string var_operand_5643 ;
  const GGS_tildeExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5643, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 135)) ;
  const GGS_tildeExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5643.add_operation (GGS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 137)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 137)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 137)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 137)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@comparisonExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 181)) ;
  const GGS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 182)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@comparisonExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_8883 ;
  const GGS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8883, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 197)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_9229 ;
  const GGS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8883.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9229, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 207)) ;
  GGS_bool var_isEquatable_9275 = extensionGetter_definition (var_leftExpression_8883.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 217)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("expression-comparison.galgas4", 217)) COMMA_SOURCE_FILE ("expression-comparison.galgas4", 217)) ;
  GGS_bool var_isComparable_9365 = extensionGetter_definition (var_leftExpression_8883.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 218)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("expression-comparison.galgas4", 218)) COMMA_SOURCE_FILE ("expression-comparison.galgas4", 218)) ;
  GGS_bool var_isReferenceEquatable_9457 = extensionGetter_definition (var_leftExpression_8883.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 219)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("expression-comparison.galgas4", 219)) COMMA_SOURCE_FILE ("expression-comparison.galgas4", 219)) ;
  GGS_bool var_operatorIsAvailable_9571 ;
  GGS_string var_operatorName_9605 ;
  const GGS_comparisonExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
    {
      var_operatorName_9605 = GGS_string ("==") ;
      var_operatorIsAvailable_9571 = var_isEquatable_9275 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
    {
      var_operatorName_9605 = GGS_string ("!=") ;
      var_operatorIsAvailable_9571 = var_isEquatable_9275 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_9605 = GGS_string ("<=") ;
      var_operatorIsAvailable_9571 = var_isComparable_9365 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_9605 = GGS_string ("<") ;
      var_operatorIsAvailable_9571 = var_isComparable_9365 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_9605 = GGS_string (">=") ;
      var_operatorIsAvailable_9571 = var_isComparable_9365 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_9605 = GGS_string (">") ;
      var_operatorIsAvailable_9571 = var_isComparable_9365 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_9605 = GGS_string ("===") ;
      var_operatorIsAvailable_9571 = var_isReferenceEquatable_9457 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_9605 = GGS_string ("!==") ;
      var_operatorIsAvailable_9571 = var_isReferenceEquatable_9457 ;
    }
    break ;
  }
  {
  const GGS_comparisonExpressionAST temp_3 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (var_operatorIsAvailable_9571, var_operatorName_9605, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8883, var_rightExpression_9229, inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 249)) ;
  }
  const GGS_comparisonExpressionAST temp_4 = this ;
  const GGS_comparisonExpressionAST temp_5 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), var_leftExpression_8883, temp_5.readProperty_mComparison (), var_rightExpression_9229, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@comparisonExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_comparisonExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 285)) ;
  GGS_string var_leftTemporaryOperand_11835 ;
  const GGS_comparisonExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_11835, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 287)) ;
  GGS_string var_rightTemporaryOperand_12045 ;
  const GGS_comparisonExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_12045, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 295)) ;
  GGS_string var_operatorName_12105 ;
  const GGS_comparisonExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_12105 = GGS_string ("ComparisonKind::equal") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_12105 = GGS_string ("ComparisonKind::notEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_12105 = GGS_string ("ComparisonKind::lowerOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_12105 = GGS_string ("ComparisonKind::lowerThan") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_12105 = GGS_string ("ComparisonKind::greaterOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_12105 = GGS_string ("ComparisonKind::greaterThan") ;
    }
    break ;
  }
  outArgument_outCppExpression = GGS_string ("GGS_bool (").add_operation (var_operatorName_12105, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (var_leftTemporaryOperand_11835, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (GGS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (var_rightTemporaryOperand_12045, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalDoubleExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalDoubleExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalDoubleExpressionAST temp_0 = this ;
  const GGS_literalDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalDoubleExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_double (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalDoubleExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalDoubleExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_double (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-double.galgas4", 105)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 105)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 105)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionCallExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionAST temp_0 = this ;
  UpEnumerator_actualOutputArgumentList enumerator_4035 (temp_0.readProperty_mExpressionList ()) ;
  while (enumerator_4035.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4035.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 94)) ;
    enumerator_4035.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionCallExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_4686 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 109)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4686 COMMA_SOURCE_FILE ("expression-function-call.galgas4", 110)) ;
  }
  GGS_functionSignature var_functionSignature_5009 ;
  GGS_unifiedTypeMapEntry var_resultType_5060 ;
  GGS_bool var_isInternal_5089 ;
  const GGS_functionCallExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_5009, var_resultType_5060, var_isInternal_5089, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 112)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_5089.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_functionCallExpressionAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_5162 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 120)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_functionCallExpressionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 121)).objectCompare (var_procDeclarationLocation_5162.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 121)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_functionCallExpressionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_5162.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 122)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 122)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 122)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 122)) ;
        }
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_functionCallExpressionAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_5009.getter_count (SOURCE_FILE ("expression-function-call.galgas4", 126)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas4", 126)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_functionCallExpressionAST temp_10 = this ;
      const GGS_functionCallExpressionAST temp_11 = this ;
      const GGS_functionCallExpressionAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 128)).add_operation (GGS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 128)).add_operation (var_functionSignature_5009.getter_count (SOURCE_FILE ("expression-function-call.galgas4", 128)).getter_string (SOURCE_FILE ("expression-function-call.galgas4", 128)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 128)).add_operation (GGS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 128)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas4", 129)).getter_string (SOURCE_FILE ("expression-function-call.galgas4", 129)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 129)).add_operation (GGS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 129)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 127)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GGS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_5901 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_functionCallExpressionAST temp_14 = this ;
    UpEnumerator_functionSignature enumerator_6002 (var_functionSignature_5009) ;
    UpEnumerator_actualOutputArgumentList enumerator_6039 (temp_14.readProperty_mExpressionList ()) ;
    while (enumerator_6002.hasCurrentObject () && enumerator_6039.hasCurrentObject ()) {
      GGS_semanticExpressionForGeneration var_expression_6400 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_6039.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_6002.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6400, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 135)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_6002.current (HERE).readProperty_mFormalArgumentType (), var_expression_6400.readProperty_mResultType (), enumerator_6039.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_6400, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 144)) ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_6002.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_6039.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_6002.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = enumerator_6002.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 152)) ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_6737 = GGS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 151)) ;
          GenericArray <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, EnumFixItKind::fixItReplace, var_s_6737) ;
          inCompiler->emitSemanticError (enumerator_6039.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_6737, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 155)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 155)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 155)) ;
        }
      }
      var_semanticExpressionListForGeneration_5901.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_expression_6400, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 158)) ;
      enumerator_6002.gotoNextObject () ;
      enumerator_6039.gotoNextObject () ;
    }
    const GGS_functionCallExpressionAST temp_19 = this ;
    const GGS_functionCallExpressionAST temp_20 = this ;
    outArgument_outExpression = GGS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_5060, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_5901, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionCallExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 189)) ;
  const GGS_functionCallExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas4", 191)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 191))  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 191)) ;
  GGS_stringlist var_parameterList_8468 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_functionCallExpressionForGeneration temp_2 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_8519 (temp_2.readProperty_mExpressions ()) ;
  while (enumerator_8519.hasCurrentObject ()) {
    GGS_string var_parameter_8677 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8519.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_8677, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 195)) ;
    var_parameterList_8468.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_parameter_8677, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 196)) ;
    enumerator_8519.gotoNextObject () ;
  }
  const GGS_functionCallExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas4", 198)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 198)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 198)) ;
  UpEnumerator_stringlist enumerator_8830 (var_parameterList_8468) ;
  while (enumerator_8830.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_8830.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 200)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 200)) ;
    enumerator_8830.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 202)) COMMA_SOURCE_FILE ("expression-function-call.galgas4", 202)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 203)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 203)) ;
  const GGS_functionCallExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 204)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 204)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 204)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 103)) ;
  const GGS_andExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 104)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_5502 ;
  const GGS_andExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_5502, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 118)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_5844 ;
  const GGS_andExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_5502.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_5844, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 128)) ;
  {
  const GGS_andExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_5502.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 139)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas4", 139)) COMMA_SOURCE_FILE ("expression-and.galgas4", 139)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_5502, var_rightExpression_5844, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 138)) ;
  }
  const GGS_andExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_5502.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_5502, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("expression-and.galgas4", 150)), var_rightExpression_5844, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andShortExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 160)) ;
  const GGS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 161)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andShortExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_7528 ;
  const GGS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7528, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 175)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_7870 ;
  const GGS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7528.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7870, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 185)) ;
  {
  const GGS_andShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7528.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 196)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas4", 196)) COMMA_SOURCE_FILE ("expression-and.galgas4", 196)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7528, var_rightExpression_7870, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 195)) ;
  }
  const GGS_andShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_andShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_7528.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7528, var_rightExpression_7870, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andShortExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      GGS_string & outArgument_outCppExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 227)) ;
  GGS_string var_leftTemporaryOperand_9354 ;
  const GGS_andShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_9354, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 229)) ;
  GGS_string var_testVar_9411 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas4", 237)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 237)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_bool ").add_operation (var_testVar_9411, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)).add_operation (var_leftTemporaryOperand_9354, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 238)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_9411, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 239)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 239)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 239)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 241)) ;
  }
  GGS_string var_rightTemporaryOperand_9894 ;
  const GGS_andShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_9894, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 242)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_testVar_9411.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 249)).add_operation (var_rightTemporaryOperand_9894, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 249)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 249)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 249)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 250)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 251)) ;
  outArgument_outCppExpression = var_testVar_9411 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 115)) ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 116)) ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 117)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_if_5F_expression_5337 ;
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_if_5F_expression_5337, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 132)) ;
  GGS_semanticExpressionForGeneration var_then_5F_expression_5629 ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_then_5F_expression_5629, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 142)) ;
  GGS_semanticExpressionForGeneration var_else_5F_expression_5923 ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_else_5F_expression_5923, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 152)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_if_5F_expression_5337.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 162)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ifExpressionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mOperatorLocation (), GGS_string ("the test expression type is '@").add_operation (extensionGetter_definition (var_if_5F_expression_5337.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 164)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 164)).add_operation (GGS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 164)), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 163)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::notEqual, var_then_5F_expression_5629.readProperty_mResultType ().objectCompare (var_else_5F_expression_5923.readProperty_mResultType ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_ifExpressionAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("operand expression types are '@").add_operation (extensionGetter_definition (var_then_5F_expression_5629.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).add_operation (GGS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).add_operation (extensionGetter_definition (var_else_5F_expression_5923.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).add_operation (GGS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 167)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      const GGS_ifExpressionAST temp_9 = this ;
      outArgument_outExpression = GGS_ifExpressionForGeneration::init_21__21__21__21__21_ (var_then_5F_expression_5629.readProperty_mResultType (), temp_9.readProperty_mOperatorLocation (), var_if_5F_expression_5337, var_then_5F_expression_5629, var_else_5F_expression_5923, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                GGS_string & outArgument_outCppExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_ifExpression_7795 ;
  const GGS_ifExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_7795, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 202)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-if.galgas4", 210)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 210)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 211)) ;
  const GGS_ifExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mThenExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)) ;
  GGS_string var_testVar_8057 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-if.galgas4", 213)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 213)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 214)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GalgasBool ").add_operation (var_testVar_8057, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)).add_operation (var_ifExpression_7795, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_8057, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 216)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 216)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 218)) ;
  }
  GGS_string var_thenExpression_8535 ;
  const GGS_ifExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mThenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_8535, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 219)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)).add_operation (var_thenExpression_8535, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 227)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else if (GalgasBool::boolFalse == ").add_operation (var_testVar_8057, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 229)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 229)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 229)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 230)) ;
  }
  GGS_string var_elseExpression_8972 ;
  const GGS_ifExpressionForGeneration temp_3 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_3.readProperty_mElseExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_8972, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 231)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)).add_operation (var_elseExpression_8972, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 239)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 240)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nilExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nilExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                              GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                              const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                              GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                              GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inType.getter_isNull (SOURCE_FILE ("expression-primary-nil.galgas4", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nilExpressionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 73)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_unwrappedType_3433 = extensionGetter_definition (constinArgument_inType, inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 75)).readProperty_unwrappedType () ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_unwrappedType_3433.getter_isNull (SOURCE_FILE ("expression-primary-nil.galgas4", 76)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_nilExpressionAST temp_4 = this ;
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mLocation (), GGS_string ("the inferred type @").add_operation (extensionGetter_typeName (var_unwrappedType_3433, inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 77)), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 77)).add_operation (GGS_string (" is not an optional type"), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 77)), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 77)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_nilExpressionAST temp_6 = this ;
      outArgument_outExpression = GGS_nilExpressionForGeneration::init_21__21_ (constinArgument_inType, temp_6.readProperty_mLocation (), inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nilExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                 GGS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_nilExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 102)), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 102)).add_operation (GGS_string ("::init_nil ()"), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 102)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getterCallExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 30)) ;
  const GGS_getterCallExpressionAST temp_1 = this ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mActualArgumentList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getterCallExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_getterCallExpressionAST temp_1 = this ;
    test_0 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionAST *> (temp_1.readProperty_mReceiver ().ptr ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_getterCallExpressionAST temp_2 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_2.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 46)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_receiverExpression_2980 ;
  const GGS_getterCallExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas4", 52)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_2980, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 49)) ;
  GGS_unifiedTypeMapEntry var_receiverType_3034 = var_receiverExpression_2980.readProperty_mResultType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_getterCallExpressionAST temp_5 = this ;
    const GGS_getterMap_2E_element var_aGetter_3146 = extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 60)).readProperty_getterMap ().readSubscript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 60)).readProperty_getterMap ().readSubscript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_4 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_aGetter_3146.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_getterCallExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_aGetter_3146.readProperty_mGetterNameThatObsoletesInvokationName ()) ;
          inCompiler->emitSemanticError (temp_7.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray8  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 62)) ;
        }
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_getterCallExpressionAST temp_10 = this ;
        GGS_bool test_11 = extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 66)).readProperty_propertyMap ().getter_hasKey (temp_10.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 66)) ;
        if (GalgasBool::boolTrue == test_11.boolEnum ()) {
          const GGS_getterCallExpressionAST temp_12 = this ;
          test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 67)).objectCompare (GGS_uint (uint32_t (0U)))) ;
        }
        test_9 = test_11.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_getterCallExpressionAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead of func call"), fixItArray14  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 68)) ;
        }
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        const GGS_getterCallExpressionAST temp_16 = this ;
        test_15 = GGS_bool (ComparisonKind::notEqual, temp_16.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 71)).objectCompare (var_aGetter_3146.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 71)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_getterCallExpressionAST temp_17 = this ;
          const GGS_getterCallExpressionAST temp_18 = this ;
          const GGS_getterCallExpressionAST temp_19 = this ;
          GenericArray <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_18.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (GGS_string ("' func of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (var_aGetter_3146.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 74)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 73)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 74)).add_operation (temp_19.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 75)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 74)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 74)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 75)), fixItArray20  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 72)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_15) {
        GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_4135 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
        const GGS_getterCallExpressionAST temp_21 = this ;
        UpEnumerator_actualOutputArgumentList enumerator_4202 (temp_21.readProperty_mActualArgumentList ()) ;
        UpEnumerator_functionSignature enumerator_4241 (var_aGetter_3146.readProperty_mArgumentTypeList ()) ;
        while (enumerator_4202.hasCurrentObject () && enumerator_4241.hasCurrentObject ()) {
          GGS_semanticExpressionForGeneration var_exp_4615 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_4202.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_4241.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_4615, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 79)) ;
          GalgasBool test_22 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_22) {
            test_22 = GGS_bool (ComparisonKind::notEqual, enumerator_4241.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_4202.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_22) {
              GGS_string temp_23 ;
              const GalgasBool test_24 = GGS_bool (ComparisonKind::notEqual, enumerator_4241.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_24) {
                temp_23 = enumerator_4241.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 89)) ;
              }else if (GalgasBool::boolFalse == test_24) {
                temp_23 = GGS_string::makeEmptyString () ;
              }
              GGS_string var_s_4736 = GGS_string ("!").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 89)) ;
              GenericArray <FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, EnumFixItKind::fixItReplace, var_s_4736) ;
              inCompiler->emitSemanticError (enumerator_4202.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_4736, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 90)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 90)), fixItArray25  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 90)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_4241.current (HERE).readProperty_mFormalArgumentType (), var_exp_4615.readProperty_mResultType (), enumerator_4202.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_4615, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 92)) ;
          }
          var_constructorEffectiveParameterList_4135.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_exp_4615, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 93)) ;
          enumerator_4202.gotoNextObject () ;
          enumerator_4241.gotoNextObject () ;
        }
        const GGS_getterCallExpressionAST temp_26 = this ;
        GGS_string temp_27 ;
        const GalgasBool test_28 = GGS_bool (ComparisonKind::equal, var_aGetter_3146.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          const GGS_getterCallExpressionAST temp_29 = this ;
          temp_27 = temp_29.readProperty_mGetterName ().readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_28) {
          temp_27 = var_aGetter_3146.readProperty_mGetterNameThatObsoletesInvokationName () ;
        }
        outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_aGetter_3146.readProperty_mReturnedType (), temp_26.readProperty_mGetterName ().readProperty_location (), var_aGetter_3146.readProperty_mKind (), var_receiverExpression_2980, GGS_stringlist::init (inCompiler COMMA_HERE), temp_27, var_constructorEffectiveParameterList_4135, var_aGetter_3146.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
        GalgasBool test_30 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_30) {
          const GGS_getterCallExpressionAST temp_31 = this ;
          test_30 = GGS_bool (ComparisonKind::equal, temp_31.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 105)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_30) {
            const GGS_getterCallExpressionAST temp_32 = this ;
            GenericArray <FixItDescription> fixItArray33 ;
            fixItArray33.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticError (temp_32.readProperty_mExpressionLocation (), GGS_string ("func with no argument, remove parenthesis"), fixItArray33  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 106)) ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GalgasBool test_34 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_34) {
      const GGS_getterCallExpressionAST temp_35 = this ;
      test_34 = GGS_bool (ComparisonKind::equal, temp_35.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 110)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_34) {
        const GGS_getterCallExpressionAST temp_36 = this ;
        test_34 = extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 110)).readProperty_propertyMap ().getter_hasKey (temp_36.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 110)).boolEnum () ;
        if (GalgasBool::boolTrue == test_34) {
          const GGS_getterCallExpressionAST temp_37 = this ;
          GenericArray <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead of func call"), fixItArray38  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 111)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (GalgasBool::boolFalse == test_34) {
      GGS_uint var_matchingReaderCount_6186 = GGS_uint (uint32_t (0U)) ;
      GalgasBool test_39 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_39) {
        test_39 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 115)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-getter-call.galgas4", 115)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_39) {
          GGS_functionSignature var_getterFormalArgumentTypeList_6303 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
          GGS_bool var_hasCompilerArgument_6350 = GGS_bool (true) ;
          GGS_unifiedTypeMapEntry var_returnedType_6389 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas4", 118)) ;
          GGS_methodKind var_kind_6442 = GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas4", 119)) ;
          GGS_stringlist var_fieldList_6504 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_obsoletedByGetter_6532 = GGS_string::makeEmptyString () ;
          UpEnumerator_typedPropertyList enumerator_6603 (extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 122)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_6603.hasCurrentObject ()) {
            GGS_unifiedTypeMapEntry var_propertyType_6645 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (extensionGetter_definition (enumerator_6603.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 123)).readProperty_typeName ().readProperty_string (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 123)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 123)) ;
            GGS_getterMap var_aMap_6762 = extensionGetter_definition (var_propertyType_6645, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 124)).readProperty_getterMap () ;
            GalgasBool test_40 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_40) {
              const GGS_getterCallExpressionAST temp_41 = this ;
              const GGS_getterMap_2E_element var_entry_6820 = var_aMap_6762.readSubscript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
              if (!var_aMap_6762.readSubscript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
                test_40 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_40) {
                GalgasBool test_42 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_42) {
                  test_42 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (enumerator_6603.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 126)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_6603.current (HERE).readProperty_name ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_42) {
                    var_matchingReaderCount_6186.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 127)) ;
                    var_getterFormalArgumentTypeList_6303 = var_entry_6820.readProperty_mArgumentTypeList () ;
                    var_hasCompilerArgument_6350 = var_entry_6820.readProperty_mHasCompilerArgument () ;
                    var_returnedType_6389 = var_entry_6820.readProperty_mReturnedType () ;
                    const GGS_getterCallExpressionAST temp_43 = this ;
                    var_receiverExpression_2980 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_returnedType_6389, temp_43.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_2980, enumerator_6603.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE) ;
                    var_kind_6442 = var_entry_6820.readProperty_mKind () ;
                    var_obsoletedByGetter_6532 = var_entry_6820.readProperty_mGetterNameThatObsoletesInvokationName () ;
                  }
                }
              }
            }
            enumerator_6603.gotoNextObject () ;
          }
          GalgasBool test_44 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_44) {
            test_44 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_6186.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_44) {
              const GGS_getterCallExpressionAST temp_45 = this ;
              const GGS_getterCallExpressionAST temp_46 = this ;
              GenericArray <FixItDescription> fixItArray47 ;
              inCompiler->emitSemanticError (temp_45.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).add_operation (temp_46.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).add_operation (GGS_string ("' func, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)), fixItArray47  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 143)) ;
              var_getterFormalArgumentTypeList_6303.drop () ; // Release error dropped variable
              var_hasCompilerArgument_6350.drop () ; // Release error dropped variable
              var_returnedType_6389.drop () ; // Release error dropped variable
              var_kind_6442.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_44) {
            GalgasBool test_48 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_48) {
              test_48 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_6186.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_48) {
                GGS_string var_s_7978 = GGS_string::makeEmptyString () ;
                UpEnumerator_stringlist enumerator_8000 (var_fieldList_6504) ;
                while (enumerator_8000.hasCurrentObject ()) {
                  var_s_7978.plusAssignOperation(enumerator_8000.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 150)) ;
                  enumerator_8000.gotoNextObject () ;
                  if (enumerator_8000.hasCurrentObject ()) {
                    var_s_7978.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 151)) ;
                  }
                }
                const GGS_getterCallExpressionAST temp_49 = this ;
                const GGS_getterCallExpressionAST temp_50 = this ;
                GenericArray <FixItDescription> fixItArray51 ;
                inCompiler->emitSemanticError (temp_49.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (temp_50.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (GGS_string ("' func, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (var_s_7978, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 155)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 155)), fixItArray51  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 153)) ;
                var_getterFormalArgumentTypeList_6303.drop () ; // Release error dropped variable
                var_hasCompilerArgument_6350.drop () ; // Release error dropped variable
                var_returnedType_6389.drop () ; // Release error dropped variable
                var_kind_6442.drop () ; // Release error dropped variable
              }
            }
          }
          GalgasBool test_52 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_52) {
            const GGS_getterCallExpressionAST temp_53 = this ;
            test_52 = GGS_bool (ComparisonKind::notEqual, temp_53.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 159)).objectCompare (var_getterFormalArgumentTypeList_6303.getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 159)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_52) {
              const GGS_getterCallExpressionAST temp_54 = this ;
              const GGS_getterCallExpressionAST temp_55 = this ;
              const GGS_getterCallExpressionAST temp_56 = this ;
              GenericArray <FixItDescription> fixItArray57 ;
              inCompiler->emitSemanticError (temp_54.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_55.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (GGS_string ("' func of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (var_getterFormalArgumentTypeList_6303.getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 162)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 162)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 162)).add_operation (temp_56.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 163)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 163)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 162)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 163)), fixItArray57  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 160)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_52) {
            GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8978 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
            const GGS_getterCallExpressionAST temp_58 = this ;
            UpEnumerator_actualOutputArgumentList enumerator_9047 (temp_58.readProperty_mActualArgumentList ()) ;
            UpEnumerator_functionSignature enumerator_9078 (var_getterFormalArgumentTypeList_6303) ;
            while (enumerator_9047.hasCurrentObject () && enumerator_9078.hasCurrentObject ()) {
              GGS_semanticExpressionForGeneration var_exp_9479 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_9047.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_9078.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9479, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 167)) ;
              GalgasBool test_59 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_59) {
                test_59 = GGS_bool (ComparisonKind::notEqual, enumerator_9078.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_9047.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_59) {
                  GGS_string temp_60 ;
                  const GalgasBool test_61 = GGS_bool (ComparisonKind::notEqual, enumerator_9078.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_61) {
                    temp_60 = enumerator_9078.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 177)) ;
                  }else if (GalgasBool::boolFalse == test_61) {
                    temp_60 = GGS_string::makeEmptyString () ;
                  }
                  GGS_string var_s_9606 = GGS_string ("!").add_operation (temp_60, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 177)) ;
                  GenericArray <FixItDescription> fixItArray62 ;
                  appendFixItActions (fixItArray62, EnumFixItKind::fixItReplace, var_s_9606) ;
                  inCompiler->emitSemanticError (enumerator_9047.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_9606, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 178)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 178)), fixItArray62  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 178)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_9078.current (HERE).readProperty_mFormalArgumentType (), var_exp_9479.readProperty_mResultType (), enumerator_9047.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_9479, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 180)) ;
              }
              var_constructorEffectiveParameterList_8978.plusPlusAssignOperation (GGS_semanticExpressionListForGeneration_2E_element::init_21_ (var_exp_9479, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 181)) ;
              enumerator_9047.gotoNextObject () ;
              enumerator_9078.gotoNextObject () ;
            }
            GalgasBool test_63 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_63) {
              test_63 = GGS_bool (ComparisonKind::notEqual, var_obsoletedByGetter_6532.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_63) {
                const GGS_getterCallExpressionAST temp_64 = this ;
                GenericArray <FixItDescription> fixItArray65 ;
                appendFixItActions (fixItArray65, EnumFixItKind::fixItReplace, var_obsoletedByGetter_6532) ;
                inCompiler->emitSemanticError (temp_64.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray65  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 184)) ;
              }
            }
            const GGS_getterCallExpressionAST temp_66 = this ;
            GGS_string temp_67 ;
            const GalgasBool test_68 = GGS_bool (ComparisonKind::equal, var_obsoletedByGetter_6532.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_68) {
              const GGS_getterCallExpressionAST temp_69 = this ;
              temp_67 = temp_69.readProperty_mGetterName ().readProperty_string () ;
            }else if (GalgasBool::boolFalse == test_68) {
              temp_67 = var_obsoletedByGetter_6532 ;
            }
            outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_6389, temp_66.readProperty_mGetterName ().readProperty_location (), var_kind_6442, var_receiverExpression_2980, var_fieldList_6504, temp_67, var_constructorEffectiveParameterList_8978, var_hasCompilerArgument_6350, inCompiler COMMA_HERE) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_39) {
        GalgasBool test_70 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_70) {
          test_70 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 197)).readProperty_getterMap ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 197)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_70) {
            const GGS_getterCallExpressionAST temp_71 = this ;
            GenericArray <FixItDescription> fixItArray72 ;
            inCompiler->emitSemanticError (temp_71.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 199)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 199)).add_operation (GGS_string ("' type does not define any func"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 199)), fixItArray72  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 198)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_70) {
          const GGS_getterCallExpressionAST temp_73 = this ;
          const GGS_getterCallExpressionAST temp_74 = this ;
          GenericArray <FixItDescription> fixItArray75 ;
          appendFixItActions (fixItArray75, EnumFixItKind::fixItReplace, extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 205)).readProperty_getterMap ().getter_keyList (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 205))) ;
          inCompiler->emitSemanticError (temp_73.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3034, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).add_operation (temp_74.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).add_operation (GGS_string ("' func "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)), fixItArray75  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 202)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getterCallExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getterCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 236)) ;
  GGS_string var_receiverCppName_12407 ;
  const GGS_getterCallExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_12407, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 238)) ;
  GGS_stringlist var_getterArgumentCppNameList_12473 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_getterCallExpressionForGeneration temp_2 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_12514 (temp_2.readProperty_mActualArgumentList ()) ;
  while (enumerator_12514.hasCurrentObject ()) {
    GGS_string var_argumentCppName_12736 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12514.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_12736, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 248)) ;
    var_getterArgumentCppNameList_12473.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_argumentCppName_12736, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 255)) ;
    enumerator_12514.gotoNextObject () ;
  }
  const GGS_getterCallExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_getterCallExpressionForGeneration temp_4 = this ;
      GGS_unifiedTypeMapEntry var_baseType_12935 = temp_4.readProperty_mReceiverExpression ().readProperty_mResultType () ;
      extensionMethod_addHeaderFileName (var_baseType_12935, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 261)) ;
      GGS_bool var_searching_13050 = GGS_bool (true) ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas4", 263)).isValid ()) {
        uint32_t variant_13073 = GGS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas4", 263)).uintValue () ;
        bool loop_13073 = true ;
        while (loop_13073) {
          loop_13073 = var_searching_13050.isValid () ;
          if (loop_13073) {
            loop_13073 = var_searching_13050.boolValue () ;
          }
          if (loop_13073 && (0 == variant_13073)) {
            loop_13073 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-getter-call.galgas4", 263)) ;
          }
          if (loop_13073) {
            variant_13073 -= 1 ;
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = extensionGetter_definition (var_baseType_12935, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 264)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-getter-call.galgas4", 264)).operator_not (SOURCE_FILE ("expression-getter-call.galgas4", 264)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GalgasBool test_6 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_6) {
                  const GGS_getterCallExpressionForGeneration temp_7 = this ;
                  test_6 = extensionGetter_definition (extensionGetter_definition (var_baseType_12935, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 265)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 265)).readProperty_getterMap ().getter_hasKey (temp_7.readProperty_mGetterName () COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 265)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_6) {
                    var_baseType_12935 = extensionGetter_definition (var_baseType_12935, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 266)).readProperty_superType () ;
                  }
                }
                if (GalgasBool::boolFalse == test_6) {
                  var_searching_13050 = GGS_bool (false) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_5) {
              var_searching_13050 = GGS_bool (false) ;
            }
          }
        }
      }
      const GGS_getterCallExpressionForGeneration temp_8 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (extensionGetter_definition (var_baseType_12935, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 274)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274)).add_operation (temp_8.readProperty_mGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 274)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274))  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_12407 COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 275)) ;
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_getterCallExpressionForGeneration temp_10 = this ;
        test_9 = extensionGetter_definition (temp_10.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 276)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-getter-call.galgas4", 276)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_getterCallExpressionForGeneration temp_11 = this ;
          const GGS_getterCallExpressionForGeneration temp_12 = this ;
          outArgument_outCppExpression = GGS_string ("callExtensionGetter_").add_operation (temp_11.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 277)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 277)).add_operation (GGS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 277)).add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)).add_operation (var_receiverCppName_12407, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)).add_operation (GGS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)) ;
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        const GGS_getterCallExpressionForGeneration temp_13 = this ;
        extensionMethod_addHeaderFileName (temp_13.readProperty_mReceiverExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 280)) ;
        const GGS_getterCallExpressionForGeneration temp_14 = this ;
        outArgument_outCppExpression = GGS_string ("extensionGetter_").add_operation (temp_14.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 281)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 281)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 281)).add_operation (var_receiverCppName_12407, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 281)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 281)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_12407 ;
      const GGS_getterCallExpressionForGeneration temp_15 = this ;
      UpEnumerator_stringlist enumerator_14259 (temp_15.readProperty_mFieldList ()) ;
      while (enumerator_14259.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssignOperation(GGS_string (".readProperty_").add_operation (enumerator_14259.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 286)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 286)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 286)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 286)) ;
        enumerator_14259.gotoNextObject () ;
      }
      const GGS_getterCallExpressionForGeneration temp_16 = this ;
      extensionMethod_addHeaderFileName (temp_16.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 288)) ;
      const GGS_getterCallExpressionForGeneration temp_17 = this ;
      outArgument_outCppExpression.plusAssignOperation(GGS_string (".getter_").add_operation (temp_17.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 289)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 289)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 289)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 289)) ;
    }
    break ;
  }
  UpEnumerator_stringlist enumerator_14552 (var_getterArgumentCppNameList_12473) ;
  while (enumerator_14552.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_14552.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 292)) ;
    enumerator_14552.gotoNextObject () ;
    if (enumerator_14552.hasCurrentObject ()) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 293)) ;
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = GGS_bool (ComparisonKind::equal, var_getterArgumentCppNameList_12473.getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 295)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        const GGS_getterCallExpressionForGeneration temp_20 = this ;
        test_19 = temp_20.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 297)) COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 297)) ;
          }
          outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 298)).add_operation (GGS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 298)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 298)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_18) {
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_getterCallExpressionForGeneration temp_22 = this ;
      test_21 = temp_22.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 301)) COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 301)) ;
        }
        outArgument_outCppExpression.plusAssignOperation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 302)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 302)).add_operation (GGS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 302)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 302)) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 304)) ;
    }
  }
  const GGS_getterCallExpressionForGeneration temp_23 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_sourceFile (temp_23.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 306)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 306)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 306)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap_21_ (GGS_lexicalRoutineMap & outArgument_outLexicalRoutineMap,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalRoutineMap.drop () ; // Release 'out' argument
  outArgument_outLexicalRoutineMap = GGS_lexicalRoutineMap::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 48)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 48)), GGS_string ("ioASCIICharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 48)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 49)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 49)), GGS_string ("inHexDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 49)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inErrorCodeGreaterThan255"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 50)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inErrorNotHexDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 51)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoASCIIcharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 53)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 52)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 61)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 61)), GGS_string ("ioASCIICharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 61)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 62)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 62)), GGS_string ("inDecimalDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 62)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inErrorCodeGreaterThan255"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 63)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inErrorNotDecimalDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 64)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDigitIntoASCIIcharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 66)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 65)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 73)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 73)), GGS_string ("ioString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 73)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 74)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 74)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 74)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterCharacterIntoString"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 76)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 75)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 83)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 83)), GGS_string ("ioString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 83)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 84)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 84)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 84)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("prependCharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 86)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 85)) ;
  }
  {
  GGS_lexicalRoutineFormalArgumentList temp_0 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 94)) ;
  temp_0.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 94)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 94)), GGS_string ("ioString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 94)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("resetString"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 93)), inCompiler COMMA_HERE), temp_0, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 92)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 101)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 101)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 101)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 102)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("predefinedLexicalActions.galgas4", 102)), GGS_string ("ioDouble"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 102)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inConversionError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 103)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertStringToDouble"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 105)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 104)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 113)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 113)), GGS_string ("ioCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 113)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 114)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 114)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 114)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterCharacterIntoCharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 116)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 115)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 124)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 124)), GGS_string ("ioNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 124)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 125)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("negateSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 127)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 126)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 135)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 135)), GGS_string ("ioNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 135)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 136)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("negateSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 138)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 137)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 146)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 146)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 146)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 147)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 147)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 147)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 148)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertUIntToSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 150)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 149)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 158)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 158)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 158)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 159)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 159)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 159)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 160)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertUInt64ToSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 162)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 161)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 170)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 170)), GGS_string ("inDecimalDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 170)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 171)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 171)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 171)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 172)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 173)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 175)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 174)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 183)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 183)), GGS_string ("inDecimalDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 183)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 184)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 184)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 184)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 185)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 186)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 188)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 187)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 195)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 195)), GGS_string ("inDecimalDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 195)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 196)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 196)), GGS_string ("ioBigInt"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 196)) ;
  {
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 200)) ;
  temp_1.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 200)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDecimalDigitIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 198)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, temp_1, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 197)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 205)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 205)), GGS_string ("inBinaryDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 205)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 206)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 206)), GGS_string ("ioBigInt"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 206)) ;
  {
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 210)) ;
  temp_2.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotBinaryDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 210)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterBinaryDigitIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 208)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, temp_2, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 207)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 215)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 215)), GGS_string ("inHexDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 215)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 216)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 216)), GGS_string ("ioBigInt"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 216)) ;
  {
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 220)) ;
  temp_3.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotHexDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 220)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 218)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, temp_3, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 217)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 225)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 225)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 225)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 226)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 226)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 226)) ;
  {
  GGS_stringlist temp_4 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 230)) ;
  temp_4.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 230)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 228)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, temp_4, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 227)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 235)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 235)), GGS_string ("ioBigInt"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 235)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("negateBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 237)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 236)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 244)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 244)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 244)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 245)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 245)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 245)) ;
  {
  GGS_stringlist temp_5 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 249)) ;
  temp_5.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotBinaryDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 249)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertBinaryStringIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 247)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, temp_5, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 246)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 254)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 254)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 254)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 255)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 255)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 255)) ;
  {
  GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 259)) ;
  temp_6.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotHexDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 259)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 257)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, temp_6, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 256)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 265)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 265)), GGS_string ("inHexDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 265)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 266)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 266)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 266)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 267)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotHexDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 268)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 270)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 269)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 278)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 278)), GGS_string ("inHexDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 278)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 279)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 279)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 279)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 280)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotHexDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 281)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 283)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 282)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 291)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 291)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 291)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 292)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 292)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 292)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 293)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 294)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 296)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 295)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 304)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 304)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 304)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 305)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 305)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 305)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 306)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 307)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 309)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 308)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 316)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 316)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 316)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 317)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 317)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 317)) ;
  {
  GGS_stringlist temp_7 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 321)) ;
  temp_7.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 321)) ;
  temp_7.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 321)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 319)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, temp_7, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 318)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 327)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 327)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 327)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 328)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 328)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 328)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 329)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 330)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 332)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 331)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 340)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 340)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 340)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 341)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 341)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 341)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 342)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotBinDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 343)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterBinDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 345)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 344)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 353)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 353)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 353)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 354)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 354)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 354)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 355)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotBinDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 356)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterBinDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 358)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 357)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 366)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 366)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 366)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 367)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 367)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 367)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 368)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotOctDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 369)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterOctDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 371)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 370)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 379)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 379)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 379)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 380)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 380)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 380)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 381)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotOctDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 382)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterOctDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 384)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 383)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 392)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 392)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 392)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 393)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 393)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 393)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inResultTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 394)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("multiplyUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 396)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 395)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 404)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 404)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 404)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 405)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 405)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 405)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inResultTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 406)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("multiplyUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 408)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 407)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 416)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 416)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 416)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 417)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 417)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 417)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 418)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotHexDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 419)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 421)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 420)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 429)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 429)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 429)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 430)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 430)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 430)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 431)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotHexDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 432)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 434)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 433)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 442)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 442)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 442)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 443)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 443)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 443)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 444)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotHexDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 445)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 447)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 446)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 455)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 455)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 455)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 456)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 456)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 456)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 457)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotHexDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 458)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 460)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 459)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 468)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 468)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 468)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 469)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 469)), GGS_string ("ioUnicodeCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 469)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inUnassignedUnicodeValueError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 470)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertUnsignedNumberToUnicodeChar"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 472)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 471)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 480)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 480)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 480)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 481)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 481)), GGS_string ("ioUnicodeCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 481)) ;
  var_errorMessageList_2322.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inUnassignedHTMLSequenceError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 482)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHTMLSequenceToUnicodeCharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 484)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 483)) ;
  }
  var_lexicalRoutineFormalArgumentList_2265 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2322 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 492)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 492)), GGS_string ("inCodePointString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 492)) ;
  var_lexicalRoutineFormalArgumentList_2265.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 493)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 493)), GGS_string ("ioString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 493)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("codePointToUnicode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 495)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2265, var_errorMessageList_2322, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 494)) ;
  }
}


