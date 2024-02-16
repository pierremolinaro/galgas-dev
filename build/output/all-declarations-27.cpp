#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualnstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualnstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_plusEqualnstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 786)) ;
  GALGAS_stringlist var_parameterList_33250 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-concat.galgas", 787)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_33288 (temp_1.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_33288.hasCurrentObject ()) {
    GALGAS_string var_parameter_33498 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_33288.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_33498, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 789)) ;
    var_parameterList_33250.addAssign_operation (var_parameter_33498  COMMA_SOURCE_FILE ("instruction-concat.galgas", 796)) ;
    enumerator_33288.gotoNextObject () ;
  }
  {
  const GALGAS_plusEqualnstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 799)) ;
  }
  const GALGAS_plusEqualnstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mReceiverCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 800)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_33702 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_33702.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_33702.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 802)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)) ;
    enumerator_33702.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 805)) ;
  {
  const GALGAS_plusEqualnstructionForGeneration temp_5 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 806)) ;
  }
  cEnumerator_stringlist enumerator_33982 (var_parameterList_33250, kENUMERATION_UP) ;
  while (enumerator_33982.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_33982.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 808)) ;
    if (enumerator_33982.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 809)) ;
    }
    enumerator_33982.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_plusEqualnstructionForGeneration temp_7 = this ;
    test_6 = extensionGetter_definition (temp_7.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 811)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 811)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 812)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 812)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 812)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 813)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 813)) ;
      }
    }
  }
  const GALGAS_plusEqualnstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 815)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 815)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 815)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 815)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@opEqualInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_opEqualInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_opEqualInstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 838)) ;
  GALGAS_string var_sourceVar_35564 ;
  const GALGAS_opEqualInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_35564, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 839)) ;
  {
  const GALGAS_opEqualInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 846)) ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 847)) ;
  const GALGAS_opEqualInstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_35720 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_35720.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_35720.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 849)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 849)) ;
    enumerator_35720.gotoNextObject () ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (temp_5.readProperty_mGeneratedMethod (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 851)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 851)).add_operation (var_sourceVar_35564, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 851)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 851)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 852)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 852)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 852)) ;
  const GALGAS_opEqualInstructionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 853)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 853)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 853)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 854)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 854)) ;
  }
  {
  const GALGAS_opEqualInstructionForGeneration temp_7 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 855)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dropInstructionAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4079 (temp_0.readProperty_mDropList (), kENUMERATION_UP) ;
  while (enumerator_4079.hasCurrentObject ()) {
    {
    extensionSetter_searchForDropAccess (ioArgument_ioVariableMap, enumerator_4079.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 95)) ;
    }
    enumerator_4079.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_errorInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 210)) ;
  const GALGAS_errorInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 211)) ;
  const GALGAS_errorInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 212)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction?&?&?????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
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
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLocationExpression.drop () ; // Release 'out' argument
  outArgument_outMessageExpression.drop () ; // Release 'out' argument
  outArgument_outFixitListForGeneration.drop () ; // Release 'out' argument
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 266)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), outArgument_outLocationExpression.readProperty_mResultType (), constinArgument_inErrorLocation, outArgument_outLocationExpression, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 276)) ;
  }
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-error.galgas", 286)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 283)) ;
  outArgument_outFixitListForGeneration = GALGAS_fixitListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-error.galgas", 293)) ;
  cEnumerator_fixitListAST enumerator_10729 (constinArgument_inFixitListAST, kENUMERATION_UP) ;
  while (enumerator_10729.hasCurrentObject ()) {
    switch (enumerator_10729.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::class_func_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 297))  COMMA_SOURCE_FILE ("instruction-error.galgas", 297)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_11827 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_10729.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_10873_exp = extractPtr_11827->mAssociatedValue0 ;
        const GALGAS_location extractedValue_10877_errorLocation = extractPtr_11827->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_11188 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_10873_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11188, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_bool test_1 = GALGAS_bool (kIsNotEqual, var_expression_11188.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_1.boolEnum ()) {
            test_1 = GALGAS_bool (kIsNotEqual, var_expression_11188.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_2 = test_1 ;
          if (kBoolTrue == test_2.boolEnum ()) {
            test_2 = GALGAS_bool (kIsNotEqual, var_expression_11188.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_3 = test_2 ;
          if (kBoolTrue == test_3.boolEnum ()) {
            test_3 = GALGAS_bool (kIsNotEqual, var_expression_11188.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_0 = test_3.boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_10877_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_11188.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 312)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 312)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 312)), fixItArray4  COMMA_SOURCE_FILE ("instruction-error.galgas", 312)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::class_func_fixItReplace (var_expression_11188  COMMA_SOURCE_FILE ("instruction-error.galgas", 315))  COMMA_SOURCE_FILE ("instruction-error.galgas", 315)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_12816 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_10729.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_11857_exp = extractPtr_12816->mAssociatedValue0 ;
        const GALGAS_location extractedValue_11861_errorLocation = extractPtr_12816->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_12172 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_11857_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12172, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 317)) ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = GALGAS_bool (kIsNotEqual, var_expression_12172.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = GALGAS_bool (kIsNotEqual, var_expression_12172.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_7 = test_6 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (kIsNotEqual, var_expression_12172.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_8 = test_7 ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (kIsNotEqual, var_expression_12172.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_5 = test_8.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_11861_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_12172.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 330)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 330)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 330)), fixItArray9  COMMA_SOURCE_FILE ("instruction-error.galgas", 330)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::class_func_fixItInsertBefore (var_expression_12172  COMMA_SOURCE_FILE ("instruction-error.galgas", 333))  COMMA_SOURCE_FILE ("instruction-error.galgas", 333)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_13803 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_10729.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12845_exp = extractPtr_13803->mAssociatedValue0 ;
        const GALGAS_location extractedValue_12849_errorLocation = extractPtr_13803->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_13160 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_12845_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_13160, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 335)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          GALGAS_bool test_11 = GALGAS_bool (kIsNotEqual, var_expression_13160.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_11.boolEnum ()) {
            test_11 = GALGAS_bool (kIsNotEqual, var_expression_13160.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_12 = test_11 ;
          if (kBoolTrue == test_12.boolEnum ()) {
            test_12 = GALGAS_bool (kIsNotEqual, var_expression_13160.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_13 = test_12 ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = GALGAS_bool (kIsNotEqual, var_expression_13160.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_10 = test_13.boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_12849_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_13160.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 348)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 348)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 348)), fixItArray14  COMMA_SOURCE_FILE ("instruction-error.galgas", 348)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::class_func_fixItInsertAfter (var_expression_13160  COMMA_SOURCE_FILE ("instruction-error.galgas", 351))  COMMA_SOURCE_FILE ("instruction-error.galgas", 351)) ;
      }
      break ;
    }
    enumerator_10729.gotoNextObject () ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, outArgument_outMessageExpression.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)).add_operation (GALGAS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)).add_operation (extensionGetter_definition (outArgument_outMessageExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)).add_operation (GALGAS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 356)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_locationExpression_14965 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_14993 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_15020 ;
  {
  const GALGAS_errorInstructionAST temp_0 = this ;
  const GALGAS_errorInstructionAST temp_1 = this ;
  const GALGAS_errorInstructionAST temp_2 = this ;
  const GALGAS_errorInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_14965, var_messageExpression_14993, var_fixitListForGeneration_15020, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 373)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_15083 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-error.galgas", 389)) ;
  const GALGAS_errorInstructionAST temp_4 = this ;
  cEnumerator_lstringlist enumerator_15132 (temp_4.readProperty_mBuiltVariableList (), kENUMERATION_UP) ;
  while (enumerator_15132.hasCurrentObject ()) {
    GALGAS_string var_varCppName_15228 ;
    {
    GALGAS_unifiedTypeMapEntry joker_15220 ; // Joker input parameter
    GALGAS_string joker_15239 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_15132.current_mValue (HERE), joker_15220, var_varCppName_15228, joker_15239, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 391)) ;
    }
    var_builtVariableCppNameList_15083.addAssign_operation (var_varCppName_15228  COMMA_SOURCE_FILE ("instruction-error.galgas", 392)) ;
    enumerator_15132.gotoNextObject () ;
  }
  const GALGAS_errorInstructionAST temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::class_func_new (temp_5.readProperty_mInstructionLocation (), var_locationExpression_14965, var_messageExpression_14993, var_builtVariableCppNameList_15083, var_fixitListForGeneration_15020  COMMA_SOURCE_FILE ("instruction-error.galgas", 395))  COMMA_SOURCE_FILE ("instruction-error.galgas", 395)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverCppVarName_18603 ;
  const GALGAS_errorInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_18603, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 474)) ;
  GALGAS_string var_messageCppVarName_18811 ;
  const GALGAS_errorInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mErrorExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_18811, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 482)) ;
  GALGAS_string var_fixItArrayCppName_19068 ;
  const GALGAS_errorInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_19068, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 490)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 499)) COMMA_SOURCE_FILE ("instruction-error.galgas", 499)) ;
  }
  const GALGAS_errorInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (var_receiverCppVarName_18603, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 501)).add_operation (var_messageCppVarName_18811, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 501)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 502)).add_operation (var_fixItArrayCppName_19068, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 502)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 503)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 503)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 500)) ;
  const GALGAS_errorInstructionForGeneration temp_4 = this ;
  cEnumerator_stringlist enumerator_19442 (temp_4.readProperty_mBuiltVariableCppNameList (), kENUMERATION_UP) ;
  while (enumerator_19442.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_19442.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 507)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_19442.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 508)) ;
    enumerator_19442.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_forInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhileExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 514)) ;
  const GALGAS_forInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mBeforeInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 515)) ;
  const GALGAS_forInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mBetweenInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 516)) ;
  const GALGAS_forInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mDoInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 517)) ;
  const GALGAS_forInstructionAST temp_4 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.readProperty_mAfterInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 518)) ;
  const GALGAS_forInstructionAST temp_5 = this ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_18098 (temp_5.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_18098.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((cPtr_abstractEnumeratedCollectionAST *) enumerator_18098.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 520)) ;
    enumerator_18098.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionImplicitVarInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 531)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionCstListInExpAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 537)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionVarInExpAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 543)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionImplicitVarInExpAST::method_analyzeEnumeration (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                              GALGAS_string & outArgument_outEnumeratorCppName,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 576)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 573)) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfAnonymousEnumeration ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 583)).getter_string (SOURCE_FILE ("instruction-for.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 583)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_21020 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 584)).readProperty_mEnumerationDescriptor () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_21020.getter_count (SOURCE_FILE ("instruction-for.galgas", 585)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 586)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 586)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 586)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 586)) ;
    }
  }
  GALGAS_string var_suggestion_21369 = GALGAS_string ("(") ;
  cEnumerator_enumerationDescriptorList enumerator_21409 (var_enumerationDescriptorList_21020, kENUMERATION_UP) ;
  while (enumerator_21409.hasCurrentObject ()) {
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_5 = this ;
    var_suggestion_21369.plusAssign_operation(temp_5.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_21409.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 592)) ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_6 = this ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_7 = this ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_21409.current_mEnumeratedType (HERE), GALGAS_lstring::class_func_new (temp_6.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_21409.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 595)), temp_7.readProperty_mEndOfAnonymousEnumeration (), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 595)), GALGAS_bool (true), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 597)).add_operation (enumerator_21409.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 597)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 597))  COMMA_SOURCE_FILE ("instruction-for.galgas", 593)) ;
    if (enumerator_21409.hasNextObject ()) {
      var_suggestion_21369.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 599)) ;
    }
    enumerator_21409.gotoNextObject () ;
  }
  var_suggestion_21369.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 601)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, kFixItReplace, var_suggestion_21369) ;
      inCompiler->emitSemanticError (temp_9.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for.galgas", 603)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionCstListInExpAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_analyzeEnumeration (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                          GALGAS_string & outArgument_outEnumeratorCppName,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 624)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 621)) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 631)).getter_string (SOURCE_FILE ("instruction-for.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 631)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_23126 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 632)).readProperty_mEnumerationDescriptor () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_23126.getter_count (SOURCE_FILE ("instruction-for.galgas", 633)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 634)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_6 = this ;
      const GALGAS_enumeratedCollectionCstListInExpAST temp_7 = this ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 637)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (temp_7.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 637)) COMMA_SOURCE_FILE ("instruction-for.galgas", 637)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList_23538 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 638)).readProperty_mEnumerationDescriptor () ;
        cEnumerator_enumerationDescriptorList enumerator_23666 (var_currentTypedAttributeList_23538, kENUMERATION_UP) ;
        while (enumerator_23666.hasCurrentObject ()) {
          {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_8 = this ;
          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, GALGAS_lstring::class_func_new (enumerator_23666.current_mEnumerationName (HERE), temp_8.readProperty_mEndOfEnumerationExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 641)), enumerator_23666.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 643)).add_operation (enumerator_23666.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 643)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 643)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 644)).add_operation (enumerator_23666.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 644)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 640)) ;
          }
          enumerator_23666.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_enumeratedCollectionCstListInExpAST temp_10 = this ;
        const GALGAS_enumeratedCollectionCstListInExpAST temp_11 = this ;
        test_9 = temp_10.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 647)).operator_and (GALGAS_bool (kIsNotEqual, temp_11.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 647)).objectCompare (var_enumerationDescriptorList_23126.getter_count (SOURCE_FILE ("instruction-for.galgas", 647)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 647)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_12 = this ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_23126.getter_count (SOURCE_FILE ("instruction-for.galgas", 651)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_15 = this ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 649)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 649)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 649)).add_operation (var_enumerationDescriptorList_23126.getter_count (SOURCE_FILE ("instruction-for.galgas", 650)).getter_string (SOURCE_FILE ("instruction-for.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 649)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 650)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 650)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 651)).add_operation (temp_15.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 653)).getter_string (SOURCE_FILE ("instruction-for.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)), fixItArray16  COMMA_SOURCE_FILE ("instruction-for.galgas", 648)) ;
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_18 = this ;
          const GALGAS_enumeratedCollectionCstListInExpAST temp_19 = this ;
          test_17 = temp_18.readProperty_mEndsWithEllipsis ().operator_and (GALGAS_bool (kIsStrictSup, temp_19.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 654)).objectCompare (var_enumerationDescriptorList_23126.getter_count (SOURCE_FILE ("instruction-for.galgas", 654)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 654)).boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_enumeratedCollectionCstListInExpAST temp_20 = this ;
            GALGAS_string temp_21 ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_23126.getter_count (SOURCE_FILE ("instruction-for.galgas", 658)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
            if (kBoolTrue == test_22) {
              temp_21 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_22) {
              temp_21 = GALGAS_string::makeEmptyString () ;
            }
            const GALGAS_enumeratedCollectionCstListInExpAST temp_23 = this ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)).add_operation (var_enumerationDescriptorList_23126.getter_count (SOURCE_FILE ("instruction-for.galgas", 657)).getter_string (SOURCE_FILE ("instruction-for.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 658)).add_operation (temp_23.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 660)).getter_string (SOURCE_FILE ("instruction-for.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 659)), fixItArray24  COMMA_SOURCE_FILE ("instruction-for.galgas", 655)) ;
          }
        }
        if (kBoolFalse == test_17) {
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            GALGAS_bool test_26 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject.readProperty_value ()) ;
            if (kBoolTrue == test_26.boolEnum ()) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_27 = this ;
              test_26 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_23126.getter_count (SOURCE_FILE ("instruction-for.galgas", 662)).objectCompare (temp_27.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 662)))) ;
            }
            test_25 = test_26.boolEnum () ;
            if (kBoolTrue == test_25) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_28 = this ;
              GALGAS_uint var_missingArgumentCount_25241 = var_enumerationDescriptorList_23126.getter_count (SOURCE_FILE ("instruction-for.galgas", 663)).substract_operation (temp_28.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)) ;
              const GALGAS_enumeratedCollectionCstListInExpAST temp_29 = this ;
              TC_Array <C_FixItDescription> fixItArray30 ;
              GALGAS_string temp_31 ;
              const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, var_missingArgumentCount_25241.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_32) {
                temp_31 = GALGAS_string ("*") ;
              }else if (kBoolFalse == test_32) {
                temp_31 = GALGAS_string (" ").add_operation (var_missingArgumentCount_25241.getter_string (SOURCE_FILE ("instruction-for.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 666)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 666)) ;
              }
              appendFixItActions (fixItArray30, kFixItReplace, temp_31) ;
              inCompiler->emitSemanticError (temp_29.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("enumerated object ends with '...' (due to '--error-ellipsis-in-for-instruction' option)"), fixItArray30  COMMA_SOURCE_FILE ("instruction-for.galgas", 664)) ;
            }
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_33 = this ;
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_25636 (temp_33.readProperty_mElementList (), kENUMERATION_UP) ;
          cEnumerator_enumerationDescriptorList enumerator_25698 (var_enumerationDescriptorList_23126, kENUMERATION_UP) ;
          while (enumerator_25636.hasCurrentObject () && enumerator_25698.hasCurrentObject ()) {
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = GALGAS_bool (kIsNotEqual, enumerator_25636.current_mOptionalConstantName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_34) {
                enumGalgasBool test_35 = kBoolTrue ;
                if (kBoolTrue == test_35) {
                  test_35 = GALGAS_bool (kIsNotEqual, enumerator_25636.current_mOptionalTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_35) {
                    GALGAS_unifiedTypeMapEntry var_foundType_25888 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_25636.current_mOptionalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 671)) ;
                    enumGalgasBool test_36 = kBoolTrue ;
                    if (kBoolTrue == test_36) {
                      test_36 = GALGAS_bool (kIsNotEqual, var_foundType_25888.objectCompare (enumerator_25698.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_36) {
                        TC_Array <C_FixItDescription> fixItArray37 ;
                        inCompiler->emitSemanticError (enumerator_25636.current_mOptionalTypeName (HERE).readProperty_location (), GALGAS_string ("incorrect '@").add_operation (extensionGetter_definition (var_foundType_25888, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).add_operation (extensionGetter_definition (enumerator_25698.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)), fixItArray37  COMMA_SOURCE_FILE ("instruction-for.galgas", 673)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_25698.current_mEnumeratedType (HERE), enumerator_25636.current_mOptionalConstantName (HERE), enumerator_25636.current_mDeclaredAsUnused (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680)).add_operation (enumerator_25698.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680))  COMMA_SOURCE_FILE ("instruction-for.galgas", 676)) ;
              }
            }
            enumerator_25636.gotoNextObject () ;
            enumerator_25698.gotoNextObject () ;
          }
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionVarInExpAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_analyzeEnumeration (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                      GALGAS_string & outArgument_outEnumeratorCppName,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 702)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 699)) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 709)).getter_string (SOURCE_FILE ("instruction-for.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 709)) ;
  GALGAS_unifiedTypeMapEntry var_enumeratedElementType_27511 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 710)).readProperty_mTypeForEnumeratedElement () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_enumeratedElementType_27511.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 711)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 712)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 712)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 712)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 712)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_6 = this ;
      test_5 = GALGAS_bool (kIsNotEqual, temp_6.readProperty_mEnumerationVariable ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_enumeratedCollectionVarInExpAST temp_7 = this ;
        ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_27511, temp_7.readProperty_mEnumerationVariable (), GALGAS_bool (false), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 714))  COMMA_SOURCE_FILE ("instruction-for.galgas", 714)) ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mEnumerationOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_10 = this ;
      GALGAS_unifiedTypeMapEntry var_explicitType_28096 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mEnumerationOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 718)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_enumeratedElementType_27511, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 719)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (var_explicitType_28096, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 719)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_enumeratedCollectionVarInExpAST temp_12 = this ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEnumerationOptionalTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_enumeratedElementType_27511, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 720)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 720)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 720)), fixItArray13  COMMA_SOURCE_FILE ("instruction-for.galgas", 720)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 737)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 738)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 740)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_29499 ;
  {
  const GALGAS_forInstructionAST temp_0 = this ;
  const GALGAS_forInstructionAST temp_1 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 746)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 747)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 748)), temp_0.readProperty_mBeforeInstructionList (), temp_1.readProperty_mEndOf_5F_before_5F_branch (), ioArgument_ioVariableMap, var_before_5F_instructionList_29499, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 741)) ;
  }
  {
  const GALGAS_forInstructionAST temp_2 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_2.readProperty_mEndOf_5F_before_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 754)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 756)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_30026 ;
  {
  const GALGAS_forInstructionAST temp_3 = this ;
  const GALGAS_forInstructionAST temp_4 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 762)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 763)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 764)), temp_3.readProperty_mBetweenInstructionList (), temp_4.readProperty_mEndOf_5F_between_5F_branch (), ioArgument_ioVariableMap, var_between_5F_instructionList_30026, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 757)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_between_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 770)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 772)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_30587 ;
  {
  const GALGAS_forInstructionAST temp_6 = this ;
  const GALGAS_forInstructionAST temp_7 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 778)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 779)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 780)), temp_6.readProperty_mAfterInstructionList (), temp_7.readProperty_mEndOf_5F_after_5F_branch (), ioArgument_ioVariableMap, var_after_5F_instructionList_30587, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 773)) ;
  }
  {
  const GALGAS_forInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_after_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 786)) ;
  }
  GALGAS_localConstantList var_localConstantListForDoBranch_30730 = GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 788)) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_30819 = GALGAS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 789)) ;
  const GALGAS_forInstructionAST temp_9 = this ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_30858 (temp_9.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_30858.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_31147 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_31209 ;
    callExtensionMethod_analyzeEnumeration ((cPtr_abstractEnumeratedCollectionAST *) enumerator_30858.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_localConstantListForDoBranch_30730, var_enumeratorCppName_31147, var_enumerationExpression_31209, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 791)) ;
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = enumerator_30858.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("UP") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string ("DOWN") ;
    }
    var_enumerationList_30819.addAssign_operation (temp_10, var_enumerationExpression_31209, var_enumeratorCppName_31147  COMMA_SOURCE_FILE ("instruction-for.galgas", 802)) ;
    enumerator_30858.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 808)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 809)) ;
  }
  cEnumerator_localConstantList enumerator_31526 (var_localConstantListForDoBranch_30730, kENUMERATION_UP) ;
  while (enumerator_31526.hasCurrentObject ()) {
    {
    extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_31526.current (HERE).readProperty_mName (), enumerator_31526.current (HERE).readProperty_mType (), enumerator_31526.current (HERE).readProperty_mCppName (), enumerator_31526.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 812)) ;
    }
    enumerator_31526.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_32016 ;
  const GALGAS_forInstructionAST temp_12 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_12.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 823)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_uncheckedWhileExpression_32016, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 820)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_32203 ;
  {
  const GALGAS_forInstructionAST temp_13 = this ;
  routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, temp_13.readProperty_mEndOf_5F_while_5F_expression (), var_uncheckedWhileExpression_32016, var_whileExpression_32203, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 829)) ;
  }
  {
  const GALGAS_forInstructionAST temp_14 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_14.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 836)) ;
  }
  {
  const GALGAS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_15.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 837)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 839)) ;
  }
  GALGAS_string var_indexCppName_32433 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_forInstructionAST temp_17 = this ;
    test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_forInstructionAST temp_18 = this ;
      var_indexCppName_32433 = GALGAS_string ("index_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 842)).getter_string (SOURCE_FILE ("instruction-for.galgas", 842)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 842)) ;
      const GALGAS_forInstructionAST temp_19 = this ;
      var_localConstantListForDoBranch_30730.addAssign_operation (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), temp_19.readProperty_mIndexVariableName (), GALGAS_bool (false), var_indexCppName_32433  COMMA_SOURCE_FILE ("instruction-for.galgas", 843)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_33173 ;
  {
  const GALGAS_forInstructionAST temp_20 = this ;
  const GALGAS_forInstructionAST temp_21 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantListForDoBranch_30730, GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 856)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 857)), temp_20.readProperty_mDoInstructionList (), temp_21.readProperty_mEndOf_5F_do_5F_branch (), ioArgument_ioVariableMap, var_do_5F_instructionList_33173, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 850)) ;
  }
  {
  const GALGAS_forInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 864)) ;
  }
  {
  const GALGAS_forInstructionAST temp_23 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 866)) ;
  }
  {
  const GALGAS_forInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 867)) ;
  }
  const GALGAS_forInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::class_func_new (temp_25.readProperty_mInstructionLocation (), var_enumerationList_30819, var_indexCppName_32433, var_whileExpression_32203, var_before_5F_instructionList_29499, var_between_5F_instructionList_30026, var_do_5F_instructionList_33173, var_after_5F_instructionList_30587  COMMA_SOURCE_FILE ("instruction-for.galgas", 869))  COMMA_SOURCE_FILE ("instruction-for.galgas", 869)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_enumerationVarCppNameList_35445 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 915)) ;
  const GALGAS_forInstructionForGeneration temp_0 = this ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35507 (temp_0.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_35507.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar_35715 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_35507.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_35715, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 917)) ;
    var_enumerationVarCppNameList_35445.addAssign_operation (var_enumerationVar_35715  COMMA_SOURCE_FILE ("instruction-for.galgas", 924)) ;
    enumerator_35507.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_1 = this ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35838 (temp_1.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  cEnumerator_stringlist enumerator_35890 (var_enumerationVarCppNameList_35445, kENUMERATION_UP) ;
  while (enumerator_35838.hasCurrentObject () && enumerator_35890.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (extensionGetter_identifierRepresentation (enumerator_35838.current_mEnumeratedExpression (HERE).readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 927)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 927)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 927)).add_operation (enumerator_35838.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)).add_operation (enumerator_35890.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)).add_operation (GALGAS_string (", kENUMERATION_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)).add_operation (enumerator_35838.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 929)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 929)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 927)) ;
    enumerator_35838.gotoNextObject () ;
    enumerator_35890.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_2 = this ;
  GALGAS_bool var_whileExpressionIsAllwaysTrue_36180 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mWhileExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 932)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_forInstructionForGeneration temp_4 = this ;
    const GALGAS_forInstructionForGeneration temp_5 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 934)).add_operation (temp_5.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 934)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 934)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_or (var_whileExpressionIsAllwaysTrue_36180.operator_not (SOURCE_FILE ("instruction-for.galgas", 934)) COMMA_SOURCE_FILE ("instruction-for.galgas", 934)).boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_forInstructionForGeneration temp_7 = this ;
        test_6 = GALGAS_bool (kIsNotEqual, temp_7.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_forInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_8.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 937)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 937)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 937)) ;
        }
      }
      GALGAS_string var_boolVarCppName_36627 = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 939)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 939)) ;
      ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 940)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_36180.boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolVarCppName_36627, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 942)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 942)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 942)) ;
        }
      }
      if (kBoolFalse == test_9) {
        GALGAS_string var_whileVar_36988 ;
        const GALGAS_forInstructionForGeneration temp_10 = this ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_10.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_36988, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 944)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_boolVarCppName_36627, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 945)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 945)).add_operation (var_whileVar_36988, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 945)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 945)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 945)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 947)) ;
      const GALGAS_forInstructionForGeneration temp_11 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37145 (temp_11.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_37145.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_37145.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 949)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 949)) ;
        enumerator_37145.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_36627.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 951)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 951)) ;
      {
      const GALGAS_forInstructionForGeneration temp_12 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_12.readProperty_mBeforeInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 952)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 960)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 961)) ;
      const GALGAS_forInstructionForGeneration temp_13 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37650 (temp_13.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_37650.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_37650.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 963)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 963)) ;
        enumerator_37650.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_36627.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 965)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 965)) ;
      {
      const GALGAS_forInstructionForGeneration temp_14 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_14.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 967)) ;
      }
      const GALGAS_forInstructionForGeneration temp_15 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_38133 (temp_15.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_38133.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_38133.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 977)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 977)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 977)) ;
        enumerator_38133.gotoNextObject () ;
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_forInstructionForGeneration temp_17 = this ;
        test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_forInstructionForGeneration temp_18 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_18.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 980)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 980)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 980)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_36180.operator_not (SOURCE_FILE ("instruction-for.galgas", 983)).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 984)) ;
          const GALGAS_forInstructionForGeneration temp_20 = this ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_38534 (temp_20.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_38534.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_38534.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 986)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 986)) ;
            if (enumerator_38534.hasNextObject ()) {
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 987)) ;
            }
            enumerator_38534.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 989)) ;
          GALGAS_string var_whileVar_38924 ;
          const GALGAS_forInstructionForGeneration temp_21 = this ;
          callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_21.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_38924, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 990)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    ").add_operation (var_boolVarCppName_36627, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 997)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 997)).add_operation (var_whileVar_38924, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 997)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 997)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 997)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 998)) ;
        }
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_forInstructionForGeneration temp_23 = this ;
        test_22 = GALGAS_bool (kIsStrictSup, temp_23.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 1001)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1002)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1003)) ;
          const GALGAS_forInstructionForGeneration temp_24 = this ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_39259 (temp_24.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_39259.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_39259.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1005)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1005)) ;
            enumerator_39259.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_36627.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1007)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1007)) ;
          {
          const GALGAS_forInstructionForGeneration temp_25 = this ;
          routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_25.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1008)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1016)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1017)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1020)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1022)) ;
      }
      {
      const GALGAS_forInstructionForGeneration temp_26 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_26.readProperty_mAfterInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1023)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1031)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_forInstructionForGeneration temp_28 = this ;
      test_27 = GALGAS_bool (kIsNotEqual, temp_28.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_forInstructionForGeneration temp_29 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_29.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1034)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1034)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1034)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1036)) ;
    const GALGAS_forInstructionForGeneration temp_30 = this ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_40456 (temp_30.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_40456.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_40456.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1038)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1038)) ;
      if (enumerator_40456.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1039)) ;
      }
      enumerator_40456.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1041)) ;
    {
    const GALGAS_forInstructionForGeneration temp_31 = this ;
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_31.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1043)) ;
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_forInstructionForGeneration temp_33 = this ;
      test_32 = GALGAS_bool (kIsStrictSup, temp_33.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 1052)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1053)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1054)) ;
        const GALGAS_forInstructionForGeneration temp_34 = this ;
        cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_41103 (temp_34.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
        while (enumerator_41103.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_41103.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1056)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1056)) ;
          if (enumerator_41103.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1057)) ;
          }
          enumerator_41103.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1059)) ;
        {
        const GALGAS_forInstructionForGeneration temp_35 = this ;
        routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_35.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1060)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1068)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1069)) ;
        }
      }
    }
    const GALGAS_forInstructionForGeneration temp_36 = this ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_41691 (temp_36.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_41691.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_41691.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1073)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1073)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1073)) ;
      enumerator_41691.gotoNextObject () ;
    }
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      const GALGAS_forInstructionForGeneration temp_38 = this ;
      test_37 = GALGAS_bool (kIsNotEqual, temp_38.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1076)) COMMA_SOURCE_FILE ("instruction-for.galgas", 1076)) ;
        }
        const GALGAS_forInstructionForGeneration temp_39 = this ;
        const GALGAS_forInstructionForGeneration temp_40 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_39.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)).add_operation (extensionGetter_commaSourceFile (temp_40.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1078)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1078)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1078)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1080)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInFileInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInFileInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 369)) ;
  const GALGAS_grammarInFileInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_16875 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_16875.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_16875.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 371)) ;
    enumerator_16875.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInStringInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 380)) ;
  const GALGAS_grammarInStringInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_17309 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_17309.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_17309.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 382)) ;
    enumerator_17309.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInFileInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInFileInstructionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_18035 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 398)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_18035 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 399)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_18351 ;
  GALGAS_bool var_hasTranslateFeature_18389 ;
  const GALGAS_grammarInFileInstructionAST temp_1 = this ;
  GALGAS_bool joker_18371 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_18351, joker_18371, var_hasTranslateFeature_18389, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 401)) ;
  GALGAS_formalParameterSignature var_labelSignature_18516 ;
  const GALGAS_grammarInFileInstructionAST temp_2 = this ;
  var_grammarLabelMap_18351.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_18516, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 408)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_18958 ;
  const GALGAS_grammarInFileInstructionAST temp_3 = this ;
  const GALGAS_grammarInFileInstructionAST temp_4 = this ;
  const GALGAS_grammarInFileInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)), var_labelSignature_18516, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_18958, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 413)) ;
  GALGAS_semanticExpressionForGeneration var_sourceExpression_19313 ;
  const GALGAS_grammarInFileInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 429)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_19313, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 426)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_19313.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInFileInstructionAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_19313.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 439)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 438)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 439)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 437)) ;
    }
  }
  const GALGAS_grammarInFileInstructionAST temp_10 = this ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_19784 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 442)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 442)) ;
  GALGAS_stringlist var_assignementList_19925 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 443)) ;
  const GALGAS_grammarInFileInstructionAST temp_11 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_18389, var_syntaxDirectedTranslationResultVarName_19784, var_assignementList_19925, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 444)) ;
  const GALGAS_grammarInFileInstructionAST temp_12 = this ;
  const GALGAS_grammarInFileInstructionAST temp_13 = this ;
  const GALGAS_grammarInFileInstructionAST temp_14 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::class_func_new (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mGrammarComponentName ().readProperty_string (), temp_14.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_19313, var_actualParameterListForGeneration_18958, var_hasTranslateFeature_18389, var_assignementList_19925, var_syntaxDirectedTranslationResultVarName_19784  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 453))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 453)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInStringInstructionAST temp_0 = this ;
  GALGAS_lstring var_grammarUsefulnessName_21085 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 475)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_21085 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 476)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_21415 ;
  GALGAS_bool var_hasTranslateFeature_21453 ;
  const GALGAS_grammarInStringInstructionAST temp_1 = this ;
  GALGAS_bool joker_21435 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_21415, joker_21435, var_hasTranslateFeature_21453, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 478)) ;
  GALGAS_formalParameterSignature var_labelSignature_21580 ;
  const GALGAS_grammarInStringInstructionAST temp_2 = this ;
  var_grammarLabelMap_21415.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_21580, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 485)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_22022 ;
  const GALGAS_grammarInStringInstructionAST temp_3 = this ;
  const GALGAS_grammarInStringInstructionAST temp_4 = this ;
  const GALGAS_grammarInStringInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 496)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 496)), var_labelSignature_21580, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_22022, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 490)) ;
  GALGAS_semanticExpressionForGeneration var_sourceExpression_22377 ;
  const GALGAS_grammarInStringInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 506)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_22377, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 503)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_22377.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInStringInstructionAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_22377.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 516)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 515)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 516)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 514)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_23051 ;
  const GALGAS_grammarInStringInstructionAST temp_10 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_10.readProperty_mNameExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 522)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_nameExpression_23051, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 519)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_nameExpression_23051.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_grammarInStringInstructionAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfNameExpression (), GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_22377.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 532)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 531)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 532)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 530)) ;
    }
  }
  const GALGAS_grammarInStringInstructionAST temp_14 = this ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_23463 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 535)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 535)) ;
  GALGAS_stringlist var_assignementList_23604 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 536)) ;
  const GALGAS_grammarInStringInstructionAST temp_15 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_21453, var_syntaxDirectedTranslationResultVarName_23463, var_assignementList_23604, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 537)) ;
  const GALGAS_grammarInStringInstructionAST temp_16 = this ;
  const GALGAS_grammarInStringInstructionAST temp_17 = this ;
  const GALGAS_grammarInStringInstructionAST temp_18 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::class_func_new (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mGrammarComponentName ().readProperty_string (), temp_18.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_22377, var_nameExpression_23051, var_actualParameterListForGeneration_22022, var_hasTranslateFeature_21453, var_assignementList_23604, var_syntaxDirectedTranslationResultVarName_23463  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 546))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 546)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionWithSourceFileForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 583))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 583)) ;
  GALGAS_string var_sourceVar_25714 ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceFileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_25714, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 585)) ;
  GALGAS_stringlist var_parameterCppNameList_25756 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 593)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_25802 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 594)) ;
  GALGAS_stringlist var_inputVariableList_25856 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 595)) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_2 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_25900 (temp_2.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_25900.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_26209 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_25900.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_25802, var_inputVariableList_25856, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_26209, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 597)) ;
    var_parameterCppNameList_25756.addAssign_operation (var_parameterCppName_26209  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 606)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_25900.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_26209.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 608)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 608)) ;
      }
    }
    enumerator_25900.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionWithSourceFileForGeneration temp_6 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("String ").add_operation (temp_6.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 612)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 612)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_7 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_9 = this ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = temp_9.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_11) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_12 = this ;
    temp_10 = temp_12.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 618)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_7.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)).add_operation (temp_8.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 617)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 616)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 617)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 617)).add_operation (var_sourceVar_25714, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 618)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)) ;
  cEnumerator_stringlist enumerator_26999 (var_parameterCppNameList_25756, kENUMERATION_UP) ;
  while (enumerator_26999.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_26999.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 621)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 621)) ;
    enumerator_26999.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_13 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 623)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 623)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 623)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 624)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 624)) ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_14 = this ;
  cEnumerator_stringlist enumerator_27247 (temp_14.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_27247.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_27247.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 626)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 626)) ;
    enumerator_27247.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionWithSourceExpressionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 654))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 654)) ;
  GALGAS_string var_sourceVar_28837 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_28837, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 656)) ;
  GALGAS_string var_nameVar_29057 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mNameStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_29057, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 664)) ;
  GALGAS_stringlist var_parameterCppNameList_29097 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 672)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_29143 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 673)) ;
  GALGAS_stringlist var_inputVariableList_29197 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 674)) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_29241 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_29241.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_29557 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_29241.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_29143, var_inputVariableList_29197, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_29557, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 676)) ;
    var_parameterCppNameList_29097.addAssign_operation (var_parameterCppName_29557  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 685)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_29241.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_29557.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 687)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 687)) ;
      }
    }
    enumerator_29241.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_7 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("String ").add_operation (temp_7.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 691)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 691)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 691)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_9 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_10 = this ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_12) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_13 = this ;
    temp_11 = temp_13.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 696)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_8.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)).add_operation (temp_9.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 694)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 694)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 694)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 695)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 695)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 695)).add_operation (var_sourceVar_28837, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 696)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 697)).add_operation (var_nameVar_29057, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 698)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)) ;
  cEnumerator_stringlist enumerator_30366 (var_parameterCppNameList_29097, kENUMERATION_UP) ;
  while (enumerator_30366.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_30366.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 700)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 700)) ;
    enumerator_30366.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_14 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 702)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 702)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 702)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 703)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 703)) ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_15 = this ;
  cEnumerator_stringlist enumerator_30614 (temp_15.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_30614.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30614.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 705)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 705)) ;
    enumerator_30614.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_7502 ;
  GALGAS_string var_targetVariableCppName_7527 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_incDecInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_7691 ;
        GALGAS_bool var_selfIsMutable_7714 ;
        GALGAS_bool var_mutableProperties_7752 ;
        const bool optionalResult7670 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_7691, var_selfIsMutable_7714, var_mutableProperties_7752) ;
        if (!optionalResult7670) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_7714.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 209)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_incDecInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 210)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_7907 = extensionGetter_definition (var_selfType_7691, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 212)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_8013 ;
          const GALGAS_incDecInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_8005 ; // Joker input parameter
          var_propertyMap_7907.method_searchKey (temp_6.readProperty_mReceiverName (), joker_8005, var_isConstant_8013, var_targetType_7502, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 213)) ;
          const GALGAS_incDecInstructionAST temp_7 = this ;
          var_targetVariableCppName_7527 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 215)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 216)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_8013.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_incDecInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 218)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_7752.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 220)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_incDecInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this constant"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 221)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_incDecInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 224)) ;
        var_targetType_7502.drop () ; // Release error dropped variable
        var_targetVariableCppName_7527.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_incDecInstructionAST temp_16 = this ;
    GALGAS_string joker_8839 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_7502, var_targetVariableCppName_7527, joker_8839, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 228)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_8904 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_8904.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_8951 = extensionGetter_definition (var_targetType_7502, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 237)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_9041 ;
    GALGAS_bool var_isConstant_9060 ;
    var_propertyMap_8951.method_searchKey (enumerator_8904.current_mValue (HERE), var_accessControl_9041, var_isConstant_9060, var_targetType_7502, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 238)) ;
    extensionMethod_checkSetAccess (var_accessControl_9041, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_8904.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 239)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_9060.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_8904.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 244)) ;
      }
    }
    enumerator_8904.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_7502, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 248)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 248)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 248)).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_incDecInstructionAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_7502, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 250)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 250)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 250)), fixItArray22  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 249)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_23 = this ;
  const GALGAS_incDecInstructionAST temp_24 = this ;
  const GALGAS_incDecInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::class_func_new (temp_23.readProperty_mInstructionLocation (), var_targetVariableCppName_7527, var_targetType_7502, temp_24.readProperty_mStructAttributeList (), temp_25.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 253))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 253)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_10487 ;
  GALGAS_string var_targetVariableCppName_10579 ;
  {
  const GALGAS_incDecNoOVFInstructionAST temp_0 = this ;
  GALGAS_string joker_10601 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mReceiverName (), var_targetType_10487, var_targetVariableCppName_10579, joker_10601, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 274)) ;
  }
  const GALGAS_incDecNoOVFInstructionAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_10612 (temp_1.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_10612.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_10659 = extensionGetter_definition (var_targetType_10487, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 276)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_10749 ;
    GALGAS_bool var_isConstant_10768 ;
    var_propertyMap_10659.method_searchKey (enumerator_10612.current_mValue (HERE), var_accessControl_10749, var_isConstant_10768, var_targetType_10487, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 277)) ;
    extensionMethod_checkSetAccess (var_accessControl_10749, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_10612.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 278)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_isConstant_10768.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_10612.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 283)) ;
      }
    }
    enumerator_10612.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_targetType_10487, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 287)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 287)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_incDecNoOVFInstructionAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_10487, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 289)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 289)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 289)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 288)) ;
    }
  }
  const GALGAS_incDecNoOVFInstructionAST temp_7 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_8 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::class_func_new (temp_7.readProperty_mInstructionLocation (), var_targetVariableCppName_10579, var_targetType_10487, temp_8.readProperty_mStructAttributeList (), temp_9.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 292))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 292)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_12217 ;
    GALGAS_bool var_selfIsMutable_12240 ;
    GALGAS_bool var_unused_0_12274 ;
    const bool optionalResult12196 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_12217, var_selfIsMutable_12240, var_unused_0_12274) ;
    if (!optionalResult12196) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_12240.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 312)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 313)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_12217, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 316)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 316)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 316)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_12217, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 317)) ;
        }
      }
      const GALGAS_selfIncDecNoOVFInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecNoOVFInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::class_func_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_12217, GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 325)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 321))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 321)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecNoOVFInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 329)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                       GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_13631 ;
    GALGAS_bool var_selfIsMutable_13654 ;
    GALGAS_bool var_unused_0_13688 ;
    const bool optionalResult13610 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_13631, var_selfIsMutable_13654, var_unused_0_13688) ;
    if (!optionalResult13610) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_13654.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 344)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 345)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_13631, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 348)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 348)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_13631, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 350)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 350)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 350)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 349)) ;
        }
      }
      const GALGAS_selfIncDecInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::class_func_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_13631, GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 357)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 353))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 353)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 361)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionForGeneration::method_generateInstruction (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_incDecInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 397)) ;
  }
  const GALGAS_incDecInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_15874 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_15921 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_15921.hasCurrentObject ()) {
    var_receiverCppName_15874.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_15921.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)) ;
    enumerator_15921.gotoNextObject () ;
  }
  const GALGAS_incDecInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      const GALGAS_incDecInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15874.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 407)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 407)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      const GALGAS_incDecInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15874.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)).add_operation (extensionGetter_commaSourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 410)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 411)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 411)) ;
      }
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionForGeneration::method_generateInstruction (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_incDecNoOVFInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 425)) ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_17110 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecNoOVFInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_17157 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_17157.hasCurrentObject ()) {
    var_receiverCppName_17110.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_17157.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 428)) ;
    enumerator_17157.gotoNextObject () ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_17110.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 433)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_17110.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 435)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ifInstructionAST temp_0 = this ;
  cEnumerator_ifExpressionList enumerator_14552 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_14552.hasCurrentObject ()) {
    switch (enumerator_14552.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_14695 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_14552.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_14631_exp = extractPtr_14695->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_14631_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 395)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_14841 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_14552.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_14716_exp = extractPtr_14841->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_14731_typeName = extractPtr_14841->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_14716_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 397)) ;
        {
        GALGAS_unifiedTypeMapEntry joker_14839 ; // Joker input parameter
        extensionSetter_makeEntry (ioArgument_ioTypeMap, extractedValue_14731_typeName, joker_14839, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 398)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_15281 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_14552.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_14872_receiverExpression = extractPtr_15281->mAssociatedValue0 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_14893_parameters = extractPtr_15281->mAssociatedValue2 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_14872_receiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 400)) ;
        cEnumerator_optionalMethodActualArgumentList enumerator_14992 (extractedValue_14893_parameters, kENUMERATION_UP) ;
        while (enumerator_14992.hasCurrentObject ()) {
          switch (enumerator_14992.current_mActualArgument (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgument::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_15154 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_14992.current_mActualArgument (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionAST extractedValue_15072_expression = extractPtr_15154->mAssociatedValue0 ;
              callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_15072_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 404)) ;
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
          enumerator_14992.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_14552.gotoNextObject () ;
  }
  const GALGAS_ifInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 412)) ;
  const GALGAS_ifInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 413)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifTestListForGeneration var_testListForGeneration_16720 = GALGAS_ifTestListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 451)) ;
  const GALGAS_ifInstructionAST temp_0 = this ;
  cEnumerator_ifExpressionList enumerator_16754 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_16754.hasCurrentObject ()) {
    switch (enumerator_16754.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_17435 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_16754.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_16833_exp = extractPtr_17435->mAssociatedValue0 ;
        const GALGAS_location extractedValue_16837_endOfExpression = extractPtr_17435->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_17105 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_16833_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 458)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_17105, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 455)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_17266 ;
        {
        routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, extractedValue_16837_endOfExpression, var_analyzed_5F_if_5F_expression_17105, var_if_5F_expression_17266, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 464)) ;
        }
        var_testListForGeneration_16720.addAssign_operation (GALGAS_ifTestForGeneration::class_func_regular (var_if_5F_expression_17266  COMMA_SOURCE_FILE ("instruction-if.galgas", 470))  COMMA_SOURCE_FILE ("instruction-if.galgas", 470)) ;
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 471)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 472)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_21049 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_16754.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_17454_constantName = extractPtr_21049->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_17467_exp = extractPtr_21049->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_17482_typeName = extractPtr_21049->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_17743 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_17467_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 477)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzedExpression_17743, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 474)) ;
        GALGAS_unifiedTypeMapEntry var_castType_17810 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 484)) ;
        GALGAS_unifiedTypeMapEntry var_testType_17857 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 485)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = extensionGetter_definition (var_analyzedExpression_17743.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 487)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 487)).boolEnum () ;
          if (kBoolTrue == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (kIsEqual, extractedValue_17482_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <C_FixItDescription> fixItArray3 ;
                inCompiler->emitSemanticError (extractedValue_17482_typeName.readProperty_location (), GALGAS_string ("on a class object, the 'as' clause is required"), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 489)) ;
                var_castType_17810.drop () ; // Release error dropped variable
                var_testType_17857.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_2) {
              var_castType_17810 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_17482_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 491)) ;
              var_testType_17857 = var_castType_17810 ;
              GALGAS_unifiedTypeMapEntry var_t_18361 = var_castType_17810 ;
              GALGAS_bool var_found_18394 = GALGAS_bool (kIsEqual, var_t_18361.objectCompare (var_analyzedExpression_17743.readProperty_mResultType ())) ;
              if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 496)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 496)).isValid ()) {
                uint32_t variant_18448 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 496)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 496)).uintValue () ;
                bool loop_18448 = true ;
                while (loop_18448) {
                  loop_18448 = var_found_18394.operator_not (SOURCE_FILE ("instruction-if.galgas", 497)).operator_and (extensionGetter_definition (var_t_18361, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 497)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 497)).operator_not (SOURCE_FILE ("instruction-if.galgas", 497)) COMMA_SOURCE_FILE ("instruction-if.galgas", 497)).isValid () ;
                  if (loop_18448) {
                    loop_18448 = var_found_18394.operator_not (SOURCE_FILE ("instruction-if.galgas", 497)).operator_and (extensionGetter_definition (var_t_18361, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 497)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 497)).operator_not (SOURCE_FILE ("instruction-if.galgas", 497)) COMMA_SOURCE_FILE ("instruction-if.galgas", 497)).boolValue () ;
                  }
                  if (loop_18448 && (0 == variant_18448)) {
                    loop_18448 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 496)) ;
                  }
                  if (loop_18448) {
                    variant_18448 -- ;
                    var_t_18361 = extensionGetter_definition (var_t_18361, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 498)).readProperty_mSuperType () ;
                    var_found_18394 = GALGAS_bool (kIsEqual, var_t_18361.objectCompare (var_analyzedExpression_17743.readProperty_mResultType ())) ;
                  }
                }
              }
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = var_found_18394.operator_not (SOURCE_FILE ("instruction-if.galgas", 501)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  TC_Array <C_FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (extractedValue_17482_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extractedValue_17482_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)).add_operation (GALGAS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)).add_operation (extensionGetter_definition (var_analyzedExpression_17743.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 502)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            GALGAS_unifiedTypeMapEntry var_classType_19041 ;
            const bool optionalResult19003 = extensionGetter_definition (var_analyzedExpression_17743.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 507)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_classType_19041) ;
            if (!optionalResult19003) {
              test_6 = kBoolFalse ;
            }
            if (kBoolTrue == test_6) {
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = GALGAS_bool (kIsEqual, extractedValue_17482_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_7) {
                  var_castType_17810 = var_classType_19041 ;
                }
              }
              if (kBoolFalse == test_7) {
                var_castType_17810 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_17482_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 511)) ;
              }
              var_testType_17857 = var_castType_17810 ;
              GALGAS_unifiedTypeMapEntry var_t_19275 = var_castType_17810 ;
              GALGAS_bool var_found_19306 = GALGAS_bool (kIsEqual, var_t_19275.objectCompare (var_analyzedExpression_17743.readProperty_mResultType ())) ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = var_found_19306.boolEnum () ;
                if (kBoolTrue == test_8) {
                  extensionGetter_definition (var_castType_17810, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 517)).readProperty_mTypeKindEnum ().method_weakReferenceType (var_testType_17857, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 517)) ;
                }
              }
              if (kBoolFalse == test_8) {
                enumGalgasBool test_9 = kBoolTrue ;
                if (kBoolTrue == test_9) {
                  test_9 = GALGAS_bool (kIsEqual, var_t_19275.objectCompare (var_classType_19041)).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    var_found_19306 = GALGAS_bool (true) ;
                  }
                }
              }
              if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 521)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 521)).isValid ()) {
                uint32_t variant_19540 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 521)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 521)).uintValue () ;
                bool loop_19540 = true ;
                while (loop_19540) {
                  loop_19540 = var_found_19306.operator_not (SOURCE_FILE ("instruction-if.galgas", 522)).operator_and (extensionGetter_definition (var_t_19275, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 522)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 522)).operator_not (SOURCE_FILE ("instruction-if.galgas", 522)) COMMA_SOURCE_FILE ("instruction-if.galgas", 522)).isValid () ;
                  if (loop_19540) {
                    loop_19540 = var_found_19306.operator_not (SOURCE_FILE ("instruction-if.galgas", 522)).operator_and (extensionGetter_definition (var_t_19275, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 522)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 522)).operator_not (SOURCE_FILE ("instruction-if.galgas", 522)) COMMA_SOURCE_FILE ("instruction-if.galgas", 522)).boolValue () ;
                  }
                  if (loop_19540 && (0 == variant_19540)) {
                    loop_19540 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 521)) ;
                  }
                  if (loop_19540) {
                    variant_19540 -- ;
                    var_t_19275 = extensionGetter_definition (var_t_19275, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 523)).readProperty_mSuperType () ;
                    enumGalgasBool test_10 = kBoolTrue ;
                    if (kBoolTrue == test_10) {
                      test_10 = GALGAS_bool (kIsEqual, var_t_19275.objectCompare (var_analyzedExpression_17743.readProperty_mResultType ())).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        var_found_19306 = GALGAS_bool (true) ;
                        extensionGetter_definition (var_castType_17810, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 526)).readProperty_mTypeKindEnum ().method_weakReferenceType (var_testType_17857, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 526)) ;
                      }
                    }
                    if (kBoolFalse == test_10) {
                      enumGalgasBool test_11 = kBoolTrue ;
                      if (kBoolTrue == test_11) {
                        test_11 = GALGAS_bool (kIsEqual, var_t_19275.objectCompare (var_classType_19041)).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          var_found_19306 = GALGAS_bool (true) ;
                        }
                      }
                    }
                  }
                }
              }
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = var_found_19306.operator_not (SOURCE_FILE ("instruction-if.galgas", 531)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_17482_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_castType_17810, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 533)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 533)).add_operation (GALGAS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 533)).add_operation (extensionGetter_definition (var_analyzedExpression_17743.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 533)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 533)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 533)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 532)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (var_analyzedExpression_17743.readProperty_mLocation (), GALGAS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (extensionGetter_definition (var_analyzedExpression_17743.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 537)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 536)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 537)), fixItArray14  COMMA_SOURCE_FILE ("instruction-if.galgas", 536)) ;
          }
        }
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 539)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 540)) ;
        }
        GALGAS_string var_targetVariableCppName_20499 = GALGAS_string ("var_").add_operation (extractedValue_17454_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 541)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 541)).add_operation (extractedValue_17454_constantName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 542)).getter_string (SOURCE_FILE ("instruction-if.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 542)) ;
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GALGAS_bool (kIsNotEqual, extractedValue_17454_constantName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_15) {
            {
            extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_17454_constantName, var_castType_17810, var_targetVariableCppName_20499, var_targetVariableCppName_20499, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 544)) ;
            }
          }
        }
        var_testListForGeneration_16720.addAssign_operation (GALGAS_ifTestForGeneration::class_func_letExp (var_targetVariableCppName_20499, var_analyzedExpression_17743, var_castType_17810, var_testType_17857  COMMA_SOURCE_FILE ("instruction-if.galgas", 551))  COMMA_SOURCE_FILE ("instruction-if.galgas", 551)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_21466 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_16754.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_21080_receiverExpression = extractPtr_21466->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_21099_optionalMethodName = extractPtr_21466->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_21118_parameters = extractPtr_21466->mAssociatedValue2 ;
        {
        routine_analyzeOptionalMethodCall_3F__26__3F__26__26__3F_receiverExp_3F_optionalMethodName_3F_parameters_26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, extractedValue_21080_receiverExpression, extractedValue_21099_optionalMethodName, extractedValue_21118_parameters, var_testListForGeneration_16720, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 558)) ;
        }
      }
      break ;
    }
    enumerator_16754.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_21849 ;
  {
  const GALGAS_ifInstructionAST temp_16 = this ;
  routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 577)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 578)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 579)), temp_16.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioVariableMap, var_then_5F_instructionList_21849, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 572)) ;
  }
  const GALGAS_ifInstructionAST temp_17 = this ;
  GALGAS_ifExpressionList var_expressions_21880 = temp_17.readProperty_mExpressions () ;
  {
  GALGAS_ifExpressionKind joker_21937 ; // Joker input parameter
  var_expressions_21880.setter_popLast (joker_21937, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 585)) ;
  }
  cEnumerator_ifExpressionList enumerator_21948 (var_expressions_21880, kENUMERATION_UP) ;
  while (enumerator_21948.hasCurrentObject ()) {
    {
    const GALGAS_ifInstructionAST temp_18 = this ;
    extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_18.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 587)) ;
    }
    {
    const GALGAS_ifInstructionAST temp_19 = this ;
    extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_19.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 588)) ;
    }
    enumerator_21948.gotoNextObject () ;
  }
  {
  const GALGAS_ifInstructionAST temp_20 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 590)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_22538 ;
  {
  const GALGAS_ifInstructionAST temp_21 = this ;
  const GALGAS_ifInstructionAST temp_22 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 597)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 598)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 599)), temp_21.readProperty_m_5F_else_5F_instructionList (), temp_22.readProperty_mEndOf_5F_if_5F_instruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_22538, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 592)) ;
  }
  {
  const GALGAS_ifInstructionAST temp_23 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 605)) ;
  }
  const GALGAS_ifInstructionAST temp_24 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::class_func_new (temp_24.readProperty_mEndOf_5F_then_5F_branch (), var_testListForGeneration_16720, var_then_5F_instructionList_21849, var_else_5F_instructionList_22538  COMMA_SOURCE_FILE ("instruction-if.galgas", 607))  COMMA_SOURCE_FILE ("instruction-if.galgas", 607)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOptionalMethodCall?&?&&?receiverExp?optionalMethodName?parameters&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOptionalMethodCall_3F__26__3F__26__26__3F_receiverExp_3F_optionalMethodName_3F_parameters_26_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                   const GALGAS_semanticExpressionAST constinArgument_inReceiverExpression,
                                                                                                                   const GALGAS_lstring constinArgument_inOptionalMethodName,
                                                                                                                   const GALGAS_optionalMethodActualArgumentList constinArgument_inActualParameters,
                                                                                                                   GALGAS_ifTestListForGeneration & ioArgument_ioTestListForGeneration,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_24160 ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 632)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_24160, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 629)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 638)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 639)) ;
  }
  GALGAS_unifiedTypeMapEntry var_receiverType_24317 = var_receiverExpression_24160.readProperty_mResultType () ;
  GALGAS_optionalMethodMap var_optionalMethodMap_24388 = extensionGetter_definition (var_receiverType_24317, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 642)).readProperty_mOptionalMethodMap () ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_24512 ;
  const cMapElement_optionalMethodMap * objectArray_24538 = (const cMapElement_optionalMethodMap *) var_optionalMethodMap_24388.readAccessForWithInstruction (constinArgument_inOptionalMethodName.readProperty_string ()) ;
  if (nullptr != objectArray_24538) {
      macroValidSharedObject (objectArray_24538, cMapElement_optionalMethodMap) ;
    var_optionalMethodSignature_24512 = objectArray_24538->mProperty_mArgumentTypeList ;
  }else{
    GALGAS_string var_s_24658 = GALGAS_string ("this optional method is not defined; available optional methods:") ;
    cEnumerator_optionalMethodMap enumerator_24743 (var_optionalMethodMap_24388, kENUMERATION_UP) ;
    while (enumerator_24743.hasCurrentObject ()) {
      var_s_24658.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_24743.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 650)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 650)) ;
      enumerator_24743.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), var_s_24658, fixItArray0  COMMA_SOURCE_FILE ("instruction-if.galgas", 652)) ;
    var_optionalMethodSignature_24512.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inActualParameters.getter_count (SOURCE_FILE ("instruction-if.galgas", 655)).objectCompare (var_optionalMethodSignature_24512.getter_count (SOURCE_FILE ("instruction-if.galgas", 655)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 657)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 657)).add_operation (extensionGetter_definition (var_receiverType_24317, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 657)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 657)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 657)).add_operation (var_optionalMethodSignature_24512.getter_count (SOURCE_FILE ("instruction-if.galgas", 658)).getter_string (SOURCE_FILE ("instruction-if.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 657)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 658)).add_operation (constinArgument_inActualParameters.getter_count (SOURCE_FILE ("instruction-if.galgas", 659)).getter_string (SOURCE_FILE ("instruction-if.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 658)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 659)), fixItArray2  COMMA_SOURCE_FILE ("instruction-if.galgas", 656)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_25368 = GALGAS_optionalMethodActualArgumentListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 661)) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_25417 (constinArgument_inActualParameters, kENUMERATION_UP) ;
    cEnumerator_optionalMethodSignature enumerator_25494 (var_optionalMethodSignature_24512, kENUMERATION_UP) ;
    while (enumerator_25417.hasCurrentObject () && enumerator_25494.hasCurrentObject ()) {
      switch (enumerator_25417.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_26357 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_25417.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_25581_expression = extractPtr_26357->mAssociatedValue0 ;
          const GALGAS_location extractedValue_25592_location = extractPtr_26357->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_25910 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_25581_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_25494.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_25910, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 666)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsNotEqual, enumerator_25494.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_25417.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_string temp_4 ;
              const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_25494.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                temp_4 = enumerator_25494.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 676)) ;
              }else if (kBoolFalse == test_5) {
                temp_4 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_26009 = GALGAS_string ("!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 676)) ;
              TC_Array <C_FixItDescription> fixItArray6 ;
              appendFixItActions (fixItArray6, kFixItReplace, var_s_26009) ;
              inCompiler->emitSemanticError (enumerator_25417.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_26009, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 677)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 677)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 677)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_25494.current_mFormalArgumentType (HERE), var_exp_25910.readProperty_mResultType (), extractedValue_25592_location, var_exp_25910, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 679)) ;
          }
          var_actualParameterList_25368.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualOutput (var_exp_25910  COMMA_SOURCE_FILE ("instruction-if.galgas", 680))  COMMA_SOURCE_FILE ("instruction-if.galgas", 680)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_27500 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_25417.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_26395_actualTypeName = extractPtr_27500->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_26419_constantName = extractPtr_27500->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, extractedValue_26395_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_8.boolEnum ()) {
              test_8 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_25494.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 682)).readProperty_mTypeName ().readProperty_string ().objectCompare (extractedValue_26395_actualTypeName.readProperty_string ())) ;
            }
            test_7 = test_8.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_25494.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 685)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 685))) ;
              inCompiler->emitSemanticError (extractedValue_26395_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_25494.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 684)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 684)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 684)), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 683)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_26781 = GALGAS_string ("var_").add_operation (extractedValue_26419_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 687)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 687)).add_operation (extractedValue_26419_constantName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 688)).getter_string (SOURCE_FILE ("instruction-if.galgas", 688)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 688)) ;
          {
          extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_26419_constantName, enumerator_25494.current_mFormalArgumentType (HERE), var_targetVariableCppName_26781, var_targetVariableCppName_26781, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 689)) ;
          }
          var_actualParameterList_25368.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualLetInput (extensionGetter_definition (enumerator_25494.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 695)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_26781  COMMA_SOURCE_FILE ("instruction-if.galgas", 695))  COMMA_SOURCE_FILE ("instruction-if.galgas", 695)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, enumerator_25494.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_25417.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string temp_11 ;
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_25494.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                temp_11 = enumerator_25494.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 697)) ;
              }else if (kBoolFalse == test_12) {
                temp_11 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_27316 = GALGAS_string ("\?").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 697)) ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, kFixItReplace, var_s_27316) ;
              inCompiler->emitSemanticError (enumerator_25417.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_27316, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 698)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 698)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 698)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_28681 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_25417.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_27540_actualTypeName = extractPtr_28681->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_27564_variableName = extractPtr_28681->mAssociatedValue1 ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, extractedValue_27540_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_25494.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 701)).readProperty_mTypeName ().readProperty_string ().objectCompare (extractedValue_27540_actualTypeName.readProperty_string ())) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_25494.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 704)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 704))) ;
              inCompiler->emitSemanticError (extractedValue_27540_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_25494.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 703)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 703)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 703)), fixItArray16  COMMA_SOURCE_FILE ("instruction-if.galgas", 702)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_27927 = GALGAS_string ("var_").add_operation (extractedValue_27564_variableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 706)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 706)).add_operation (extractedValue_27564_variableName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 707)).getter_string (SOURCE_FILE ("instruction-if.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 707)) ;
          {
          extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_27564_variableName, GALGAS_bool (true), enumerator_25494.current_mFormalArgumentType (HERE), var_targetVariableCppName_27927, var_targetVariableCppName_27927, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 708)) ;
          }
          var_actualParameterList_25368.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualVarInput (extensionGetter_definition (enumerator_25494.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 715)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_27927  COMMA_SOURCE_FILE ("instruction-if.galgas", 715))  COMMA_SOURCE_FILE ("instruction-if.galgas", 715)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsNotEqual, enumerator_25494.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_25417.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_string temp_18 ;
              const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_25494.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                temp_18 = enumerator_25494.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 717)) ;
              }else if (kBoolFalse == test_19) {
                temp_18 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_28497 = GALGAS_string ("\?").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 717)) ;
              TC_Array <C_FixItDescription> fixItArray20 ;
              appendFixItActions (fixItArray20, kFixItReplace, var_s_28497) ;
              inCompiler->emitSemanticError (enumerator_25417.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_28497, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 718)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 718)), fixItArray20  COMMA_SOURCE_FILE ("instruction-if.galgas", 718)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_29265 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_25417.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_28714_checkSelector = extractPtr_29265->mAssociatedValue0 ;
          const GALGAS_location extractedValue_28728_location = extractPtr_29265->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_28737_idx = extractPtr_29265->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_28756 = GALGAS_string ("var_unused_").add_operation (extractedValue_28737_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 721)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 721)).add_operation (extractedValue_28728_location.getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 721)).getter_string (SOURCE_FILE ("instruction-if.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 721)) ;
          var_actualParameterList_25368.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualVarInput (extensionGetter_definition (enumerator_25494.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 722)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_28756  COMMA_SOURCE_FILE ("instruction-if.galgas", 722))  COMMA_SOURCE_FILE ("instruction-if.galgas", 722)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = extractedValue_28714_checkSelector ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = GALGAS_bool (kIsNotEqual, enumerator_25494.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_25417.current_mSelector (HERE).readProperty_string ())) ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, enumerator_25494.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = enumerator_25494.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 724)) ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_29081 = GALGAS_string ("\?").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 724)) ;
              TC_Array <C_FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, kFixItReplace, var_s_29081) ;
              inCompiler->emitSemanticError (enumerator_25417.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_29081, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 725)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 725)), fixItArray25  COMMA_SOURCE_FILE ("instruction-if.galgas", 725)) ;
            }
          }
        }
        break ;
      }
      enumerator_25417.gotoNextObject () ;
      enumerator_25494.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::class_func_optionalMethodCall (var_receiverExpression_24160, constinArgument_inOptionalMethodName, var_actualParameterList_25368  COMMA_SOURCE_FILE ("instruction-if.galgas", 729))  COMMA_SOURCE_FILE ("instruction-if.galgas", 729)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_testVar_32288 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 809)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 809)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 810)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_32288, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 811)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 811)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 811)) ;
  const GALGAS_ifInstructionForGeneration temp_0 = this ;
  cEnumerator_ifTestListForGeneration enumerator_32451 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_32451.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_32288, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 813)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 813)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 813)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 814)) ;
    }
    switch (enumerator_32451.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_32880 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_32451.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_32632_exp = extractPtr_32880->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_32805 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_32632_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_32805, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 817)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_32288.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 824)).add_operation (var_cppVarName_32805, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 824)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 824)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 824)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_33625 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_32451.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_32916_targetVarCppName = extractPtr_33625->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_32933_exp = extractPtr_33625->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_32937_targetType = extractPtr_33625->mAssociatedValue2 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_32948_testType = extractPtr_33625->mAssociatedValue3 ;
        GALGAS_string var_targetTypeName_32970 = extensionGetter_identifierRepresentation (extractedValue_32937_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 826)) ;
        GALGAS_string var_testTypeName_33035 = extensionGetter_identifierRepresentation (extractedValue_32948_testType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 827)) ;
        GALGAS_string var_cppVarName_33252 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_32933_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_33252, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 828)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_targetTypeName_32970, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 835)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 835)).add_operation (extractedValue_32916_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 835)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 835)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (dynamic_cast <const cPtr_").add_operation (var_testTypeName_33035, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 836)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 836)).add_operation (var_cppVarName_33252, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 836)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 836)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 836)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr == ").add_operation (extractedValue_32916_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 837)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 837)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 837)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_32288, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 838)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 838)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 838)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 839)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * extractPtr_35361 = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) (enumerator_32451.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_33660_receiverExpression = extractPtr_35361->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_33679_optionalMethodName = extractPtr_35361->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentListForGeneration extractedValue_33698_parameters = extractPtr_35361->mAssociatedValue2 ;
        GALGAS_string var_cppVarName_33893 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_33660_receiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_33893, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 841)) ;
        GALGAS_stringlist var_actualParameterNameList_33934 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 848)) ;
        cEnumerator_optionalMethodActualArgumentListForGeneration enumerator_33974 (extractedValue_33698_parameters, kENUMERATION_UP) ;
        while (enumerator_33974.hasCurrentObject ()) {
          switch (enumerator_33974.current_mParameter (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgumentForGeneration::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * extractPtr_34331 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) (enumerator_33974.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionForGeneration extractedValue_34054_expression = extractPtr_34331->mAssociatedValue0 ;
              GALGAS_string var_argumentCppName_34265 ;
              callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_34054_expression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_34265, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 852)) ;
              var_actualParameterNameList_33934.addAssign_operation (var_argumentCppName_34265  COMMA_SOURCE_FILE ("instruction-if.galgas", 859)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualLetInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * extractPtr_34552 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) (enumerator_33974.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_34376_typeName = extractPtr_34552->mAssociatedValue0 ;
              const GALGAS_string extractedValue_34385_constantName = extractPtr_34552->mAssociatedValue1 ;
              var_actualParameterNameList_33934.addAssign_operation (extractedValue_34385_constantName  COMMA_SOURCE_FILE ("instruction-if.galgas", 861)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_34376_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 862)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 862)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 862)).add_operation (extractedValue_34385_constantName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 862)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 862)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 862)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualVarInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * extractPtr_34764 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) (enumerator_33974.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_34588_typeName = extractPtr_34764->mAssociatedValue0 ;
              const GALGAS_string extractedValue_34597_variableName = extractPtr_34764->mAssociatedValue1 ;
              var_actualParameterNameList_33934.addAssign_operation (extractedValue_34597_variableName  COMMA_SOURCE_FILE ("instruction-if.galgas", 864)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_34588_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 865)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 865)).add_operation (extractedValue_34597_variableName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 865)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 865)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 865)) ;
            }
            break ;
          }
          enumerator_33974.gotoNextObject () ;
        }
        GALGAS_string var_boolResultName_34803 = GALGAS_string ("optionalResult").add_operation (extractedValue_33679_optionalMethodName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 868)).getter_string (SOURCE_FILE ("instruction-if.galgas", 868)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 868)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolResultName_34803, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 869)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 869)).add_operation (var_cppVarName_33893, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 869)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 869)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".optional_").add_operation (extractedValue_33679_optionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 870)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 870)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 870)) ;
        cEnumerator_stringlist enumerator_35033 (var_actualParameterNameList_33934, kENUMERATION_UP) ;
        while (enumerator_35033.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_35033.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 873)) ;
          if (enumerator_35033.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 875)) ;
          }
          enumerator_35033.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 877)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (!").add_operation (var_boolResultName_34803, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 878)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 878)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 878)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_32288, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 879)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 879)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 879)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 880)) ;
      }
      break ;
    }
    enumerator_32451.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_32288, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 884)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 884)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 884)) ;
  {
  const GALGAS_ifInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 885)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 893)) ;
  const GALGAS_ifInstructionForGeneration temp_2 = this ;
  cEnumerator_ifTestListForGeneration enumerator_35712 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_35712.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 895)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 896)) ;
    enumerator_35712.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ifInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_m_5F_else_5F_instructionList ().getter_count (SOURCE_FILE ("instruction-if.galgas", 899)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_32288, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 900)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 900)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 900)) ;
      {
      const GALGAS_ifInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_5.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 901)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 909)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 155)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_6412 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mOptionalTypeName (), joker_6412, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 163)) ;
      }
    }
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 165)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_7321 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mConstantTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 179)) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_7396 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 180)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 180)).add_operation (temp_2.readProperty_mConstantName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).getter_string (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)) ;
  {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mConstantName (), var_targetType_7321, var_targetVariableCppName_7396, var_targetVariableCppName_7396, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 182)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::class_func_new (var_targetType_7321, var_targetVariableCppName_7396  COMMA_SOURCE_FILE ("instruction-let.galgas", 189))  COMMA_SOURCE_FILE ("instruction-let.galgas", 189)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_8809 ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-let.galgas", 208)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8809, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 205)) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_8857 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 215)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 215)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 216)).getter_string (SOURCE_FILE ("instruction-let.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 216)) ;
  {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_expression_8809.readProperty_mResultType (), var_targetVariableCppName_8857, var_targetVariableCppName_8857, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 217)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (var_expression_8809.readProperty_mResultType (), GALGAS_bool (true), var_targetVariableCppName_8857, var_expression_8809  COMMA_SOURCE_FILE ("instruction-let.galgas", 224))  COMMA_SOURCE_FILE ("instruction-let.galgas", 224)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_10070 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 240)) ;
  GALGAS_semanticExpressionForGeneration var_expression_10440 ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10070, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10440, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 242)) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  GALGAS_string var_targetVariableCppName_10488 = GALGAS_string ("var_").add_operation (temp_2.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 252)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 252)).add_operation (temp_3.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 253)).getter_string (SOURCE_FILE ("instruction-let.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 253)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsConstant ().boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = this ;
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mVariableName (), var_targetType_10070, var_targetVariableCppName_10488, var_targetVariableCppName_10488, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 255)) ;
      }
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = this ;
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_7.readProperty_mVariableName (), GALGAS_bool (true), var_targetType_10070, var_targetVariableCppName_10488, var_targetVariableCppName_10488, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 262)) ;
    }
  }
  {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_10070, var_expression_10440.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_10440, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 271)) ;
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (var_targetType_10070, temp_9.readProperty_mIsConstant (), var_targetVariableCppName_10488, var_expression_10440  COMMA_SOURCE_FILE ("instruction-let.galgas", 273))  COMMA_SOURCE_FILE ("instruction-let.galgas", 273)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 308)) ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 309)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithSourceExpressionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 320)) ;
  GALGAS_string var_sourceVar_13750 ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13750, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 321)) ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (temp_3.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (var_sourceVar_13750, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 328)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_logInstructionAST temp_0 = this ;
  cEnumerator_logListAST enumerator_4610 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_4610.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4610.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)) ;
    enumerator_4610.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_logInstructionAST temp_0 = this ;
  cEnumerator_logListAST enumerator_5318 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_5318.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_5651 ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5318.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-log.galgas", 146)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5651, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 143)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::class_func_new (enumerator_5318.current_mLogMessage (HERE), var_expression_5651  COMMA_SOURCE_FILE ("instruction-log.galgas", 153))  COMMA_SOURCE_FILE ("instruction-log.galgas", 153)) ;
    enumerator_5318.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_logVar_6760 ;
  const GALGAS_logInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mLogExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_6760, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 178)) ;
  const GALGAS_logInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_6760.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 185)).add_operation (temp_1.readProperty_mLogMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-log.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 185)) ;
  const GALGAS_logInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLogMessage ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 186)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 186)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 131)) ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 132)) ;
  const GALGAS_loopInstructionWithVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 133)) ;
  const GALGAS_loopInstructionWithVariantAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 134)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_variantExpression_6550 ;
  const GALGAS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 152)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variantExpression_6550, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 149)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_variantExpression_6550.readProperty_mResultType (), var_variantExpression_6550.readProperty_mLocation (), var_variantExpression_6550, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 159)) ;
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_7083 ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 169)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_7083, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 166)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_loopExpression_7083.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_loopInstructionWithVariantAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (extensionGetter_definition (var_loopExpression_7083.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)), fixItArray4  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 181)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_7970 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_5 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_6 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 188)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 189)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 190)), temp_5.readProperty_mFirstInstructions (), temp_6.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_7970, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 183)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_8384 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_7 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_8 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 202)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 203)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 204)), temp_7.readProperty_mSecondInstructions (), temp_8.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_8384, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 197)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantAST temp_9 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_9.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 211)) ;
  }
  const GALGAS_loopInstructionWithVariantAST temp_10 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithVariantForGeneration::class_func_new (temp_10.readProperty_mInstructionLocation (), var_variantExpression_6550, var_first_5F_instructionList_7970, var_loopExpression_7083, var_second_5F_instructionList_8384  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 213))  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 213)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_variantCppVarName_9935 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_9935, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 243)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_9935, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_1 = this ;
  GALGAS_string var_variantVar_10080 = GALGAS_string ("variant_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_10080, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).add_operation (var_variantCppVarName_9935, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)) ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_2 = this ;
  GALGAS_string var_loopVar_10272 = GALGAS_string ("loop_").add_operation (temp_2.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_10272, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (var_loopVar_10272, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_3.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 258)) ;
  }
  GALGAS_string var_loopExpressionVar_10847 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_4 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_4.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_10847, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_10272.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (var_loopExpressionVar_10847, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (var_loopVar_10272, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (var_loopVar_10272, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (var_loopExpressionVar_10847, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)) COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_10272, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (var_variantVar_10080, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (GALGAS_string (")) {\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (var_loopVar_10272, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GALGAS_string (" = false ;\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (extensionGetter_sourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (GALGAS_string (") ;\n}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 275)).add_operation (var_loopVar_10272, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_10080, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)) ;
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_6 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_6.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 278)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 286)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 287)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 288)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 289)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 290)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 113)) ;
  const GALGAS_loopInstructionWithoutVariantAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 114)) ;
  const GALGAS_loopInstructionWithoutVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 115)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_loopExpression_5937 ;
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-without-variant.galgas", 133)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_5937, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 130)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_loopExpression_5937.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_loopInstructionWithoutVariantAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).add_operation (extensionGetter_definition (var_loopExpression_5937.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 141)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 145)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_6824 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_4 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_5 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 152)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 153)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 154)), temp_4.readProperty_mFirstInstructions (), temp_5.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_6824, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 147)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_7238 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_6 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_7 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 166)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 167)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 168)), temp_6.readProperty_mSecondInstructions (), temp_7.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_7238, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 161)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 175)) ;
  }
  const GALGAS_loopInstructionWithoutVariantAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithoutVariantForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_first_5F_instructionList_6824, var_loopExpression_5937, var_second_5F_instructionList_7238  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 177))  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 177)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_0 = this ;
  GALGAS_string var_loopVar_8842 = GALGAS_string ("loop_").add_operation (temp_0.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 203)).getter_string (SOURCE_FILE ("instruction-loop-without-variant.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 203)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_8842, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 204)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 204)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_8842, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 206)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 207)) ;
  }
  GALGAS_string var_loopExpressionVar_9443 ;
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_9443, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_8842.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)).add_operation (var_loopExpressionVar_9443, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)).add_operation (var_loopVar_8842, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 223)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 223)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 223)).add_operation (var_loopVar_8842, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)).add_operation (var_loopExpressionVar_9443, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_8842, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)) ;
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_3.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 227)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 235)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 236)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 237)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4224 ;
  const GALGAS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-message.galgas", 90)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4224, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 87)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_4224.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_messageInstructionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("the expression has the '@").add_operation (extensionGetter_definition (var_expression_4224.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 98)) ;
    }
  }
  const GALGAS_messageInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::class_func_new (var_expression_4224, temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-message.galgas", 102))  COMMA_SOURCE_FILE ("instruction-message.galgas", 102)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_messageCppVarName_5691 ;
  const GALGAS_messageInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_5691, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 126)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)).add_operation (var_messageCppVarName_5691, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 134)) ;
  const GALGAS_messageInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 135)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 135)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 136)) COMMA_SOURCE_FILE ("instruction-message.galgas", 136)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 105)) ;
  const GALGAS_methodCallInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_4397 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_4397.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_4397.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 107)) ;
    enumerator_4397.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_5412 ;
  const GALGAS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-method-call.galgas", 127)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_5412, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 124)) ;
  GALGAS_methodKind var_kind_5573 ;
  GALGAS_formalParameterSignature var_routineSignature_5587 ;
  GALGAS_bool var_hasCompilerArgument_5620 ;
  GALGAS_string var_errorMessage_5656 ;
  const GALGAS_methodCallInstructionAST temp_1 = this ;
  GALGAS_location joker_5608 ; // Joker input parameter
  GALGAS_methodQualifier joker_5644 ; // Joker input parameter
  extensionGetter_definition (var_receiverExpression_5412.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 134)).readProperty_mInstanceMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_kind_5573, var_routineSignature_5587, joker_5608, var_hasCompilerArgument_5620, joker_5644, var_errorMessage_5656, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 134)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_errorMessage_5656.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_methodCallInstructionAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mMethodName ().readProperty_location (), var_errorMessage_5656, fixItArray4  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 144)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_6173 ;
  const GALGAS_methodCallInstructionAST temp_5 = this ;
  const GALGAS_methodCallInstructionAST temp_6 = this ;
  const GALGAS_methodCallInstructionAST temp_7 = this ;
  extensionMethod_analyzeRoutineArguments (temp_5.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_6.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_7.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 153)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 153)), var_routineSignature_5587, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_6173, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 147)) ;
  GALGAS_unifiedTypeMapEntry var_baseType_6263 = var_receiverExpression_5412.readProperty_mResultType () ;
  GALGAS_bool var_searching_6311 = GALGAS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 162)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      if (GALGAS_uint::class_func_max (SOURCE_FILE ("instruction-method-call.galgas", 163)).isValid ()) {
        uint32_t variant_6364 = GALGAS_uint::class_func_max (SOURCE_FILE ("instruction-method-call.galgas", 163)).uintValue () ;
        bool loop_6364 = true ;
        while (loop_6364) {
          loop_6364 = var_searching_6311.isValid () ;
          if (loop_6364) {
            loop_6364 = var_searching_6311.boolValue () ;
          }
          if (loop_6364 && (0 == variant_6364)) {
            loop_6364 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 163)) ;
          }
          if (loop_6364) {
            variant_6364 -- ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = extensionGetter_definition (var_baseType_6263, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 164)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 164)).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_searching_6311 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                const GALGAS_methodCallInstructionAST temp_11 = this ;
                test_10 = extensionGetter_definition (extensionGetter_definition (var_baseType_6263, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 167)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 167)).readProperty_mInstanceMethodMap ().getter_hasKey (temp_11.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-method-call.galgas", 167)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_baseType_6263 = extensionGetter_definition (var_baseType_6263, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_10) {
                var_searching_6311 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_methodCallInstructionAST temp_12 = this ;
  const GALGAS_methodCallInstructionAST temp_13 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::class_func_new (temp_12.readProperty_mInstructionLocation (), var_receiverExpression_5412.readProperty_mResultType (), var_receiverExpression_5412, temp_13.readProperty_mMethodName ().readProperty_string (), var_kind_5573, var_actualParameterListForGeneration_6173, var_hasCompilerArgument_5620, var_baseType_6263  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverCppName_8314 ;
  const GALGAS_methodCallInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_8314, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 212)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_8314 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 213)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_8402 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 215)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_8446 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 216)) ;
  GALGAS_stringlist var_inputVariableList_8498 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 217)) ;
  const GALGAS_methodCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_8540 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_8540.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_8783 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_8540.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_8446, var_inputVariableList_8498, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8783, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 219)) ;
    var_parameterCppNameList_8402.addAssign_operation (var_parameterCppName_8783  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 220)) ;
    enumerator_8540.gotoNextObject () ;
  }
  const GALGAS_methodCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_methodCallInstructionForGeneration temp_3 = this ;
      const GALGAS_methodCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_3.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225)).add_operation (temp_4.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 226)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_methodCallInstructionForGeneration temp_7 = this ;
          const GALGAS_methodCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (temp_7.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)).add_operation (extensionGetter_identifierRepresentation (temp_8.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)).add_operation (var_receiverCppName_8314, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 229)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_9 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (temp_9.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)).add_operation (var_receiverCppName_8314, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 232)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_methodCallInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_8314.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 235)).add_operation (temp_10.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 235)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 235)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_9722 (var_parameterCppNameList_8402, kENUMERATION_UP) ;
  while (enumerator_9722.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_9722.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 238)) ;
    if (enumerator_9722.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 239)) ;
    }
    enumerator_9722.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_parameterCppNameList_8402.getter_count (SOURCE_FILE ("instruction-method-call.galgas", 241)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_methodCallInstructionForGeneration temp_13 = this ;
        test_12 = temp_13.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 243)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 243)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 244)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 245)) ;
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
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 248)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 248)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 249)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 250)) ;
      }
    }
    if (kBoolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 252)) ;
    }
  }
  const GALGAS_methodCallInstructionForGeneration temp_16 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 254)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 254)) ;
  const GALGAS_methodCallInstructionForGeneration temp_17 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_10407 (temp_17.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_10407.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_10407.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 257)) ;
    enumerator_10407.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_3262 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_3262.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3262.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 75)) ;
    enumerator_3262.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_routineSignature_4241 ;
  GALGAS_bool var_isFilePrivate_4291 ;
  GALGAS_lstring var_routineMangledName_4337 ;
  const GALGAS_procCallInstructionAST temp_0 = this ;
  const GALGAS_procCallInstructionAST temp_1 = this ;
  extensionMethod_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap (), temp_0.readProperty_mRoutineName (), temp_1.readProperty_mActualParameterList (), var_routineSignature_4241, var_isFilePrivate_4291, var_routineMangledName_4337, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)) ;
  GALGAS_lstring var_usefulnessName_4389 = function_procedureNameForUsefulEntitiesGraph (var_routineMangledName_4337, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 96)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4389 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 97)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isFilePrivate_4291.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_procCallInstructionAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_4606 = extensionGetter_locationForKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap (), temp_3.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 100)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_procCallInstructionAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mRoutineName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)).objectCompare (var_procDeclarationLocation_4606.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_procCallInstructionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_4606.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)) ;
        }
      }
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_5371 ;
  const GALGAS_procCallInstructionAST temp_8 = this ;
  const GALGAS_procCallInstructionAST temp_9 = this ;
  extensionMethod_analyzeRoutineArguments (temp_8.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_9.readProperty_mRoutineName (), GALGAS_string ("'").add_operation (var_routineMangledName_4337.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 112)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 112)), var_routineSignature_4241, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5371, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::class_func_new (var_routineMangledName_4337, var_actualParameterListForGeneration_5371  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 119))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 119)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_0.readProperty_routineMangledName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 144))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 144)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145)) ;
  GALGAS_stringlist var_parameterCppNameList_6781 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 147)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_6827 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 148)) ;
  GALGAS_stringlist var_inputVariableList_6881 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 149)) ;
  const GALGAS_procCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_6913 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_6913.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_7212 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_6913.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6827, var_inputVariableList_6881, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_7212, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)) ;
    var_parameterCppNameList_6781.addAssign_operation (var_parameterCppName_7212  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 160)) ;
    enumerator_6913.gotoNextObject () ;
  }
  const GALGAS_procCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (temp_2.readProperty_routineMangledName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)) ;
  cEnumerator_stringlist enumerator_7431 (var_parameterCppNameList_6781, kENUMERATION_UP) ;
  while (enumerator_7431.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_7431.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 165)) ;
    enumerator_7431.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
  }
  const GALGAS_procCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_routineMangledName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 169)) ;
  const GALGAS_procCallInstructionForGeneration temp_4 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_7762 (temp_4.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_7762.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_7762.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 172)) ;
    enumerator_7762.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 79)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_4073 ;
    GALGAS_bool var_selfIsMutable_4096 ;
    GALGAS_bool var_unused_0_4130 ;
    const bool optionalResult4052 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_4073, var_selfIsMutable_4096, var_unused_0_4130) ;
    if (!optionalResult4052) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_4096.operator_not (SOURCE_FILE ("instruction-self-assignment.galgas", 95)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfAssignmentInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 96)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_4570 ;
      const GALGAS_selfAssignmentInstructionAST temp_4 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_4073, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4570, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 99)) ;
      {
      const GALGAS_selfAssignmentInstructionAST temp_5 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_4073, var_expression_4570.readProperty_mResultType (), temp_5.readProperty_mInstructionLocation (), var_expression_4570, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 109)) ;
      }
      const GALGAS_selfAssignmentInstructionAST temp_6 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::class_func_new (var_selfType_4073, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 115)).readProperty_string (), var_expression_4570, temp_6.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 111))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 111)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfAssignmentInstructionAST temp_7 = this ;
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 120)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 214)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 220)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfMulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 226)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfDivEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 232)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfPlusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 238)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_10526 ;
    GALGAS_bool var_selfIsMutable_10555 ;
    GALGAS_bool var_unused_0_10595 ;
    const bool optionalResult10499 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_10526, var_selfIsMutable_10555, var_unused_0_10595) ;
    if (!optionalResult10499) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_10555.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 259)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 260)) ;
        }
      }
      GALGAS_functionSignature var_addAssignOperatorArguments_11089 = extensionGetter_definition (var_selfType_10526, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 270)).readProperty_mAddAssignOperatorArguments () ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_11089.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 271)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_10526, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 273)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 273)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 273)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 272)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 275)).objectCompare (var_addAssignOperatorArguments_11089.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 275)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const GALGAS_selfPlusEqualElementsInstructionAST temp_9 = this ;
            const GALGAS_selfPlusEqualElementsInstructionAST temp_10 = this ;
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_selfType_10526, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 277)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 277)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 277)).add_operation (var_addAssignOperatorArguments_11089.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 278)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 277)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278)).add_operation (temp_10.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 279)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 279)), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 276)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_11880 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 281)) ;
          const GALGAS_selfPlusEqualElementsInstructionAST temp_12 = this ;
          cEnumerator_actualOutputExpressionList enumerator_11984 (temp_12.readProperty_mExpressions (), kENUMERATION_UP) ;
          cEnumerator_functionSignature enumerator_12069 (var_addAssignOperatorArguments_11089, kENUMERATION_UP) ;
          while (enumerator_11984.hasCurrentObject () && enumerator_12069.hasCurrentObject ()) {
            GALGAS_semanticExpressionForGeneration var_expression_12421 ;
            callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11984.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_12069.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12421, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 283)) ;
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsNotEqual, enumerator_12069.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_11984.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                GALGAS_string temp_14 ;
                const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_12069.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_15) {
                  temp_14 = enumerator_12069.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 293)) ;
                }else if (kBoolFalse == test_15) {
                  temp_14 = GALGAS_string::makeEmptyString () ;
                }
                GALGAS_string var_s_12529 = GALGAS_string ("!").add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 293)) ;
                TC_Array <C_FixItDescription> fixItArray16 ;
                appendFixItActions (fixItArray16, kFixItReplace, var_s_12529) ;
                inCompiler->emitSemanticError (enumerator_11984.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12529, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 294)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 294)), fixItArray16  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 294)) ;
              }
            }
            {
            routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_12069.current_mFormalArgumentType (HERE), var_expression_12421.readProperty_mResultType (), enumerator_11984.current_mEndOfExpressionLocation (HERE), var_expression_12421, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 296)) ;
            }
            var_effectiveParameterList_11880.addAssign_operation (var_expression_12421  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 297)) ;
            enumerator_11984.gotoNextObject () ;
            enumerator_12069.gotoNextObject () ;
          }
          const GALGAS_selfPlusEqualElementsInstructionAST temp_17 = this ;
          ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_10526, GALGAS_string::makeEmptyString (), temp_17.readProperty_mInstructionLocation (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 305)), var_effectiveParameterList_11880  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 300))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 300)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualElementsInstructionAST temp_18 = this ;
    TC_Array <C_FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 310)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_13990 ;
    GALGAS_bool var_selfIsMutable_14019 ;
    GALGAS_bool var_unused_0_14059 ;
    const bool optionalResult13963 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_13990, var_selfIsMutable_14019, var_unused_0_14059) ;
    if (!optionalResult13963) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_14019.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 330)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 331)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_13990, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 334)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 334)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 334)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_13990, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 336)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 336)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 336)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 335)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_14833 ;
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_13990, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_14833, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 339)) ;
      {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_13990, var_expression_14833.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_14833, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 349)) ;
      }
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_selfType_13990, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 356)), var_expression_14833, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 351))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 351)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 361)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMinusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_16072 ;
    GALGAS_bool var_selfIsMutable_16101 ;
    GALGAS_bool var_unused_0_16141 ;
    const bool optionalResult16045 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_16072, var_selfIsMutable_16101, var_unused_0_16141) ;
    if (!optionalResult16045) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_16101.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 381)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 382)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_16072, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 392)).readProperty_mHandledOperatorFlags ().getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 392)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 392)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_16072, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 394)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 394)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 394)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 393)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_17223 ;
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_16072, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_17223, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 397)) ;
      {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_16072, var_expression_17223.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_17223, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 407)) ;
      }
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_selfType_16072, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 414)), var_expression_17223, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 409))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 409)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMinusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 419)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMulEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_18461 ;
    GALGAS_bool var_selfIsMutable_18490 ;
    GALGAS_bool var_unused_0_18530 ;
    const bool optionalResult18434 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_18461, var_selfIsMutable_18490, var_unused_0_18530) ;
    if (!optionalResult18434) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_18490.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 439)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 440)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_18461, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 443)).readProperty_mHandledOperatorFlags ().getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 443)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_18461, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 445)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 445)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 445)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 444)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_19299 ;
      const GALGAS_selfMulEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_18461, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_19299, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 448)) ;
      {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_18461, var_expression_19299.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_19299, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 458)) ;
      }
      const GALGAS_selfMulEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_selfType_18461, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 465)), var_expression_19299, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 460))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 460)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMulEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 470)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfDivEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_20535 ;
    GALGAS_bool var_selfIsMutable_20564 ;
    GALGAS_bool var_unused_0_20604 ;
    const bool optionalResult20508 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_20535, var_selfIsMutable_20564, var_unused_0_20604) ;
    if (!optionalResult20508) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_20564.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 490)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 491)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_20535, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 494)).readProperty_mHandledOperatorFlags ().getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 494)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_20535, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 496)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 496)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 496)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 495)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_21373 ;
      const GALGAS_selfDivEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_20535, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_21373, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 499)) ;
      {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_20535, var_expression_21373.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_21373, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 509)) ;
      }
      const GALGAS_selfDivEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_selfType_20535, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 516)), var_expression_21373, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 511))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 511)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfDivEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 521)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_setterCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_7560 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_7560.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_7560.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 219)) ;
    enumerator_7560.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfSetterCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_7926 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_7926.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_7926.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 229)) ;
    enumerator_7926.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_receiverType_8886 ;
  GALGAS_string var_targetVariableCppName_8913 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_8949 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_setterCallInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_9096 ;
        GALGAS_bool var_selfIsMutable_9139 ;
        GALGAS_bool var_unused_0_9193 ;
        const bool optionalResult9055 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_9096, var_selfIsMutable_9139, var_unused_0_9193) ;
        if (!optionalResult9055) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            GALGAS_bool var_isReference_9279 ;
            const bool optionalResult9251 = extensionGetter_definition (var_selfType_9096, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 251)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_9279) ;
            if (!optionalResult9251) {
              test_3 = kBoolFalse ;
            }
            if (kBoolTrue == test_3) {
              test_3 = var_isReference_9279.boolEnum () ;
              if (kBoolTrue == test_3) {
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = var_selfIsMutable_9139.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 252)).boolEnum () ;
              if (kBoolTrue == test_4) {
                const GALGAS_setterCallInstructionAST temp_5 = this ;
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (temp_5.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 253)) ;
              }
            }
          }
          GALGAS_propertyMap var_propertyMap_9435 = extensionGetter_definition (var_selfType_9096, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 255)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_9541 ;
          const GALGAS_setterCallInstructionAST temp_7 = this ;
          GALGAS_AccessControl joker_9533 ; // Joker input parameter
          var_propertyMap_9435.method_searchKey (temp_7.readProperty_mReceiverName (), joker_9533, var_isConstant_9541, var_receiverType_8886, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 256)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_9541.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_setterCallInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 258)) ;
            }
          }
          var_nameForCheckingFormalParameterUsing_8949 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_setterCallInstructionAST temp_11 = this ;
          var_targetVariableCppName_8913 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 261)).add_operation (temp_11.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 262)) ;
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_setterCallInstructionAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 264)) ;
        var_receiverType_8886.drop () ; // Release error dropped variable
        var_targetVariableCppName_8913.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_8949.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_setterCallInstructionAST temp_14 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_14.readProperty_mReceiverName (), var_receiverType_8886, var_targetVariableCppName_8913, var_nameForCheckingFormalParameterUsing_8949, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 269)) ;
    }
  }
  GALGAS_bool var_ok_10321 = GALGAS_bool (true) ;
  const GALGAS_setterCallInstructionAST temp_15 = this ;
  GALGAS_location var_errorLocation_10337 = temp_15.readProperty_mReceiverName ().readProperty_location () ;
  const GALGAS_setterCallInstructionAST temp_16 = this ;
  cEnumerator_lstringlist enumerator_10388 (temp_16.readProperty_mReceiverStructProperties (), kENUMERATION_UP) ;
  bool bool_17 = var_ok_10321.isValidAndTrue () ;
  if (enumerator_10388.hasCurrentObject () && bool_17) {
    while (enumerator_10388.hasCurrentObject () && bool_17) {
      var_ok_10321 = extensionGetter_definition (var_receiverType_8886, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 280)).readProperty_mTypeKindEnum ().getter_isStructType (SOURCE_FILE ("instruction-setter-call.galgas", 280)) ;
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_ok_10321.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 281)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (var_errorLocation_10337, GALGAS_string ("a structure is required for '.' access"), fixItArray19  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 282)) ;
        }
      }
      if (kBoolFalse == test_18) {
        GALGAS_propertyMap var_propertyMap_10612 = extensionGetter_definition (var_receiverType_8886, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 284)).readProperty_mPropertyMap () ;
        GALGAS_AccessControl var_accessControl_10706 ;
        GALGAS_bool var_isConstant_10725 ;
        var_propertyMap_10612.method_searchKey (enumerator_10388.current_mValue (HERE), var_accessControl_10706, var_isConstant_10725, var_receiverType_8886, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 285)) ;
        extensionMethod_checkSetAccess (var_accessControl_10706, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_10388.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 286)) ;
        var_errorLocation_10337 = enumerator_10388.current_mValue (HERE).readProperty_location () ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_isConstant_10725.boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_10388.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 292)) ;
          }
        }
      }
      enumerator_10388.gotoNextObject () ;
      if (enumerator_10388.hasCurrentObject ()) {
        bool_17 = var_ok_10321.isValidAndTrue () ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_castType_11145 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    const GALGAS_setterCallInstructionAST temp_23 = this ;
    test_22 = GALGAS_bool (kIsNotEqual, temp_23.readProperty_mTypeNameForCasting ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_setterCallInstructionAST temp_24 = this ;
      var_castType_11145 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_24.readProperty_mTypeNameForCasting (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 299)) ;
      {
      const GALGAS_setterCallInstructionAST temp_25 = this ;
      routine_checkAssignmentTypes_3F__3F__3F_ (var_receiverType_8886, var_castType_11145, temp_25.readProperty_mTypeNameForCasting ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 300)) ;
      }
    }
  }
  if (kBoolFalse == test_22) {
    var_castType_11145 = var_receiverType_8886 ;
  }
  GALGAS_methodKind var_kind_11505 ;
  GALGAS_formalParameterSignature var_routineSignature_11519 ;
  GALGAS_bool var_hasCompilerArgument_11545 ;
  GALGAS_string var_setterErrorMessage_11581 ;
  const GALGAS_setterCallInstructionAST temp_26 = this ;
  GALGAS_methodQualifier joker_11569 ; // Joker input parameter
  extensionGetter_definition (var_castType_11145, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 305)).readProperty_mSetterMap ().method_searchKey (temp_26.readProperty_mSetterName (), var_kind_11505, var_routineSignature_11519, var_hasCompilerArgument_11545, joker_11569, var_setterErrorMessage_11581, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 305)) ;
  enumGalgasBool test_27 = kBoolTrue ;
  if (kBoolTrue == test_27) {
    test_27 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_11581.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_27) {
      const GALGAS_setterCallInstructionAST temp_28 = this ;
      TC_Array <C_FixItDescription> fixItArray29 ;
      inCompiler->emitSemanticError (temp_28.readProperty_mSetterName ().readProperty_location (), var_setterErrorMessage_11581, fixItArray29  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 314)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_12107 ;
  const GALGAS_setterCallInstructionAST temp_30 = this ;
  const GALGAS_setterCallInstructionAST temp_31 = this ;
  const GALGAS_setterCallInstructionAST temp_32 = this ;
  extensionMethod_analyzeRoutineArguments (temp_30.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_31.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_32.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 323)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 323)), var_routineSignature_11519, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_12107, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)) ;
  GALGAS_unifiedTypeMapEntry var_baseType_12197 = var_castType_11145 ;
  GALGAS_bool var_searching_12223 = GALGAS_bool (true) ;
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    test_33 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 332)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_33) {
      if (GALGAS_uint::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas", 333)).isValid ()) {
        uint32_t variant_12276 = GALGAS_uint::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas", 333)).uintValue () ;
        bool loop_12276 = true ;
        while (loop_12276) {
          loop_12276 = var_searching_12223.isValid () ;
          if (loop_12276) {
            loop_12276 = var_searching_12223.boolValue () ;
          }
          if (loop_12276 && (0 == variant_12276)) {
            loop_12276 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 333)) ;
          }
          if (loop_12276) {
            variant_12276 -- ;
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = extensionGetter_definition (var_baseType_12197, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 334)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 334)).boolEnum () ;
              if (kBoolTrue == test_34) {
                var_searching_12223 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_34) {
              enumGalgasBool test_35 = kBoolTrue ;
              if (kBoolTrue == test_35) {
                const GALGAS_setterCallInstructionAST temp_36 = this ;
                test_35 = extensionGetter_definition (extensionGetter_definition (var_baseType_12197, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)).readProperty_mSetterMap ().getter_hasKey (temp_36.readProperty_mSetterName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)).boolEnum () ;
                if (kBoolTrue == test_35) {
                  var_baseType_12197 = extensionGetter_definition (var_baseType_12197, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_35) {
                var_searching_12223 = GALGAS_bool (false) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::class_func_new (temp_37.readProperty_mReceiverName ().readProperty_location (), var_targetVariableCppName_8913, var_nameForCheckingFormalParameterUsing_8949, temp_38.readProperty_mReceiverStructProperties (), var_castType_11145, var_receiverType_8886, temp_39.readProperty_mSetterName (), var_kind_11505, var_actualParameterListForGeneration_12107, var_hasCompilerArgument_11545, var_baseType_12197  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 346))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 346)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_13640 ;
    GALGAS_bool var_selfIsMutable_13669 ;
    GALGAS_bool var_unused_0_13709 ;
    const bool optionalResult13613 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_13640, var_selfIsMutable_13669, var_unused_0_13709) ;
    if (!optionalResult13613) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_13669.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 375)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfSetterCallInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 376)) ;
        }
      }
      GALGAS_methodKind var_kind_13922 ;
      GALGAS_formalParameterSignature var_routineSignature_13932 ;
      GALGAS_bool var_hasCompilerArgument_13954 ;
      const GALGAS_selfSetterCallInstructionAST temp_4 = this ;
      GALGAS_methodQualifier joker_13974 ; // Joker input parameter
      GALGAS_string joker_13977 ; // Joker input parameter
      extensionGetter_definition (var_selfType_13640, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 379)).readProperty_mSetterMap ().method_searchKey (temp_4.readProperty_mSetterName (), var_kind_13922, var_routineSignature_13932, var_hasCompilerArgument_13954, joker_13974, joker_13977, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 379)) ;
      GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_14419 ;
      const GALGAS_selfSetterCallInstructionAST temp_5 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_6 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_7 = this ;
      extensionMethod_analyzeRoutineArguments (temp_5.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_6.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_7.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)), var_routineSignature_13932, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_14419, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 381)) ;
      const GALGAS_selfSetterCallInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_13640, temp_8.readProperty_mSetterName (), var_kind_13922, var_actualParameterListForGeneration_14419, var_hasCompilerArgument_13954  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 394))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 394)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfSetterCallInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 444)) ;
  const GALGAS_setterCallInstructionForGeneration temp_0 = this ;
  GALGAS_string var_receiverCppName_16520 = temp_0.readProperty_mReceiverCppName () ;
  const GALGAS_setterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_lstringlist enumerator_16567 (temp_1.readProperty_mReceiverStructAttributes (), kENUMERATION_UP) ;
  while (enumerator_16567.hasCurrentObject ()) {
    var_receiverCppName_16520.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_16567.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 447)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 447)) ;
    enumerator_16567.gotoNextObject () ;
  }
  {
  const GALGAS_setterCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mReceiverBaseName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 449)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_16799 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 451)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_16843 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 452)) ;
  GALGAS_stringlist var_inputVariableList_16895 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 453)) ;
  const GALGAS_setterCallInstructionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_16925 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_16925.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_17210 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_16925.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_16843, var_inputVariableList_16895, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_17210, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 455)) ;
    var_parameterCppNameList_16799.addAssign_operation (var_parameterCppName_17210  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 464)) ;
    enumerator_16925.gotoNextObject () ;
  }
  const GALGAS_setterCallInstructionForGeneration temp_4 = this ;
  switch (temp_4.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_setterCallInstructionForGeneration temp_5 = this ;
      const GALGAS_setterCallInstructionForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)).add_operation (temp_6.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_8 = this ;
        test_7 = extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 470)).boolEnum () ;
        if (kBoolTrue == test_7) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            const GALGAS_setterCallInstructionForGeneration temp_10 = this ;
            test_9 = GALGAS_bool (kIsStrictSup, extensionGetter_definition (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)).readProperty_mAllTypedPropertyList ().getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 471)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_16520.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_11 = this ;
          GALGAS_string var_pointerUniqueName_17800 = GALGAS_string ("ptr_").add_operation (temp_11.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)) ;
          const GALGAS_setterCallInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)).add_operation (var_pointerUniqueName_17800, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)) ;
          const GALGAS_setterCallInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_13.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)).add_operation (var_receiverCppName_16520, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            const GALGAS_setterCallInstructionForGeneration temp_15 = this ;
            const GALGAS_setterCallInstructionForGeneration temp_16 = this ;
            test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_15.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 477)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 477)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              const GALGAS_setterCallInstructionForGeneration temp_17 = this ;
              ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (extensionGetter_definition (temp_17.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)) ;
              const GALGAS_setterCallInstructionForGeneration temp_18 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((nullptr != ").add_operation (var_pointerUniqueName_17800, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)).add_operation (extensionGetter_identifierRepresentation (temp_18.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)).add_operation (var_pointerUniqueName_17800, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)).add_operation (GALGAS_string (") == nullptr)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 482)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 482)) ;
              }
              const GALGAS_setterCallInstructionForGeneration temp_19 = this ;
              const GALGAS_setterCallInstructionForGeneration temp_20 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 483)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 483)).add_operation (extensionGetter_definition (temp_19.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 483)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)).add_operation (extensionGetter_commaSourceFile (temp_20.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 483)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_17800, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)).add_operation (GALGAS_string (" = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 486)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_21 = this ;
          const GALGAS_setterCallInstructionForGeneration temp_22 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_21.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 488)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 488)).add_operation (extensionGetter_identifierRepresentation (temp_22.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 489)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 489)).add_operation (var_pointerUniqueName_17800, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 489)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 488)) ;
        }
      }
      if (kBoolFalse == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_23 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_23.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)).add_operation (var_receiverCppName_16520, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_setterCallInstructionForGeneration temp_24 = this ;
      extensionMethod_addHeaderFileName (temp_24.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 494)) ;
      const GALGAS_setterCallInstructionForGeneration temp_25 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_16520.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 495)).add_operation (temp_25.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 495)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 495)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_19551 (var_parameterCppNameList_16799, kENUMERATION_UP) ;
  while (enumerator_19551.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_19551.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)) ;
    if (enumerator_19551.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 499)) ;
    }
    enumerator_19551.gotoNextObject () ;
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    const GALGAS_setterCallInstructionForGeneration temp_27 = this ;
    test_26 = temp_27.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_26) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_16799.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 502)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_28) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 503)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 506)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 506)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)) ;
    }
  }
  if (kBoolFalse == test_26) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_16799.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 508)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_29) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 509)) ;
      }
    }
  }
  const GALGAS_setterCallInstructionForGeneration temp_30 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_30.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 524)) ;
  {
  const GALGAS_selfSetterCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 525)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_20673 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 527)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_20717 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 528)) ;
  GALGAS_stringlist var_inputVariableList_20769 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 529)) ;
  const GALGAS_selfSetterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_20811 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_20811.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_21104 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_20811.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_20717, var_inputVariableList_20769, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_21104, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 531)) ;
    var_parameterCppNameList_20673.addAssign_operation (var_parameterCppName_21104  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 539)) ;
    enumerator_20811.gotoNextObject () ;
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_selfSetterCallInstructionForGeneration temp_3 = this ;
      const GALGAS_selfSetterCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_3.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 544)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 544)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 544)).add_operation (temp_4.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 544))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 544)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 545)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 545)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_7 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_7.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 546)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 546)).add_operation (temp_8.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 546)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 546)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_9 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_10 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_9.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)).add_operation (temp_10.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_12 = this ;
        test_11 = extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 551)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 551)).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_13 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_14 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(temp_13.readProperty_mSelfCppName ().add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 552)).add_operation (temp_14.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 552)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 552)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 552)) ;
        }
      }
      if (kBoolFalse == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_15 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_16 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(temp_15.readProperty_mSelfCppName ().add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 554)).add_operation (temp_16.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 554)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 554)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_22094 (var_parameterCppNameList_20673, kENUMERATION_UP) ;
  while (enumerator_22094.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_22094.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 558)) ;
    if (enumerator_22094.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 559)) ;
    }
    enumerator_22094.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_selfSetterCallInstructionForGeneration temp_18 = this ;
    test_17 = temp_18.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_17) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_20673.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 562)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 563)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 565)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 565)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 566)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 566)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 567)) ;
    }
  }
  if (kBoolFalse == test_17) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_20673.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 568)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 569)) ;
      }
    }
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_21 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_21.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 571)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 571)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 572)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 232)) ;
  const GALGAS_switchInstructionAST temp_1 = this ;
  cEnumerator_switchBranchesAST enumerator_8191 (temp_1.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_8191.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_8191.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 234)) ;
    enumerator_8191.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_switchExpression_9162 ;
  const GALGAS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-switch.galgas", 254)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_switchExpression_9162, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 251)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_switchExpression_9162.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 261)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::class_func_enumType (SOURCE_FILE ("instruction-switch.galgas", 261)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_switchInstructionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfSwitchExpression (), GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (extensionGetter_definition (var_switchExpression_9162.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 264)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 263)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 264)), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 262)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_9597 = extensionGetter_definition (var_switchExpression_9162.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 267)).readProperty_mEnumConstantMap () ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_9691 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("instruction-switch.galgas", 268)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_9834 = GALGAS_switchBranchesForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 271)) ;
  const GALGAS_switchInstructionAST temp_4 = this ;
  cEnumerator_switchBranchesAST enumerator_9936 (temp_4.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_9936.hasCurrentObject ()) {
    {
    extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)) ;
    }
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_10052 = GALGAS_extractedAssociatedValuesForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 274)) ;
    GALGAS_bool var_firstConstant_10110 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_10140 (enumerator_9936.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_10140.hasCurrentObject ()) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_enumConstantMap_9597.getter_hasKey (enumerator_10140.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_constantsNamedInSwitchInstruction_9691.getter_hasKey (enumerator_10140.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_10140.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_10140.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_9691.addAssign_operation (enumerator_10140.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_10560 ;
          GALGAS_uint joker_10527 ; // Joker input parameter
          var_enumConstantMap_9597.method_searchKey (enumerator_10140.current_mValue (HERE), joker_10527, var_associatedTypeList_10560, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_10560.getter_count (SOURCE_FILE ("instruction-switch.galgas", 284)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsEqual, enumerator_9936.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 284)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_10140.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_10140.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 286)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 286)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)) ;
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_10560.getter_count (SOURCE_FILE ("instruction-switch.galgas", 287)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_9936.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 287)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_10140.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_10140.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)), fixItArray11  COMMA_SOURCE_FILE ("instruction-switch.galgas", 288)) ;
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_10560.getter_count (SOURCE_FILE ("instruction-switch.galgas", 290)).objectCompare (enumerator_9936.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 290)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  GALGAS_string temp_13 ;
                  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_10560.getter_count (SOURCE_FILE ("instruction-switch.galgas", 293)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    temp_13 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_14) {
                    temp_13 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_10140.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_10140.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)).add_operation (var_associatedTypeList_10560.getter_count (SOURCE_FILE ("instruction-switch.galgas", 292)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 291)) ;
                }
              }
              if (kBoolFalse == test_12) {
                GALGAS_bigint var_associatedValueIndex_11284 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_11324 (var_associatedTypeList_10560, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_11399 (enumerator_9936.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_11324.hasCurrentObject () && enumerator_11399.hasCurrentObject ()) {
                  enumGalgasBool test_16 = kBoolTrue ;
                  if (kBoolTrue == test_16) {
                    test_16 = GALGAS_bool (kIsNotEqual, enumerator_11399.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_16) {
                      enumGalgasBool test_17 = kBoolTrue ;
                      if (kBoolTrue == test_17) {
                        test_17 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_11324.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).readProperty_mTypeName ().readProperty_string ().objectCompare (enumerator_11399.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_17) {
                          TC_Array <C_FixItDescription> fixItArray18 ;
                          inCompiler->emitSemanticError (enumerator_11399.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_11324.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)), fixItArray18  COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = var_firstConstant_10110.operator_and (GALGAS_bool (kIsNotEqual, enumerator_11399.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 302)).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      GALGAS_string var_cppName_11858 = GALGAS_string ("extractedValue_").add_operation (enumerator_11399.current_mExtractedValueName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)).add_operation (enumerator_11399.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)) ;
                      var_extractedAssociatedValuesForGeneration_10052.addAssign_operation (enumerator_11324.current_mEntry (HERE), var_cppName_11858, var_associatedValueIndex_11284.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)) ;
                      enumGalgasBool test_20 = kBoolTrue ;
                      if (kBoolTrue == test_20) {
                        test_20 = enumerator_11399.current_mMarkedAsUnused (HERE).boolEnum () ;
                        if (kBoolTrue == test_20) {
                          {
                          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_11399.current_mExtractedValueName (HERE), enumerator_11324.current_mEntry (HERE), var_cppName_11858, var_cppName_11858, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)) ;
                          }
                        }
                      }
                      if (kBoolFalse == test_20) {
                        {
                        extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_11399.current_mExtractedValueName (HERE), enumerator_11324.current_mEntry (HERE), var_cppName_11858, var_cppName_11858, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)) ;
                        }
                      }
                    }
                  }
                  var_associatedValueIndex_11284.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 311)) ;
                  enumerator_11324.gotoNextObject () ;
                  enumerator_11399.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_10140.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_10140.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 316)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 316)).add_operation (extensionGetter_definition (var_switchExpression_9162.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 316)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 316)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 316)), fixItArray21  COMMA_SOURCE_FILE ("instruction-switch.galgas", 315)) ;
      }
      var_firstConstant_10110 = GALGAS_bool (false) ;
      enumerator_10140.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_13040 ;
    {
    routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 325)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 326)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 327)), enumerator_9936.current_mInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_13040, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 320)) ;
    }
    {
    extensionSetter_closeBranch (ioArgument_ioVariableMap, enumerator_9936.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 332)) ;
    }
    var_switchBranchesForGeneration_9834.addAssign_operation (enumerator_9936.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_10052, enumerator_9936.current_mEndOfBranch (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 333)), var_instructionList_13040  COMMA_SOURCE_FILE ("instruction-switch.galgas", 333)) ;
    enumerator_9936.gotoNextObject () ;
  }
  {
  const GALGAS_switchInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 335)) ;
  }
  GALGAS_stringset var_forgottenConstants_13377 = var_enumConstantMap_9597.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 337)).substract_operation (var_constantsNamedInSwitchInstruction_9691, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 337)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_13377.getter_count (SOURCE_FILE ("instruction-switch.galgas", 338)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_string var_s_13516 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_13532 (var_forgottenConstants_13377, kENUMERATION_UP) ;
      while (enumerator_13532.hasCurrentObject ()) {
        var_s_13516.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_13532.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 341)) ;
        enumerator_13532.gotoNextObject () ;
      }
      const GALGAS_switchInstructionAST temp_24 = this ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.readProperty_mEndOf_5F_switch_5F_instruction (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_13516, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 344)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas", 343)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::class_func_new (var_switchExpression_9162.readProperty_mResultType (), var_switchExpression_9162, var_switchBranchesForGeneration_9834  COMMA_SOURCE_FILE ("instruction-switch.galgas", 347))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 347)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_switchVar_15644 ;
  const GALGAS_switchInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_15644, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 390)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_15644, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 397)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 397)) ;
  const GALGAS_switchInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 398)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 398)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)) ;
  const GALGAS_switchInstructionForGeneration temp_2 = this ;
  cEnumerator_switchBranchesForGeneration enumerator_15972 (temp_2.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_15972.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_16017 (enumerator_15972.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_16017.hasCurrentObject ()) {
      const GALGAS_switchInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)).add_operation (enumerator_16017.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)) ;
      enumerator_16017.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 404)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 405)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_15972.current_mExtractedAssociatedValuesForGeneration (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 406)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_switchInstructionForGeneration temp_5 = this ;
        GALGAS_string var_type_16372 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mEnumType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 407)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 407)).add_operation (enumerator_15972.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)) ;
        GALGAS_string var_varPtr_16532 = GALGAS_string ("extractPtr_").add_operation (enumerator_15972.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 409)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_16372, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)).add_operation (var_varPtr_16532, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)).add_operation (var_type_16372, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)).add_operation (var_switchVar_15644, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_16724 (enumerator_15972.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_16724.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16724.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 412)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 412)).add_operation (enumerator_16724.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 412)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 412)).add_operation (var_varPtr_16532, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 413)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 413)).add_operation (enumerator_16724.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 413)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 412)) ;
          enumerator_16724.gotoNextObject () ;
        }
      }
    }
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_15972.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 416)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 424)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 425)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 426)) ;
    }
    enumerator_15972.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 428)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typeMethodCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_3767 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_3767.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3767.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 87)) ;
    enumerator_3767.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typeMethodCallInstructionAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_type_4532 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 103)) ;
  GALGAS_formalParameterSignature var_routineSignature_4688 ;
  GALGAS_bool var_hasCompilerArgument_4710 ;
  const GALGAS_typeMethodCallInstructionAST temp_1 = this ;
  extensionGetter_definition (var_type_4532, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 105)).readProperty_mClassMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_routineSignature_4688, var_hasCompilerArgument_4710, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_5148 ;
  const GALGAS_typeMethodCallInstructionAST temp_2 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_3 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_4 = this ;
  extensionMethod_analyzeRoutineArguments (temp_2.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_4.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 113)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 113)), var_routineSignature_4688, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5148, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 107)) ;
  const GALGAS_typeMethodCallInstructionAST temp_5 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::class_func_new (temp_5.readProperty_mTypeName (), temp_6.readProperty_mMethodName (), var_actualParameterListForGeneration_5148, var_hasCompilerArgument_4710  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 146)) ;
  GALGAS_stringlist var_parameterCppNameList_6330 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 148)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_6374 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 149)) ;
  GALGAS_stringlist var_inputVariableList_6426 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 150)) ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_0 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_6468 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_6468.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_6761 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_6468.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6374, var_inputVariableList_6426, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_6761, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 152)) ;
    var_parameterCppNameList_6330.addAssign_operation (var_parameterCppName_6761  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 160)) ;
    enumerator_6468.gotoNextObject () ;
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_1 = this ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)).add_operation (temp_2.readProperty_mMethodName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 164)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)) ;
  cEnumerator_stringlist enumerator_7044 (var_parameterCppNameList_6330, kENUMERATION_UP) ;
  while (enumerator_7044.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_7044.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 166)) ;
    if (enumerator_7044.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 167)) ;
    }
    enumerator_7044.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 170)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 170)) ;
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList_6330.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 171)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 172)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 174)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_7 = this ;
    test_6 = temp_7.readProperty_mHasCompilerArgument ().operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList_6330.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 176)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 176)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 177)) ;
    }
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_8.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 179)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 179)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 180)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 171)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_7924 ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-var-declaration.galgas", 190)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7924, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 187)) ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_7972 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 197)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 197)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 197)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 197)) ;
  {
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), GALGAS_bool (true), var_expression_7924.readProperty_mResultType (), var_targetVariableCppName_7972, var_targetVariableCppName_7972, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 198)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (var_expression_7924.readProperty_mResultType (), GALGAS_bool (false), var_targetVariableCppName_7972, var_expression_7924  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 206))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 206)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationNoAssignmentAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationNoAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry joker_8906 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), joker_8906, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 219)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationNoAssignmentAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationNoAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_9576 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 235)) ;
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_1 = this ;
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_9643 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 236)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 236)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 236)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 236)) ;
  {
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_targetType_9576, var_targetVariableCppName_9643, var_targetVariableCppName_9643, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 237)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::class_func_new (var_targetType_9576, var_targetVariableCppName_9643  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 244))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 244)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                             const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mVariableType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 268)) ;
  const GALGAS_localVariableDeclarationForGeneration temp_1 = this ;
  const GALGAS_localVariableDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mVariableType (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 269)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 269)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 269)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 269)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_warningInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 87)) ;
  const GALGAS_warningInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 88)) ;
  const GALGAS_warningInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 89)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_locationExpression_4927 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_4955 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_4982 ;
  {
  const GALGAS_warningInstructionAST temp_0 = this ;
  const GALGAS_warningInstructionAST temp_1 = this ;
  const GALGAS_warningInstructionAST temp_2 = this ;
  const GALGAS_warningInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_4927, var_messageExpression_4955, var_fixitListForGeneration_4982, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)) ;
  }
  const GALGAS_warningInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::class_func_new (temp_4.readProperty_mInstructionLocation (), var_locationExpression_4927, var_messageExpression_4955, var_fixitListForGeneration_4982  COMMA_SOURCE_FILE ("instruction-warning.galgas", 120))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 120)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverCppVarName_6307 ;
  const GALGAS_warningInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_6307, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 149)) ;
  GALGAS_string var_messageCppVarName_6514 ;
  const GALGAS_warningInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWarningExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_6514, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 151)) ;
  GALGAS_string var_fixItArrayCppName_6763 ;
  const GALGAS_warningInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_6763, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 159)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 168)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 168)) ;
  }
  const GALGAS_warningInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (var_receiverCppVarName_6307, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)).add_operation (var_messageCppVarName_6514, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 171)).add_operation (var_fixItArrayCppName_6763, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 171)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 172)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 172)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readAccessWithInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_readAccessWithInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_readAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 366)) ;
  const GALGAS_readAccessWithInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mKeyExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 367)) ;
  const GALGAS_readAccessWithInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mDoBranchInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 368)) ;
  const GALGAS_readAccessWithInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mElseBranchInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 369)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteAccessWithInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_readWriteAccessWithInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mKeyExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 377)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_do_5F_Instructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 378)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_Instructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 379)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readAccessWithInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_readAccessWithInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_15262 ;
  const GALGAS_readAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-with.galgas", 397)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_15262, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 394)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_15291 = var_receiverExpression_15262.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readAccessWithInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool var_found_15439 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_15480 (extensionGetter_definition (var_receiverType_15291, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 407)).readProperty_mMapSearchMethodList (), kENUMERATION_UP) ;
      bool bool_3 = var_found_15439.operator_not (SOURCE_FILE ("instruction-with.galgas", 407)).isValidAndTrue () ;
      if (enumerator_15480.hasCurrentObject () && bool_3) {
        while (enumerator_15480.hasCurrentObject () && bool_3) {
          const GALGAS_readAccessWithInstructionAST temp_4 = this ;
          var_found_15439 = GALGAS_bool (kIsEqual, enumerator_15480.current_mSearchMethodName (HERE).readProperty_string ().objectCompare (temp_4.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ())) ;
          enumerator_15480.gotoNextObject () ;
          if (enumerator_15480.hasCurrentObject ()) {
            bool_3 = var_found_15439.operator_not (SOURCE_FILE ("instruction-with.galgas", 407)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_found_15439.operator_not (SOURCE_FILE ("instruction-with.galgas", 410)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_readAccessWithInstructionAST temp_6 = this ;
          const GALGAS_readAccessWithInstructionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_location (), GALGAS_string ("there is no '").add_operation (temp_7.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 411)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 411)).add_operation (extensionGetter_definition (var_receiverType_15291, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 412)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 412)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 412)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 411)) ;
        }
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression_16215 ;
  const GALGAS_readAccessWithInstructionAST temp_9 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mKeyExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-with.galgas", 419)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_keyExpression_16215, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 416)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readAccessWithInstructionAST temp_11 = this ;
    test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_16215.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 427)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_readAccessWithInstructionAST temp_13 = this ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_16215.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)), fixItArray14  COMMA_SOURCE_FILE ("instruction-with.galgas", 428)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_10) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_16215.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 431)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_15) {
        const GALGAS_readAccessWithInstructionAST temp_16 = this ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_16215.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)).add_operation (GALGAS_string ("', it should be @lstring"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)), fixItArray17  COMMA_SOURCE_FILE ("instruction-with.galgas", 432)) ;
      }
    }
  }
  const GALGAS_readAccessWithInstructionAST temp_18 = this ;
  GALGAS_string var_objectArrayCppName_16856 = GALGAS_string ("objectArray_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 436)).getter_string (SOURCE_FILE ("instruction-with.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 436)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = extensionGetter_definition (var_receiverType_15291, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 438)).readProperty_mHandledOperatorFlags ().getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 438)).operator_not (SOURCE_FILE ("instruction-with.galgas", 438)).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_readAccessWithInstructionAST temp_20 = this ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mEndOfReceiverExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_15291, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 439)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 439)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 439)), fixItArray21  COMMA_SOURCE_FILE ("instruction-with.galgas", 439)) ;
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 442)) ;
  }
  GALGAS_localConstantList var_localConstantList_17346 = GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 444)) ;
  cEnumerator_typedPropertyList enumerator_17429 (extensionGetter_definition (var_receiverType_15291, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 445)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_17429.hasCurrentObject ()) {
    const GALGAS_readAccessWithInstructionAST temp_22 = this ;
    const GALGAS_readAccessWithInstructionAST temp_23 = this ;
    var_localConstantList_17346.addAssign_operation (enumerator_17429.current_mPropertyTypeEntry (HERE), GALGAS_lstring::class_func_new (temp_22.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_17429.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 448)), temp_23.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 448)), GALGAS_bool (true), var_objectArrayCppName_16856.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 450)).add_operation (enumerator_17429.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 450))  COMMA_SOURCE_FILE ("instruction-with.galgas", 446)) ;
    enumerator_17429.gotoNextObject () ;
  }
  const GALGAS_readAccessWithInstructionAST temp_24 = this ;
  const GALGAS_readAccessWithInstructionAST temp_25 = this ;
  var_localConstantList_17346.addAssign_operation (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 454)), GALGAS_lstring::class_func_new (temp_24.readProperty_mPrefix ().readProperty_string ().add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 455)), temp_25.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 455)), GALGAS_bool (true), var_objectArrayCppName_16856.add_operation (GALGAS_string ("->mPropertylkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 457))  COMMA_SOURCE_FILE ("instruction-with.galgas", 453)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_18456 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_26 = this ;
  const GALGAS_readAccessWithInstructionAST temp_27 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_17346, GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 464)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 465)), temp_26.readProperty_mDoBranchInstructions (), temp_27.readProperty_mEndOf_5F_do_5F_instructions (), ioArgument_ioVariableMap, var_do_5F_instructionList_18456, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 458)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_18907 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_28 = this ;
  const GALGAS_readAccessWithInstructionAST temp_29 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 477)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 478)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 479)), temp_28.readProperty_mElseBranchInstructions (), temp_29.readProperty_mEndOf_5F_else_5F_instructions (), ioArgument_ioVariableMap, var_else_5F_instructionList_18907, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 472)) ;
  }
  {
  const GALGAS_readAccessWithInstructionAST temp_30 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_30.readProperty_mEndOf_5F_else_5F_instructions (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 485)) ;
  }
  const GALGAS_readAccessWithInstructionAST temp_31 = this ;
  const GALGAS_readAccessWithInstructionAST temp_32 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::class_func_new (temp_31.readProperty_mInstructionLocation (), var_receiverExpression_15262, var_objectArrayCppName_16856, var_keyExpression_16215, temp_32.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), var_do_5F_instructionList_18456, var_else_5F_instructionList_18907  COMMA_SOURCE_FILE ("instruction-with.galgas", 487))  COMMA_SOURCE_FILE ("instruction-with.galgas", 487)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteAccessWithInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_readWriteAccessWithInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_keyExpression_20281 ;
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mKeyExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-with.galgas", 511)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_keyExpression_20281, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 508)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readWriteAccessWithInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_20281.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 519)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_readWriteAccessWithInstructionAST temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_20281.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 521)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 521)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 521)), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 520)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_20281.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 523)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_readWriteAccessWithInstructionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_20281.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 525)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 525)).add_operation (GALGAS_string ("', it should be @lstring"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 525)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 524)) ;
      }
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_9 = this ;
  GALGAS_string var_objectArrayCppName_20922 = GALGAS_string ("objectArray_").add_operation (temp_9.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 528)).getter_string (SOURCE_FILE ("instruction-with.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 528)) ;
  GALGAS_unifiedTypeMapEntry var_targetType_21078 ;
  GALGAS_string var_receiverVariableCppName_21103 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readWriteAccessWithInstructionAST temp_11 = this ;
    test_10 = temp_11.readProperty_mReceiverIsPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        GALGAS_unifiedTypeMapEntry var_selfType_21253 ;
        GALGAS_bool var_unused_0_21296 ;
        GALGAS_bool var_propertiesAreMutable_21346 ;
        const bool optionalResult21207 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_21253, var_unused_0_21296, var_propertiesAreMutable_21346) ;
        if (!optionalResult21207) {
          test_12 = kBoolFalse ;
        }
        if (kBoolTrue == test_12) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            const GALGAS_readWriteAccessWithInstructionAST temp_14 = this ;
            test_13 = GALGAS_bool (kIsEqual, temp_14.readProperty_mReceiverName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_13) {
              var_receiverVariableCppName_21103 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
              var_targetType_21078 = var_selfType_21253 ;
            }
          }
          if (kBoolFalse == test_13) {
            GALGAS_propertyMap var_propertyMap_21543 = extensionGetter_definition (var_selfType_21253, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 541)).readProperty_mPropertyMap () ;
            GALGAS_bool var_isConstant_21651 ;
            const GALGAS_readWriteAccessWithInstructionAST temp_15 = this ;
            GALGAS_AccessControl joker_21643 ; // Joker input parameter
            var_propertyMap_21543.method_searchKey (temp_15.readProperty_mReceiverName (), joker_21643, var_isConstant_21651, var_targetType_21078, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 542)) ;
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = var_isConstant_21651.boolEnum () ;
              if (kBoolTrue == test_16) {
                const GALGAS_readWriteAccessWithInstructionAST temp_17 = this ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray18  COMMA_SOURCE_FILE ("instruction-with.galgas", 544)) ;
              }
            }
            if (kBoolFalse == test_16) {
              enumGalgasBool test_19 = kBoolTrue ;
              if (kBoolTrue == test_19) {
                test_19 = var_propertiesAreMutable_21346.operator_not (SOURCE_FILE ("instruction-with.galgas", 545)).boolEnum () ;
                if (kBoolTrue == test_19) {
                  const GALGAS_readWriteAccessWithInstructionAST temp_20 = this ;
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (temp_20.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be modified in this context"), fixItArray21  COMMA_SOURCE_FILE ("instruction-with.galgas", 546)) ;
                }
              }
            }
            const GALGAS_readWriteAccessWithInstructionAST temp_22 = this ;
            var_receiverVariableCppName_21103 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 548)).add_operation (temp_22.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 549)) ;
          }
        }
      }
      if (kBoolFalse == test_12) {
        const GALGAS_readWriteAccessWithInstructionAST temp_23 = this ;
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_23.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("'self' cannot be used in this context"), fixItArray24  COMMA_SOURCE_FILE ("instruction-with.galgas", 552)) ;
        var_targetType_21078.drop () ; // Release error dropped variable
        var_receiverVariableCppName_21103.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_10) {
    {
    const GALGAS_readWriteAccessWithInstructionAST temp_25 = this ;
    GALGAS_string joker_22364 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_25.readProperty_mReceiverName (), var_targetType_21078, var_receiverVariableCppName_21103, joker_22364, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 555)) ;
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_26 = this ;
  cEnumerator_lstringlist enumerator_22386 (temp_26.readProperty_mFieldList (), kENUMERATION_UP) ;
  while (enumerator_22386.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_22423 = extensionGetter_definition (var_targetType_21078, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 563)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_22513 ;
    GALGAS_bool var_isConstant_22532 ;
    var_propertyMap_22423.method_searchKey (enumerator_22386.current_mValue (HERE), var_accessControl_22513, var_isConstant_22532, var_targetType_21078, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 564)) ;
    extensionMethod_checkSetAccess (var_accessControl_22513, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_22386.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 565)) ;
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = var_isConstant_22532.boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <C_FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (enumerator_22386.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray28  COMMA_SOURCE_FILE ("instruction-with.galgas", 570)) ;
      }
    }
    enumerator_22386.gotoNextObject () ;
  }
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    test_29 = extensionGetter_definition (var_targetType_21078, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 574)).readProperty_mHandledOperatorFlags ().getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 574)).operator_not (SOURCE_FILE ("instruction-with.galgas", 574)).boolEnum () ;
    if (kBoolTrue == test_29) {
      const GALGAS_readWriteAccessWithInstructionAST temp_30 = this ;
      TC_Array <C_FixItDescription> fixItArray31 ;
      inCompiler->emitSemanticError (temp_30.readProperty_mEndOfReceiverExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_targetType_21078, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 575)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 575)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 575)), fixItArray31  COMMA_SOURCE_FILE ("instruction-with.galgas", 575)) ;
    }
  }
  enumGalgasBool test_32 = kBoolTrue ;
  if (kBoolTrue == test_32) {
    const GALGAS_readWriteAccessWithInstructionAST temp_33 = this ;
    test_32 = GALGAS_bool (kIsNotEqual, temp_33.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_32) {
      GALGAS_bool var_found_23216 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_23257 (extensionGetter_definition (var_targetType_21078, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 580)).readProperty_mMapSearchMethodList (), kENUMERATION_UP) ;
      bool bool_34 = var_found_23216.operator_not (SOURCE_FILE ("instruction-with.galgas", 580)).isValidAndTrue () ;
      if (enumerator_23257.hasCurrentObject () && bool_34) {
        while (enumerator_23257.hasCurrentObject () && bool_34) {
          const GALGAS_readWriteAccessWithInstructionAST temp_35 = this ;
          var_found_23216 = GALGAS_bool (kIsEqual, enumerator_23257.current_mSearchMethodName (HERE).readProperty_string ().objectCompare (temp_35.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ())) ;
          enumerator_23257.gotoNextObject () ;
          if (enumerator_23257.hasCurrentObject ()) {
            bool_34 = var_found_23216.operator_not (SOURCE_FILE ("instruction-with.galgas", 580)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_36 = kBoolTrue ;
      if (kBoolTrue == test_36) {
        test_36 = var_found_23216.operator_not (SOURCE_FILE ("instruction-with.galgas", 583)).boolEnum () ;
        if (kBoolTrue == test_36) {
          const GALGAS_readWriteAccessWithInstructionAST temp_37 = this ;
          const GALGAS_readWriteAccessWithInstructionAST temp_38 = this ;
          TC_Array <C_FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_location (), GALGAS_string ("there is no '").add_operation (temp_38.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 584)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 584)).add_operation (extensionGetter_definition (var_targetType_21078, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 584)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 584)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 584)), fixItArray39  COMMA_SOURCE_FILE ("instruction-with.galgas", 584)) ;
        }
      }
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 588)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList_23793 = GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 590)) ;
  cEnumerator_typedPropertyList enumerator_23868 (extensionGetter_definition (var_targetType_21078, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 591)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_23868.hasCurrentObject ()) {
    const GALGAS_readWriteAccessWithInstructionAST temp_40 = this ;
    const GALGAS_readWriteAccessWithInstructionAST temp_41 = this ;
    var_localInitializedVariableList_23793.addAssign_operation (enumerator_23868.current_mPropertyTypeEntry (HERE), GALGAS_lstring::class_func_new (temp_40.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_23868.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 594)), temp_41.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 594)), var_objectArrayCppName_20922.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 595)).add_operation (enumerator_23868.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 595))  COMMA_SOURCE_FILE ("instruction-with.galgas", 592)) ;
    enumerator_23868.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_42 = GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 601)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_43 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_44 = this ;
  temp_42.addAssign_operation (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 598)), GALGAS_lstring::class_func_new (temp_43.readProperty_mPrefix ().readProperty_string ().add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 599)), temp_44.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 599)), GALGAS_bool (true), var_objectArrayCppName_20922.add_operation (GALGAS_string ("->mProperty_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 601))  COMMA_SOURCE_FILE ("instruction-with.galgas", 601)) ;
  GALGAS_localConstantList var_localConstantList_24177 = temp_42 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_24884 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_45 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_46 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_24177, GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 609)), var_localInitializedVariableList_23793, temp_45.readProperty_m_5F_do_5F_Instructions (), temp_46.readProperty_mEndOf_5F_do_5F_instructions (), ioArgument_ioVariableMap, var_do_5F_instructionList_24884, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 603)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_25293 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_47 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_48 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 622)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 623)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 624)), temp_47.readProperty_m_5F_else_5F_Instructions (), temp_48.readProperty_mEndOf_5F_else_5F_instructions (), ioArgument_ioVariableMap, var_else_5F_instructionList_25293, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 617)) ;
  }
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_49 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_49.readProperty_mEndOf_5F_else_5F_instructions (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 630)) ;
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_50 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_51 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_52 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::class_func_new (temp_50.readProperty_mInstructionLocation (), var_receiverVariableCppName_21103, var_targetType_21078, temp_51.readProperty_mFieldList (), var_objectArrayCppName_20922, var_keyExpression_20281, temp_52.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), var_do_5F_instructionList_24884, var_else_5F_instructionList_25293  COMMA_SOURCE_FILE ("instruction-with.galgas", 632))  COMMA_SOURCE_FILE ("instruction-with.galgas", 632)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readOnlyWithInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_readOnlyWithInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverVarCppName_27844 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName_27844, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 684)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_receiverType_27873 = temp_1.readProperty_mReceiverExpression ().readProperty_mResultType () ;
  GALGAS_string var_keyVarCppName_28111 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mKeyExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_28111, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 693)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const cMapElement_").add_operation (extensionGetter_identifierRepresentation (var_receiverType_27873, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 701)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 701)).add_operation (temp_3.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 702)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 702)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_27873, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 703)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 703)).add_operation (var_receiverVarCppName_27844, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 704)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 704)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 701)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_5 = this ;
    test_4 = GALGAS_bool (kIsEqual, temp_5.readProperty_mSearchMethodNameForErrorSignaling ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName_28111, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 706)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 706)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 706)) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_6 = this ;
    const GALGAS_readOnlyWithInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("performSearch (").add_operation (var_keyVarCppName_28111, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 708)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 708)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 709)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 709)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_27873, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 711)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 710)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 711)).add_operation (temp_6.readProperty_mSearchMethodNameForErrorSignaling (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 711)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 711)).add_operation (extensionGetter_commaSourceFile (temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 712)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 712)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 708)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 713)) COMMA_SOURCE_FILE ("instruction-with.galgas", 713)) ;
    }
  }
  const GALGAS_readOnlyWithInstructionForGeneration temp_8 = this ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_9 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr != ").add_operation (temp_8.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 715)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 715)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 715)).add_operation (temp_9.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 716)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 716)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_27873, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 717)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 717)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 715)) ;
  {
  const GALGAS_readOnlyWithInstructionForGeneration temp_10 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_10.readProperty_mDoBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 718)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_12 = this ;
    test_11 = GALGAS_bool (kIsStrictSup, temp_12.readProperty_mElseBranchInstructions ().getter_count (SOURCE_FILE ("instruction-with.galgas", 726)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 727)) ;
      {
      const GALGAS_readOnlyWithInstructionForGeneration temp_13 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_13.readProperty_mElseBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 728)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 737)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteWithInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_readWriteWithInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_readWriteWithInstructionForGeneration temp_0 = this ;
  GALGAS_string var_receiverCppName_30194 = temp_0.readProperty_mReceiverVariableCppName () ;
  const GALGAS_readWriteWithInstructionForGeneration temp_1 = this ;
  cEnumerator_lstringlist enumerator_30249 (temp_1.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_30249.hasCurrentObject ()) {
    var_receiverCppName_30194.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_30249.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 751)) ;
    enumerator_30249.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName_30561 ;
  const GALGAS_readWriteWithInstructionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mKeyExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_30561, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 754)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 762)) COMMA_SOURCE_FILE ("instruction-with.galgas", 762)) ;
  }
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_3 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mReceiverVariableCppName () COMMA_SOURCE_FILE ("instruction-with.galgas", 763)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_4 = this ;
  extensionMethod_addHeaderFileName (temp_4.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 764)) ;
  const GALGAS_readWriteWithInstructionForGeneration temp_5 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_6 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cMapElement_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 765)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 765)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 765)).add_operation (temp_6.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 766)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 766)).add_operation (extensionGetter_identifierRepresentation (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 766)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 766)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 766)).add_operation (var_receiverCppName_30194, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 767)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 767)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 765)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_readWriteWithInstructionForGeneration temp_9 = this ;
    test_8 = GALGAS_bool (kIsEqual, temp_9.readProperty_mSearchMethodNameForErrorSignaling ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 769)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 769)).add_operation (var_keyVarCppName_30561, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 769)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 769)) ;
    }
  }
  if (kBoolFalse == test_8) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 771)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 771)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 771)).add_operation (var_keyVarCppName_30561, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 771)) ;
    const GALGAS_readWriteWithInstructionForGeneration temp_10 = this ;
    const GALGAS_readWriteWithInstructionForGeneration temp_11 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", kSearchErrorMessage_").add_operation (extensionGetter_identifierRepresentation (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 772)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 772)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 772)).add_operation (temp_11.readProperty_mSearchMethodNameForErrorSignaling (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 772)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 772)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_12 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_13 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_14 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_15 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_12.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)).add_operation (GALGAS_string ("if (nullptr != "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)).add_operation (temp_13.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 775)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 775)).add_operation (GALGAS_string ("  macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 775)).add_operation (temp_14.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 776)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 776)).add_operation (extensionGetter_identifierRepresentation (temp_15.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 776)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 776)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 774)) ;
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_16 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_16.readProperty_mDoBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 777)) ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_readWriteWithInstructionForGeneration temp_18 = this ;
    test_17 = GALGAS_bool (kIsStrictSup, temp_18.readProperty_mElseBranchInstructions ().getter_count (SOURCE_FILE ("instruction-with.galgas", 785)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_17) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 786)) ;
      {
      const GALGAS_readWriteWithInstructionForGeneration temp_19 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_19.readProperty_mElseBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 787)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 796)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalCallInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                   const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                   GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_nonTerminalSymbolIndex_5407 ;
  const GALGAS_nonterminalCallInstruction temp_0 = this ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_5430 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_5407, joker_5430, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 117)) ;
  const GALGAS_nonterminalCallInstruction temp_1 = this ;
  const GALGAS_nonterminalCallInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::class_func_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_5407  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 118))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 118)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalCallInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

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
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap var_labelMap_6881 ;
  const GALGAS_nonterminalCallInstruction temp_0 = this ;
  constinArgument_inNonterminalMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_labelMap_6881, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 140)) ;
  GALGAS_formalParameterSignature var_signature_6925 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_nonterminalCallInstruction temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mLabelName ().readProperty_string ().objectCompare (GALGAS_string ("parse"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_signature_6925 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 143)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_nonterminalCallInstruction temp_3 = this ;
    GALGAS_formalParameterListForGeneration joker_7054 ; // Joker input parameter
    GALGAS_location joker_7068 ; // Joker input parameter
    var_labelMap_6881.method_searchKey (temp_3.readProperty_mLabelName (), joker_7054, var_signature_6925, joker_7068, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 145)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_7521 ;
  const GALGAS_nonterminalCallInstruction temp_4 = this ;
  const GALGAS_nonterminalCallInstruction temp_5 = this ;
  const GALGAS_nonterminalCallInstruction temp_6 = this ;
  extensionMethod_analyzeRoutineArguments (temp_4.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mNonterminalName (), GALGAS_string ("'<").add_operation (temp_6.readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 154)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 154)), var_signature_6925, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_7521, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 148)) ;
  const GALGAS_nonterminalCallInstruction temp_7 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_7.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 161)) ;
  const GALGAS_nonterminalCallInstruction temp_8 = this ;
  const GALGAS_nonterminalCallInstruction temp_9 = this ;
  const GALGAS_nonterminalCallInstruction temp_10 = this ;
  const GALGAS_nonterminalCallInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::class_func_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mNonterminalName ().readProperty_string (), temp_10.readProperty_mLabelName ().readProperty_string (), var_actualParameterListForGeneration_7521, temp_11.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ()  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 168))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 168)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_nonterminalInstructionForGeneration temp_0 = this ;
  const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mNonterminalName (), constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 204)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::class_func_new (SOURCE_FILE ("instruction-non-terminal.galgas", 205))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 200))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 200)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@nonterminalInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_nonterminalInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_nonterminalInstructionForGeneration var_si_9844 (dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_9844.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
      result_result = GALGAS_bool (kIsEqual, temp_1.readProperty_mNonterminalName ().objectCompare (var_si_9844.readProperty_mNonterminalName ())) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 218)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_nonterminalInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_9844.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_3.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)), fixItArray4  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_syntaxInstructionForGeneration var_si_10185 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_10185.ptr ()) {
        test_5 = kBoolFalse ;
      }
      if (kBoolTrue == test_5) {
        const GALGAS_nonterminalInstructionForGeneration temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_10185.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_6.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 224)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 224)), fixItArray7  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 223)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_nonterminalInstructionForGeneration temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 227)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 230)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_nonterminalInstructionForGeneration temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 231)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_parameterCppNameList_11139 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 248)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_11183 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 249)) ;
  GALGAS_stringlist var_inputVariableList_11235 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 250)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_0 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_11277 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_11277.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_11570 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_11277.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_11183, var_inputVariableList_11235, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_11570, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 252)) ;
    var_parameterCppNameList_11139.addAssign_operation (var_parameterCppName_11570  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 261)) ;
    enumerator_11277.gotoNextObject () ;
  }
  const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
  GALGAS_string var_sdtResultVarName_11677 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 264)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 264)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("String ").add_operation (var_sdtResultVarName_11677, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 266)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 266)) ;
    }
  }
  const GALGAS_nonterminalInstructionForGeneration temp_3 = this ;
  const GALGAS_nonterminalInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("nt_").add_operation (temp_3.readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)).add_operation (temp_4.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)) ;
  cEnumerator_stringlist enumerator_12042 (var_parameterCppNameList_11139, kENUMERATION_UP) ;
  while (enumerator_12042.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12042.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 270)) ;
    enumerator_12042.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_sdtResultVarName_11677.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 273)) ;
    }
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 275)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 275)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 276)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 276)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_6 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_6.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_11677, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 277)) ;
  cEnumerator_stringlist enumerator_12579 (var_jokerParametersToReleaseList_11183, kENUMERATION_UP) ;
  while (enumerator_12579.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12579.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 285)) ;
    enumerator_12579.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                          GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                          GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_addedNonTerminalIndex_4755 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 109)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList_4841 = GALGAS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 111)) ;
  {
  const GALGAS_repeatInstruction temp_0 = this ;
  routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_4841, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 112)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList_5167 = GALGAS_branchListForGrammarAnalysis::class_func_listWithValue (var_repeatedInstructionList_4841  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 119)) ;
  const GALGAS_repeatInstruction temp_1 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_5287 (temp_1.readProperty_mRepeatBranchList (), kENUMERATION_UP) ;
  while (enumerator_5287.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_5327 = GALGAS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 122)) ;
    {
    routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_5287.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_5327, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 123)) ;
    }
    var_repeatBranchList_5167.addAssign_operation (var_syntaxInstructionList_5327  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 130)) ;
    enumerator_5287.gotoNextObject () ;
  }
  const GALGAS_repeatInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::class_func_new (temp_2.readProperty_mInstructionLocation (), var_repeatBranchList_5167, var_addedNonTerminalIndex_4755  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 133))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 133)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

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
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_choiceIndex_6684 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 162)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_7234 ;
  {
  const GALGAS_repeatInstruction temp_0 = this ;
  const GALGAS_repeatInstruction temp_1 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_0.readProperty_mRepeatedInstructionList (), temp_1.readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_7234, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 164)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7333 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 182)) ;
  const GALGAS_repeatInstruction temp_2 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_7411 (temp_2.readProperty_mRepeatBranchList (), kENUMERATION_UP) ;
  while (enumerator_7411.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_7863 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_7411.current_mSyntaxInstructionList (HERE), enumerator_7411.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_7863, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 184)) ;
    }
    var_listOfSemanticInstructionListForGeneration_7333.addAssign_operation (var_instructionList_7863, enumerator_7411.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 201)) ;
    enumerator_7411.gotoNextObject () ;
  }
  {
  const GALGAS_repeatInstruction temp_3 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_repeat_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 204)) ;
  }
  const GALGAS_repeatInstruction temp_4 = this ;
  const GALGAS_repeatInstruction temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::class_func_new (temp_4.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_6684, var_repeated_5F_instructionList_7234, temp_5.readProperty_mEndOf_5F_repeat_5F_instruction (), var_listOfSemanticInstructionListForGeneration_7333  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 206))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 206)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_repeatInstructionForGeneration temp_0 = this ;
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_9331 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_m_5F_repeated_5F_instructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 236)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_9442 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 237)) ;
  const GALGAS_repeatInstructionForGeneration temp_1 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9558 (temp_1.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_9558.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_9442.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_9558.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 240)), enumerator_9558.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 239)) ;
    enumerator_9558.gotoNextObject () ;
  }
  const GALGAS_repeatInstructionForGeneration temp_2 = this ;
  const GALGAS_repeatInstructionForGeneration temp_3 = this ;
  const GALGAS_repeatInstructionForGeneration temp_4 = this ;
  const GALGAS_repeatInstructionForGeneration temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::class_func_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mChoiceIndex (), var_repeated_5F_instructionList_9331, temp_5.readProperty_mEndOfRepeatedInstructions (), var_listOfSemanticInstructionListForGeneration_9442  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 244))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 244)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@repeatInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_repeatInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_repeatInstructionForGeneration var_si_10467 (dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_10467.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_repeatInstructionForGeneration temp_1 = this ;
      result_result = function_compareSyntaxSignature (temp_1.readProperty_m_5F_repeated_5F_instructionList (), var_si_10467.readProperty_m_5F_repeated_5F_instructionList (), var_si_10467.readProperty_mEndOfRepeatedInstructions (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 263)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_repeatInstructionForGeneration temp_3 = this ;
        test_2 = result_result.operator_and (GALGAS_bool (kIsNotEqual, temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 264)).objectCompare (var_si_10467.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 264)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas", 264)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_repeatInstructionForGeneration temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_si_10467.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (temp_4.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 267)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 266)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 267)).add_operation (var_si_10467.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 269)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)), fixItArray5  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 265)) ;
          result_result = GALGAS_bool (false) ;
        }
      }
      const GALGAS_repeatInstructionForGeneration temp_6 = this ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11258 (temp_6.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11337 (var_si_10467.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      bool bool_7 = result_result.isValidAndTrue () ;
      if (enumerator_11258.hasCurrentObject () && enumerator_11337.hasCurrentObject () && bool_7) {
        while (enumerator_11258.hasCurrentObject () && enumerator_11337.hasCurrentObject () && bool_7) {
          result_result = function_compareSyntaxSignature (enumerator_11258.current_mInstructionList (HERE), enumerator_11337.current_mInstructionList (HERE), enumerator_11337.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 273)) ;
          enumerator_11258.gotoNextObject () ;
          enumerator_11337.gotoNextObject () ;
          if (enumerator_11258.hasCurrentObject () && enumerator_11337.hasCurrentObject ()) {
            bool_7 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_syntaxInstructionForGeneration var_si_11564 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_11564.ptr ()) {
        test_8 = kBoolFalse ;
      }
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_si_11564.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray9  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 277)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_8) {
      const GALGAS_repeatInstructionForGeneration temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray11  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 281)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = result_result.operator_not (SOURCE_FILE ("instruction-repeat.galgas", 284)).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_repeatInstructionForGeneration temp_13 = this ;
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 285)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_repeatFlagCppName_12515 = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 301)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 302)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_repeatFlagCppName_12515, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 303)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 303)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_repeatFlagCppName_12515, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 304)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 304)) ;
  {
  const GALGAS_repeatInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_m_5F_repeated_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 305)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 313)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_repeatInstructionForGeneration temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 314)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_repeatInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (select_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 315)) ;
      const GALGAS_repeatInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (temp_4.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)).add_operation (GALGAS_string (") == 2) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)) ;
      const GALGAS_repeatInstructionForGeneration temp_5 = this ;
      GALGAS_semanticInstructionListForGeneration var_instructionList_13279 = temp_5.readProperty_mListOfSemanticInstructionListForGeneration ().getter_mInstructionListAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 317)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, var_instructionList_13279, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 318)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 326)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_12515, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 327)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 327)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 328)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_repeatInstructionForGeneration temp_6 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (temp_6.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 330)) ;
    const GALGAS_repeatInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (temp_7.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)) ;
    const GALGAS_repeatInstructionForGeneration temp_8 = this ;
    cEnumerator_listOfSemanticInstructionListForGeneration enumerator_13950 (temp_8.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
    GALGAS_uint index_13928 ((uint32_t) 0) ;
    while (enumerator_13950.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_13928.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_13950.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 334)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 342)) ;
      enumerator_13950.gotoNextObject () ;
      index_13928.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 332)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 344)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_12515, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 345)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 345)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 346)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 347)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 349)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 350)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                          GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                          GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_addedNonTerminalIndex_4426 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 103)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList_4512 = GALGAS_branchListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("instruction-select.galgas", 105)) ;
  const GALGAS_selectInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_4594 (temp_0.readProperty_mSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_4594.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_4634 = GALGAS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("instruction-select.galgas", 107)) ;
    {
    routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_4594.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_4634, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 108)) ;
    }
    var_selectBranchList_4512.addAssign_operation (var_syntaxInstructionList_4634  COMMA_SOURCE_FILE ("instruction-select.galgas", 115)) ;
    enumerator_4594.gotoNextObject () ;
  }
  const GALGAS_selectInstruction temp_1 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::class_func_new (temp_1.readProperty_mInstructionLocation (), var_selectBranchList_4512, var_addedNonTerminalIndex_4426  COMMA_SOURCE_FILE ("instruction-select.galgas", 118))  COMMA_SOURCE_FILE ("instruction-select.galgas", 118)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

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
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_choiceIndex_5992 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 144)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 146)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_6140 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-select.galgas", 148)) ;
  const GALGAS_selectInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_6262 (temp_0.readProperty_mSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_6262.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_6714 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_6262.current_mSyntaxInstructionList (HERE), enumerator_6262.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_6714, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 150)) ;
    }
    var_listOfSemanticInstructionListForGeneration_6140.addAssign_operation (var_instructionList_6714, enumerator_6262.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 167)) ;
    enumerator_6262.gotoNextObject () ;
  }
  {
  const GALGAS_selectInstruction temp_1 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_1.readProperty_mEndOf_5F_select_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 170)) ;
  }
  const GALGAS_selectInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::class_func_new (temp_2.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_5992, var_listOfSemanticInstructionListForGeneration_6140  COMMA_SOURCE_FILE ("instruction-select.galgas", 171))  COMMA_SOURCE_FILE ("instruction-select.galgas", 171)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7978 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-select.galgas", 196)) ;
  const GALGAS_selectInstructionForGeneration temp_0 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_8094 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_8094.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_7978.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_8094.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 199)), enumerator_8094.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 198)) ;
    enumerator_8094.gotoNextObject () ;
  }
  const GALGAS_selectInstructionForGeneration temp_1 = this ;
  const GALGAS_selectInstructionForGeneration temp_2 = this ;
  const GALGAS_selectInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::class_func_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mSyntaxComponentName (), temp_3.readProperty_mChoiceIndex (), var_listOfSemanticInstructionListForGeneration_7978  COMMA_SOURCE_FILE ("instruction-select.galgas", 202))  COMMA_SOURCE_FILE ("instruction-select.galgas", 202)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_selectInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_selectInstructionForGeneration var_si_8933 (dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_8933.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bool (true) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        const GALGAS_selectInstructionForGeneration temp_2 = this ;
        test_1 = result_result.operator_and (GALGAS_bool (kIsNotEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 220)).objectCompare (var_si_8933.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 220)))) COMMA_SOURCE_FILE ("instruction-select.galgas", 220)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selectInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_8933.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 223)).getter_string (SOURCE_FILE ("instruction-select.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 222)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 223)).add_operation (var_si_8933.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 225)).getter_string (SOURCE_FILE ("instruction-select.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 224)), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas", 221)) ;
          result_result = GALGAS_bool (false) ;
        }
      }
      const GALGAS_selectInstructionForGeneration temp_5 = this ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9533 (temp_5.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9620 (var_si_8933.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      bool bool_6 = result_result.isValidAndTrue () ;
      if (enumerator_9533.hasCurrentObject () && enumerator_9620.hasCurrentObject () && bool_6) {
        while (enumerator_9533.hasCurrentObject () && enumerator_9620.hasCurrentObject () && bool_6) {
          result_result = function_compareSyntaxSignature (enumerator_9533.current_mInstructionList (HERE), enumerator_9620.current_mInstructionList (HERE), enumerator_9620.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 230)) ;
          enumerator_9533.gotoNextObject () ;
          enumerator_9620.gotoNextObject () ;
          if (enumerator_9533.hasCurrentObject () && enumerator_9620.hasCurrentObject ()) {
            bool_6 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      GALGAS_syntaxInstructionForGeneration var_si_9847 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_9847.ptr ()) {
        test_7 = kBoolFalse ;
      }
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_si_9847.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray8  COMMA_SOURCE_FILE ("instruction-select.galgas", 233)) ;
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


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 256)) COMMA_SOURCE_FILE ("instruction-select.galgas", 256)) ;
  }
  const GALGAS_selectInstructionForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 257)) ;
  const GALGAS_selectInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_1.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 258)) ;
  const GALGAS_selectInstructionForGeneration temp_2 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11130 (temp_2.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  GALGAS_uint index_11108 ((uint32_t) 0) ;
  while (enumerator_11130.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_11108.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)).getter_string (SOURCE_FILE ("instruction-select.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 260)) ;
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_11130.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 261)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 269)) ;
    enumerator_11130.gotoNextObject () ;
    index_11108.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 259)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 271)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 272)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 273)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstructionAST transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                    const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                    GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                    GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_terminalSymbolIndex_7167 ;
  const GALGAS_terminalCheckInstructionAST temp_0 = this ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_7191 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (temp_0.readProperty_mTerminalName ().readProperty_string ()) ;
  if (nullptr != objectArray_7191) {
      macroValidSharedObject (objectArray_7191, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex_7167 = objectArray_7191->mProperty_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex_7167 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 158)) ;
    {
    const GALGAS_terminalCheckInstructionAST temp_1 = this ;
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (temp_1.readProperty_mTerminalName (), var_terminalSymbolIndex_7167, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 159)) ;
    }
  }
  const GALGAS_terminalCheckInstructionAST temp_2 = this ;
  const GALGAS_terminalCheckInstructionAST temp_3 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::class_func_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mTerminalName (), var_terminalSymbolIndex_7167  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 161))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 161)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstructionAST analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::method_analyzeSyntaxInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
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
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList var_sentAttributeList_8472 ;
  const GALGAS_terminalCheckInstructionAST temp_0 = this ;
  constinArgument_inTerminalMap.method_searchKey (temp_0.readProperty_mTerminalName (), var_sentAttributeList_8472, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 184)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_terminalCheckInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 186)).objectCompare (var_sentAttributeList_8472.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 186)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_terminalCheckInstructionAST temp_3 = this ;
      const GALGAS_terminalCheckInstructionAST temp_4 = this ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_sentAttributeList_8472.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 189)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      const GALGAS_terminalCheckInstructionAST temp_7 = this ;
      const GALGAS_terminalCheckInstructionAST temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, temp_8.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 192)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTerminalName ().readProperty_location (), GALGAS_string ("naming the '$").add_operation (temp_4.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (var_sentAttributeList_8472.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 188)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 189)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 189)).add_operation (temp_7.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 191)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 190)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 191)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 191)), fixItArray11  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 187)) ;
    }
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList_9015 = GALGAS_terminalCheckAssignementList::class_func_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 195)) ;
  const GALGAS_terminalCheckInstructionAST temp_12 = this ;
  cEnumerator_actualInputParameterListAST enumerator_9104 (temp_12.readProperty_mActualInputParameterList (), kENUMERATION_UP) ;
  cEnumerator_lexicalSentValueList enumerator_9202 (var_sentAttributeList_8472, kENUMERATION_UP) ;
  while (enumerator_9104.hasCurrentObject () && enumerator_9202.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((cPtr_abstractInputParameter *) enumerator_9104.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_9202.current_mLexicalType (HERE), enumerator_9202.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList_9015, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 197)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsNotEqual, enumerator_9202.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_9104.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_string temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_9202.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_15) {
          temp_14 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_9104.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_9202.current_mLexicalFormalSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)), fixItArray16  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)) ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticWarning (enumerator_9202.current_mLexicalFormalSelector (HERE).readProperty_location (), GALGAS_string ("the formal selector is declared here"), fixItArray17  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 207)) ;
      }
    }
    enumerator_9104.gotoNextObject () ;
    enumerator_9202.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionAST temp_18 = this ;
  cEnumerator__32_lstringlist enumerator_9808 (temp_18.readProperty_mIndexingKeyList (), kENUMERATION_UP) ;
  while (enumerator_9808.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_9808.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-terminal.galgas", 212)).operator_not (SOURCE_FILE ("instruction-terminal.galgas", 212)).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        appendFixItActions (fixItArray20, kFixItReplace, constinArgument_inIndexNameSet) ;
        inCompiler->emitSemanticError (enumerator_9808.current_mValue_30_ (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9808.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)), fixItArray20  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)) ;
      }
    }
    enumerator_9808.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionAST temp_21 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_21.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 217)) ;
  const GALGAS_terminalCheckInstructionAST temp_22 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_22.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 223)) ;
  const GALGAS_terminalCheckInstructionAST temp_23 = this ;
  const GALGAS_terminalCheckInstructionAST temp_24 = this ;
  const GALGAS_terminalCheckInstructionAST temp_25 = this ;
  const GALGAS_terminalCheckInstructionAST temp_26 = this ;
  const GALGAS_terminalCheckInstructionAST temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::class_func_new (temp_23.readProperty_mInstructionLocation (), temp_24.readProperty_mTerminalName (), constinArgument_inLexiqueName, var_terminalCheckAssignementList_9015, temp_25.readProperty_mIndexingKeyList (), temp_26.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (), temp_27.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ()  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 230))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 230)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GALGAS_rowList & ioArgument_ioRowList,
                                                                                      const GALGAS_uint constinArgument_inRow,
                                                                                      GALGAS_uint & ioArgument_ioColumn,
                                                                                      GALGAS_string & ioArgument_ioCurrentNode,
                                                                                      GALGAS_string & ioArgument_ioArrowShape,
                                                                                      GALGAS_string & ioArgument_ioArrows,
                                                                                      GALGAS_uint & /* ioArgument_ioMaxUsedRowIndex */,
                                                                                      const GALGAS_bool /* constinArgument_inDebug */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_nodeName_12252 ;
  {
  const GALGAS_terminalInstructionForGrammarAnalysis temp_0 = this ;
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[terminal] {").add_operation (function_escapeForTex (temp_0.readProperty_mTerminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_12252, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 263)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (var_nodeName_12252, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)) ;
  ioArgument_ioCurrentNode = var_nodeName_12252 ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 272)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@terminalInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_terminalInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string /* constinArgument_inPosfix */,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_terminalCheckInstructionForGeneration temp_0 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_1 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_2 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTerminalName (), temp_2.readProperty_mLexiqueIdentifier (), GALGAS_terminalCheckAssignementList::class_func_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 310)), temp_3.readProperty_mIndexingKeyList (), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::class_func_new (SOURCE_FILE ("instruction-terminal.galgas", 312)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::class_func_new (SOURCE_FILE ("instruction-terminal.galgas", 313))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 306))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 306)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@terminalCheckInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_terminalCheckInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_terminalCheckInstructionForGeneration var_si_14657 (dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_14657.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_terminalCheckInstructionForGeneration temp_1 = this ;
      result_result = GALGAS_bool (kIsEqual, temp_1.readProperty_mTerminalName ().readProperty_string ().objectCompare (var_si_14657.readProperty_mTerminalName ().readProperty_string ())) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 325)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_14657.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 327)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 327)), fixItArray4  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 326)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_syntaxInstructionForGeneration var_si_14997 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_14997.ptr ()) {
        test_5 = kBoolFalse ;
      }
      if (kBoolTrue == test_5) {
        const GALGAS_terminalCheckInstructionForGeneration temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_14997.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_6.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 331)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 331)), fixItArray7  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 330)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_terminalCheckInstructionForGeneration temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 334)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 337)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_terminalCheckInstructionForGeneration temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 338)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_generateInstruction (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_terminalCheckInstructionForGeneration temp_0 = this ;
  cEnumerator_terminalCheckAssignementList enumerator_16001 (temp_0.readProperty_mTerminalCheckAssignementList (), kENUMERATION_UP) ;
  while (enumerator_16001.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_16001.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_16001.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 356)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 356)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16001.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16001.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 360)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" () ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 361)) ;
    enumerator_16001.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionForGeneration temp_2 = this ;
  cEnumerator__32_lstringlist enumerator_16440 (temp_2.readProperty_mIndexingKeyList (), kENUMERATION_UP) ;
  while (enumerator_16440.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 365)) ;
    const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("->enterIndexing (Lexique_").add_operation (temp_3.readProperty_mLexiqueIdentifier (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16440.current_mValue_30_ (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 367)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_16440.current_mValue_31_ (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-terminal.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 368)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 368)) ;
    enumerator_16440.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionForGeneration temp_4 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_4.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->separatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 371)) ;
  const GALGAS_terminalCheckInstructionForGeneration temp_5 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_5.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 377)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 384)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 384)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 385)).add_operation (GALGAS_string ("->acceptTerminal (Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 385)) ;
  const GALGAS_terminalCheckInstructionForGeneration temp_6 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_6.readProperty_mLexiqueIdentifier ().add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 386)).add_operation (temp_7.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 386)) ;
  const GALGAS_terminalCheckInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 387)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 387)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                             GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                             GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_parseLoopInstruction temp_0 = this ;
  routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mDoInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 111)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

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
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_variant_5F_expression_6122 ;
  const GALGAS_parseLoopInstruction temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-parse-loop.galgas", 142)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variant_5F_expression_6122, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 139)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression_6122.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_parseLoopInstruction temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfVariantExpression (), GALGAS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_6122.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 150)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 150)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 150)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 151)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 151)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 151)), fixItArray3  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 149)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression_6779 ;
  const GALGAS_parseLoopInstruction temp_4 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-parse-loop.galgas", 157)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_while_5F_expression_6779, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 154)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_while_5F_expression_6779.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_parseLoopInstruction temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mEndOfWhileExpression (), GALGAS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_6122.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 165)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 165)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 165)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)), fixItArray7  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 164)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 170)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList_7635 ;
  {
  const GALGAS_parseLoopInstruction temp_8 = this ;
  const GALGAS_parseLoopInstruction temp_9 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_8.readProperty_mDoInstructionList (), temp_9.readProperty_mEndOfInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_7635, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 172)) ;
  }
  {
  const GALGAS_parseLoopInstruction temp_10 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_10.readProperty_mEndOfInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 190)) ;
  }
  const GALGAS_parseLoopInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::class_func_new (temp_11.readProperty_mInstructionLocation (), var_variant_5F_expression_6122, var_while_5F_expression_6779, var_instructionList_7635  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192))  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_parseLoopInstructionForGeneration temp_0 = this ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 217)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 231)) COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 231)) ;
  }
  GALGAS_string var_variantVarCppName_9639 ;
  const GALGAS_parseLoopInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName_9639, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 233)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantVarCppName_9639, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 236)) ;
  }
  GALGAS_string var_variantVar_9800 = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 238)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_9800, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)).add_operation (var_variantVarCppName_9639, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)) ;
  GALGAS_string var_loopVar_10012 = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 241)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 242)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_10012, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_10012, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 245)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_10012.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)) ;
  GALGAS_string var_whileVarCppName_10430 ;
  const GALGAS_parseLoopInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName_10430, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 247)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_whileVarCppName_10430, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 249)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_10012.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 250)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_variantVar_9800.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 251)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 252)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 252)) ;
  {
  const GALGAS_parseLoopInstructionForGeneration temp_2 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_2.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 253)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 262)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 263)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 264)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 265)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 266)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 267)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("//--- 'parse'\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 269)) ;
  {
  const GALGAS_parseLoopInstructionForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), temp_3.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 272)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 270)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 278)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 278)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseRewindInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                               const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                               GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                               GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList var_syntaxInstructionList_4452 ;
  const GALGAS_parseRewindInstruction temp_0 = this ;
  GALGAS_location joker_4474 ; // Joker input parameter
  temp_0.readProperty_mParseRewindBranchList ().method_first (var_syntaxInstructionList_4452, joker_4474, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 105)) ;
  {
  routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (var_syntaxInstructionList_4452, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 107)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseRewindInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
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
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_5565 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 136)) ;
  GALGAS_uint var_referenceSelectMethodCount_5669 = ioArgument_ioSelectMethodCount ;
  const GALGAS_parseRewindInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_5748 (temp_0.readProperty_mParseRewindBranchList (), kENUMERATION_UP) ;
  while (enumerator_5748.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount_5669 ;
    GALGAS_semanticInstructionListForGeneration var_instructionList_5864 = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 140)) ;
    cEnumerator_syntaxInstructionList enumerator_5932 (enumerator_5748.current_mSyntaxInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5932.hasCurrentObject ()) {
      callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_5932.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList_5864, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 142)) ;
      enumerator_5932.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration_5565.addAssign_operation (var_instructionList_5864, enumerator_5748.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 158)) ;
    enumerator_5748.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches_6569 = var_listOfSemanticInstructionListForGeneration_5565 ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_6671 ;
  {
  GALGAS_location joker_6687 ; // Joker input parameter
  var_tempListOfBranches_6569.setter_popFirst (var_instructionList_6671, joker_6687, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 162)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature_6735 = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList_6671, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 163)) ;
  GALGAS_bool var_ok_6829 = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_6863 (var_tempListOfBranches_6569, kENUMERATION_UP) ;
  bool bool_1 = var_ok_6829.isValidAndTrue () ;
  if (enumerator_6863.hasCurrentObject () && bool_1) {
    while (enumerator_6863.hasCurrentObject () && bool_1) {
      var_ok_6829 = function_compareSyntaxSignature (var_referenceSignature_6735, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_6863.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 168)), enumerator_6863.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 166)) ;
      enumerator_6863.gotoNextObject () ;
      if (enumerator_6863.hasCurrentObject ()) {
        bool_1 = var_ok_6829.isValidAndTrue () ;
      }
    }
  }
  const GALGAS_parseRewindInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::class_func_new (temp_2.readProperty_mInstructionLocation (), var_listOfSemanticInstructionListForGeneration_5565  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 173))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 173)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseRewindInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration var_instructionList_8143 ;
  const GALGAS_parseRewindInstructionForGeneration temp_0 = this ;
  GALGAS_location joker_8159 ; // Joker input parameter
  temp_0.readProperty_mListOfSemanticInstructionListForGeneration ().method_first (var_instructionList_8143, joker_8159, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 195)) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList_8143, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 196)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseRewindInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 210)) COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 210)) ;
  }
  GALGAS_string var_parsingContextVar_8824 = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-rewind.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 211)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 212)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar_8824, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)) ;
  const GALGAS_parseRewindInstructionForGeneration temp_0 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9078 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_9078.hasCurrentObject ()) {
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_9078.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 216)) ;
    }
    if (enumerator_9078.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)).add_operation (var_parsingContextVar_8824, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)) ;
    }
    enumerator_9078.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseWhenInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                             GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                             GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_parseWhenInstruction temp_0 = this ;
  routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mElseInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 181)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseWhenInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
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
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_when_5F_expression_8870 ;
  const GALGAS_parseWhenInstruction temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-parse-when.galgas", 212)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_when_5F_expression_8870, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 209)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 219)) ;
  }
  GALGAS_uint var_localSelectMethodCount_8985 = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration_9417 ;
  {
  const GALGAS_parseWhenInstruction temp_1 = this ;
  const GALGAS_parseWhenInstruction temp_2 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_1.readProperty_mWhenInstructionList (), temp_2.readProperty_mEndOfWhenInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount_8985, var_when_5F_instructionListForGeneration_9417, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 222)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration_9858 ;
  {
  const GALGAS_parseWhenInstruction temp_3 = this ;
  const GALGAS_parseWhenInstruction temp_4 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_3.readProperty_mElseInstructionList (), temp_4.readProperty_mEndOfElseInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration_9858, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 240)) ;
  }
  {
  const GALGAS_parseWhenInstruction temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOfElseInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 258)) ;
  }
  const GALGAS_parseWhenInstruction temp_6 = this ;
  GALGAS_bool var_ok_10017 = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration_9417, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 261)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration_9858, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 262)), temp_6.readProperty_mEndOfElseInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 260)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_ok_10017.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_parseWhenInstruction temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::class_func_new (temp_8.readProperty_mInstructionLocation (), var_when_5F_expression_8870, var_when_5F_instructionListForGeneration_9417, var_else_5F_instructionListForGeneration_9858  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 267))  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 267)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseWhenInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_parseWhenInstructionForGeneration temp_0 = this ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 292)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseWhenInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceVar_12147 ;
  const GALGAS_parseWhenInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mWhenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_12147, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 306)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_12147, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 307)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 307)) ;
  {
  const GALGAS_parseWhenInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 308)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 316)) ;
  {
  const GALGAS_parseWhenInstructionForGeneration temp_2 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_2.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 317)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 325)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxSendInstructionAST transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionAST::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                 const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                 GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                 GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxSendInstructionAST analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionAST::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                     const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                     const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                     const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                     const GALGAS_string /* constinArgument_inComponentName */,
                                                                     const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("instruction-syntax-send.galgas", 92)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_syntaxSendInstructionAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 93)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_4966 ;
  const GALGAS_syntaxSendInstructionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-syntax-send.galgas", 100)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4966, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 97)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_expression_4966.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_syntaxSendInstructionAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("'send' expresion should be an @string expression"), fixItArray6  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 108)) ;
    }
  }
  const GALGAS_syntaxSendInstructionAST temp_7 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::class_func_new (temp_7.readProperty_mInstructionLocation (), var_expression_4966  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 111))  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 111)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxSendInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceVar_6482 ;
  const GALGAS_syntaxSendInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_6482, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 135)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 143)) COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 143)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_6482, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".appendString (").add_operation (var_sourceVar_6482, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)).add_operation (GALGAS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 147)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxSignatureOfInstructionList'
//
//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration function_syntaxSignatureOfInstructionList (const GALGAS_string & constinArgument_inPosfix,
                                                                                       const GALGAS_semanticInstructionListForGeneration & constinArgument_inInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration result_result ; // Returned variable
  result_result = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 41)) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_2006 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_2006.hasCurrentObject ()) {
    callExtensionMethod_appendSyntaxSignature ((cPtr_semanticInstructionForGeneration *) enumerator_2006.current_mInstruction (HERE).ptr (), constinArgument_inPosfix, result_result, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 43)) ;
    enumerator_2006.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_syntaxSignatureOfInstructionList [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_syntaxSignatureOfInstructionList (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxSignatureOfInstructionList ("syntaxSignatureOfInstructionList",
                                                                                  functionWithGenericHeader_syntaxSignatureOfInstructionList,
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
                                                                                  2,
                                                                                  functionArgs_syntaxSignatureOfInstructionList) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compareSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool function_compareSyntaxSignature (const GALGAS_semanticInstructionListForGeneration & constinArgument_inReferenceSignature,
                                             const GALGAS_semanticInstructionListForGeneration & constinArgument_inTestedSignature,
                                             const GALGAS_location & constinArgument_inErrorLocation,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  result_outOk = GALGAS_bool (true) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_2881 (constinArgument_inReferenceSignature, kENUMERATION_UP) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_2925 (constinArgument_inTestedSignature, kENUMERATION_UP) ;
  bool bool_0 = result_outOk.isValidAndTrue () ;
  if (enumerator_2881.hasCurrentObject () && enumerator_2925.hasCurrentObject () && bool_0) {
    while (enumerator_2881.hasCurrentObject () && enumerator_2925.hasCurrentObject () && bool_0) {
      result_outOk = callExtensionGetter_compareInstructionSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_2881.current_mInstruction (HERE).ptr (), enumerator_2925.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 70)) ;
      enumerator_2881.gotoNextObject () ;
      enumerator_2925.gotoNextObject () ;
      if (enumerator_2881.hasCurrentObject () && enumerator_2925.hasCurrentObject ()) {
        bool_0 = result_outOk.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = result_outOk.operator_and (GALGAS_bool (kIsStrictInf, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 72)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 72)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 72)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_semanticInstructionForGeneration var_instruction_3190 = constinArgument_inTestedSignature.getter_mInstructionAtIndex (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 73)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_syntaxInstructionForGeneration var_si_3285 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3190.ptr ())) ;
        if (nullptr == var_si_3285.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_si_3285.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error, exceeding instruction; this branch has more syntax instructions than reference branch"), fixItArray3  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 75)) ;
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 78)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = result_outOk.operator_and (GALGAS_bool (kIsStrictSup, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 80)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 80)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 80)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("syntax signature error, missing instruction; this branch has less syntax instructions than reference branch"), fixItArray6  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 81)) ;
        GALGAS_semanticInstructionForGeneration var_instruction_3824 = constinArgument_inReferenceSignature.getter_mInstructionAtIndex (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 83)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          GALGAS_syntaxInstructionForGeneration var_si_3919 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3824.ptr ())) ;
          if (nullptr == var_si_3919.ptr ()) {
            test_7 = kBoolFalse ;
          }
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (var_si_3919.readProperty_mInstructionLocation (), GALGAS_string ("this is the syntax instruction in reference branch that corresponds to the first missing instruction"), fixItArray8  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 87)) ;
          }
        }
        if (kBoolFalse == test_7) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 90)) ;
        }
      }
    }
  }
//---
  return result_outOk ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_compareSyntaxSignature [4] = {
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_compareSyntaxSignature (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compareSyntaxSignature ("compareSyntaxSignature",
                                                                        functionWithGenericHeader_compareSyntaxSignature,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        3,
                                                                        functionArgs_compareSyntaxSignature) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'groupSyntaxComponentsGalgas3??&'
//
//--------------------------------------------------------------------------------------------------

void routine_groupSyntaxComponentsGalgas_33__3F__3F__26_ (const GALGAS_galgas_33_SyntaxComponentListAST constinArgument_inAllSyntaxComponents,
                                                          const GALGAS_syntaxExtensions constinArgument_inSyntaxExtensions,
                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationList,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_componentNameSet_1595 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("syntaxCompilation.galgas", 31)) ;
  cEnumerator_galgas_33_SyntaxComponentListAST enumerator_1636 (constinArgument_inAllSyntaxComponents, kENUMERATION_UP) ;
  while (enumerator_1636.hasCurrentObject ()) {
    var_componentNameSet_1595.addAssign_operation (enumerator_1636.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string ()  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 33)) ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_1732 = enumerator_1636.current (HERE).readProperty_mNonterminalDeclarationList () ;
    GALGAS_syntaxRuleListAST var_ruleList_1807 = enumerator_1636.current (HERE).readProperty_mRuleList () ;
    cEnumerator_galgas_33_SyntaxExtensionListAST enumerator_1877 (constinArgument_inSyntaxExtensions.getter_listForKey (enumerator_1636.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string () COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 36)), kENUMERATION_UP) ;
    while (enumerator_1877.hasCurrentObject ()) {
      var_nonterminalDeclarationList_1732.plusAssign_operation(enumerator_1877.current_mNonterminalDeclarationList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 37)) ;
      var_ruleList_1807.plusAssign_operation(enumerator_1877.current_mRuleList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 38)) ;
      enumerator_1877.gotoNextObject () ;
    }
    ioArgument_ioDeclarationList.addAssign_operation (GALGAS_galgas_33_SyntaxComponentAST::class_func_new (GALGAS_bool (false), enumerator_1636.current (HERE).readProperty_mSyntaxComponentName (), enumerator_1636.current (HERE).readProperty_mImportedLexiqueFilePath (), var_nonterminalDeclarationList_1732, var_ruleList_1807, enumerator_1636.current (HERE).readProperty_mHasTranslateFeature ()  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 40))  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 40)) ;
    enumerator_1636.gotoNextObject () ;
  }
  cEnumerator_syntaxExtensions enumerator_2395 (constinArgument_inSyntaxExtensions, kENUMERATION_UP) ;
  while (enumerator_2395.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_componentNameSet_1595.getter_hasKey (enumerator_2395.current_key (HERE) COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 50)).operator_not (SOURCE_FILE ("syntaxCompilation.galgas", 50)).boolEnum () ;
      if (kBoolTrue == test_0) {
        cEnumerator_galgas_33_SyntaxExtensionListAST enumerator_2511 (enumerator_2395.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_2511.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_2511.current_mSyntaxComponentName (HERE).readProperty_location (), GALGAS_string ("there is no '").add_operation (enumerator_2511.current_mSyntaxComponentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 52)).add_operation (GALGAS_string ("' syntax component"), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 52)), fixItArray1  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 52)) ;
          enumerator_2511.gotoNextObject () ;
        }
      }
    }
    enumerator_2395.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'transformLabelMap'
//
//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const GALGAS_nonTerminalLabelListAST & constinArgument_inLabels,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result_outNonterminalSymbolLabelMapForGrammarAnalysis ; // Returned variable
  result_outNonterminalSymbolLabelMapForGrammarAnalysis = GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::class_func_emptyMap (SOURCE_FILE ("grammarCompilation.galgas", 29)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_1609 (constinArgument_inLabels, kENUMERATION_UP) ;
  while (enumerator_1609.hasCurrentObject ()) {
    GALGAS_signatureForGrammarAnalysis var_formalParametersList_1664 = GALGAS_signatureForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 31)) ;
    cEnumerator_formalParameterListAST enumerator_1754 (enumerator_1609.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_1754.hasCurrentObject ()) {
      var_formalParametersList_1664.addAssign_operation (enumerator_1754.current_mFormalArgumentPassingMode (HERE), enumerator_1754.current_mFormalArgumentTypeName (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 33)) ;
      enumerator_1754.gotoNextObject () ;
    }
    {
    result_outNonterminalSymbolLabelMapForGrammarAnalysis.setter_insertKey (enumerator_1609.current_mLabelName (HERE), var_formalParametersList_1664, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 35)) ;
    }
    enumerator_1609.gotoNextObject () ;
  }
//---
  return result_outNonterminalSymbolLabelMapForGrammarAnalysis ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_transformLabelMap [2] = {
  & kTypeDescriptor_GALGAS_nonTerminalLabelListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_transformLabelMap (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_transformLabelMap ("transformLabelMap",
                                                                   functionWithGenericHeader_transformLabelMap,
                                                                   & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis,
                                                                   1,
                                                                   functionArgs_transformLabelMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkLabelMap????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkLabelMap_3F__3F__3F__3F_ (const GALGAS_location constinArgument_inNonTerminalLocation,
                                            const GALGAS_nonTerminalLabelListAST constinArgument_inLabels,
                                            const GALGAS_location constinArgument_inOriginalNonTerminalLocation,
                                            const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_labelStringSet_2362 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("grammarCompilation.galgas", 50)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_2420 (constinArgument_inLabels, kENUMERATION_UP) ;
  while (enumerator_2420.hasCurrentObject ()) {
    var_labelStringSet_2362.addAssign_operation (enumerator_2420.current_mLabelName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 52)) ;
    GALGAS_signatureForGrammarAnalysis var_formalParametersList_2557 ;
    constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.method_searchKey (enumerator_2420.current_mLabelName (HERE), var_formalParametersList_2557, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 53)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_2420.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas", 54)).objectCompare (var_formalParametersList_2557.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 54)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_2420.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas", 57)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_formalParametersList_2557.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 61)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_2420.current_mLabelName (HERE).readProperty_location (), enumerator_2420.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas", 55)).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 55)).add_operation (GALGAS_string (" formal parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 55)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 56)).add_operation (GALGAS_string (" declared here, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 57)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2420.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 59)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 58)).add_operation (GALGAS_string (" names "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 59)).add_operation (var_formalParametersList_2557.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 60)).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)), fixItArray5  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 55)) ;
      }
    }
    if (kBoolFalse == test_0) {
      cEnumerator_formalParameterListAST enumerator_3187 (enumerator_2420.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
      cEnumerator_signatureForGrammarAnalysis enumerator_3260 (var_formalParametersList_2557, kENUMERATION_UP) ;
      while (enumerator_3187.hasCurrentObject () && enumerator_3260.hasCurrentObject ()) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsNotEqual, enumerator_3260.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (enumerator_3187.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_3260.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_location (), GALGAS_string (" this formal parameter is declared with '").add_operation (extensionGetter_string (enumerator_3260.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 66)).add_operation (GALGAS_string ("' passing mode, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 67)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2420.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 68)).add_operation (GALGAS_string (" is declared with '"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)).add_operation (extensionGetter_string (enumerator_3187.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)).add_operation (GALGAS_string ("' passing mode"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)), fixItArray7  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 65)) ;
          }
        }
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsNotEqual, enumerator_3260.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().objectCompare (enumerator_3187.current_mFormalArgumentTypeName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_3260.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_location (), GALGAS_string (" this formal parameter is declared of '@").add_operation (enumerator_3260.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 74)).add_operation (GALGAS_string ("' type, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 75)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2420.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 77)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 76)).add_operation (GALGAS_string (" is declared with '@"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 77)).add_operation (enumerator_3187.current_mFormalArgumentTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 78)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 78)), fixItArray9  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 73)) ;
          }
        }
        enumerator_3187.gotoNextObject () ;
        enumerator_3260.gotoNextObject () ;
      }
    }
    enumerator_2420.gotoNextObject () ;
  }
  cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_4365 (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis, kENUMERATION_UP) ;
  while (enumerator_4365.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_labelStringSet_2362.getter_hasKey (enumerator_4365.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("grammarCompilation.galgas", 85)).operator_not (SOURCE_FILE ("grammarCompilation.galgas", 85)).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalLocation, GALGAS_string ("this non terminal does not declare the '").add_operation (enumerator_4365.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 87)).add_operation (GALGAS_string ("' label, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 87)).add_operation (constinArgument_inOriginalNonTerminalLocation.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 87)).add_operation (GALGAS_string (" does"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 88)), fixItArray11  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 86)) ;
      }
    }
    enumerator_4365.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarations_26__3F_ (GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                    const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_nonterminalDeclarationListAST enumerator_5008 (constinArgument_inNonterminalDeclarationList, kENUMERATION_UP) ;
  while (enumerator_5008.hasCurrentObject ()) {
    const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * objectArray_5056 = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) ioArgument_ioNonTerminalMapForGrammarAnalysis.readAccessForWithInstruction (enumerator_5008.current_mNonterminalName (HERE).readProperty_string ()) ;
    if (nullptr != objectArray_5056) {
        macroValidSharedObject (objectArray_5056, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
      {
      routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_5008.current_mNonterminalName (HERE).readProperty_location (), enumerator_5008.current_mLabels (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5008.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 104)), objectArray_5056->mProperty_mNonterminalSymbolParametersMap, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 101)) ;
      }
    }else{
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5008.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 110)), function_transformLabelMap (enumerator_5008.current_mLabels (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 108)) ;
      }
    }
    enumerator_5008.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarationsFromRuleList&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                                const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_syntaxRuleListAST enumerator_5829 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_5829.hasCurrentObject ()) {
    GALGAS_nonTerminalLabelListAST var_nonTerminalLabelListAST_5866 = GALGAS_nonTerminalLabelListAST::class_func_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 123)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_5982 (enumerator_5829.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_5982.hasCurrentObject ()) {
      var_nonTerminalLabelListAST_5866.addAssign_operation (enumerator_5982.current_mLabelName (HERE), enumerator_5982.current_mFormalArguments (HERE), enumerator_5982.current_mEndOfArgumentLocation (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 125)) ;
      enumerator_5982.gotoNextObject () ;
    }
    const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * objectArray_6125 = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) ioArgument_ioNonTerminalMapForGrammarAnalysis.readAccessForWithInstruction (enumerator_5829.current_mNonterminalName (HERE).readProperty_string ()) ;
    if (nullptr != objectArray_6125) {
        macroValidSharedObject (objectArray_6125, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
      {
      routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_5829.current_mNonterminalName (HERE).readProperty_location (), var_nonTerminalLabelListAST_5866, ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5829.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 134)), objectArray_6125->mProperty_mNonterminalSymbolParametersMap, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 131)) ;
      }
    }else{
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5829.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 140)), function_transformLabelMap (var_nonTerminalLabelListAST_5866, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 138)) ;
      }
    }
    enumerator_5829.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@semanticInstructionAST transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionAST::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                               const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                               GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                               GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'transformInstructionList?&usedTerminalMap?nonTerminalSymbolMap&addedTerminalIndex&'
//
//--------------------------------------------------------------------------------------------------

void routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (const GALGAS_syntaxInstructionList constinArgument_inInstructionList,
                                                                                                                GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                                                                const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                                                                GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                                                                GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_syntaxInstructionList enumerator_8237 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_8237.hasCurrentObject ()) {
    callExtensionMethod_transformInstruction ((cPtr_syntaxInstructionAST *) enumerator_8237.current_mInstruction (HERE).ptr (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 175)) ;
    enumerator_8237.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildRuleList???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildRuleList_3F__3F__3F__26__26__26_ (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                                    const GALGAS_lstring constinArgument_inSyntaxComponentName,
                                                    const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                    GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                    GALGAS_syntaxComponentListForGrammarAnalysis & ioArgument_ioSyntaxComponentListForGrammarAnalysis,
                                                    GALGAS_uint & ioArgument_ioAddedNonTerminalCount,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis var_productionRulesList_8993 = GALGAS_productionRuleListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 193)) ;
  cEnumerator_syntaxRuleListAST enumerator_9080 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_9080.hasCurrentObject ()) {
    GALGAS_uint var_nonTerminalIndex_9182 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_9199 ; // Joker input parameter
    constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_9080.current_mNonterminalName (HERE), var_nonTerminalIndex_9182, joker_9199, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 195)) ;
    GALGAS_syntaxInstructionList var_parsedSyntaxInstructionList_9284 ;
    GALGAS_lstring joker_9334 ; // Joker input parameter
    GALGAS_formalParameterListAST joker_9337 ; // Joker input parameter
    GALGAS_location joker_9340 ; // Joker input parameter
    GALGAS_location joker_9372 ; // Joker input parameter
    enumerator_9080.current_mLabelList (HERE).method_first (joker_9334, joker_9337, joker_9340, var_parsedSyntaxInstructionList_9284, joker_9372, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 198)) ;
    GALGAS_syntaxInstructionListForGrammarAnalysis var_instructionList_9418 = GALGAS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 200)) ;
    {
    routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (var_parsedSyntaxInstructionList_9284, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalMapForGrammarAnalysis, ioArgument_ioAddedNonTerminalCount, var_instructionList_9418, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 201)) ;
    }
    var_productionRulesList_8993.addAssign_operation (enumerator_9080.current_mNonterminalName (HERE), var_nonTerminalIndex_9182, var_instructionList_9418, var_productionRulesList_8993.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 213))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 209)) ;
    enumerator_9080.gotoNextObject () ;
  }
  ioArgument_ioSyntaxComponentListForGrammarAnalysis.addAssign_operation (var_productionRulesList_8993, constinArgument_inSyntaxComponentName  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 215)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'grammarGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_grammarGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_grammarGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_grammarGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_grammarGenerationTemplate_0,
  0,
  gWrapperAllDirectories_grammarGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'grammarGenerationTemplate grammarZone3HeaderGalgas3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (Compiler * inCompiler,
                                                                                             const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                             const GALGAS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                             const GALGAS_string & in_START_5F_SYMBOL_5F_NAME,
                                                                                             const GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE,
                                                                                             const GALGAS_string & in_GRAMMAR_5F_NAME,
                                                                                             const GALGAS_lstringlist & in_SYNTAX_5F_COMPONENTS
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  GRAMMAR ") ;
  result.appendString (in_GRAMMAR_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass cGrammar_") ;
  result.appendString (in_GRAMMAR_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 5)).stringValue ()) ;
  result.appendString (" : ") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_331_ (0) ;
  if (in_SYNTAX_5F_COMPONENTS.isValid ()) {
    cEnumerator_lstringlist enumerator_331 (in_SYNTAX_5F_COMPONENTS, kENUMERATION_UP) ;
    while (enumerator_331.hasCurrentObject ()) {
      result.appendString ("public cParser_") ;
      result.appendString (enumerator_331.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 7)).stringValue ()) ;
      if (enumerator_331.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_331_.increment () ;
      enumerator_331.gotoNextObject () ;
    }
  }
  result.appendString (" {\n") ;
  GALGAS_uint index_503_ (0) ;
  if (in_NON_5F_TERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_503 (in_NON_5F_TERMINAL_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_503.hasCurrentObject ()) {
      result.appendString ("//------------------------------------- '") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("' non terminal\n//--- 'parse' label\n  public: virtual void nt_") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 16)).stringValue ()) ;
      result.appendString ("_parse (") ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_0 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("String & ") ;
        result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 18)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * inCompiler) ;\n\n//--- indexing\n  public: virtual void nt_") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 23)).stringValue ()) ;
      result.appendString ("_indexing (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * inCompiler) ;\n\n") ;
      GALGAS_uint index_1114_ (0) ;
      if (enumerator_503.current_mNonterminalSymbolParametersMap (HERE).isValid ()) {
        cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_1114 (enumerator_503.current_mNonterminalSymbolParametersMap (HERE), kENUMERATION_UP) ;
        while (enumerator_1114.hasCurrentObject ()) {
          result.appendString ("//----------- '") ;
          result.appendString (enumerator_1114.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("' label\n  public: virtual void nt_") ;
          result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1114.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_1434_IDX (0) ;
          if (enumerator_1114.current_mFormalParametersList (HERE).isValid ()) {
            cEnumerator_signatureForGrammarAnalysis enumerator_1434 (enumerator_1114.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
            while (enumerator_1434.hasCurrentObject ()) {
              const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1434.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 29)))).boolEnum () ;
              switch (test_1) {
              case kBoolTrue : {
                result.appendString ("const GALGAS_") ;
                result.appendString (enumerator_1434.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 30)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_1434_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 30)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1434.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 31)))).boolEnum () ;
                switch (test_2) {
                case kBoolTrue : {
                  result.appendString ("GALGAS_") ;
                  result.appendString (enumerator_1434.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_1434_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1434.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 33)))).boolEnum () ;
                  switch (test_3) {
                  case kBoolTrue : {
                    result.appendString ("GALGAS_") ;
                    result.appendString (enumerator_1434.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_1434_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    result.appendString ("GALGAS_") ;
                    result.appendString (enumerator_1434.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_1434_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue ()) ;
                    } break ;
                  default :
                    break ;
                  }
                  } break ;
                default :
                  break ;
                }
                } break ;
              default :
                break ;
              }
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_1434_IDX.increment () ;
              enumerator_1434.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_4 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          switch (test_4) {
          case kBoolTrue : {
            result.appendString ("String & ") ;
            result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case kBoolFalse : {
            } break ;
          default :
            break ;
          }
          result.appendString ("Lexique_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString (" * inCompiler) ;\n\n") ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_503.current_lkey (HERE).readProperty_string ())).boolEnum () ;
          switch (test_5) {
          case kBoolTrue : {
            result.appendString ("//--- Start symbol\n  public: static void _performSourceFileParsing_") ;
            result.appendString (enumerator_1114.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 47)).stringValue ()) ;
            result.appendString (" (") ;
            columnMarker = result.currentColumn () ;
            result.appendString ("Compiler * inCompiler,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const enumGalgasBool test_6 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            switch (test_6) {
            case kBoolTrue : {
              result.appendString ("String & ") ;
              result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 50)).stringValue ()) ;
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              } break ;
            case kBoolFalse : {
              } break ;
            default :
              break ;
            }
            result.appendString ("GALGAS_lstring inFileName") ;
            GALGAS_uint index_2945_IDX (0) ;
            if (enumerator_1114.current_mFormalParametersList (HERE).isValid ()) {
              cEnumerator_signatureForGrammarAnalysis enumerator_2945 (enumerator_1114.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
              while (enumerator_2945.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_2945.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 55)))).boolEnum () ;
                switch (test_7) {
                case kBoolTrue : {
                  result.appendString ("const GALGAS_") ;
                  result.appendString (enumerator_2945.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 56)).stringValue ()) ;
                  result.appendString (" inArgument") ;
                  result.appendString (index_2945_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 56)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_2945.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 57)))).boolEnum () ;
                  switch (test_8) {
                  case kBoolTrue : {
                    result.appendString ("GALGAS_") ;
                    result.appendString (enumerator_2945.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue ()) ;
                    result.appendString (" & ioArgument") ;
                    result.appendString (index_2945_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_2945.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 59)))).boolEnum () ;
                    switch (test_9) {
                    case kBoolTrue : {
                      result.appendString ("GALGAS_") ;
                      result.appendString (enumerator_2945.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue ()) ;
                      result.appendString (" & outArgument") ;
                      result.appendString (index_2945_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue ()) ;
                      } break ;
                    case kBoolFalse : {
                      result.appendString ("GALGAS_") ;
                      result.appendString (enumerator_2945.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue ()) ;
                      result.appendString (" inArgument") ;
                      result.appendString (index_2945_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue ()) ;
                      } break ;
                    default :
                      break ;
                    }
                    } break ;
                  default :
                    break ;
                  }
                  } break ;
                default :
                  break ;
                }
                index_2945_IDX.increment () ;
                enumerator_2945.gotoNextObject () ;
              }
            }
            result.appendString ("\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n  public: static void _performSourceStringParsing_") ;
            result.appendString (enumerator_1114.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 66)).stringValue ()) ;
            result.appendString (" (") ;
            columnMarker = result.currentColumn () ;
            result.appendString ("Compiler * inCompiler,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const enumGalgasBool test_10 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            switch (test_10) {
            case kBoolTrue : {
              result.appendString ("String & ") ;
              result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 69)).stringValue ()) ;
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              } break ;
            case kBoolFalse : {
              } break ;
            default :
              break ;
            }
            result.appendString ("GALGAS_string inSourceString,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("GALGAS_string inNameString") ;
            GALGAS_uint index_4302_IDX (0) ;
            if (enumerator_1114.current_mFormalParametersList (HERE).isValid ()) {
              cEnumerator_signatureForGrammarAnalysis enumerator_4302 (enumerator_1114.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
              while (enumerator_4302.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_4302.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 75)))).boolEnum () ;
                switch (test_11) {
                case kBoolTrue : {
                  result.appendString ("const GALGAS_") ;
                  result.appendString (enumerator_4302.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 76)).stringValue ()) ;
                  result.appendString (" inArgument") ;
                  result.appendString (index_4302_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 76)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_4302.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 77)))).boolEnum () ;
                  switch (test_12) {
                  case kBoolTrue : {
                    result.appendString ("GALGAS_") ;
                    result.appendString (enumerator_4302.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue ()) ;
                    result.appendString (" & ioArgument") ;
                    result.appendString (index_4302_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, enumerator_4302.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 79)))).boolEnum () ;
                    switch (test_13) {
                    case kBoolTrue : {
                      result.appendString ("GALGAS_") ;
                      result.appendString (enumerator_4302.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue ()) ;
                      result.appendString (" & outArgument") ;
                      result.appendString (index_4302_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue ()) ;
                      } break ;
                    case kBoolFalse : {
                      result.appendString ("GALGAS_") ;
                      result.appendString (enumerator_4302.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue ()) ;
                      result.appendString (" inArgument") ;
                      result.appendString (index_4302_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue ()) ;
                      } break ;
                    default :
                      break ;
                    }
                    } break ;
                  default :
                    break ;
                  }
                  } break ;
                default :
                  break ;
                }
                index_4302_IDX.increment () ;
                enumerator_4302.gotoNextObject () ;
              }
            }
            result.appendString ("\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case kBoolFalse : {
            } break ;
          default :
            break ;
          }
          index_1114_.increment () ;
          enumerator_1114.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_503.current_lkey (HERE).readProperty_string ())).boolEnum () ;
      switch (test_14) {
      case kBoolTrue : {
        result.appendString ("//--- Indexing\n  public: static void performIndexing (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("Compiler * inCompiler,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const String & inSourceFilePath) ;\n\n//--- Only lexical analysis\n  public: static void performOnlyLexicalAnalysis (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("Compiler * inCompiler,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const String & inSourceFilePath) ;\n\n//--- Only syntax analysis\n  public: static void performOnlySyntaxAnalysis (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("Compiler * inCompiler,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const String & inSourceFilePath) ;\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_503_.increment () ;
      enumerator_503.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5849_ (0) ;
  if (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_nonTerminalToAddList enumerator_5849 (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5849.hasCurrentObject ()) {
      result.appendString ("  public: virtual int32_t select_") ;
      result.appendString (enumerator_5849.current_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 103)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_5849.current_mNonTerminalToAddCount (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (" (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) ;\n") ;
      if (enumerator_5849.hasNextObject ()) {
        result.appendString ("\n") ;
      }
      index_5849_.increment () ;
      enumerator_5849.gotoNextObject () ;
    }
  }
  result.appendString ("} ;\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

